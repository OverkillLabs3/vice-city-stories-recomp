#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0190[4090] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 9,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 24,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 28, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 33, 34, 0,
    35, 0, 36, 0, 0, 0, 37, 0, 0, 38, 39, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 45, 0, 46,
    0, 47, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 61,
    0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 72, 0, 0, 73, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 78, 0, 79,
    0, 80, 0, 0, 81, 82, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 96, 0, 97, 0, 98, 0, 99, 0, 100,
    0, 0, 101, 0, 102, 0, 103, 0, 104, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 110, 0, 111, 0, 112, 0, 113,
    0, 0, 114, 0, 115, 0, 116, 0, 0, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 124,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 127, 128, 0, 129, 0, 130, 0, 0, 131, 0, 0, 132, 0, 133, 0, 134, 0, 0,
    135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140,
    0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0,
    0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 153, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 159, 0,
    160, 0, 0, 161, 0, 162, 0, 163, 164, 0, 165, 0, 0, 166, 0, 167, 0, 168, 0, 169, 0, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174,
    0, 175, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 179, 0, 0, 180, 0, 181, 0, 182, 0, 0, 183, 0, 184, 0, 185, 186, 0, 187,
    0, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0,
    0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 0, 0, 214, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0,
    218, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 221, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0,
    0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 251, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0,
    256, 0, 0, 257, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 262, 0,
    263, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276,
    0, 277, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 280, 0, 281, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 285, 0,
    0, 286, 0, 0, 287, 0, 288, 0, 0, 0, 289, 290, 0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 294, 0, 0, 295, 296, 0, 297, 0,
    298, 0, 299, 0, 300, 0, 301, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 304, 0, 0, 305, 0, 306, 0, 307, 0, 308, 309, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 313, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0,
    0, 0, 317, 0, 0, 0, 318, 0, 319, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 0, 334,
    0, 335, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 342, 0,
    0, 343, 0, 344, 0, 345, 0, 346, 347, 0, 348, 0, 349, 0, 350, 0, 351, 0, 352, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 358, 0, 0, 359, 0,
    360, 0, 0, 0, 361, 0, 362, 0, 363, 0, 0, 364, 0, 365, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 370,
    0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0,
    0, 374, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 377, 0, 378, 0, 379, 0, 0, 0, 380, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 385, 0, 0, 0, 386, 0, 0, 0,
    387, 0, 388, 0, 0, 389, 0, 0, 0, 390, 0, 391, 0, 392, 0, 393, 0, 0, 394, 0, 395, 0, 0, 0, 0, 396, 0, 397, 0, 398, 0, 0,
    399, 0, 0, 0, 400, 0, 401, 0, 402, 0, 0, 0, 0, 0, 403, 0, 404, 0, 405, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 409, 0, 410, 0, 0, 411, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 414, 0, 415, 0,
    416, 0, 0, 0, 0, 0, 0, 417, 0, 418, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 423, 0, 0, 0, 0,
    424, 0, 425, 0, 426, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431,
    0, 0, 0, 0, 0, 0, 0, 432, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 437, 0, 0, 0,
    438, 0, 439, 0, 0, 440, 0, 441, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 446,
    0, 447, 0, 0, 448, 0, 449, 0, 0, 450, 0, 451, 0, 452, 0, 453, 0, 454, 0, 0, 455, 0, 456, 0, 0, 457, 0, 0, 458, 0, 0, 459,
    0, 0, 460, 461, 0, 462, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 467, 0, 468, 0, 469, 0, 470, 0, 471, 472, 0, 473, 0,
    0, 0, 474, 0, 475, 476, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0, 480, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 485, 0, 486,
    0, 0, 487, 0, 0, 0, 488, 0, 489, 0, 0, 0, 490, 0, 0, 491, 0, 0, 492, 0, 493, 0, 0, 0, 494, 0, 495, 0, 0, 496, 0, 0,
    497, 0, 498, 0, 499, 0, 0, 500, 0, 501, 0, 502, 0, 503, 0, 504, 0, 505, 0, 0, 506, 0, 507, 0, 508, 0, 0, 0, 0, 509, 0, 510,
    0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 513, 0, 514, 0, 0, 0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 522, 0,
    523, 0, 524, 0, 525, 0, 526, 0, 527, 0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 532, 0,
    533, 0, 0, 0, 534, 0, 0, 535, 0, 0, 536, 0, 0, 537, 0, 538, 0, 539, 0, 0, 0, 540, 0, 541, 0, 542, 0, 543, 0, 544, 0, 545,
    0, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 0, 552, 0, 553, 0, 554, 0, 555, 0, 0, 556, 0, 557, 558, 0, 559, 0, 560, 0, 0,
    0, 0, 0, 0, 561, 0, 0, 562, 0, 563, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 567, 0, 0, 568, 0, 569, 0, 570, 0, 571, 0, 572,
    0, 0, 573, 0, 574, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0,
    0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0,
    582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0,
    587, 0, 588, 0, 589, 0, 0, 0, 0, 0, 590, 0, 591, 0, 592, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 594, 0, 0, 0, 0, 0, 0,
    595, 0, 0, 0, 0, 596, 0, 0, 597, 0, 598, 0, 0, 599, 0, 0, 0, 600, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 603,
    0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 608, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0, 611, 0, 612,
    0, 613, 0, 614, 615, 616, 0, 0, 0, 617, 0, 0, 0, 618, 0, 619, 0, 0, 620, 0, 0, 0, 621, 0, 0, 622, 0, 0, 623, 0, 0, 0,
    0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 629, 0, 0, 0, 0, 630, 0, 631, 0, 0, 0, 0, 632, 0, 633,
    0, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0,
    0, 0, 0, 0, 639, 0, 640, 0, 641, 0, 642, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0,
    646, 0, 0, 0, 0, 0, 0, 647, 0, 648, 0, 649, 0, 650, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0,
    0, 654, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 659, 0, 660, 0, 661, 0, 0, 662, 0, 663,
    0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 666, 0, 667, 0, 0, 668, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 0,
    0, 0, 0, 0, 671, 0, 0, 0, 672, 0, 673, 0, 674, 0, 675, 0, 676, 0, 677, 0, 0, 0, 678, 0, 0, 679, 0, 680, 0, 681, 0, 682,
    0, 683, 0, 0, 0, 684, 0, 0, 685, 0, 686, 0, 0, 0, 687, 0, 0, 688, 0, 689, 0, 690, 0, 691, 0, 692, 0, 0, 0, 0, 0, 693,
    0, 0, 0, 0, 694, 0, 0, 695, 0, 696, 0, 0, 0, 697, 0, 698, 0, 699, 0, 700, 0, 0, 0, 701, 0, 0, 702, 0, 703, 0, 704, 0,
    705, 0, 706, 0, 0, 0, 707, 0, 0, 708, 0, 709, 0, 710, 0, 711, 0, 712, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0,
    0, 716, 0, 717, 0, 0, 0, 718, 0, 719, 0, 720, 0, 721, 0, 0, 0, 722, 0, 0, 723, 0, 724, 0, 725, 0, 726, 0, 727, 0, 0, 0,
    728, 0, 0, 729, 0, 730, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 733, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0,
    736, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 738, 0, 0, 739, 0, 740, 0, 0, 741, 0, 742, 743, 0, 0, 744, 0, 0,
    0, 745, 0, 0, 0, 0, 746, 747, 0, 0, 0, 748, 0, 749, 0, 750, 0, 0, 751, 0, 752, 0, 0, 753, 0, 754, 0, 0, 755, 0, 756, 0,
    0, 757, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 761, 0, 0, 762, 0, 0, 763, 0, 764,
    765, 0, 766, 0, 0, 767, 0, 768, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0,
    0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 774, 0, 0, 775, 0, 776, 0, 777, 0, 778, 0, 0, 779, 0, 0, 0, 780,
    0, 0, 0, 781, 0, 0, 0, 0, 782, 0, 783, 0, 784, 0, 785, 0, 0, 786, 0, 787, 0, 788, 0, 0, 789, 0, 790, 0, 0, 0, 791, 0,
    792, 0, 0, 0, 793, 0, 0, 794, 0, 795, 0, 796, 0, 797, 0, 798, 0, 0, 0, 799, 0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 0, 802,
    0, 803, 0, 804, 0, 0, 0, 805, 0, 806, 0, 807, 0, 808, 0, 809, 0, 810, 0, 811, 0, 812, 813, 0, 0, 0, 0, 0, 0, 0, 814, 0,
    815, 0, 816, 0, 817, 0, 818, 0, 819, 0, 820, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0,
    0, 0, 823, 0, 824, 0, 825, 0, 0, 0, 826, 0, 827, 828, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 830, 0, 831, 0, 0, 832, 0, 833,
    0, 0, 834, 0, 0, 835, 0, 836, 0, 837, 0, 0, 838, 0, 839, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0, 841, 0, 0, 842, 0, 843, 0,
    0, 844, 0, 0, 845, 0, 846, 0, 847, 0, 0, 848, 0, 0, 0, 0, 849, 0, 850, 0, 0, 0, 851, 0, 0, 852, 0, 853, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 854, 0, 855, 0, 856, 0, 857, 0, 858, 0, 859, 0, 860, 0, 861, 0, 862, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 863, 0, 864, 0, 0, 865, 0, 866, 867, 0, 0, 0, 0, 868, 0, 0, 0, 0, 0, 869, 0, 0, 0, 870, 0,
    0, 871, 0, 872, 0, 0, 873, 0, 0, 0, 874, 875, 0, 0, 876, 0, 0, 0, 877, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 878, 0,
    0, 0, 879, 0, 0, 880, 0, 881, 0, 882, 0, 0, 0, 883, 0, 0, 0, 884, 0, 885, 0, 0, 0, 886, 887, 0, 888, 0, 0, 0, 889, 0,
    890, 0, 891, 0, 0, 0, 0, 0, 892, 0, 893, 0, 0, 894, 0, 0, 0, 895, 0, 896, 0, 897, 0, 0, 0, 0, 0, 0, 898, 0, 0, 0,
    0, 899, 0, 900, 0, 0, 901, 0, 902, 0, 0, 903, 0, 904, 0, 905, 0, 906, 0, 907, 0, 0, 0, 0, 0, 908, 0, 0, 909, 0, 0, 910,
    0, 0, 0, 911, 0, 0, 912, 0, 0, 913, 0, 914, 0, 915, 0, 0, 0, 0, 0, 916, 0, 917, 0, 0, 918, 0, 0, 0, 0, 0, 919, 0,
    920, 0, 0, 0, 0, 921, 0, 0, 0, 0, 0, 0, 0, 0, 922, 0, 0, 0, 0, 0, 0, 0, 0, 0, 923, 0, 0, 924, 0, 925, 0, 0,
    0, 0, 926, 0, 927, 0, 928, 929, 0, 0, 0, 0, 930, 0, 0, 0, 0, 931, 0, 0, 0, 932, 0, 933, 0, 0, 0, 0, 0, 0, 0, 0,
    934, 0, 0, 0, 935, 0, 0, 936, 0, 0, 0, 0, 0, 0, 0, 937, 0, 0, 0, 0, 0, 0, 0, 0, 0, 938, 0, 0, 0, 0, 0, 0,
    939, 0, 940, 0, 0, 0, 0, 941, 942, 0, 0, 0, 0, 0, 0, 943, 0, 944, 0, 945, 0, 0, 0, 0, 0, 0, 0, 0, 0, 946, 0, 947,
    0, 0, 0, 0, 0, 0, 948, 0, 0, 0, 0, 0, 0, 0, 0, 0, 949, 0, 0, 950, 0, 0, 0, 0, 951, 0, 0, 952, 0, 0, 0, 953,
    0, 0, 0, 954, 0, 955, 0, 0, 0, 0, 956, 0, 0, 0, 0, 957, 0, 0, 0, 0, 0, 0, 958, 959, 0, 960,
};
void recomp_unit_0190_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AFC000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0190[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AFC000;
    case 2u: goto L_08AFC00C;
    case 3u: goto L_08AFC06C;
    case 4u: goto L_08AFC0B8;
    case 5u: goto L_08AFC0D4;
    case 6u: goto L_08AFC100;
    case 7u: goto L_08AFC124;
    case 8u: goto L_08AFC178;
    case 9u: goto L_08AFC17C;
    case 10u: goto L_08AFC4A4;
    case 11u: goto L_08AFC4B8;
    case 12u: goto L_08AFC4C8;
    case 13u: goto L_08AFC4DC;
    case 14u: goto L_08AFC4F4;
    case 15u: goto L_08AFC500;
    case 16u: goto L_08AFC524;
    case 17u: goto L_08AFC538;
    case 18u: goto L_08AFC54C;
    case 19u: goto L_08AFC6BC;
    case 20u: goto L_08AFC740;
    case 21u: goto L_08AFC750;
    case 22u: goto L_08AFC760;
    case 23u: goto L_08AFC76C;
    case 24u: goto L_08AFC77C;
    case 25u: goto L_08AFC78C;
    case 26u: goto L_08AFC7AC;
    case 27u: goto L_08AFC7BC;
    case 28u: goto L_08AFC7C4;
    case 29u: goto L_08AFC7C8;
    case 30u: goto L_08AFC7D4;
    case 31u: goto L_08AFC7E4;
    case 32u: goto L_08AFC7F0;
    case 33u: goto L_08AFC7F4;
    case 34u: goto L_08AFC7F8;
    case 35u: goto L_08AFC800;
    case 36u: goto L_08AFC808;
    case 37u: goto L_08AFC818;
    case 38u: goto L_08AFC824;
    case 39u: goto L_08AFC828;
    case 40u: goto L_08AFC82C;
    case 41u: goto L_08AFC834;
    case 42u: goto L_08AFC854;
    case 43u: goto L_08AFC860;
    case 44u: goto L_08AFC86C;
    case 45u: goto L_08AFC874;
    case 46u: goto L_08AFC87C;
    case 47u: goto L_08AFC884;
    case 48u: goto L_08AFC88C;
    case 49u: goto L_08AFC8A4;
    case 50u: goto L_08AFC8B0;
    case 51u: goto L_08AFC8B8;
    case 52u: goto L_08AFC8CC;
    case 53u: goto L_08AFC8EC;
    case 54u: goto L_08AFC91C;
    case 55u: goto L_08AFC930;
    case 56u: goto L_08AFC938;
    case 57u: goto L_08AFC950;
    case 58u: goto L_08AFC958;
    case 59u: goto L_08AFC960;
    case 60u: goto L_08AFC968;
    case 61u: goto L_08AFC97C;
    case 62u: goto L_08AFC99C;
    case 63u: goto L_08AFC9A4;
    case 64u: goto L_08AFC9AC;
    case 65u: goto L_08AFC9B8;
    case 66u: goto L_08AFC9C8;
    case 67u: goto L_08AFC9E0;
    case 68u: goto L_08AFC9EC;
    case 69u: goto L_08AFC9F8;
    case 70u: goto L_08AFCA00;
    case 71u: goto L_08AFCA30;
    case 72u: goto L_08AFCA34;
    case 73u: goto L_08AFCA40;
    case 74u: goto L_08AFCA4C;
    case 75u: goto L_08AFCA54;
    case 76u: goto L_08AFCA5C;
    case 77u: goto L_08AFCA64;
    case 78u: goto L_08AFCA74;
    case 79u: goto L_08AFCA7C;
    case 80u: goto L_08AFCA84;
    case 81u: goto L_08AFCA90;
    case 82u: goto L_08AFCA94;
    case 83u: goto L_08AFCA9C;
    case 84u: goto L_08AFCAA4;
    case 85u: goto L_08AFCAC4;
    case 86u: goto L_08AFCAD0;
    case 87u: goto L_08AFCAE4;
    case 88u: goto L_08AFCAF0;
    case 89u: goto L_08AFCB10;
    case 90u: goto L_08AFCB18;
    case 91u: goto L_08AFCB24;
    case 92u: goto L_08AFCB30;
    case 93u: goto L_08AFCB40;
    case 94u: goto L_08AFCB50;
    case 95u: goto L_08AFCB58;
    case 96u: goto L_08AFCB5C;
    case 97u: goto L_08AFCB64;
    case 98u: goto L_08AFCB6C;
    case 99u: goto L_08AFCB74;
    case 100u: goto L_08AFCB7C;
    case 101u: goto L_08AFCB88;
    case 102u: goto L_08AFCB90;
    case 103u: goto L_08AFCB98;
    case 104u: goto L_08AFCBA0;
    case 105u: goto L_08AFCBB0;
    case 106u: goto L_08AFCBB8;
    case 107u: goto L_08AFCBC0;
    case 108u: goto L_08AFCBCC;
    case 109u: goto L_08AFCBD4;
    case 110u: goto L_08AFCBE4;
    case 111u: goto L_08AFCBEC;
    case 112u: goto L_08AFCBF4;
    case 113u: goto L_08AFCBFC;
    case 114u: goto L_08AFCC08;
    case 115u: goto L_08AFCC10;
    case 116u: goto L_08AFCC18;
    case 117u: goto L_08AFCC28;
    case 118u: goto L_08AFCC30;
    case 119u: goto L_08AFCC38;
    case 120u: goto L_08AFCC40;
    case 121u: goto L_08AFCC48;
    case 122u: goto L_08AFCC64;
    case 123u: goto L_08AFCC74;
    case 124u: goto L_08AFCC7C;
    case 125u: goto L_08AFCC98;
    case 126u: goto L_08AFCCB0;
    case 127u: goto L_08AFCCB8;
    case 128u: goto L_08AFCCBC;
    case 129u: goto L_08AFCCC4;
    case 130u: goto L_08AFCCCC;
    case 131u: goto L_08AFCCD8;
    case 132u: goto L_08AFCCE4;
    case 133u: goto L_08AFCCEC;
    case 134u: goto L_08AFCCF4;
    case 135u: goto L_08AFCD00;
    case 136u: goto L_08AFCD10;
    case 137u: goto L_08AFCD40;
    case 138u: goto L_08AFCD5C;
    case 139u: goto L_08AFCD6C;
    case 140u: goto L_08AFCD7C;
    case 141u: goto L_08AFCD84;
    case 142u: goto L_08AFCDBC;
    case 143u: goto L_08AFCDC0;
    case 144u: goto L_08AFCE18;
    case 145u: goto L_08AFCE40;
    case 146u: goto L_08AFCE48;
    case 147u: goto L_08AFCE54;
    case 148u: goto L_08AFCE6C;
    case 149u: goto L_08AFCE78;
    case 150u: goto L_08AFCE84;
    case 151u: goto L_08AFCE90;
    case 152u: goto L_08AFCEAC;
    case 153u: goto L_08AFCEB0;
    case 154u: goto L_08AFCEC0;
    case 155u: goto L_08AFCEC8;
    case 156u: goto L_08AFCED8;
    case 157u: goto L_08AFCEE0;
    case 158u: goto L_08AFCEF0;
    case 159u: goto L_08AFCEF8;
    case 160u: goto L_08AFCF00;
    case 161u: goto L_08AFCF0C;
    case 162u: goto L_08AFCF14;
    case 163u: goto L_08AFCF1C;
    case 164u: goto L_08AFCF20;
    case 165u: goto L_08AFCF28;
    case 166u: goto L_08AFCF34;
    case 167u: goto L_08AFCF3C;
    case 168u: goto L_08AFCF44;
    case 169u: goto L_08AFCF4C;
    case 170u: goto L_08AFCF5C;
    case 171u: goto L_08AFCF64;
    case 172u: goto L_08AFCF6C;
    case 173u: goto L_08AFCF74;
    case 174u: goto L_08AFCF7C;
    case 175u: goto L_08AFCF84;
    case 176u: goto L_08AFCF8C;
    case 177u: goto L_08AFCF94;
    case 178u: goto L_08AFCFB4;
    case 179u: goto L_08AFCFB8;
    case 180u: goto L_08AFCFC4;
    case 181u: goto L_08AFCFCC;
    case 182u: goto L_08AFCFD4;
    case 183u: goto L_08AFCFE0;
    case 184u: goto L_08AFCFE8;
    case 185u: goto L_08AFCFF0;
    case 186u: goto L_08AFCFF4;
    case 187u: goto L_08AFCFFC;
    case 188u: goto L_08AFD008;
    case 189u: goto L_08AFD010;
    case 190u: goto L_08AFD018;
    case 191u: goto L_08AFD020;
    case 192u: goto L_08AFD028;
    case 193u: goto L_08AFD054;
    case 194u: goto L_08AFD0A0;
    case 195u: goto L_08AFD0A8;
    case 196u: goto L_08AFD0B0;
    case 197u: goto L_08AFD0B8;
    case 198u: goto L_08AFD0D4;
    case 199u: goto L_08AFD0F4;
    case 200u: goto L_08AFD138;
    case 201u: goto L_08AFD158;
    case 202u: goto L_08AFD1C4;
    case 203u: goto L_08AFD1CC;
    case 204u: goto L_08AFD1D4;
    case 205u: goto L_08AFD1DC;
    case 206u: goto L_08AFD1EC;
    case 207u: goto L_08AFD204;
    case 208u: goto L_08AFD210;
    case 209u: goto L_08AFD22C;
    case 210u: goto L_08AFD234;
    case 211u: goto L_08AFD244;
    case 212u: goto L_08AFD258;
    case 213u: goto L_08AFD274;
    case 214u: goto L_08AFD28C;
    case 215u: goto L_08AFD290;
    case 216u: goto L_08AFD354;
    case 217u: goto L_08AFD36C;
    case 218u: goto L_08AFD380;
    case 219u: goto L_08AFD398;
    case 220u: goto L_08AFD3A0;
    case 221u: goto L_08AFD3B8;
    case 222u: goto L_08AFD3BC;
    case 223u: goto L_08AFD3E0;
    case 224u: goto L_08AFD410;
    case 225u: goto L_08AFD430;
    case 226u: goto L_08AFD438;
    case 227u: goto L_08AFD440;
    case 228u: goto L_08AFD450;
    case 229u: goto L_08AFD4D0;
    case 230u: goto L_08AFD4D8;
    case 231u: goto L_08AFD4E8;
    case 232u: goto L_08AFD4F8;
    case 233u: goto L_08AFD52C;
    case 234u: goto L_08AFD550;
    case 235u: goto L_08AFD5A0;
    case 236u: goto L_08AFD5AC;
    case 237u: goto L_08AFD5E4;
    case 238u: goto L_08AFD614;
    case 239u: goto L_08AFD624;
    case 240u: goto L_08AFD630;
    case 241u: goto L_08AFD63C;
    case 242u: goto L_08AFD648;
    case 243u: goto L_08AFD654;
    case 244u: goto L_08AFD660;
    case 245u: goto L_08AFD66C;
    case 246u: goto L_08AFD678;
    case 247u: goto L_08AFD684;
    case 248u: goto L_08AFD694;
    case 249u: goto L_08AFD6AC;
    case 250u: goto L_08AFD6B4;
    case 251u: goto L_08AFD6C8;
    case 252u: goto L_08AFD6D0;
    case 253u: goto L_08AFD6DC;
    case 254u: goto L_08AFD6E8;
    case 255u: goto L_08AFD6F4;
    case 256u: goto L_08AFD700;
    case 257u: goto L_08AFD70C;
    case 258u: goto L_08AFD718;
    case 259u: goto L_08AFD720;
    case 260u: goto L_08AFD768;
    case 261u: goto L_08AFD770;
    case 262u: goto L_08AFD778;
    case 263u: goto L_08AFD780;
    case 264u: goto L_08AFD788;
    case 265u: goto L_08AFD7AC;
    case 266u: goto L_08AFD7B8;
    case 267u: goto L_08AFD7C8;
    case 268u: goto L_08AFD800;
    case 269u: goto L_08AFD80C;
    case 270u: goto L_08AFD818;
    case 271u: goto L_08AFD824;
    case 272u: goto L_08AFD830;
    case 273u: goto L_08AFD838;
    case 274u: goto L_08AFD840;
    case 275u: goto L_08AFD854;
    case 276u: goto L_08AFD87C;
    case 277u: goto L_08AFD884;
    case 278u: goto L_08AFD890;
    case 279u: goto L_08AFD8A4;
    case 280u: goto L_08AFD8B0;
    case 281u: goto L_08AFD8B8;
    case 282u: goto L_08AFD8BC;
    case 283u: goto L_08AFD8D8;
    case 284u: goto L_08AFD8F0;
    case 285u: goto L_08AFD8F8;
    case 286u: goto L_08AFD904;
    case 287u: goto L_08AFD910;
    case 288u: goto L_08AFD918;
    case 289u: goto L_08AFD928;
    case 290u: goto L_08AFD92C;
    case 291u: goto L_08AFD934;
    case 292u: goto L_08AFD948;
    case 293u: goto L_08AFD950;
    case 294u: goto L_08AFD960;
    case 295u: goto L_08AFD96C;
    case 296u: goto L_08AFD970;
    case 297u: goto L_08AFD978;
    case 298u: goto L_08AFD980;
    case 299u: goto L_08AFD988;
    case 300u: goto L_08AFD990;
    case 301u: goto L_08AFD998;
    case 302u: goto L_08AFD9B0;
    case 303u: goto L_08AFD9B8;
    case 304u: goto L_08AFD9C4;
    case 305u: goto L_08AFD9D0;
    case 306u: goto L_08AFD9D8;
    case 307u: goto L_08AFD9E0;
    case 308u: goto L_08AFD9E8;
    case 309u: goto L_08AFD9EC;
    case 310u: goto L_08AFDA00;
    case 311u: goto L_08AFDA2C;
    case 312u: goto L_08AFDA40;
    case 313u: goto L_08AFDA48;
    case 314u: goto L_08AFDA50;
    case 315u: goto L_08AFDA60;
    case 316u: goto L_08AFDA74;
    case 317u: goto L_08AFDA88;
    case 318u: goto L_08AFDA98;
    case 319u: goto L_08AFDAA0;
    case 320u: goto L_08AFDAA8;
    case 321u: goto L_08AFDAB4;
    case 322u: goto L_08AFDB20;
    case 323u: goto L_08AFDB28;
    case 324u: goto L_08AFDB34;
    case 325u: goto L_08AFDB40;
    case 326u: goto L_08AFDB70;
    case 327u: goto L_08AFDB9C;
    case 328u: goto L_08AFDBC0;
    case 329u: goto L_08AFDBD4;
    case 330u: goto L_08AFDBDC;
    case 331u: goto L_08AFDBE4;
    case 332u: goto L_08AFDBEC;
    case 333u: goto L_08AFDBF4;
    case 334u: goto L_08AFDBFC;
    case 335u: goto L_08AFDC04;
    case 336u: goto L_08AFDC0C;
    case 337u: goto L_08AFDC1C;
    case 338u: goto L_08AFDC2C;
    case 339u: goto L_08AFDC58;
    case 340u: goto L_08AFDC64;
    case 341u: goto L_08AFDC70;
    case 342u: goto L_08AFDC78;
    case 343u: goto L_08AFDC84;
    case 344u: goto L_08AFDC8C;
    case 345u: goto L_08AFDC94;
    case 346u: goto L_08AFDC9C;
    case 347u: goto L_08AFDCA0;
    case 348u: goto L_08AFDCA8;
    case 349u: goto L_08AFDCB0;
    case 350u: goto L_08AFDCB8;
    case 351u: goto L_08AFDCC0;
    case 352u: goto L_08AFDCC8;
    case 353u: goto L_08AFDCCC;
    case 354u: goto L_08AFDCE8;
    case 355u: goto L_08AFDD34;
    case 356u: goto L_08AFDD54;
    case 357u: goto L_08AFDD5C;
    case 358u: goto L_08AFDD6C;
    case 359u: goto L_08AFDD78;
    case 360u: goto L_08AFDD80;
    case 361u: goto L_08AFDD90;
    case 362u: goto L_08AFDD98;
    case 363u: goto L_08AFDDA0;
    case 364u: goto L_08AFDDAC;
    case 365u: goto L_08AFDDB4;
    case 366u: goto L_08AFDDBC;
    case 367u: goto L_08AFDDD0;
    case 368u: goto L_08AFDDF0;
    case 369u: goto L_08AFDDF8;
    case 370u: goto L_08AFDDFC;
    case 371u: goto L_08AFDE20;
    case 372u: goto L_08AFDE58;
    case 373u: goto L_08AFDE74;
    case 374u: goto L_08AFDE84;
    case 375u: goto L_08AFDE88;
    case 376u: goto L_08AFDEA4;
    case 377u: goto L_08AFDF04;
    case 378u: goto L_08AFDF0C;
    case 379u: goto L_08AFDF14;
    case 380u: goto L_08AFDF24;
    case 381u: goto L_08AFDF2C;
    case 382u: goto L_08AFDF34;
    case 383u: goto L_08AFDF50;
    case 384u: goto L_08AFDF58;
    case 385u: goto L_08AFDF60;
    case 386u: goto L_08AFDF70;
    case 387u: goto L_08AFDF80;
    case 388u: goto L_08AFDF88;
    case 389u: goto L_08AFDF94;
    case 390u: goto L_08AFDFA4;
    case 391u: goto L_08AFDFAC;
    case 392u: goto L_08AFDFB4;
    case 393u: goto L_08AFDFBC;
    case 394u: goto L_08AFDFC8;
    case 395u: goto L_08AFDFD0;
    case 396u: goto L_08AFDFE4;
    case 397u: goto L_08AFDFEC;
    case 398u: goto L_08AFDFF4;
    case 399u: goto L_08AFE000;
    case 400u: goto L_08AFE010;
    case 401u: goto L_08AFE018;
    case 402u: goto L_08AFE020;
    case 403u: goto L_08AFE038;
    case 404u: goto L_08AFE040;
    case 405u: goto L_08AFE048;
    case 406u: goto L_08AFE04C;
    case 407u: goto L_08AFE08C;
    case 408u: goto L_08AFE0A4;
    case 409u: goto L_08AFE0AC;
    case 410u: goto L_08AFE0B4;
    case 411u: goto L_08AFE0C0;
    case 412u: goto L_08AFE0D0;
    case 413u: goto L_08AFE0D8;
    case 414u: goto L_08AFE0F0;
    case 415u: goto L_08AFE0F8;
    case 416u: goto L_08AFE100;
    case 417u: goto L_08AFE11C;
    case 418u: goto L_08AFE124;
    case 419u: goto L_08AFE12C;
    case 420u: goto L_08AFE140;
    case 421u: goto L_08AFE15C;
    case 422u: goto L_08AFE164;
    case 423u: goto L_08AFE16C;
    case 424u: goto L_08AFE180;
    case 425u: goto L_08AFE188;
    case 426u: goto L_08AFE190;
    case 427u: goto L_08AFE198;
    case 428u: goto L_08AFE1A4;
    case 429u: goto L_08AFE1C8;
    case 430u: goto L_08AFE1EC;
    case 431u: goto L_08AFE1FC;
    case 432u: goto L_08AFE21C;
    case 433u: goto L_08AFE220;
    case 434u: goto L_08AFE238;
    case 435u: goto L_08AFE260;
    case 436u: goto L_08AFE268;
    case 437u: goto L_08AFE270;
    case 438u: goto L_08AFE280;
    case 439u: goto L_08AFE288;
    case 440u: goto L_08AFE294;
    case 441u: goto L_08AFE29C;
    case 442u: goto L_08AFE2A8;
    case 443u: goto L_08AFE2B8;
    case 444u: goto L_08AFE2C8;
    case 445u: goto L_08AFE2D8;
    case 446u: goto L_08AFE2FC;
    case 447u: goto L_08AFE304;
    case 448u: goto L_08AFE310;
    case 449u: goto L_08AFE318;
    case 450u: goto L_08AFE324;
    case 451u: goto L_08AFE32C;
    case 452u: goto L_08AFE334;
    case 453u: goto L_08AFE33C;
    case 454u: goto L_08AFE344;
    case 455u: goto L_08AFE350;
    case 456u: goto L_08AFE358;
    case 457u: goto L_08AFE364;
    case 458u: goto L_08AFE370;
    case 459u: goto L_08AFE37C;
    case 460u: goto L_08AFE388;
    case 461u: goto L_08AFE38C;
    case 462u: goto L_08AFE394;
    case 463u: goto L_08AFE3A0;
    case 464u: goto L_08AFE3AC;
    case 465u: goto L_08AFE3B8;
    case 466u: goto L_08AFE3C4;
    case 467u: goto L_08AFE3CC;
    case 468u: goto L_08AFE3D4;
    case 469u: goto L_08AFE3DC;
    case 470u: goto L_08AFE3E4;
    case 471u: goto L_08AFE3EC;
    case 472u: goto L_08AFE3F0;
    case 473u: goto L_08AFE3F8;
    case 474u: goto L_08AFE408;
    case 475u: goto L_08AFE410;
    case 476u: goto L_08AFE414;
    case 477u: goto L_08AFE420;
    case 478u: goto L_08AFE42C;
    case 479u: goto L_08AFE438;
    case 480u: goto L_08AFE444;
    case 481u: goto L_08AFE44C;
    case 482u: goto L_08AFE454;
    case 483u: goto L_08AFE484;
    case 484u: goto L_08AFE4EC;
    case 485u: goto L_08AFE4F4;
    case 486u: goto L_08AFE4FC;
    case 487u: goto L_08AFE508;
    case 488u: goto L_08AFE518;
    case 489u: goto L_08AFE520;
    case 490u: goto L_08AFE530;
    case 491u: goto L_08AFE53C;
    case 492u: goto L_08AFE548;
    case 493u: goto L_08AFE550;
    case 494u: goto L_08AFE560;
    case 495u: goto L_08AFE568;
    case 496u: goto L_08AFE574;
    case 497u: goto L_08AFE580;
    case 498u: goto L_08AFE588;
    case 499u: goto L_08AFE590;
    case 500u: goto L_08AFE59C;
    case 501u: goto L_08AFE5A4;
    case 502u: goto L_08AFE5AC;
    case 503u: goto L_08AFE5B4;
    case 504u: goto L_08AFE5BC;
    case 505u: goto L_08AFE5C4;
    case 506u: goto L_08AFE5D0;
    case 507u: goto L_08AFE5D8;
    case 508u: goto L_08AFE5E0;
    case 509u: goto L_08AFE5F4;
    case 510u: goto L_08AFE5FC;
    case 511u: goto L_08AFE608;
    case 512u: goto L_08AFE61C;
    case 513u: goto L_08AFE628;
    case 514u: goto L_08AFE630;
    case 515u: goto L_08AFE640;
    case 516u: goto L_08AFE648;
    case 517u: goto L_08AFE650;
    case 518u: goto L_08AFE658;
    case 519u: goto L_08AFE660;
    case 520u: goto L_08AFE668;
    case 521u: goto L_08AFE670;
    case 522u: goto L_08AFE678;
    case 523u: goto L_08AFE680;
    case 524u: goto L_08AFE688;
    case 525u: goto L_08AFE690;
    case 526u: goto L_08AFE698;
    case 527u: goto L_08AFE6A0;
    case 528u: goto L_08AFE6B4;
    case 529u: goto L_08AFE6C0;
    case 530u: goto L_08AFE6CC;
    case 531u: goto L_08AFE6EC;
    case 532u: goto L_08AFE6F8;
    case 533u: goto L_08AFE700;
    case 534u: goto L_08AFE710;
    case 535u: goto L_08AFE71C;
    case 536u: goto L_08AFE728;
    case 537u: goto L_08AFE734;
    case 538u: goto L_08AFE73C;
    case 539u: goto L_08AFE744;
    case 540u: goto L_08AFE754;
    case 541u: goto L_08AFE75C;
    case 542u: goto L_08AFE764;
    case 543u: goto L_08AFE76C;
    case 544u: goto L_08AFE774;
    case 545u: goto L_08AFE77C;
    case 546u: goto L_08AFE784;
    case 547u: goto L_08AFE78C;
    case 548u: goto L_08AFE794;
    case 549u: goto L_08AFE79C;
    case 550u: goto L_08AFE7A4;
    case 551u: goto L_08AFE7AC;
    case 552u: goto L_08AFE7B4;
    case 553u: goto L_08AFE7BC;
    case 554u: goto L_08AFE7C4;
    case 555u: goto L_08AFE7CC;
    case 556u: goto L_08AFE7D8;
    case 557u: goto L_08AFE7E0;
    case 558u: goto L_08AFE7E4;
    case 559u: goto L_08AFE7EC;
    case 560u: goto L_08AFE7F4;
    case 561u: goto L_08AFE810;
    case 562u: goto L_08AFE81C;
    case 563u: goto L_08AFE824;
    case 564u: goto L_08AFE830;
    case 565u: goto L_08AFE83C;
    case 566u: goto L_08AFE848;
    case 567u: goto L_08AFE850;
    case 568u: goto L_08AFE85C;
    case 569u: goto L_08AFE864;
    case 570u: goto L_08AFE86C;
    case 571u: goto L_08AFE874;
    case 572u: goto L_08AFE87C;
    case 573u: goto L_08AFE888;
    case 574u: goto L_08AFE890;
    case 575u: goto L_08AFE89C;
    case 576u: goto L_08AFE8D0;
    case 577u: goto L_08AFE8E8;
    case 578u: goto L_08AFE908;
    case 579u: goto L_08AFE928;
    case 580u: goto L_08AFE950;
    case 581u: goto L_08AFE96C;
    case 582u: goto L_08AFE980;
    case 583u: goto L_08AFE998;
    case 584u: goto L_08AFE9B0;
    case 585u: goto L_08AFE9CC;
    case 586u: goto L_08AFE9E8;
    case 587u: goto L_08AFEA00;
    case 588u: goto L_08AFEA08;
    case 589u: goto L_08AFEA10;
    case 590u: goto L_08AFEA28;
    case 591u: goto L_08AFEA30;
    case 592u: goto L_08AFEA38;
    case 593u: goto L_08AFEA58;
    case 594u: goto L_08AFEA64;
    case 595u: goto L_08AFEA80;
    case 596u: goto L_08AFEA94;
    case 597u: goto L_08AFEAA0;
    case 598u: goto L_08AFEAA8;
    case 599u: goto L_08AFEAB4;
    case 600u: goto L_08AFEAC4;
    case 601u: goto L_08AFEAD0;
    case 602u: goto L_08AFEAE8;
    case 603u: goto L_08AFEAFC;
    case 604u: goto L_08AFEB08;
    case 605u: goto L_08AFEB10;
    case 606u: goto L_08AFEB2C;
    case 607u: goto L_08AFEB40;
    case 608u: goto L_08AFEB48;
    case 609u: goto L_08AFEB5C;
    case 610u: goto L_08AFEB64;
    case 611u: goto L_08AFEB74;
    case 612u: goto L_08AFEB7C;
    case 613u: goto L_08AFEB84;
    case 614u: goto L_08AFEB8C;
    case 615u: goto L_08AFEB90;
    case 616u: goto L_08AFEB94;
    case 617u: goto L_08AFEBA4;
    case 618u: goto L_08AFEBB4;
    case 619u: goto L_08AFEBBC;
    case 620u: goto L_08AFEBC8;
    case 621u: goto L_08AFEBD8;
    case 622u: goto L_08AFEBE4;
    case 623u: goto L_08AFEBF0;
    case 624u: goto L_08AFEC14;
    case 625u: goto L_08AFEC38;
    case 626u: goto L_08AFEC60;
    case 627u: goto L_08AFEC8C;
    case 628u: goto L_08AFECB8;
    case 629u: goto L_08AFECC4;
    case 630u: goto L_08AFECD8;
    case 631u: goto L_08AFECE0;
    case 632u: goto L_08AFECF4;
    case 633u: goto L_08AFECFC;
    case 634u: goto L_08AFED10;
    case 635u: goto L_08AFED20;
    case 636u: goto L_08AFED48;
    case 637u: goto L_08AFED64;
    case 638u: goto L_08AFED74;
    case 639u: goto L_08AFED90;
    case 640u: goto L_08AFED98;
    case 641u: goto L_08AFEDA0;
    case 642u: goto L_08AFEDA8;
    case 643u: goto L_08AFEDB0;
    case 644u: goto L_08AFEDB8;
    case 645u: goto L_08AFEDEC;
    case 646u: goto L_08AFEE00;
    case 647u: goto L_08AFEE1C;
    case 648u: goto L_08AFEE24;
    case 649u: goto L_08AFEE2C;
    case 650u: goto L_08AFEE34;
    case 651u: goto L_08AFEE3C;
    case 652u: goto L_08AFEE54;
    case 653u: goto L_08AFEE60;
    case 654u: goto L_08AFEE84;
    case 655u: goto L_08AFEE90;
    case 656u: goto L_08AFEF10;
    case 657u: goto L_08AFEF20;
    case 658u: goto L_08AFEF48;
    case 659u: goto L_08AFEF58;
    case 660u: goto L_08AFEF60;
    case 661u: goto L_08AFEF68;
    case 662u: goto L_08AFEF74;
    case 663u: goto L_08AFEF7C;
    case 664u: goto L_08AFEF90;
    case 665u: goto L_08AFEFB4;
    case 666u: goto L_08AFEFBC;
    case 667u: goto L_08AFEFC4;
    case 668u: goto L_08AFEFD0;
    case 669u: goto L_08AFEFD8;
    case 670u: goto L_08AFEFEC;
    case 671u: goto L_08AFF010;
    case 672u: goto L_08AFF020;
    case 673u: goto L_08AFF028;
    case 674u: goto L_08AFF030;
    case 675u: goto L_08AFF038;
    case 676u: goto L_08AFF040;
    case 677u: goto L_08AFF048;
    case 678u: goto L_08AFF058;
    case 679u: goto L_08AFF064;
    case 680u: goto L_08AFF06C;
    case 681u: goto L_08AFF074;
    case 682u: goto L_08AFF07C;
    case 683u: goto L_08AFF084;
    case 684u: goto L_08AFF094;
    case 685u: goto L_08AFF0A0;
    case 686u: goto L_08AFF0A8;
    case 687u: goto L_08AFF0B8;
    case 688u: goto L_08AFF0C4;
    case 689u: goto L_08AFF0CC;
    case 690u: goto L_08AFF0D4;
    case 691u: goto L_08AFF0DC;
    case 692u: goto L_08AFF0E4;
    case 693u: goto L_08AFF0FC;
    case 694u: goto L_08AFF110;
    case 695u: goto L_08AFF11C;
    case 696u: goto L_08AFF124;
    case 697u: goto L_08AFF134;
    case 698u: goto L_08AFF13C;
    case 699u: goto L_08AFF144;
    case 700u: goto L_08AFF14C;
    case 701u: goto L_08AFF15C;
    case 702u: goto L_08AFF168;
    case 703u: goto L_08AFF170;
    case 704u: goto L_08AFF178;
    case 705u: goto L_08AFF180;
    case 706u: goto L_08AFF188;
    case 707u: goto L_08AFF198;
    case 708u: goto L_08AFF1A4;
    case 709u: goto L_08AFF1AC;
    case 710u: goto L_08AFF1B4;
    case 711u: goto L_08AFF1BC;
    case 712u: goto L_08AFF1C4;
    case 713u: goto L_08AFF1CC;
    case 714u: goto L_08AFF1E4;
    case 715u: goto L_08AFF1F8;
    case 716u: goto L_08AFF204;
    case 717u: goto L_08AFF20C;
    case 718u: goto L_08AFF21C;
    case 719u: goto L_08AFF224;
    case 720u: goto L_08AFF22C;
    case 721u: goto L_08AFF234;
    case 722u: goto L_08AFF244;
    case 723u: goto L_08AFF250;
    case 724u: goto L_08AFF258;
    case 725u: goto L_08AFF260;
    case 726u: goto L_08AFF268;
    case 727u: goto L_08AFF270;
    case 728u: goto L_08AFF280;
    case 729u: goto L_08AFF28C;
    case 730u: goto L_08AFF294;
    case 731u: goto L_08AFF2A8;
    case 732u: goto L_08AFF2C4;
    case 733u: goto L_08AFF2D4;
    case 734u: goto L_08AFF2E0;
    case 735u: goto L_08AFF2F4;
    case 736u: goto L_08AFF300;
    case 737u: goto L_08AFF320;
    case 738u: goto L_08AFF33C;
    case 739u: goto L_08AFF348;
    case 740u: goto L_08AFF350;
    case 741u: goto L_08AFF35C;
    case 742u: goto L_08AFF364;
    case 743u: goto L_08AFF368;
    case 744u: goto L_08AFF374;
    case 745u: goto L_08AFF384;
    case 746u: goto L_08AFF398;
    case 747u: goto L_08AFF39C;
    case 748u: goto L_08AFF3AC;
    case 749u: goto L_08AFF3B4;
    case 750u: goto L_08AFF3BC;
    case 751u: goto L_08AFF3C8;
    case 752u: goto L_08AFF3D0;
    case 753u: goto L_08AFF3DC;
    case 754u: goto L_08AFF3E4;
    case 755u: goto L_08AFF3F0;
    case 756u: goto L_08AFF3F8;
    case 757u: goto L_08AFF404;
    case 758u: goto L_08AFF414;
    case 759u: goto L_08AFF430;
    case 760u: goto L_08AFF440;
    case 761u: goto L_08AFF45C;
    case 762u: goto L_08AFF468;
    case 763u: goto L_08AFF474;
    case 764u: goto L_08AFF47C;
    case 765u: goto L_08AFF480;
    case 766u: goto L_08AFF488;
    case 767u: goto L_08AFF494;
    case 768u: goto L_08AFF49C;
    case 769u: goto L_08AFF4B4;
    case 770u: goto L_08AFF4D0;
    case 771u: goto L_08AFF4F0;
    case 772u: goto L_08AFF508;
    case 773u: goto L_08AFF530;
    case 774u: goto L_08AFF53C;
    case 775u: goto L_08AFF548;
    case 776u: goto L_08AFF550;
    case 777u: goto L_08AFF558;
    case 778u: goto L_08AFF560;
    case 779u: goto L_08AFF56C;
    case 780u: goto L_08AFF57C;
    case 781u: goto L_08AFF58C;
    case 782u: goto L_08AFF5A0;
    case 783u: goto L_08AFF5A8;
    case 784u: goto L_08AFF5B0;
    case 785u: goto L_08AFF5B8;
    case 786u: goto L_08AFF5C4;
    case 787u: goto L_08AFF5CC;
    case 788u: goto L_08AFF5D4;
    case 789u: goto L_08AFF5E0;
    case 790u: goto L_08AFF5E8;
    case 791u: goto L_08AFF5F8;
    case 792u: goto L_08AFF600;
    case 793u: goto L_08AFF610;
    case 794u: goto L_08AFF61C;
    case 795u: goto L_08AFF624;
    case 796u: goto L_08AFF62C;
    case 797u: goto L_08AFF634;
    case 798u: goto L_08AFF63C;
    case 799u: goto L_08AFF64C;
    case 800u: goto L_08AFF654;
    case 801u: goto L_08AFF664;
    case 802u: goto L_08AFF67C;
    case 803u: goto L_08AFF684;
    case 804u: goto L_08AFF68C;
    case 805u: goto L_08AFF69C;
    case 806u: goto L_08AFF6A4;
    case 807u: goto L_08AFF6AC;
    case 808u: goto L_08AFF6B4;
    case 809u: goto L_08AFF6BC;
    case 810u: goto L_08AFF6C4;
    case 811u: goto L_08AFF6CC;
    case 812u: goto L_08AFF6D4;
    case 813u: goto L_08AFF6D8;
    case 814u: goto L_08AFF6F8;
    case 815u: goto L_08AFF700;
    case 816u: goto L_08AFF708;
    case 817u: goto L_08AFF710;
    case 818u: goto L_08AFF718;
    case 819u: goto L_08AFF720;
    case 820u: goto L_08AFF728;
    case 821u: goto L_08AFF730;
    case 822u: goto L_08AFF768;
    case 823u: goto L_08AFF788;
    case 824u: goto L_08AFF790;
    case 825u: goto L_08AFF798;
    case 826u: goto L_08AFF7A8;
    case 827u: goto L_08AFF7B0;
    case 828u: goto L_08AFF7B4;
    case 829u: goto L_08AFF7CC;
    case 830u: goto L_08AFF7E0;
    case 831u: goto L_08AFF7E8;
    case 832u: goto L_08AFF7F4;
    case 833u: goto L_08AFF7FC;
    case 834u: goto L_08AFF808;
    case 835u: goto L_08AFF814;
    case 836u: goto L_08AFF81C;
    case 837u: goto L_08AFF824;
    case 838u: goto L_08AFF830;
    case 839u: goto L_08AFF838;
    case 840u: goto L_08AFF85C;
    case 841u: goto L_08AFF864;
    case 842u: goto L_08AFF870;
    case 843u: goto L_08AFF878;
    case 844u: goto L_08AFF884;
    case 845u: goto L_08AFF890;
    case 846u: goto L_08AFF898;
    case 847u: goto L_08AFF8A0;
    case 848u: goto L_08AFF8AC;
    case 849u: goto L_08AFF8C0;
    case 850u: goto L_08AFF8C8;
    case 851u: goto L_08AFF8D8;
    case 852u: goto L_08AFF8E4;
    case 853u: goto L_08AFF8EC;
    case 854u: goto L_08AFF914;
    case 855u: goto L_08AFF91C;
    case 856u: goto L_08AFF924;
    case 857u: goto L_08AFF92C;
    case 858u: goto L_08AFF934;
    case 859u: goto L_08AFF93C;
    case 860u: goto L_08AFF944;
    case 861u: goto L_08AFF94C;
    case 862u: goto L_08AFF954;
    case 863u: goto L_08AFFA1C;
    case 864u: goto L_08AFFA24;
    case 865u: goto L_08AFFA30;
    case 866u: goto L_08AFFA38;
    case 867u: goto L_08AFFA3C;
    case 868u: goto L_08AFFA50;
    case 869u: goto L_08AFFA68;
    case 870u: goto L_08AFFA78;
    case 871u: goto L_08AFFA84;
    case 872u: goto L_08AFFA8C;
    case 873u: goto L_08AFFA98;
    case 874u: goto L_08AFFAA8;
    case 875u: goto L_08AFFAAC;
    case 876u: goto L_08AFFAB8;
    case 877u: goto L_08AFFAC8;
    case 878u: goto L_08AFFAF8;
    case 879u: goto L_08AFFB08;
    case 880u: goto L_08AFFB14;
    case 881u: goto L_08AFFB1C;
    case 882u: goto L_08AFFB24;
    case 883u: goto L_08AFFB34;
    case 884u: goto L_08AFFB44;
    case 885u: goto L_08AFFB4C;
    case 886u: goto L_08AFFB5C;
    case 887u: goto L_08AFFB60;
    case 888u: goto L_08AFFB68;
    case 889u: goto L_08AFFB78;
    case 890u: goto L_08AFFB80;
    case 891u: goto L_08AFFB88;
    case 892u: goto L_08AFFBA0;
    case 893u: goto L_08AFFBA8;
    case 894u: goto L_08AFFBB4;
    case 895u: goto L_08AFFBC4;
    case 896u: goto L_08AFFBCC;
    case 897u: goto L_08AFFBD4;
    case 898u: goto L_08AFFBF0;
    case 899u: goto L_08AFFC04;
    case 900u: goto L_08AFFC0C;
    case 901u: goto L_08AFFC18;
    case 902u: goto L_08AFFC20;
    case 903u: goto L_08AFFC2C;
    case 904u: goto L_08AFFC34;
    case 905u: goto L_08AFFC3C;
    case 906u: goto L_08AFFC44;
    case 907u: goto L_08AFFC4C;
    case 908u: goto L_08AFFC64;
    case 909u: goto L_08AFFC70;
    case 910u: goto L_08AFFC7C;
    case 911u: goto L_08AFFC8C;
    case 912u: goto L_08AFFC98;
    case 913u: goto L_08AFFCA4;
    case 914u: goto L_08AFFCAC;
    case 915u: goto L_08AFFCB4;
    case 916u: goto L_08AFFCCC;
    case 917u: goto L_08AFFCD4;
    case 918u: goto L_08AFFCE0;
    case 919u: goto L_08AFFCF8;
    case 920u: goto L_08AFFD00;
    case 921u: goto L_08AFFD14;
    case 922u: goto L_08AFFD38;
    case 923u: goto L_08AFFD60;
    case 924u: goto L_08AFFD6C;
    case 925u: goto L_08AFFD74;
    case 926u: goto L_08AFFD88;
    case 927u: goto L_08AFFD90;
    case 928u: goto L_08AFFD98;
    case 929u: goto L_08AFFD9C;
    case 930u: goto L_08AFFDB0;
    case 931u: goto L_08AFFDC4;
    case 932u: goto L_08AFFDD4;
    case 933u: goto L_08AFFDDC;
    case 934u: goto L_08AFFE00;
    case 935u: goto L_08AFFE10;
    case 936u: goto L_08AFFE1C;
    case 937u: goto L_08AFFE3C;
    case 938u: goto L_08AFFE64;
    case 939u: goto L_08AFFE80;
    case 940u: goto L_08AFFE88;
    case 941u: goto L_08AFFE9C;
    case 942u: goto L_08AFFEA0;
    case 943u: goto L_08AFFEBC;
    case 944u: goto L_08AFFEC4;
    case 945u: goto L_08AFFECC;
    case 946u: goto L_08AFFEF4;
    case 947u: goto L_08AFFEFC;
    case 948u: goto L_08AFFF18;
    case 949u: goto L_08AFFF40;
    case 950u: goto L_08AFFF4C;
    case 951u: goto L_08AFFF60;
    case 952u: goto L_08AFFF6C;
    case 953u: goto L_08AFFF7C;
    case 954u: goto L_08AFFF8C;
    case 955u: goto L_08AFFF94;
    case 956u: goto L_08AFFFA8;
    case 957u: goto L_08AFFFBC;
    case 958u: goto L_08AFFFD8;
    case 959u: goto L_08AFFFDC;
    case 960u: goto L_08AFFFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AFC000:
    ctx.gpr[4] = (ctx.gpr[4] & 1023u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFC00C;
      }
      goto L_08AFC00C;
    }
L_08AFC00C:
    ctx.gpr[5] = (2247u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8224));
    ctx.gpr[6] = (2247u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12320));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (16624u << 16u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08AFC06Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08AFC06Cu) goto L_08AFC06C;
    return;
L_08AFC06C:
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 84u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[13];
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08AFC0B8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x08AFC0B8u) goto L_08AFC0B8;
    return;
L_08AFC0B8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC0D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8344))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(10424), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(10426), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10428), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10432), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 1u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10436), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC100:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10424))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10426))))));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8344), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10428)));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8352), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10432)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8664), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7896), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC124:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (16480u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[2] = (16640u << 16u);
    ctx.gpr[10] = (2238u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (ctx.gpr[7] & 255u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-272));
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(24));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[10] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (ctx.gpr[10] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[6]) < 256 ? 1u : 0u);
    ctx.gpr[2] = (16128u << 16u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFC17C;
      }
      goto L_08AFC178;
    }
L_08AFC178:
    ctx.gpr[6] = (0u | 255u);
    goto L_08AFC17C;
L_08AFC17C:
    ctx.gpr[2] = (2236u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(32304));
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[12]);
    ctx.gpr[13] = (2238u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(12016));
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[13]);
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[13] = (ctx.gpr[3] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.gpr[14] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[14]));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[15] = (ctx.gpr[3] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[15]));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[13]));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[14]));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[13]));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[15]));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (16656u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[3]);
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
    ctx.gpr[3] = (16688u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[3]);
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[2] = (ctx.gpr[2] << 3u);
    ctx.gpr[3] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[10]);
    ctx.gpr[3] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[3] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[3] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[3] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[2] = (ctx.gpr[2] << 3u);
    ctx.gpr[3] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[10]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[2] = (ctx.gpr[2] << 3u);
    ctx.gpr[3] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[9]);
    ctx.gpr[3] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[3] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[3] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[3] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[2] = (ctx.gpr[2] << 3u);
    ctx.gpr[3] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[9]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[19] = ctx.fpr[19] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[2] = (ctx.gpr[2] << 3u);
    ctx.gpr[3] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[8]);
    ctx.gpr[3] = (ctx.gpr[6] << 5u);
    ctx.gpr[3] = (ctx.gpr[6] + ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[6] + ctx.gpr[3]);
    ctx.gpr[12] = (ctx.gpr[3] << 2u);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[12]);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    ctx.gpr[12] = (ctx.gpr[12] >> 24u);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[12]);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    ctx.gpr[3] = (ctx.gpr[3] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[12] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[2] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[2] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[2] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[2] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[2] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[19] = ctx.fpr[19] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16784u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC4B8;
      }
      goto L_08AFC4A4;
    }
L_08AFC4A4:
    ctx.gpr[4] = (16285u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 28836u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    goto L_08AFC4B8;
L_08AFC4B8:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFC4DC;
      }
      goto L_08AFC4C8;
    }
L_08AFC4C8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08AFC524;
      }
      goto L_08AFC4DC;
    }
L_08AFC4DC:
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[17]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
        goto L_08AFC500;
    }
    goto L_08AFC4F4;
L_08AFC4F4:
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08AFC524;
      }
      goto L_08AFC500;
    }
L_08AFC500:
    ctx.gpr[4] = (15872u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[12];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08AFC524;
L_08AFC524:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8360)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7713)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    if (ctx.gpr[4] != 0u) {
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
        goto L_08AFC54C;
    }
    goto L_08AFC538;
L_08AFC538:
    ctx.fpr[15] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7504), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7508), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7512), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    goto L_08AFC54C;
L_08AFC54C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7504)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7508)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.fpr[16] = ctx.fpr[15] - ctx.fpr[16];
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (48896u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7512)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.fpr[16] = ctx.fpr[18] + ctx.fpr[16];
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7508)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7512)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7508)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.fpr[16] = ctx.fpr[15] + ctx.fpr[16];
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7512)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7508)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[13];
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7512)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7508)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7512)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(5));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC6BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7650)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7649)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[16] = (0u | 4u);
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AFC7C8;
      }
      goto L_08AFC740;
    }
L_08AFC740:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8344), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC760;
      }
      goto L_08AFC750;
    }
L_08AFC750:
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8352), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8344), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC7C8;
      }
      goto L_08AFC760;
    }
L_08AFC760:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10284))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AFC7C4;
      }
      goto L_08AFC76C;
    }
L_08AFC76C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10288)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08AFC78C;
    }
    goto L_08AFC77C;
L_08AFC77C:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFC78C;
      }
      goto L_08AFC78C;
    }
L_08AFC78C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10288), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1548)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8076)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8352), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC7C8;
      }
      goto L_08AFC7AC;
    }
L_08AFC7AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFC7C8;
      }
      goto L_08AFC7BC;
    }
L_08AFC7BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8352), static_cast<std::uint16_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08AFC7C8;
      }
      goto L_08AFC7C4;
    }
L_08AFC7C4:
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8352), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AFC7C8;
L_08AFC7C8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8664), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AFC7D4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AFC7D4u) goto L_08AFC7D4;
    return;
L_08AFC7D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFC7F4;
      }
      goto L_08AFC7E4;
    }
L_08AFC7E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(98))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AFC7F8;
      }
      goto L_08AFC7F0;
    }
L_08AFC7F0:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AFC7F4;
L_08AFC7F4:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08AFC7F8;
L_08AFC7F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC854;
      }
      goto L_08AFC800;
    }
L_08AFC800:
    ctx.gpr[31] = (0x08AFC808u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AFC808u) goto L_08AFC808;
    return;
L_08AFC808:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFC828;
      }
      goto L_08AFC818;
    }
L_08AFC818:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AFC82C;
      }
      goto L_08AFC824;
    }
L_08AFC824:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AFC828;
L_08AFC828:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08AFC82C;
L_08AFC82C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC854;
      }
      goto L_08AFC834;
    }
L_08AFC834:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8352), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8344), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AFC854;
L_08AFC854:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AFC9A4;
      }
      goto L_08AFC860;
    }
L_08AFC860:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8344))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AFC9A4;
      }
      goto L_08AFC86C;
    }
L_08AFC86C:
    ctx.gpr[31] = (0x08AFC874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem) && ctx.pc == 0x08AFC874u) goto L_08AFC874;
    return;
L_08AFC874:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC9A4;
      }
      goto L_08AFC87C;
    }
L_08AFC87C:
    ctx.gpr[31] = (0x08AFC884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem) && ctx.pc == 0x08AFC884u) goto L_08AFC884;
    return;
L_08AFC884:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC9A4;
      }
      goto L_08AFC88C;
    }
L_08AFC88C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11240)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFC9A4;
      }
      goto L_08AFC8A4;
    }
L_08AFC8A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10404)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC960;
      }
      goto L_08AFC8B0;
    }
L_08AFC8B0:
    ctx.gpr[31] = (0x08AFC8B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AFC8B8u) goto L_08AFC8B8;
    return;
L_08AFC8B8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
      if (branch_taken) {
          goto L_08AFC91C;
      }
      goto L_08AFC8CC;
    }
L_08AFC8CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10408)));
    ctx.gpr[7] = (0u | 20u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10404), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 20u);
        goto L_08AFC8EC;
    }
    goto L_08AFC8EC;
L_08AFC8EC:
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10412), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10416), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8592), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC9AC;
      }
      goto L_08AFC91C;
    }
L_08AFC91C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10420)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(51) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC9AC;
      }
      goto L_08AFC930;
    }
L_08AFC930:
    ctx.gpr[31] = (0x08AFC938u);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8592)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AFC938u) goto L_08AFC938;
    return;
L_08AFC938:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8592), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8592)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFC958;
      }
      goto L_08AFC950;
    }
L_08AFC950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10420), ctx.gpr[4]);
    goto L_08AFC958;
L_08AFC958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC9AC;
      }
      goto L_08AFC960;
    }
L_08AFC960:
    ctx.gpr[31] = (0x08AFC968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AFC968u) goto L_08AFC968;
    return;
L_08AFC968:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC99C;
      }
      goto L_08AFC97C;
    }
L_08AFC97C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10404), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10408), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8592), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10420), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AFC9AC;
      }
      goto L_08AFC99C;
    }
L_08AFC99C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8592), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC9AC;
      }
      goto L_08AFC9A4;
    }
L_08AFC9A4:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8592), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10404), static_cast<std::uint8_t>(0u));
    goto L_08AFC9AC;
L_08AFC9AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10416)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCA34;
      }
      goto L_08AFC9B8;
    }
L_08AFC9B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCA34;
      }
      goto L_08AFC9C8;
    }
L_08AFC9C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10412)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1552)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08AFC9EC;
      }
      goto L_08AFC9E0;
    }
L_08AFC9E0:
    ctx.gpr[6] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AFC9EC;
L_08AFC9EC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AFC9F8u);
    ctx.gpr[6] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08AFC9F8u) goto L_08AFC9F8;
    return;
L_08AFC9F8:
    ctx.gpr[31] = (0x08AFCA00u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AFCA00u) goto L_08AFCA00;
    return;
L_08AFCA00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10412)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x08AFCA30u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 954u, 0x0898BB3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFCA30u) goto L_08AFCA30;
    return;
L_08AFCA30:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10416), 0u);
    goto L_08AFCA34;
L_08AFCA34:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8344))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
      if (branch_taken) {
          goto L_08AFCA4C;
      }
      goto L_08AFCA40;
    }
L_08AFCA40:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFCA74;
      }
      goto L_08AFCA4C;
    }
L_08AFCA4C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08AFCA5C;
      }
      goto L_08AFCA54;
    }
L_08AFCA54:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFCA64;
      }
      goto L_08AFCA5C;
    }
L_08AFCA5C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7888), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08AFCA94;
      }
      goto L_08AFCA64;
    }
L_08AFCA64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7888), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AFCA94;
      }
      goto L_08AFCA74;
    }
L_08AFCA74:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AFCA84;
      }
      goto L_08AFCA7C;
    }
L_08AFCA7C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFCA90;
      }
      goto L_08AFCA84;
    }
L_08AFCA84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7888), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AFCA94;
      }
      goto L_08AFCA90;
    }
L_08AFCA90:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7888), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08AFCA94;
L_08AFCA94:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08AFCAA4;
      }
      goto L_08AFCA9C;
    }
L_08AFCA9C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFCB58;
      }
      goto L_08AFCAA4;
    }
L_08AFCAA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[7] = (16128u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] >> 14u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08AFCAD0;
      }
      goto L_08AFCAC4;
    }
L_08AFCAC4:
    ctx.gpr[7] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_08AFCAD0;
L_08AFCAD0:
    ctx.gpr[7] = (16040u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 62915u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08AFCB40;
      }
      goto L_08AFCAE4;
    }
L_08AFCAE4:
    ctx.gpr[7] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AFCB40;
      }
      goto L_08AFCAF0;
    }
L_08AFCAF0:
    ctx.gpr[7] = (16076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFCB18;
      }
      goto L_08AFCB10;
    }
L_08AFCB10:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AFCB40;
      }
      goto L_08AFCB18;
    }
L_08AFCB18:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08AFCB30;
      }
      goto L_08AFCB24;
    }
L_08AFCB24:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_08AFCB30;
L_08AFCB30:
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_08AFCB40;
L_08AFCB40:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFCB5C;
      }
      goto L_08AFCB50;
    }
L_08AFCB50:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AFCB5C;
      }
      goto L_08AFCB58;
    }
L_08AFCB58:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08AFCB5C;
L_08AFCB5C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7896), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AFCB74;
      }
      goto L_08AFCB64;
    }
L_08AFCB64:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_08AFCB74;
      }
      goto L_08AFCB6C;
    }
L_08AFCB6C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFCB7C;
      }
      goto L_08AFCB74;
    }
L_08AFCB74:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8396), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08AFCB88;
      }
      goto L_08AFCB7C;
    }
L_08AFCB7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8396), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AFCB88;
L_08AFCB88:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCBB0;
      }
      goto L_08AFCB90;
    }
L_08AFCB90:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[16];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_08AFCBB0;
      }
      goto L_08AFCB98;
    }
L_08AFCB98:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFCBB0;
      }
      goto L_08AFCBA0;
    }
L_08AFCBA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8396)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8396), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AFCBB0;
L_08AFCBB0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AFCBC0;
      }
      goto L_08AFCBB8;
    }
L_08AFCBB8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7900), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08AFCBCC;
      }
      goto L_08AFCBC0;
    }
L_08AFCBC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AFCBCC;
L_08AFCBCC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AFCBE4;
      }
      goto L_08AFCBD4;
    }
L_08AFCBD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7900)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AFCBE4;
L_08AFCBE4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_08AFCBFC;
      }
      goto L_08AFCBEC;
    }
L_08AFCBEC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFCBFC;
      }
      goto L_08AFCBF4;
    }
L_08AFCBF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8400), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08AFCC08;
      }
      goto L_08AFCBFC;
    }
L_08AFCBFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AFCC08;
L_08AFCC08:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[16];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_08AFCC18;
      }
      goto L_08AFCC10;
    }
L_08AFCC10:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFCC28;
      }
      goto L_08AFCC18;
    }
L_08AFCC18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8400)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AFCC28;
L_08AFCC28:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AFCCB8;
      }
      goto L_08AFCC30;
    }
L_08AFCC30:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCC48;
      }
      goto L_08AFCC38;
    }
L_08AFCC38:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[16];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_08AFCC48;
      }
      goto L_08AFCC40;
    }
L_08AFCC40:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFCCB8;
      }
      goto L_08AFCC48;
    }
L_08AFCC48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFCCB0;
      }
      goto L_08AFCC64;
    }
L_08AFCC64:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFCCB0;
      }
      goto L_08AFCC74;
    }
L_08AFCC74:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCCB0;
      }
      goto L_08AFCC7C;
    }
L_08AFCC7C:
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08AFCC98;
    }
    goto L_08AFCC98;
L_08AFCC98:
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AFCCBC;
      }
      goto L_08AFCCB0;
    }
L_08AFCCB0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10400), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08AFCCBC;
      }
      goto L_08AFCCB8;
    }
L_08AFCCB8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10400), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08AFCCBC;
L_08AFCCBC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_08AFCCD8;
      }
      goto L_08AFCCC4;
    }
L_08AFCCC4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFCCD8;
      }
      goto L_08AFCCCC;
    }
L_08AFCCCC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9268), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08AFCCE4;
      }
      goto L_08AFCCD8;
    }
L_08AFCCD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AFCCE4;
L_08AFCCE4:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[16];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_08AFCCF4;
      }
      goto L_08AFCCEC;
    }
L_08AFCCEC:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFCD00;
      }
      goto L_08AFCCF4;
    }
L_08AFCCF4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AFCD00;
L_08AFCD00:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (2234u << 16u);
      if (branch_taken) {
          goto L_08AFCDC0;
      }
      goto L_08AFCD10;
    }
L_08AFCD10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16608u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08AFCD40;
    }
    goto L_08AFCD40;
L_08AFCD40:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08AFCD5C;
    }
    goto L_08AFCD5C;
L_08AFCD5C:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08AFCD6C;
    }
    goto L_08AFCD6C;
L_08AFCD6C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9268), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24896)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCDBC;
      }
      goto L_08AFCD7C;
    }
L_08AFCD7C:
    ctx.gpr[31] = (0x08AFCD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AFCD84u) goto L_08AFCD84;
    return;
L_08AFCD84:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15333u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 24642u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9268)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8344))))));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AFCDBC;
L_08AFCDBC:
    ctx.gpr[5] = (2234u << 16u);
    goto L_08AFCDC0;
L_08AFCDC0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13288));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.fpr[15] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7900)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8348), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
        goto L_08AFCE18;
    }
    goto L_08AFCE18;
L_08AFCE18:
    ctx.gpr[5] = (16179u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7760), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10392), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10384), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10388), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08AFCE48;
      }
      goto L_08AFCE40;
    }
L_08AFCE40:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9748), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08AFCEB0;
      }
      goto L_08AFCE48;
    }
L_08AFCE48:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCE6C;
      }
      goto L_08AFCE54;
    }
L_08AFCE54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7649)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9748), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08AFCEB0;
      }
      goto L_08AFCE6C;
    }
L_08AFCE6C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCE84;
      }
      goto L_08AFCE78;
    }
L_08AFCE78:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9748), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08AFCEB0;
      }
      goto L_08AFCE84;
    }
L_08AFCE84:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCEAC;
      }
      goto L_08AFCE90;
    }
L_08AFCE90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7649)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[20];
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9748), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08AFCEB0;
      }
      goto L_08AFCEAC;
    }
L_08AFCEAC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9748), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08AFCEB0;
L_08AFCEB0:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFCEC8;
      }
      goto L_08AFCEC0;
    }
L_08AFCEC0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08AFCEC8;
      }
      goto L_08AFCEC8;
    }
L_08AFCEC8:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9748), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AFCEE0;
      }
      goto L_08AFCED8;
    }
L_08AFCED8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AFCEE0;
      }
      goto L_08AFCEE0;
    }
L_08AFCEE0:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9748), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08AFCEF8;
      }
      goto L_08AFCEF0;
    }
L_08AFCEF0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08AFCEF8;
      }
      goto L_08AFCEF8;
    }
L_08AFCEF8:
    ctx.gpr[31] = (0x08AFCF00u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9748), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 518u, 0x08AFBA80u>(ctx, &aot_mem) && ctx.pc == 0x08AFCF00u) goto L_08AFCF00;
    return;
L_08AFCF00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
        goto L_08AFCF20;
    }
    goto L_08AFCF0C;
L_08AFCF0C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_08AFCF1C;
      }
      goto L_08AFCF14;
    }
L_08AFCF14:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFCFD4;
      }
      goto L_08AFCF1C;
    }
L_08AFCF1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    goto L_08AFCF20;
L_08AFCF20:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCFD4;
      }
      goto L_08AFCF28;
    }
L_08AFCF28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
        goto L_08AFCF44;
    }
    goto L_08AFCF34;
L_08AFCF34:
    ctx.gpr[31] = (0x08AFCF3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem) && ctx.pc == 0x08AFCF3Cu) goto L_08AFCF3C;
    return;
L_08AFCF3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
    goto L_08AFCF44;
L_08AFCF44:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCFD4;
      }
      goto L_08AFCF4C;
    }
L_08AFCF4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCFD4;
      }
      goto L_08AFCF5C;
    }
L_08AFCF5C:
    ctx.gpr[31] = (0x08AFCF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AFCF64u) goto L_08AFCF64;
    return;
L_08AFCF64:
    ctx.gpr[31] = (0x08AFCF6Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 491u, 0x08909D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFCF6Cu) goto L_08AFCF6C;
    return;
L_08AFCF6C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
        goto L_08AFCFB8;
    }
    goto L_08AFCF74;
L_08AFCF74:
    ctx.gpr[31] = (0x08AFCF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AFCF7Cu) goto L_08AFCF7C;
    return;
L_08AFCF7C:
    ctx.gpr[31] = (0x08AFCF84u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 491u, 0x08909D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFCF84u) goto L_08AFCF84;
    return;
L_08AFCF84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCFD4;
      }
      goto L_08AFCF8C;
    }
L_08AFCF8C:
    ctx.gpr[31] = (0x08AFCF94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AFCF94u) goto L_08AFCF94;
    return;
L_08AFCF94:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16624u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFCFD4;
      }
      goto L_08AFCFB4;
    }
L_08AFCFB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    goto L_08AFCFB8;
L_08AFCFB8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 18 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFCFD4;
      }
      goto L_08AFCFC4;
    }
L_08AFCFC4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCFD4;
      }
      goto L_08AFCFCC;
    }
L_08AFCFCC:
    ctx.gpr[31] = (0x08AFCFD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 566u, 0x08AFBF40u>(ctx, &aot_mem) && ctx.pc == 0x08AFCFD4u) goto L_08AFCFD4;
    return;
L_08AFCFD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
        goto L_08AFCFF4;
    }
    goto L_08AFCFE0;
L_08AFCFE0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_08AFCFF0;
      }
      goto L_08AFCFE8;
    }
L_08AFCFE8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFD028;
      }
      goto L_08AFCFF0;
    }
L_08AFCFF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    goto L_08AFCFF4;
L_08AFCFF4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD028;
      }
      goto L_08AFCFFC;
    }
L_08AFCFFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
        goto L_08AFD018;
    }
    goto L_08AFD008;
L_08AFD008:
    ctx.gpr[31] = (0x08AFD010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem) && ctx.pc == 0x08AFD010u) goto L_08AFD010;
    return;
L_08AFD010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
    goto L_08AFD018;
L_08AFD018:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD028;
      }
      goto L_08AFD020;
    }
L_08AFD020:
    ctx.gpr[31] = (0x08AFD028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 567u, 0x08AFBF48u>(ctx, &aot_mem) && ctx.pc == 0x08AFD028u) goto L_08AFD028;
    return;
L_08AFD028:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
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
L_08AFD054:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFD0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem) && ctx.pc == 0x08AFD0A0u) goto L_08AFD0A0;
    return;
L_08AFD0A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD1D4;
      }
      goto L_08AFD0A8;
    }
L_08AFD0A8:
    ctx.gpr[31] = (0x08AFD0B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem) && ctx.pc == 0x08AFD0B0u) goto L_08AFD0B0;
    return;
L_08AFD0B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD1D4;
      }
      goto L_08AFD0B8;
    }
L_08AFD0B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11240)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFD1D4;
      }
      goto L_08AFD0D4;
    }
L_08AFD0D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7713)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AFD1CC;
      }
      goto L_08AFD0F4;
    }
L_08AFD0F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11228)));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15488u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[20] = (2236u << 16u);
      if (branch_taken) {
          goto L_08AFD1C4;
      }
      goto L_08AFD138;
    }
L_08AFD138:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32304));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2168)));
    ctx.gpr[4] = (16352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFD1C4;
      }
      goto L_08AFD158;
    }
L_08AFD158:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), 0u);
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), 0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16800u << 16u);
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[30]));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (2280u << 16u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(12624));
      if (branch_taken) {
          goto L_08AFD1DC;
      }
      goto L_08AFD1C4;
    }
L_08AFD1C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD720;
      }
      goto L_08AFD1CC;
    }
L_08AFD1CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD720;
      }
      goto L_08AFD1D4;
    }
L_08AFD1D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD720;
      }
      goto L_08AFD1DC;
    }
L_08AFD1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (16512u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AFD438;
      }
      goto L_08AFD1EC;
    }
L_08AFD1EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08AFD210;
      }
      goto L_08AFD204;
    }
L_08AFD204:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[13];
    goto L_08AFD210;
L_08AFD210:
    ctx.gpr[4] = (14976u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFD234;
      }
      goto L_08AFD22C;
    }
L_08AFD22C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
      if (branch_taken) {
          goto L_08AFD614;
      }
      goto L_08AFD234;
    }
L_08AFD234:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFD258;
      }
      goto L_08AFD244;
    }
L_08AFD244:
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[28];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AFD290;
      }
      goto L_08AFD258;
    }
L_08AFD258:
    ctx.gpr[4] = (16492u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFD28C;
      }
      goto L_08AFD274;
    }
L_08AFD274:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[28];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AFD290;
      }
      goto L_08AFD28C;
    }
L_08AFD28C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    goto L_08AFD290;
L_08AFD290:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AFD354u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AFC124;
L_08AFD354:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16448u << 16u);
      if (branch_taken) {
          goto L_08AFD430;
      }
      goto L_08AFD36C;
    }
L_08AFD36C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFD430;
      }
      goto L_08AFD380;
    }
L_08AFD380:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFD3A0;
      }
      goto L_08AFD398;
    }
L_08AFD398:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08AFD3BC;
      }
      goto L_08AFD3A0;
    }
L_08AFD3A0:
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08AFD3BC;
    }
    goto L_08AFD3B8;
L_08AFD3B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08AFD3BC;
L_08AFD3BC:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AFD3E0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AFD3E0u) goto L_08AFD3E0;
    return;
L_08AFD3E0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (15523u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AFD410u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AFD410u) goto L_08AFD410;
    return;
L_08AFD410:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_08AFD430;
L_08AFD430:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD614;
      }
      goto L_08AFD438;
    }
L_08AFD438:
    ctx.gpr[31] = (0x08AFD440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AFD440u) goto L_08AFD440;
    return;
L_08AFD440:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3840u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD614;
      }
      goto L_08AFD450;
    }
L_08AFD450:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16358u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (49472u << 16u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[14] = ctx.fpr[18] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AFD4D8;
      }
      goto L_08AFD4D0;
    }
L_08AFD4D0:
    ctx.gpr[31] = (0x08AFD4D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem) && ctx.pc == 0x08AFD4D8u) goto L_08AFD4D8;
    return;
L_08AFD4D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AFD550;
    }
    goto L_08AFD4E8;
L_08AFD4E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AFD4F8u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem) && ctx.pc == 0x08AFD4F8u) goto L_08AFD4F8;
    return;
L_08AFD4F8:
    ctx.gpr[4] = (16230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17008u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08AFD52Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem) && ctx.pc == 0x08AFD52Cu) goto L_08AFD52C;
    return;
L_08AFD52C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_08AFD5A0;
      }
      goto L_08AFD550;
    }
L_08AFD550:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2000)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2004)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2008)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[19] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AFD5A0;
L_08AFD5A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AFD5ACu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AFD5ACu) goto L_08AFD5AC;
    return;
L_08AFD5AC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-128));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08AFD5E4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AFD5E4u) goto L_08AFD5E4;
    return;
L_08AFD5E4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-128));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    goto L_08AFD614;
L_08AFD614:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 35 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08AFD1DC;
      }
      goto L_08AFD624;
    }
L_08AFD624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD718;
      }
      goto L_08AFD630;
    }
L_08AFD630:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AFD63Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08AFD63Cu) goto L_08AFD63C;
    return;
L_08AFD63C:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x08AFD648u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08AFD648u) goto L_08AFD648;
    return;
L_08AFD648:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08AFD654u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08AFD654u) goto L_08AFD654;
    return;
L_08AFD654:
    ctx.gpr[4] = (0u | 13u);
    ctx.gpr[31] = (0x08AFD660u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08AFD660u) goto L_08AFD660;
    return;
L_08AFD660:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AFD66Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08AFD66Cu) goto L_08AFD66C;
    return;
L_08AFD66C:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08AFD678u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08AFD678u) goto L_08AFD678;
    return;
L_08AFD678:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08AFD684u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08AFD684u) goto L_08AFD684;
    return;
L_08AFD684:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8764)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AFD694u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08AFD694u) goto L_08AFD694;
    return;
L_08AFD694:
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08AFD6ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-272));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem) && ctx.pc == 0x08AFD6ACu) goto L_08AFD6AC;
    return;
L_08AFD6AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD6D0;
      }
      goto L_08AFD6B4;
    }
L_08AFD6B4:
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x08AFD6C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12016));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 536u, 0x08AEE8E0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD6C8u) goto L_08AFD6C8;
    return;
L_08AFD6C8:
    ctx.gpr[31] = (0x08AFD6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD6D0u) goto L_08AFD6D0;
    return;
L_08AFD6D0:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AFD6DCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08AFD6DCu) goto L_08AFD6DC;
    return;
L_08AFD6DC:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x08AFD6E8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08AFD6E8u) goto L_08AFD6E8;
    return;
L_08AFD6E8:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AFD6F4u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08AFD6F4u) goto L_08AFD6F4;
    return;
L_08AFD6F4:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08AFD700u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08AFD700u) goto L_08AFD700;
    return;
L_08AFD700:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08AFD70Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08AFD70Cu) goto L_08AFD70C;
    return;
L_08AFD70C:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08AFD718u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08AFD718u) goto L_08AFD718;
    return;
L_08AFD718:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), 0u);
    goto L_08AFD720;
L_08AFD720:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD768:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD770:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD778:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD780:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD788:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFD7B8;
      }
      goto L_08AFD7AC;
    }
L_08AFD7AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFD7B8u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08AFD950;
L_08AFD7B8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AFD7C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AFD768;
L_08AFD7C8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-448));
    ctx.gpr[6] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD80C;
      }
      goto L_08AFD800;
    }
L_08AFD800:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFD840;
      }
      goto L_08AFD80C;
    }
L_08AFD80C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFD830;
      }
      goto L_08AFD818;
    }
L_08AFD818:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFD838;
      }
      goto L_08AFD824;
    }
L_08AFD824:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFD818;
      }
      goto L_08AFD830;
    }
L_08AFD830:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFD840;
      }
      goto L_08AFD838;
    }
L_08AFD838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD840;
      }
      goto L_08AFD840;
    }
L_08AFD840:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD854:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] & 65535u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08AFD87C;
L_08AFD87C:
    ctx.gpr[31] = (0x08AFD884u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AFD770;
L_08AFD884:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD8B8;
      }
      goto L_08AFD890;
    }
L_08AFD890:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AFD8B0;
      }
      goto L_08AFD8A4;
    }
L_08AFD8A4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
      if (branch_taken) {
          goto L_08AFD87C;
      }
      goto L_08AFD8B0;
    }
L_08AFD8B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD8BC;
      }
      goto L_08AFD8B8;
    }
L_08AFD8B8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AFD8BC;
L_08AFD8BC:
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
L_08AFD8D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    goto L_08AFD8F0;
L_08AFD8F0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD934;
      }
      goto L_08AFD8F8;
    }
L_08AFD8F8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD934;
      }
      goto L_08AFD904;
    }
L_08AFD904:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AFD910u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AFD788;
L_08AFD910:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD92C;
      }
      goto L_08AFD918;
    }
L_08AFD918:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (0u | 65408u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u | 63u);
        goto L_08AFD928;
    }
    goto L_08AFD928;
L_08AFD928:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AFD92C;
L_08AFD92C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AFD8F0;
      }
      goto L_08AFD934;
    }
L_08AFD934:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD948:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD950:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 97 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 224 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFD970;
      }
      goto L_08AFD960;
    }
L_08AFD960:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 123 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD988;
      }
      goto L_08AFD96C;
    }
L_08AFD96C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 224 ? 1u : 0u);
    goto L_08AFD970;
L_08AFD970:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFD990;
      }
      goto L_08AFD978;
    }
L_08AFD978:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 247u);
      if (branch_taken) {
          goto L_08AFD990;
      }
      goto L_08AFD980;
    }
L_08AFD980:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AFD990;
      }
      goto L_08AFD988;
    }
L_08AFD988:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AFD990;
L_08AFD990:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD998:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    goto L_08AFD9B0;
L_08AFD9B0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD9E8;
      }
      goto L_08AFD9B8;
    }
L_08AFD9B8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD9E8;
      }
      goto L_08AFD9C4;
    }
L_08AFD9C4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AFD9D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AFD788;
L_08AFD9D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD9E0;
      }
      goto L_08AFD9D8;
    }
L_08AFD9D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AFD9B0;
      }
      goto L_08AFD9E0;
    }
L_08AFD9E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AFD9EC;
      }
      goto L_08AFD9E8;
    }
L_08AFD9E8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AFD9EC;
L_08AFD9EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDA00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 11u);
    ctx.gpr[8] = (0u + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (0u | 2048u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFDA2Cu);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 517u, 0x0886A614u>(ctx, &aot_mem) && ctx.pc == 0x08AFDA2Cu) goto L_08AFDA2C;
    return;
L_08AFDA2C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDA48;
      }
      goto L_08AFDA40;
    }
L_08AFDA40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFDA50;
      }
      goto L_08AFDA48;
    }
L_08AFDA48:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    goto L_08AFDA50;
L_08AFDA50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDA60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFDA74u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08AFDAB4;
L_08AFDA74:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDA88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08AFDAA8;
      }
      goto L_08AFDA98;
    }
L_08AFDA98:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDAA8;
      }
      goto L_08AFDAA0;
    }
L_08AFDAA0:
    ctx.gpr[31] = (0x08AFDAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AFDAA8u) goto L_08AFDAA8;
    return;
L_08AFDAA8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDAB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (90u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20112), 0u);
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20112));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(1616));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFDB20u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 783u, 0x08B1B4DCu>(ctx, &aot_mem) && ctx.pc == 0x08AFDB20u) goto L_08AFDB20;
    return;
L_08AFDB20:
    ctx.gpr[31] = (0x08AFDB28u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.pc = 0x08B73184u;
    return;
L_08AFDB28:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), ctx.gpr[2]);
    ctx.gpr[31] = (0x08AFDB34u);
    ctx.gpr[4] = (0u | 640u);
    ctx.pc = 0x08B731D4u;
    return;
L_08AFDB34:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(312), ctx.gpr[2]);
    ctx.gpr[31] = (0x08AFDB40u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B731C4u;
    return;
L_08AFDB40:
    ctx.gpr[4] = (68u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(316), ctx.gpr[2]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16928));
    ctx.gpr[8] = (2224u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(312)));
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[16] + static_cast<std::uint32_t>(296));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 640u);
    ctx.gpr[31] = (0x08AFDB70u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-9728));
    ctx.pc = 0x08B7315Cu;
    return;
L_08AFDB70:
    ctx.gpr[5] = (89u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17956));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(316)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 512u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08AFDB9Cu);
    ctx.gpr[10] = (0u | 0u);
    ctx.pc = 0x08B731DCu;
    return;
L_08AFDB9C:
    ctx.gpr[4] = (68u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16852), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDBC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFDBD4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 686u, 0x08B63230u>(ctx, &aot_mem) && ctx.pc == 0x08AFDBD4u) goto L_08AFDBD4;
    return;
L_08AFDBD4:
    ctx.gpr[31] = (0x08AFDBDCu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.pc = 0x08B73174u;
    return;
L_08AFDBDC:
    ctx.gpr[31] = (0x08AFDBE4u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.pc = 0x08B73144u;
    return;
L_08AFDBE4:
    ctx.gpr[31] = (0x08AFDBECu);
    // nop
    ctx.pc = 0x08B731A4u;
    return;
L_08AFDBEC:
    ctx.gpr[31] = (0x08AFDBF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B7351Cu;
    return;
L_08AFDBF4:
    ctx.gpr[31] = (0x08AFDBFCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08B7351Cu;
    return;
L_08AFDBFC:
    ctx.gpr[31] = (0x08AFDC04u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.pc = 0x08B7351Cu;
    return;
L_08AFDC04:
    ctx.gpr[31] = (0x08AFDC0Cu);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B7322Cu;
    return;
L_08AFDC0C:
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20112));
    ctx.gpr[31] = (0x08AFDC1Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 808u, 0x08B1B654u>(ctx, &aot_mem) && ctx.pc == 0x08AFDC1Cu) goto L_08AFDC1C;
    return;
L_08AFDC1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDC2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFDC58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 248u, 0x08A19F84u>(ctx, &aot_mem) && ctx.pc == 0x08AFDC58u) goto L_08AFDC58;
    return;
L_08AFDC58:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AFDC64u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 753u, 0x08AAF6B4u>(ctx, &aot_mem) && ctx.pc == 0x08AFDC64u) goto L_08AFDC64;
    return;
L_08AFDC64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AFDCA8;
      }
      goto L_08AFDC70;
    }
L_08AFDC70:
    ctx.gpr[31] = (0x08AFDC78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 41u, 0x088E1B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFDC78u) goto L_08AFDC78;
    return;
L_08AFDC78:
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDC9C;
      }
      goto L_08AFDC84;
    }
L_08AFDC84:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDC9C;
      }
      goto L_08AFDC8C;
    }
L_08AFDC8C:
    ctx.gpr[31] = (0x08AFDC94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 180u, 0x08A115C8u>(ctx, &aot_mem) && ctx.pc == 0x08AFDC94u) goto L_08AFDC94;
    return;
L_08AFDC94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFDCA0;
      }
      goto L_08AFDC9C;
    }
L_08AFDC9C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AFDCA0;
L_08AFDCA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDCCC;
      }
      goto L_08AFDCA8;
    }
L_08AFDCA8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDCC8;
      }
      goto L_08AFDCB0;
    }
L_08AFDCB0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDCC8;
      }
      goto L_08AFDCB8;
    }
L_08AFDCB8:
    ctx.gpr[31] = (0x08AFDCC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 180u, 0x08A115C8u>(ctx, &aot_mem) && ctx.pc == 0x08AFDCC0u) goto L_08AFDCC0;
    return;
L_08AFDCC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFDCCC;
      }
      goto L_08AFDCC8;
    }
L_08AFDCC8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AFDCCC;
L_08AFDCCC:
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
L_08AFDCE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2080));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2068), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1636)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2064), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1632)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2052), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2056), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2048), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2060), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2072), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFDD34u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 519u, 0x0886A630u>(ctx, &aot_mem) && ctx.pc == 0x08AFDD34u) goto L_08AFDD34;
    return;
L_08AFDD34:
    ctx.gpr[4] = (ctx.gpr[3] ^ ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[2] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDD5C;
      }
      goto L_08AFDD54;
    }
L_08AFDD54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFDDFC;
      }
      goto L_08AFDD5C;
    }
L_08AFDD5C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AFDD6Cu);
    ctx.gpr[6] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 517u, 0x0886A614u>(ctx, &aot_mem) && ctx.pc == 0x08AFDD6Cu) goto L_08AFDD6C;
    return;
L_08AFDD6C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2048 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDD80;
      }
      goto L_08AFDD78;
    }
L_08AFDD78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFDDFC;
      }
      goto L_08AFDD80;
    }
L_08AFDD80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AFDD90u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B73154u;
    return;
L_08AFDD90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDDA0;
      }
      goto L_08AFDD98;
    }
L_08AFDD98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFDDFC;
      }
      goto L_08AFDDA0;
    }
L_08AFDDA0:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AFDDACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B7317Cu;
    return;
L_08AFDDAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDDBC;
      }
      goto L_08AFDDB4;
    }
L_08AFDDB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFDDFC;
      }
      goto L_08AFDDBC;
    }
L_08AFDDBC:
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFDDD0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 519u, 0x0886A630u>(ctx, &aot_mem) && ctx.pc == 0x08AFDDD0u) goto L_08AFDDD0;
    return;
L_08AFDDD0:
    ctx.gpr[4] = (ctx.gpr[3] ^ ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[2] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDDF8;
      }
      goto L_08AFDDF0;
    }
L_08AFDDF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFDDFC;
      }
      goto L_08AFDDF8;
    }
L_08AFDDF8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AFDDFC;
L_08AFDDFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2048)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2052)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2056)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2060)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2064)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2072)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2080));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDE20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (90u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20100)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7516));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFDE58u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B73234u;
    return;
L_08AFDE58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7520)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20100), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDE84;
      }
      goto L_08AFDE74;
    }
L_08AFDE74:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AFDE88;
      }
      goto L_08AFDE84;
    }
L_08AFDE84:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AFDE88;
L_08AFDE88:
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
L_08AFDEA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20104), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20108), ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(296));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFDF04u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 501u, 0x0886A540u>(ctx, &aot_mem) && ctx.pc == 0x08AFDF04u) goto L_08AFDF04;
    return;
L_08AFDF04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AFDF14;
      }
      goto L_08AFDF0C;
    }
L_08AFDF0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE444;
      }
      goto L_08AFDF14;
    }
L_08AFDF14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AFDF24u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 502u, 0x0886A548u>(ctx, &aot_mem) && ctx.pc == 0x08AFDF24u) goto L_08AFDF24;
    return;
L_08AFDF24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AFDF34;
      }
      goto L_08AFDF2C;
    }
L_08AFDF2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE444;
      }
      goto L_08AFDF34;
    }
L_08AFDF34:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(332));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AFDF50u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08AFDCE8;
L_08AFDF50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDF60;
      }
      goto L_08AFDF58;
    }
L_08AFDF58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE444;
      }
      goto L_08AFDF60;
    }
L_08AFDF60:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AFDF70u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B73164u;
    return;
L_08AFDF70:
    ctx.gpr[20] = (68u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFDF88;
      }
      goto L_08AFDF80;
    }
L_08AFDF80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16920)));
      if (branch_taken) {
          goto L_08AFE414;
      }
      goto L_08AFDF88;
    }
L_08AFDF88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDFB4;
      }
      goto L_08AFDF94;
    }
L_08AFDF94:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AFDFA4u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B73164u;
    return;
L_08AFDFA4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFDFB4;
      }
      goto L_08AFDFAC;
    }
L_08AFDFAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16920)));
      if (branch_taken) {
          goto L_08AFE414;
      }
      goto L_08AFDFB4;
    }
L_08AFDFB4:
    ctx.gpr[31] = (0x08AFDFBCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B731ACu;
    return;
L_08AFDFBC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16920), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFDFD0;
      }
      goto L_08AFDFC8;
    }
L_08AFDFC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE414;
      }
      goto L_08AFDFD0;
    }
L_08AFDFD0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(168));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AFDFE4u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B7314Cu;
    return;
L_08AFDFE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFDFF4;
      }
      goto L_08AFDFEC;
    }
L_08AFDFEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16920)));
      if (branch_taken) {
          goto L_08AFE414;
      }
      goto L_08AFDFF4;
    }
L_08AFDFF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
        goto L_08AFE04C;
    }
    goto L_08AFE000;
L_08AFE000:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(324));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(328));
    ctx.gpr[31] = (0x08AFE010u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B731ECu;
    return;
L_08AFE010:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFE020;
      }
      goto L_08AFE018;
    }
L_08AFE018:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16920)));
      if (branch_taken) {
          goto L_08AFE414;
      }
      goto L_08AFE020;
    }
L_08AFE020:
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(17984));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(232));
    ctx.gpr[31] = (0x08AFE038u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B7314Cu;
    return;
L_08AFE038:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFE048;
      }
      goto L_08AFE040;
    }
L_08AFE040:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16920)));
      if (branch_taken) {
          goto L_08AFE414;
      }
      goto L_08AFE048;
    }
L_08AFE048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    goto L_08AFE04C;
L_08AFE04C:
    ctx.gpr[5] = (68u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16904), ctx.gpr[4]);
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16912), ctx.gpr[6]);
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16908), ctx.gpr[21]);
    ctx.gpr[5] = (68u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(232));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16916), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AFE08Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B7322Cu;
    return;
L_08AFE08C:
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(352));
    ctx.gpr[5] = (9u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AFE0A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32768));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 225u, 0x08A19C80u>(ctx, &aot_mem) && ctx.pc == 0x08AFE0A4u) goto L_08AFE0A4;
    return;
L_08AFE0A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AFE0B4;
      }
      goto L_08AFE0AC;
    }
L_08AFE0AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE408;
      }
      goto L_08AFE0B4;
    }
L_08AFE0B4:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE100;
      }
      goto L_08AFE0C0;
    }
L_08AFE0C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8193 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE0D8;
      }
      goto L_08AFE0D0;
    }
L_08AFE0D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE3F0;
      }
      goto L_08AFE0D8;
    }
L_08AFE0D8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(416));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AFE0F0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 13u, 0x088E18B4u>(ctx, &aot_mem) && ctx.pc == 0x08AFE0F0u) goto L_08AFE0F0;
    return;
L_08AFE0F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AFE100;
      }
      goto L_08AFE0F8;
    }
L_08AFE0F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFE3F0;
      }
      goto L_08AFE100;
    }
L_08AFE100:
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    ctx.gpr[22] = (ctx.gpr[16] + ctx.gpr[22]);
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AFE11Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 735u, 0x08AAF568u>(ctx, &aot_mem) && ctx.pc == 0x08AFE11Cu) goto L_08AFE11C;
    return;
L_08AFE11C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AFE12C;
      }
      goto L_08AFE124;
    }
L_08AFE124:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE3E4;
      }
      goto L_08AFE12C;
    }
L_08AFE12C:
    ctx.gpr[5] = (68u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[30] = (ctx.gpr[5] + static_cast<std::uint32_t>(16864));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[16] + ctx.gpr[30]);
      if (branch_taken) {
          goto L_08AFE16C;
      }
      goto L_08AFE140;
    }
L_08AFE140:
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(416));
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AFE15Cu);
    ctx.gpr[7] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 176u, 0x08A1158Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFE15Cu) goto L_08AFE15C;
    return;
L_08AFE15C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AFE190;
      }
      goto L_08AFE164;
    }
L_08AFE164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE3DC;
      }
      goto L_08AFE16C;
    }
L_08AFE16C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AFE180u);
    ctx.gpr[7] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 176u, 0x08A1158Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFE180u) goto L_08AFE180;
    return;
L_08AFE180:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AFE190;
      }
      goto L_08AFE188;
    }
L_08AFE188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE3DC;
      }
      goto L_08AFE190;
    }
L_08AFE190:
    ctx.gpr[31] = (0x08AFE198u);
    // nop
    ctx.pc = 0x08B7347Cu;
    return;
L_08AFE198:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AFE1A4u);
    ctx.gpr[5] = (0u | 19u);
    ctx.pc = 0x08B734ECu;
    return;
L_08AFE1A4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (2210u << 16u);
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30504));
    ctx.gpr[31] = (0x08AFE1C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24560));
    ctx.pc = 0x08B734B4u;
    return;
L_08AFE1C8:
    ctx.gpr[5] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(1640));
    ctx.gpr[6] = (0u | 18u);
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08AFE1ECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2260));
    ctx.pc = 0x08B734B4u;
    return;
L_08AFE1EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE220;
      }
      goto L_08AFE1FC;
    }
L_08AFE1FC:
    ctx.gpr[5] = (2190u << 16u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(1656));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08AFE21Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7072));
    ctx.pc = 0x08B734B4u;
    return;
L_08AFE21C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    goto L_08AFE220;
L_08AFE220:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(332)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFE238u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 519u, 0x0886A630u>(ctx, &aot_mem) && ctx.pc == 0x08AFE238u) goto L_08AFE238;
    return;
L_08AFE238:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1636)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1632)));
    ctx.gpr[5] = (ctx.gpr[3] ^ ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFE268;
      }
      goto L_08AFE260;
    }
L_08AFE260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE38C;
      }
      goto L_08AFE268;
    }
L_08AFE268:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE280;
      }
      goto L_08AFE270;
    }
L_08AFE270:
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(416));
    ctx.gpr[31] = (0x08AFE280u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 24u, 0x088E1994u>(ctx, &aot_mem) && ctx.pc == 0x08AFE280u) goto L_08AFE280;
    return;
L_08AFE280:
    ctx.gpr[31] = (0x08AFE288u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 229u, 0x08A19D68u>(ctx, &aot_mem) && ctx.pc == 0x08AFE288u) goto L_08AFE288;
    return;
L_08AFE288:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(320)));
    ctx.gpr[31] = (0x08AFE294u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 737u, 0x08AAF5B8u>(ctx, &aot_mem) && ctx.pc == 0x08AFE294u) goto L_08AFE294;
    return;
L_08AFE294:
    ctx.gpr[31] = (0x08AFE29Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 177u, 0x08A115A0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE29Cu) goto L_08AFE29C;
    return;
L_08AFE29C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE2B8;
      }
      goto L_08AFE2A8;
    }
L_08AFE2A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 40u);
    ctx.gpr[31] = (0x08AFE2B8u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.pc = 0x08B73464u;
    return;
L_08AFE2B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 40u);
    ctx.gpr[31] = (0x08AFE2C8u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.pc = 0x08B73464u;
    return;
L_08AFE2C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08AFE2D8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.pc = 0x08B73464u;
    return;
L_08AFE2D8:
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(16904));
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AFE2FCu);
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    goto L_08AFE484;
L_08AFE2FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFE358;
      }
      goto L_08AFE304;
    }
L_08AFE304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AFE318;
      }
      goto L_08AFE310;
    }
L_08AFE310:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFE38C;
      }
      goto L_08AFE318;
    }
L_08AFE318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AFE344;
      }
      goto L_08AFE324;
    }
L_08AFE324:
    ctx.gpr[31] = (0x08AFE32Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B7318Cu;
    return;
L_08AFE32C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE33C;
      }
      goto L_08AFE334;
    }
L_08AFE334:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFE38C;
      }
      goto L_08AFE33C;
    }
L_08AFE33C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08AFE358;
      }
      goto L_08AFE344;
    }
L_08AFE344:
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFE358;
      }
      goto L_08AFE350;
    }
L_08AFE350:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFE38C;
      }
      goto L_08AFE358;
    }
L_08AFE358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE370;
      }
      goto L_08AFE364;
    }
L_08AFE364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08AFE370u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B7346Cu;
    return;
L_08AFE370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AFE37Cu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B7346Cu;
    return;
L_08AFE37C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08AFE388u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B7346Cu;
    return;
L_08AFE388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFE38C;
L_08AFE38C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE3A0;
      }
      goto L_08AFE394;
    }
L_08AFE394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08AFE3A0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B7346Cu;
    return;
L_08AFE3A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AFE3ACu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B7346Cu;
    return;
L_08AFE3AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08AFE3B8u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B7346Cu;
    return;
L_08AFE3B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE3CC;
      }
      goto L_08AFE3C4;
    }
L_08AFE3C4:
    ctx.gpr[31] = (0x08AFE3CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08B7349Cu;
    return;
L_08AFE3CC:
    ctx.gpr[31] = (0x08AFE3D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B7349Cu;
    return;
L_08AFE3D4:
    ctx.gpr[31] = (0x08AFE3DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.pc = 0x08B7349Cu;
    return;
L_08AFE3DC:
    ctx.gpr[31] = (0x08AFE3E4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 179u, 0x08A115C0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE3E4u) goto L_08AFE3E4;
    return;
L_08AFE3E4:
    ctx.gpr[31] = (0x08AFE3ECu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 739u, 0x08AAF5D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFE3ECu) goto L_08AFE3EC;
    return;
L_08AFE3EC:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFE3F0;
L_08AFE3F0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE408;
      }
      goto L_08AFE3F8;
    }
L_08AFE3F8:
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(416));
    ctx.gpr[31] = (0x08AFE408u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 26u, 0x088E19ECu>(ctx, &aot_mem) && ctx.pc == 0x08AFE408u) goto L_08AFE408;
    return;
L_08AFE408:
    ctx.gpr[31] = (0x08AFE410u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 234u, 0x08A19DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AFE410u) goto L_08AFE410;
    return;
L_08AFE410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16920)));
    goto L_08AFE414;
L_08AFE414:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AFE420u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B731CCu;
    return;
L_08AFE420:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (0x08AFE42Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B7316Cu;
    return;
L_08AFE42C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE444;
      }
      goto L_08AFE438;
    }
L_08AFE438:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08AFE444u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B7316Cu;
    return;
L_08AFE444:
    ctx.gpr[31] = (0x08AFE44Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 514u, 0x0886A5E0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE44Cu) goto L_08AFE44C;
    return;
L_08AFE44C:
    ctx.gpr[31] = (0x08AFE454u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 516u, 0x0886A60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFE454u) goto L_08AFE454;
    return;
L_08AFE454:
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
L_08AFE484:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (90u << 16u);
    ctx.gpr[11] = (ctx.gpr[4] + ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    ctx.gpr[30] = (90u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    goto L_08AFE4EC;
L_08AFE4EC:
    ctx.gpr[31] = (0x08AFE4F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x08AFE4F4u) goto L_08AFE4F4;
    return;
L_08AFE4F4:
    ctx.gpr[31] = (0x08AFE4FCu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B73594u;
    return;
L_08AFE4FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE520;
      }
      goto L_08AFE508;
    }
L_08AFE508:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFE518u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08AFDC2C;
L_08AFE518:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFE580;
      }
      goto L_08AFE520;
    }
L_08AFE520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE550;
      }
      goto L_08AFE530;
    }
L_08AFE530:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFE53Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08AFDE20;
L_08AFE53C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE580;
      }
      goto L_08AFE548;
    }
L_08AFE548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE7BC;
      }
      goto L_08AFE550;
    }
L_08AFE550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20108)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFE580;
      }
      goto L_08AFE560;
    }
L_08AFE560:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AFE574;
      }
      goto L_08AFE568;
    }
L_08AFE568:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(20108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFE580;
      }
      goto L_08AFE574;
    }
L_08AFE574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20104), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AFE580;
L_08AFE580:
    ctx.gpr[31] = (0x08AFE588u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 752u, 0x08AAF6A0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE588u) goto L_08AFE588;
    return;
L_08AFE588:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AFE5AC;
      }
      goto L_08AFE590;
    }
L_08AFE590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08AFE59Cu);
    ctx.gpr[16] = (0u | 640u);
    ctx.pc = 0x08B731BCu;
    return;
L_08AFE59C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AFE5AC;
      }
      goto L_08AFE5A4;
    }
L_08AFE5A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFE7BC;
      }
      goto L_08AFE5AC;
    }
L_08AFE5AC:
    ctx.gpr[31] = (0x08AFE5B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 738u, 0x08AAF5CCu>(ctx, &aot_mem) && ctx.pc == 0x08AFE5B4u) goto L_08AFE5B4;
    return;
L_08AFE5B4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AFE5C4;
      }
      goto L_08AFE5BC;
    }
L_08AFE5BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFE874;
      }
      goto L_08AFE5C4;
    }
L_08AFE5C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AFE678;
      }
      goto L_08AFE5D0;
    }
L_08AFE5D0:
    ctx.gpr[31] = (0x08AFE5D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 41u, 0x088E1B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFE5D8u) goto L_08AFE5D8;
    return;
L_08AFE5D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AFE678;
      }
      goto L_08AFE5E0;
    }
L_08AFE5E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AFE5F4u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.pc = 0x08B731E4u;
    return;
L_08AFE5F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE658;
      }
      goto L_08AFE5FC;
    }
L_08AFE5FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AFE608u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 29u, 0x088E1A20u>(ctx, &aot_mem) && ctx.pc == 0x08AFE608u) goto L_08AFE608;
    return;
L_08AFE608:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AFE61Cu);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.pc = 0x08B7319Cu;
    return;
L_08AFE61C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE630;
      }
      goto L_08AFE628;
    }
L_08AFE628:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE874;
      }
      goto L_08AFE630;
    }
L_08AFE630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AFE640u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 34u, 0x088E1A7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFE640u) goto L_08AFE640;
    return;
L_08AFE640:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE650;
      }
      goto L_08AFE648;
    }
L_08AFE648:
    ctx.gpr[31] = (0x08AFE650u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 38u, 0x088E1ACCu>(ctx, &aot_mem) && ctx.pc == 0x08AFE650u) goto L_08AFE650;
    return;
L_08AFE650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFE690;
      }
      goto L_08AFE658;
    }
L_08AFE658:
    ctx.gpr[31] = (0x08AFE660u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 753u, 0x08AAF6B4u>(ctx, &aot_mem) && ctx.pc == 0x08AFE660u) goto L_08AFE660;
    return;
L_08AFE660:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE690;
      }
      goto L_08AFE668;
    }
L_08AFE668:
    ctx.gpr[31] = (0x08AFE670u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 741u, 0x08AAF5F8u>(ctx, &aot_mem) && ctx.pc == 0x08AFE670u) goto L_08AFE670;
    return;
L_08AFE670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE690;
      }
      goto L_08AFE678;
    }
L_08AFE678:
    ctx.gpr[31] = (0x08AFE680u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 753u, 0x08AAF6B4u>(ctx, &aot_mem) && ctx.pc == 0x08AFE680u) goto L_08AFE680;
    return;
L_08AFE680:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE690;
      }
      goto L_08AFE688;
    }
L_08AFE688:
    ctx.gpr[31] = (0x08AFE690u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 741u, 0x08AAF5F8u>(ctx, &aot_mem) && ctx.pc == 0x08AFE690u) goto L_08AFE690;
    return;
L_08AFE690:
    ctx.gpr[31] = (0x08AFE698u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 248u, 0x08A19F84u>(ctx, &aot_mem) && ctx.pc == 0x08AFE698u) goto L_08AFE698;
    return;
L_08AFE698:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AFE77C;
      }
      goto L_08AFE6A0;
    }
L_08AFE6A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AFE6B4u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B731F4u;
    return;
L_08AFE6B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE744;
      }
      goto L_08AFE6C0;
    }
L_08AFE6C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFE6CCu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 238u, 0x08A19E38u>(ctx, &aot_mem) && ctx.pc == 0x08AFE6CCu) goto L_08AFE6CC;
    return;
L_08AFE6CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[6] = (0u | 512u);
    ctx.gpr[31] = (0x08AFE6ECu);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B7313Cu;
    return;
L_08AFE6EC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE700;
      }
      goto L_08AFE6F8;
    }
L_08AFE6F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE874;
      }
      goto L_08AFE700;
    }
L_08AFE700:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFE710u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 185u, 0x08A1161Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFE710u) goto L_08AFE710;
    return;
L_08AFE710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AFE794;
      }
      goto L_08AFE71C;
    }
L_08AFE71C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08AFE728u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 188u, 0x08A11668u>(ctx, &aot_mem) && ctx.pc == 0x08AFE728u) goto L_08AFE728;
    return;
L_08AFE728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFE734u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 243u, 0x08A19EA0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE734u) goto L_08AFE734;
    return;
L_08AFE734:
    ctx.gpr[31] = (0x08AFE73Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 245u, 0x08A19EFCu>(ctx, &aot_mem) && ctx.pc == 0x08AFE73Cu) goto L_08AFE73C;
    return;
L_08AFE73C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE794;
      }
      goto L_08AFE744;
    }
L_08AFE744:
    ctx.gpr[5] = (32866u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32767));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFE75C;
      }
      goto L_08AFE754;
    }
L_08AFE754:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFE874;
      }
      goto L_08AFE75C;
    }
L_08AFE75C:
    ctx.gpr[31] = (0x08AFE764u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 753u, 0x08AAF6B4u>(ctx, &aot_mem) && ctx.pc == 0x08AFE764u) goto L_08AFE764;
    return;
L_08AFE764:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE794;
      }
      goto L_08AFE76C;
    }
L_08AFE76C:
    ctx.gpr[31] = (0x08AFE774u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 741u, 0x08AAF5F8u>(ctx, &aot_mem) && ctx.pc == 0x08AFE774u) goto L_08AFE774;
    return;
L_08AFE774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE794;
      }
      goto L_08AFE77C;
    }
L_08AFE77C:
    ctx.gpr[31] = (0x08AFE784u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 753u, 0x08AAF6B4u>(ctx, &aot_mem) && ctx.pc == 0x08AFE784u) goto L_08AFE784;
    return;
L_08AFE784:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE794;
      }
      goto L_08AFE78C;
    }
L_08AFE78C:
    ctx.gpr[31] = (0x08AFE794u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 741u, 0x08AAF5F8u>(ctx, &aot_mem) && ctx.pc == 0x08AFE794u) goto L_08AFE794;
    return;
L_08AFE794:
    ctx.gpr[31] = (0x08AFE79Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 753u, 0x08AAF6B4u>(ctx, &aot_mem) && ctx.pc == 0x08AFE79Cu) goto L_08AFE79C;
    return;
L_08AFE79C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE7AC;
      }
      goto L_08AFE7A4;
    }
L_08AFE7A4:
    ctx.gpr[31] = (0x08AFE7ACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 741u, 0x08AAF5F8u>(ctx, &aot_mem) && ctx.pc == 0x08AFE7ACu) goto L_08AFE7AC;
    return;
L_08AFE7AC:
    ctx.gpr[31] = (0x08AFE7B4u);
    // nop
    ctx.pc = 0x08B7348Cu;
    return;
L_08AFE7B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE4EC;
      }
      goto L_08AFE7BC;
    }
L_08AFE7BC:
    ctx.gpr[31] = (0x08AFE7C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 180u, 0x08A115C8u>(ctx, &aot_mem) && ctx.pc == 0x08AFE7C4u) goto L_08AFE7C4;
    return;
L_08AFE7C4:
    ctx.gpr[31] = (0x08AFE7CCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 758u, 0x08AAF6FCu>(ctx, &aot_mem) && ctx.pc == 0x08AFE7CCu) goto L_08AFE7CC;
    return;
L_08AFE7CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE7E0;
      }
      goto L_08AFE7D8;
    }
L_08AFE7D8:
    ctx.gpr[31] = (0x08AFE7E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 43u, 0x088E1B60u>(ctx, &aot_mem) && ctx.pc == 0x08AFE7E0u) goto L_08AFE7E0;
    return;
L_08AFE7E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AFE7E4;
L_08AFE7E4:
    ctx.gpr[31] = (0x08AFE7ECu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 238u, 0x08A19E38u>(ctx, &aot_mem) && ctx.pc == 0x08AFE7ECu) goto L_08AFE7EC;
    return;
L_08AFE7EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AFE864;
      }
      goto L_08AFE7F4;
    }
L_08AFE7F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[31] = (0x08AFE810u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B73194u;
    return;
L_08AFE810:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE824;
      }
      goto L_08AFE81C;
    }
L_08AFE81C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFE874;
      }
      goto L_08AFE824;
    }
L_08AFE824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AFE850;
      }
      goto L_08AFE830;
    }
L_08AFE830:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08AFE83Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 188u, 0x08A11668u>(ctx, &aot_mem) && ctx.pc == 0x08AFE83Cu) goto L_08AFE83C;
    return;
L_08AFE83C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFE848u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 243u, 0x08A19EA0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE848u) goto L_08AFE848;
    return;
L_08AFE848:
    ctx.gpr[31] = (0x08AFE850u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 245u, 0x08A19EFCu>(ctx, &aot_mem) && ctx.pc == 0x08AFE850u) goto L_08AFE850;
    return;
L_08AFE850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFE85Cu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 252u, 0x08A19FE4u>(ctx, &aot_mem) && ctx.pc == 0x08AFE85Cu) goto L_08AFE85C;
    return;
L_08AFE85C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE89C;
      }
      goto L_08AFE864;
    }
L_08AFE864:
    ctx.gpr[31] = (0x08AFE86Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 288u, 0x08A1A1F8u>(ctx, &aot_mem) && ctx.pc == 0x08AFE86Cu) goto L_08AFE86C;
    return;
L_08AFE86C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFE7E4;
      }
      goto L_08AFE874;
    }
L_08AFE874:
    ctx.gpr[31] = (0x08AFE87Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 758u, 0x08AAF6FCu>(ctx, &aot_mem) && ctx.pc == 0x08AFE87Cu) goto L_08AFE87C;
    return;
L_08AFE87C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE890;
      }
      goto L_08AFE888;
    }
L_08AFE888:
    ctx.gpr[31] = (0x08AFE890u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 43u, 0x088E1B60u>(ctx, &aot_mem) && ctx.pc == 0x08AFE890u) goto L_08AFE890;
    return;
L_08AFE890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFE89Cu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 252u, 0x08A19FE4u>(ctx, &aot_mem) && ctx.pc == 0x08AFE89Cu) goto L_08AFE89C;
    return;
L_08AFE89C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE8D0:
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
L_08AFE8E8:
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
L_08AFE908:
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
L_08AFE928:
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
L_08AFE950:
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
L_08AFE96C:
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
L_08AFE980:
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
L_08AFE998:
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
L_08AFE9B0:
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
L_08AFE9CC:
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
L_08AFE9E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFEA08;
      }
      goto L_08AFEA00;
    }
L_08AFEA00:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AFEA08;
      }
      goto L_08AFEA08;
    }
L_08AFEA08:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEA10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFEA30;
      }
      goto L_08AFEA28;
    }
L_08AFEA28:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AFEA30;
      }
      goto L_08AFEA30;
    }
L_08AFEA30:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEA38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEA80;
      }
      goto L_08AFEA58;
    }
L_08AFEA58:
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[31] = (0x08AFEA64u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 510u, 0x08A360ECu>(ctx, &aot_mem) && ctx.pc == 0x08AFEA64u) goto L_08AFEA64;
    return;
L_08AFEA64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AFEA80u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AFEA80u) goto L_08AFEA80;
    return;
L_08AFEA80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEAFC;
      }
      goto L_08AFEA94;
    }
L_08AFEA94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFEAA0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFEAA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEAE8;
      }
      goto L_08AFEAA8;
    }
L_08AFEAA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFEAB4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFEAB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[31] = (0x08AFEAC4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 510u, 0x08A360ECu>(ctx, &aot_mem) && ctx.pc == 0x08AFEAC4u) goto L_08AFEAC4;
    return;
L_08AFEAC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFEAD0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFEAD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AFEAE8u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AFEAE8u) goto L_08AFEAE8;
    return;
L_08AFEAE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEA94;
      }
      goto L_08AFEAFC;
    }
L_08AFEAFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFEB08u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFEB08u) goto L_08AFEB08;
    return;
L_08AFEB08:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEB2C;
      }
      goto L_08AFEB10;
    }
L_08AFEB10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AFEB2Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AFEB2Cu) goto L_08AFEB2C;
    return;
L_08AFEB2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEB40:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEB48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFEB5Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08AFEBA4;
L_08AFEB5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEB7C;
      }
      goto L_08AFEB64;
    }
L_08AFEB64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFEB8C;
      }
      goto L_08AFEB74;
    }
L_08AFEB74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
      if (branch_taken) {
          goto L_08AFEB84;
      }
      goto L_08AFEB7C;
    }
L_08AFEB7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFEB94;
      }
      goto L_08AFEB84;
    }
L_08AFEB84:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEB90;
      }
      goto L_08AFEB8C;
    }
L_08AFEB8C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AFEB90;
L_08AFEB90:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    goto L_08AFEB94;
L_08AFEB94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEBA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEBBC;
      }
      goto L_08AFEBB4;
    }
L_08AFEBB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFEBD8;
      }
      goto L_08AFEBBC;
    }
L_08AFEBBC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AFEBC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 489u, 0x08B727ECu>(ctx, &aot_mem) && ctx.pc == 0x08AFEBC8u) goto L_08AFEBC8;
    return;
L_08AFEBC8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 41 ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[4] & ctx.gpr[2]);
    goto L_08AFEBD8;
L_08AFEBD8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEBE4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEBF0:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEC14:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEC38:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEC60:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEC8C:
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
L_08AFECB8:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFECC4:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08AFECD8;
    }
    goto L_08AFECD8;
L_08AFECD8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFECE0:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08AFECF4;
    }
    goto L_08AFECF4;
L_08AFECF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFECFC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFED10:
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
L_08AFED20:
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
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFED48:
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
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFED64:
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
L_08AFED74:
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
L_08AFED90:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFED98:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEDA0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEDA8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEDB0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEDB8:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFEE00;
      }
      goto L_08AFEDEC;
    }
L_08AFEDEC:
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AFEE1C;
      }
      goto L_08AFEE00;
    }
L_08AFEE00:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[2] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    goto L_08AFEE1C;
L_08AFEE1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEE24:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEE2C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEE34:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEE3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFEE54u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AFEE54u) goto L_08AFEE54;
    return;
L_08AFEE54:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEE60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFEE84u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x08AFEE84u) goto L_08AFEE84;
    return;
L_08AFEE84:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEE90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
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
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
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
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEF10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(636)));
    ctx.gpr[2] = (ctx.gpr[4] & ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEF20:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEF48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08AFEF68;
      }
      goto L_08AFEF58;
    }
L_08AFEF58:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEF68;
      }
      goto L_08AFEF60;
    }
L_08AFEF60:
    ctx.gpr[31] = (0x08AFEF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AFEF68u) goto L_08AFEF68;
    return;
L_08AFEF68:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEF74:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEF7C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(904));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEF90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] << 2u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(904)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AFEFBC;
      }
      goto L_08AFEFB4;
    }
L_08AFEFB4:
    ctx.gpr[31] = (0x08AFEFBCu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(904));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08AFEFBCu) goto L_08AFEFBC;
    return;
L_08AFEFBC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(904), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AFEFD8;
      }
      goto L_08AFEFC4;
    }
L_08AFEFC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(904)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEFD8;
      }
      goto L_08AFEFD0;
    }
L_08AFEFD0:
    ctx.gpr[31] = (0x08AFEFD8u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(904));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08AFEFD8u) goto L_08AFEFD8;
    return;
L_08AFEFD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEFEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFF010u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 542u, 0x08B02090u>(ctx, &aot_mem) && ctx.pc == 0x08AFF010u) goto L_08AFF010;
    return;
L_08AFF010:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
      if (branch_taken) {
          goto L_08AFF0A8;
      }
      goto L_08AFF020;
    }
L_08AFF020:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 11u);
      if (branch_taken) {
          goto L_08AFF030;
      }
      goto L_08AFF028;
    }
L_08AFF028:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFF06C;
      }
      goto L_08AFF030;
    }
L_08AFF030:
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_08AFF048;
    }
    goto L_08AFF038;
L_08AFF038:
    ctx.gpr[31] = (0x08AFF040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08AFF040u) goto L_08AFF040;
    return;
L_08AFF040:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08AFF048;
L_08AFF048:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AFF058u);
    ctx.gpr[7] = (0u | 78u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08AFF058u) goto L_08AFF058;
    return;
L_08AFF058:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFF064u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08AFF064u) goto L_08AFF064;
    return;
L_08AFF064:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF28C;
      }
      goto L_08AFF06C;
    }
L_08AFF06C:
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_08AFF084;
    }
    goto L_08AFF074;
L_08AFF074:
    ctx.gpr[31] = (0x08AFF07Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08AFF07Cu) goto L_08AFF07C;
    return;
L_08AFF07C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08AFF084;
L_08AFF084:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AFF094u);
    ctx.gpr[7] = (0u | 79u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08AFF094u) goto L_08AFF094;
    return;
L_08AFF094:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFF0A0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08AFF0A0u) goto L_08AFF0A0;
    return;
L_08AFF0A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF28C;
      }
      goto L_08AFF0A8;
    }
L_08AFF0A8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08AFF0C4;
      }
      goto L_08AFF0B8;
    }
L_08AFF0B8:
    ctx.gpr[7] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AFF1AC;
      }
      goto L_08AFF0C4;
    }
L_08AFF0C4:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFF124;
      }
      goto L_08AFF0CC;
    }
L_08AFF0CC:
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
        goto L_08AFF0E4;
    }
    goto L_08AFF0D4;
L_08AFF0D4:
    ctx.gpr[31] = (0x08AFF0DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08AFF0DCu) goto L_08AFF0DC;
    return;
L_08AFF0DC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    goto L_08AFF0E4;
L_08AFF0E4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(376));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AFF0FCu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AFF0FCu) goto L_08AFF0FC;
    return;
L_08AFF0FC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AFF110u);
    ctx.gpr[7] = (0u | 208u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08AFF110u) goto L_08AFF110;
    return;
L_08AFF110:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFF11Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08AFF11Cu) goto L_08AFF11C;
    return;
L_08AFF11C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF28C;
      }
      goto L_08AFF124;
    }
L_08AFF124:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF170;
      }
      goto L_08AFF134;
    }
L_08AFF134:
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_08AFF14C;
    }
    goto L_08AFF13C;
L_08AFF13C:
    ctx.gpr[31] = (0x08AFF144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08AFF144u) goto L_08AFF144;
    return;
L_08AFF144:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08AFF14C;
L_08AFF14C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AFF15Cu);
    ctx.gpr[7] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08AFF15Cu) goto L_08AFF15C;
    return;
L_08AFF15C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFF168u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08AFF168u) goto L_08AFF168;
    return;
L_08AFF168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF28C;
      }
      goto L_08AFF170;
    }
L_08AFF170:
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_08AFF188;
    }
    goto L_08AFF178;
L_08AFF178:
    ctx.gpr[31] = (0x08AFF180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08AFF180u) goto L_08AFF180;
    return;
L_08AFF180:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08AFF188;
L_08AFF188:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AFF198u);
    ctx.gpr[7] = (0u | 71u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08AFF198u) goto L_08AFF198;
    return;
L_08AFF198:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFF1A4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08AFF1A4u) goto L_08AFF1A4;
    return;
L_08AFF1A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF28C;
      }
      goto L_08AFF1AC;
    }
L_08AFF1AC:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFF20C;
      }
      goto L_08AFF1B4;
    }
L_08AFF1B4:
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
        goto L_08AFF1CC;
    }
    goto L_08AFF1BC;
L_08AFF1BC:
    ctx.gpr[31] = (0x08AFF1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08AFF1C4u) goto L_08AFF1C4;
    return;
L_08AFF1C4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    goto L_08AFF1CC;
L_08AFF1CC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(376));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AFF1E4u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AFF1E4u) goto L_08AFF1E4;
    return;
L_08AFF1E4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AFF1F8u);
    ctx.gpr[7] = (0u | 209u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08AFF1F8u) goto L_08AFF1F8;
    return;
L_08AFF1F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFF204u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08AFF204u) goto L_08AFF204;
    return;
L_08AFF204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF28C;
      }
      goto L_08AFF20C;
    }
L_08AFF20C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF258;
      }
      goto L_08AFF21C;
    }
L_08AFF21C:
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_08AFF234;
    }
    goto L_08AFF224;
L_08AFF224:
    ctx.gpr[31] = (0x08AFF22Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08AFF22Cu) goto L_08AFF22C;
    return;
L_08AFF22C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08AFF234;
L_08AFF234:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AFF244u);
    ctx.gpr[7] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08AFF244u) goto L_08AFF244;
    return;
L_08AFF244:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFF250u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08AFF250u) goto L_08AFF250;
    return;
L_08AFF250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF28C;
      }
      goto L_08AFF258;
    }
L_08AFF258:
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_08AFF270;
    }
    goto L_08AFF260;
L_08AFF260:
    ctx.gpr[31] = (0x08AFF268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08AFF268u) goto L_08AFF268;
    return;
L_08AFF268:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08AFF270;
L_08AFF270:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AFF280u);
    ctx.gpr[7] = (0u | 91u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08AFF280u) goto L_08AFF280;
    return;
L_08AFF280:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFF28Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08AFF28Cu) goto L_08AFF28C;
    return;
L_08AFF28C:
    ctx.gpr[31] = (0x08AFF294u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF294u) goto L_08AFF294;
    return;
L_08AFF294:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFF2A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13856));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF2A8u) goto L_08AFF2A8;
    return;
L_08AFF2A8:
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
L_08AFF2C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFF2D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 478u, 0x08B726E8u>(ctx, &aot_mem) && ctx.pc == 0x08AFF2D4u) goto L_08AFF2D4;
    return;
L_08AFF2D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF2E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFF2F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 486u, 0x08B727A8u>(ctx, &aot_mem) && ctx.pc == 0x08AFF2F4u) goto L_08AFF2F4;
    return;
L_08AFF2F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF300:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFF49C;
      }
      goto L_08AFF320;
    }
L_08AFF320:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32232));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(558), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AFF350;
      }
      goto L_08AFF33C;
    }
L_08AFF33C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AFF348u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 499u, 0x08A05F3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF348u) goto L_08AFF348;
    return;
L_08AFF348:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    goto L_08AFF350;
L_08AFF350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
        goto L_08AFF368;
    }
    goto L_08AFF35C;
L_08AFF35C:
    ctx.gpr[31] = (0x08AFF364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08AFF364u) goto L_08AFF364;
    return;
L_08AFF364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    goto L_08AFF368;
L_08AFF368:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[31] = (0x08AFF374u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem) && ctx.pc == 0x08AFF374u) goto L_08AFF374;
    return;
L_08AFF374:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AFF384u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 422u, 0x0880DD60u>(ctx, &aot_mem) && ctx.pc == 0x08AFF384u) goto L_08AFF384;
    return;
L_08AFF384:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(716)));
      if (branch_taken) {
          goto L_08AFF3AC;
      }
      goto L_08AFF398;
    }
L_08AFF398:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08AFF39C;
L_08AFF39C:
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFF39C;
      }
      goto L_08AFF3AC;
    }
L_08AFF3AC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF3BC;
      }
      goto L_08AFF3B4;
    }
L_08AFF3B4:
    ctx.gpr[31] = (0x08AFF3BCu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF3BCu) goto L_08AFF3BC;
    return;
L_08AFF3BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(368)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF3D0;
      }
      goto L_08AFF3C8;
    }
L_08AFF3C8:
    ctx.gpr[31] = (0x08AFF3D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF3D0u) goto L_08AFF3D0;
    return;
L_08AFF3D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(372)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF3E4;
      }
      goto L_08AFF3DC;
    }
L_08AFF3DC:
    ctx.gpr[31] = (0x08AFF3E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF3E4u) goto L_08AFF3E4;
    return;
L_08AFF3E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF3F8;
      }
      goto L_08AFF3F0;
    }
L_08AFF3F0:
    ctx.gpr[31] = (0x08AFF3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem) && ctx.pc == 0x08AFF3F8u) goto L_08AFF3F8;
    return;
L_08AFF3F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFF404u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 407u, 0x08B41BC4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF404u) goto L_08AFF404;
    return;
L_08AFF404:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF430;
      }
      goto L_08AFF414;
    }
L_08AFF414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5452)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5452), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AFF430;
L_08AFF430:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF45C;
      }
      goto L_08AFF440;
    }
L_08AFF440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5456), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AFF45C;
L_08AFF45C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(384));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AFF480;
      }
      goto L_08AFF468;
    }
L_08AFF468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(440)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_08AFF480;
    }
    goto L_08AFF474;
L_08AFF474:
    ctx.gpr[31] = (0x08AFF47Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(440));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08AFF47Cu) goto L_08AFF47C;
    return;
L_08AFF47C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AFF480;
L_08AFF480:
    ctx.gpr[31] = (0x08AFF488u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 501u, 0x08A66220u>(ctx, &aot_mem) && ctx.pc == 0x08AFF488u) goto L_08AFF488;
    return;
L_08AFF488:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF49C;
      }
      goto L_08AFF494;
    }
L_08AFF494:
    ctx.gpr[31] = (0x08AFF49Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AFF2E0;
L_08AFF49C:
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
L_08AFF4B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFF4D0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 1055u, 0x08ACFA70u>(ctx, &aot_mem) && ctx.pc == 0x08AFF4D0u) goto L_08AFF4D0;
    return;
L_08AFF4D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(556), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5))))));
    ctx.gpr[31] = (0x08AFF4F0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(557), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 514u, 0x08AA22DCu>(ctx, &aot_mem) && ctx.pc == 0x08AFF4F0u) goto L_08AFF4F0;
    return;
L_08AFF4F0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(565), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF508:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(562)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFF558;
      }
      goto L_08AFF530;
    }
L_08AFF530:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(564)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF550;
      }
      goto L_08AFF53C;
    }
L_08AFF53C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2276)));
        goto L_08AFF560;
    }
    goto L_08AFF548;
L_08AFF548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF58C;
      }
      goto L_08AFF550;
    }
L_08AFF550:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFF6D8;
      }
      goto L_08AFF558;
    }
L_08AFF558:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFF6D8;
      }
      goto L_08AFF560;
    }
L_08AFF560:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
      if (branch_taken) {
          goto L_08AFF5A8;
      }
      goto L_08AFF56C;
    }
L_08AFF56C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
      if (branch_taken) {
          goto L_08AFF58C;
      }
      goto L_08AFF57C;
    }
L_08AFF57C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFF5A8;
      }
      goto L_08AFF58C;
    }
L_08AFF58C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 2u);
      if (branch_taken) {
          goto L_08AFF5B0;
      }
      goto L_08AFF5A0;
    }
L_08AFF5A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF68C;
      }
      goto L_08AFF5A8;
    }
L_08AFF5A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFF6D8;
      }
      goto L_08AFF5B0;
    }
L_08AFF5B0:
    ctx.gpr[19] = (0u | 55u);
    ctx.gpr[18] = (0u | 58u);
    goto L_08AFF5B8;
L_08AFF5B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFF5C4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFF5C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AFF610;
      }
      goto L_08AFF5CC;
    }
L_08AFF5CC:
    ctx.gpr[31] = (0x08AFF5D4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFF5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AFF62C;
      }
      goto L_08AFF5E0;
    }
L_08AFF5E0:
    ctx.gpr[31] = (0x08AFF5E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFF5E8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AFF610;
      }
      goto L_08AFF5F8;
    }
L_08AFF5F8:
    ctx.gpr[31] = (0x08AFF600u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFF600:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AFF62C;
      }
      goto L_08AFF610;
    }
L_08AFF610:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFF61Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFF61C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AFF634;
      }
      goto L_08AFF624;
    }
L_08AFF624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF664;
      }
      goto L_08AFF62C;
    }
L_08AFF62C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFF6D8;
      }
      goto L_08AFF634;
    }
L_08AFF634:
    ctx.gpr[31] = (0x08AFF63Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFF63C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AFF664;
      }
      goto L_08AFF64C;
    }
L_08AFF64C:
    ctx.gpr[31] = (0x08AFF654u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFF654:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AFF684;
      }
      goto L_08AFF664;
    }
L_08AFF664:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF5B8;
      }
      goto L_08AFF67C;
    }
L_08AFF67C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF68C;
      }
      goto L_08AFF684;
    }
L_08AFF684:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFF6D8;
      }
      goto L_08AFF68C;
    }
L_08AFF68C:
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF6D4;
      }
      goto L_08AFF69C;
    }
L_08AFF69C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFF6D4;
      }
      goto L_08AFF6A4;
    }
L_08AFF6A4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AFF6C4;
      }
      goto L_08AFF6AC;
    }
L_08AFF6AC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AFF6CC;
      }
      goto L_08AFF6B4;
    }
L_08AFF6B4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08AFF6CC;
      }
      goto L_08AFF6BC;
    }
L_08AFF6BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AFF6D8;
      }
      goto L_08AFF6C4;
    }
L_08AFF6C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AFF6D8;
      }
      goto L_08AFF6CC;
    }
L_08AFF6CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFF6D8;
      }
      goto L_08AFF6D4;
    }
L_08AFF6D4:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AFF6D8;
L_08AFF6D8:
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
L_08AFF6F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF700:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF708:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF710:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF718:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF720:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF728:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF730:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[6] & 255u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFF790;
      }
      goto L_08AFF768;
    }
L_08AFF768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = 0u != 0u;
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_08AFF798;
      }
      goto L_08AFF788;
    }
L_08AFF788:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AFF7B4;
      }
      goto L_08AFF790;
    }
L_08AFF790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF8EC;
      }
      goto L_08AFF798;
    }
L_08AFF798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AFF7B4;
      }
      goto L_08AFF7A8;
    }
L_08AFF7A8:
    ctx.gpr[31] = (0x08AFF7B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF7B0u) goto L_08AFF7B0;
    return;
L_08AFF7B0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_08AFF7B4;
L_08AFF7B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AFF7CCu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x08AFF7CCu) goto L_08AFF7CC;
    return;
L_08AFF7CC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF838;
      }
      goto L_08AFF7E0;
    }
L_08AFF7E0:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AFF7FC;
      }
      goto L_08AFF7E8;
    }
L_08AFF7E8:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AFF7F4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem) && ctx.pc == 0x08AFF7F4u) goto L_08AFF7F4;
    return;
L_08AFF7F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF8AC;
      }
      goto L_08AFF7FC;
    }
L_08AFF7FC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFF81C;
      }
      goto L_08AFF808;
    }
L_08AFF808:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AFF814u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 919u, 0x0885F9D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFF814u) goto L_08AFF814;
    return;
L_08AFF814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF8AC;
      }
      goto L_08AFF81C;
    }
L_08AFF81C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF8AC;
      }
      goto L_08AFF824;
    }
L_08AFF824:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AFF830u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF830u) goto L_08AFF830;
    return;
L_08AFF830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF8AC;
      }
      goto L_08AFF838;
    }
L_08AFF838:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08AFF85Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08AFF85Cu) goto L_08AFF85C;
    return;
L_08AFF85C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AFF878;
      }
      goto L_08AFF864;
    }
L_08AFF864:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AFF870u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 926u, 0x0885FD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF870u) goto L_08AFF870;
    return;
L_08AFF870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF8AC;
      }
      goto L_08AFF878;
    }
L_08AFF878:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFF898;
      }
      goto L_08AFF884;
    }
L_08AFF884:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AFF890u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF890u) goto L_08AFF890;
    return;
L_08AFF890:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF8AC;
      }
      goto L_08AFF898;
    }
L_08AFF898:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF8AC;
      }
      goto L_08AFF8A0;
    }
L_08AFF8A0:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AFF8ACu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 924u, 0x0885FB5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF8ACu) goto L_08AFF8AC;
    return;
L_08AFF8AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08AFF8C0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08AFF8C0u) goto L_08AFF8C0;
    return;
L_08AFF8C0:
    ctx.gpr[31] = (0x08AFF8C8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x08AFF8C8u) goto L_08AFF8C8;
    return;
L_08AFF8C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF8EC;
      }
      goto L_08AFF8D8;
    }
L_08AFF8D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF8EC;
      }
      goto L_08AFF8E4;
    }
L_08AFF8E4:
    ctx.gpr[31] = (0x08AFF8ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF8ECu) goto L_08AFF8EC;
    return;
L_08AFF8EC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF914:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF91C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF924:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF92C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF934:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF93C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF944:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF94C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF954:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[6]);
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08AFFA1Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFA1Cu) goto L_08AFFA1C;
    return;
L_08AFFA1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFA38;
      }
      goto L_08AFFA24;
    }
L_08AFFA24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AFFA38;
      }
      goto L_08AFFA30;
    }
L_08AFFA30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFFA3C;
      }
      goto L_08AFFA38;
    }
L_08AFFA38:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08AFFA3C;
L_08AFFA3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFFA50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFFA68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 191u, 0x0894530Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFA68u) goto L_08AFFA68;
    return;
L_08AFFA68:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AFFA8C;
      }
      goto L_08AFFA78;
    }
L_08AFFA78:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AFFAAC;
      }
      goto L_08AFFA84;
    }
L_08AFFA84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFFAAC;
      }
      goto L_08AFFA8C;
    }
L_08AFFA8C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFAAC;
      }
      goto L_08AFFA98;
    }
L_08AFFA98:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFAAC;
      }
      goto L_08AFFAA8;
    }
L_08AFFAA8:
    ctx.gpr[4] = (0u | 255u);
    goto L_08AFFAAC;
L_08AFFAAC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AFFAB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 190u, 0x08945304u>(ctx, &aot_mem) && ctx.pc == 0x08AFFAB8u) goto L_08AFFAB8;
    return;
L_08AFFAB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFFAC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFFBF0;
      }
      goto L_08AFFAF8;
    }
L_08AFFAF8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 44u);
    ctx.gpr[31] = (0x08AFFB08u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 510u, 0x08A360ECu>(ctx, &aot_mem) && ctx.pc == 0x08AFFB08u) goto L_08AFFB08;
    return;
L_08AFFB08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
      if (branch_taken) {
          goto L_08AFFB60;
      }
      goto L_08AFFB14;
    }
L_08AFFB14:
    ctx.gpr[31] = (0x08AFFB1Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFB1Cu) goto L_08AFFB1C;
    return;
L_08AFFB1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
      if (branch_taken) {
          goto L_08AFFB60;
      }
      goto L_08AFFB24;
    }
L_08AFFB24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(2228));
      if (branch_taken) {
          goto L_08AFFB60;
      }
      goto L_08AFFB34;
    }
L_08AFFB34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 63u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFFB60;
      }
      goto L_08AFFB44;
    }
L_08AFFB44:
    ctx.gpr[31] = (0x08AFFB4Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 744u, 0x088F3BA8u>(ctx, &aot_mem) && ctx.pc == 0x08AFFB4Cu) goto L_08AFFB4C;
    return;
L_08AFFB4C:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFFB5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 173u, 0x08ADC8D4u>(ctx, &aot_mem) && ctx.pc == 0x08AFFB5Cu) goto L_08AFFB5C;
    return;
L_08AFFB5C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    goto L_08AFFB60;
L_08AFFB60:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFBF0;
      }
      goto L_08AFFB68;
    }
L_08AFFB68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFFBD4;
      }
      goto L_08AFFB78;
    }
L_08AFFB78:
    ctx.gpr[31] = (0x08AFFB80u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFB80u) goto L_08AFFB80;
    return;
L_08AFFB80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFBA8;
      }
      goto L_08AFFB88;
    }
L_08AFFB88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AFFBA0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AFFBA0u) goto L_08AFFBA0;
    return;
L_08AFFBA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFBC4;
      }
      goto L_08AFFBA8;
    }
L_08AFFBA8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFFBB4u);
    ctx.gpr[5] = (0u | 57u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 222u, 0x08910CCCu>(ctx, &aot_mem) && ctx.pc == 0x08AFFBB4u) goto L_08AFFBB4;
    return;
L_08AFFBB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_08AFFBC4;
L_08AFFBC4:
    ctx.gpr[31] = (0x08AFFBCCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 854u, 0x0890B608u>(ctx, &aot_mem) && ctx.pc == 0x08AFFBCCu) goto L_08AFFBCC;
    return;
L_08AFFBCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFBF0;
      }
      goto L_08AFFBD4;
    }
L_08AFFBD4:
    ctx.gpr[7] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08AFFBF0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 653u, 0x0891F338u>(ctx, &aot_mem) && ctx.pc == 0x08AFFBF0u) goto L_08AFFBF0;
    return;
L_08AFFBF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(565)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2237u << 16u);
      if (branch_taken) {
          goto L_08AFFD14;
      }
      goto L_08AFFC04;
    }
L_08AFFC04:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[20] = (8u << 16u);
    goto L_08AFFC0C;
L_08AFFC0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFFC18u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AFEF7C;
L_08AFFC18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFD00;
      }
      goto L_08AFFC20;
    }
L_08AFFC20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AFFC70;
      }
      goto L_08AFFC2C;
    }
L_08AFFC2C:
    ctx.gpr[31] = (0x08AFFC34u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AFEF7C;
L_08AFFC34:
    ctx.gpr[31] = (0x08AFFC3Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFC3Cu) goto L_08AFFC3C;
    return;
L_08AFFC3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AFFC70;
      }
      goto L_08AFFC44;
    }
L_08AFFC44:
    ctx.gpr[31] = (0x08AFFC4Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AFEF7C;
L_08AFFC4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 58u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFC70;
      }
      goto L_08AFFC64;
    }
L_08AFFC64:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AFFC70u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 173u, 0x08ADC8D4u>(ctx, &aot_mem) && ctx.pc == 0x08AFFC70u) goto L_08AFFC70;
    return;
L_08AFFC70:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFFC7Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AFEF7C;
L_08AFFC7C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 44u);
    ctx.gpr[31] = (0x08AFFC8Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 510u, 0x08A360ECu>(ctx, &aot_mem) && ctx.pc == 0x08AFFC8Cu) goto L_08AFFC8C;
    return;
L_08AFFC8C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFFC98u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AFEF7C;
L_08AFFC98:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFD00;
      }
      goto L_08AFFCA4;
    }
L_08AFFCA4:
    ctx.gpr[31] = (0x08AFFCACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFCACu) goto L_08AFFCAC;
    return;
L_08AFFCAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFCD4;
      }
      goto L_08AFFCB4;
    }
L_08AFFCB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AFFCCCu);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AFFCCCu) goto L_08AFFCCC;
    return;
L_08AFFCCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFCF8;
      }
      goto L_08AFFCD4;
    }
L_08AFFCD4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFFCE0u);
    ctx.gpr[5] = (0u | 57u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 222u, 0x08910CCCu>(ctx, &aot_mem) && ctx.pc == 0x08AFFCE0u) goto L_08AFFCE0;
    return;
L_08AFFCE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AFFCF8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 16u, 0x08948114u>(ctx, &aot_mem) && ctx.pc == 0x08AFFCF8u) goto L_08AFFCF8;
    return;
L_08AFFCF8:
    ctx.gpr[31] = (0x08AFFD00u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 854u, 0x0890B608u>(ctx, &aot_mem) && ctx.pc == 0x08AFFD00u) goto L_08AFFD00;
    return;
L_08AFFD00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(565)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFC0C;
      }
      goto L_08AFFD14;
    }
L_08AFFD14:
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
L_08AFFD38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFD98;
      }
      goto L_08AFFD60;
    }
L_08AFFD60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFFD6Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFFD6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFD90;
      }
      goto L_08AFFD74;
    }
L_08AFFD74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFD60;
      }
      goto L_08AFFD88;
    }
L_08AFFD88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFD98;
      }
      goto L_08AFFD90;
    }
L_08AFFD90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AFFD9C;
      }
      goto L_08AFFD98;
    }
L_08AFFD98:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AFFD9C;
L_08AFFD9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFFDB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFFDD4;
      }
      goto L_08AFFDC4;
    }
L_08AFFDC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AFFDD4;
L_08AFFDD4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFFDDC:
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
          goto L_08AFFE10;
      }
      goto L_08AFFE00;
    }
L_08AFFE00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AFFE10;
L_08AFFE10:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(548));
    ctx.gpr[31] = (0x08AFFE1Cu);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(552));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 451u, 0x08AA1CC8u>(ctx, &aot_mem) && ctx.pc == 0x08AFFE1Cu) goto L_08AFFE1C;
    return;
L_08AFFE1C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(896), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(896))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(897), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFFE3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFFE64u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem) && ctx.pc == 0x08AFFE64u) goto L_08AFFE64;
    return;
L_08AFFE64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08AFFE80u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem) && ctx.pc == 0x08AFFE80u) goto L_08AFFE80;
    return;
L_08AFFE80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFEA0;
      }
      goto L_08AFFE88;
    }
L_08AFFE88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFFEA0;
      }
      goto L_08AFFE9C;
    }
L_08AFFE9C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AFFEA0;
L_08AFFEA0:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[20];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFFEBC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFFEC4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFFECC:
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
L_08AFFEF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFFEFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(666)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (16773u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 2u, 0x08B00004u>(ctx, &aot_mem); return;
      }
      goto L_08AFFF18;
    }
L_08AFFF18:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[5] = (ctx.gpr[5] | 21845u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFFF4C;
      }
      goto L_08AFFF40;
    }
L_08AFFF40:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AFFF60;
      }
      goto L_08AFFF4C;
    }
L_08AFFF4C:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_08AFFF60;
L_08AFFF60:
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFF7C;
      }
      goto L_08AFFF6C;
    }
L_08AFFF6C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(666)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
      if (branch_taken) {
          goto L_08AFFF8C;
      }
      goto L_08AFFF7C;
    }
L_08AFFF7C:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(666)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    goto L_08AFFF8C;
L_08AFFF8C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFFDC;
      }
      goto L_08AFFF94;
    }
L_08AFFF94:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1653))))));
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AFFFDC;
      }
      goto L_08AFFFA8;
    }
L_08AFFFA8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-512));
    ctx.gpr[7] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFFFDC;
      }
      goto L_08AFFFBC;
    }
L_08AFFFBC:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08AFFFD8u);
    ctx.gpr[6] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08AFFFD8u) goto L_08AFFFD8;
    return;
L_08AFFFD8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(666)));
    goto L_08AFFFDC;
L_08AFFFDC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 2u, 0x08B00004u>(ctx, &aot_mem); return;
      }
      goto L_08AFFFE4;
    }
L_08AFFFE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(668)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(328));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B00004u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    (void)rt.invoke_chained_call(ctx, &aot_mem);
    return;
}

void recomp_unit_0190(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0190_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_190(Runtime &runtime) {
    runtime.register_generated_unit(190u, 0x08AFC000u, 16384u, &recomp_unit_0190, &recomp_unit_0190_entry);
    runtime.register_function(0x08AFC000u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC00Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC06Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC100u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC124u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC178u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC17Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC500u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC524u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC538u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC54Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC6BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC740u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC750u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC760u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC76Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC77Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC78Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC800u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC808u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC818u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC824u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC828u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC82Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC834u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC854u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC860u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC86Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC874u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC87Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC884u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC88Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC91Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC930u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC938u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC950u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC958u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC960u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC968u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC97Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC99Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA30u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA34u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA54u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA94u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAD0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAE4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAF0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB30u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB58u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB88u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBE4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBFCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC30u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC48u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCBCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCD8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCE4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCDBCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCDC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE48u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE54u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE78u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCEACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCEB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCEC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCEC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCED8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCEE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCEF0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCEF8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF0Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF14u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF34u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF44u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF94u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCFB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCFB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCFC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCFCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCFD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCFE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCFE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCFF0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCFF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCFFCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD008u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD010u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD018u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD020u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD028u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD054u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD0A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD0A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD0B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD0B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD0D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD0F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD138u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD158u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD204u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD210u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD22Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD234u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD244u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD258u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD274u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD28Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD290u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD354u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD36Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD380u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD398u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD410u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD430u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD438u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD440u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD450u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD4D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD4D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD4E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD4F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD52Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD550u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD5A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD5ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD5E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD614u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD624u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD630u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD63Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD648u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD654u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD660u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD66Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD678u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD684u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD694u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD6ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD6B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD6C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD6D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD6DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD6E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD6F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD700u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD70Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD718u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD720u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD768u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD770u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD778u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD780u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD788u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD7ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD7B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD7C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD800u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD80Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD818u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD824u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD830u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD838u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD840u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD854u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD87Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD884u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD890u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD8A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD8B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD8B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD8BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD8D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD8F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD8F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD904u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD910u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD918u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD928u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD92Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD934u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD948u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD950u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD960u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD96Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD970u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD978u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD980u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD988u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD990u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD998u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA48u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA88u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDAA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDAA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDAB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB34u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBDCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBE4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBFCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC04u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC0Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC58u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC78u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC94u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD34u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD54u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD78u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD80u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDBCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDD0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDF0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDF8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDFCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE58u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE88u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDEA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF04u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF0Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF14u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF34u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF58u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF80u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF88u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF94u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDFA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDFACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDFB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDFBCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDFC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDFD0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDFE4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDFECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDFF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE000u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE010u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE018u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE020u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE038u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE040u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE048u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE04Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE08Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE100u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE11Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE124u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE12Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE140u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE15Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE164u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE16Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE180u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE188u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE190u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE198u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE1A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE1C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE1ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE1FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE21Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE220u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE238u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE260u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE268u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE270u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE280u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE288u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE294u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE29Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE2A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE2B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE2C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE2D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE2FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE304u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE310u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE318u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE324u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE32Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE334u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE33Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE344u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE350u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE358u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE364u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE370u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE37Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE388u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE38Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE394u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE408u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE410u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE414u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE420u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE42Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE438u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE444u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE44Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE454u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE484u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE4ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE4F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE4FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE508u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE518u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE520u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE530u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE53Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE548u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE550u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE560u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE568u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE574u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE580u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE588u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE590u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE59Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE608u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE61Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE628u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE630u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE640u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE648u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE650u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE658u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE660u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE668u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE670u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE678u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE680u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE688u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE690u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE698u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE700u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE710u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE71Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE728u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE734u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE73Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE744u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE754u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE75Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE764u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE76Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE774u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE77Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE784u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE78Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE794u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE79Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE810u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE81Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE824u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE830u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE83Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE848u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE850u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE85Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE864u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE86Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE874u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE87Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE888u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE890u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE89Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE8D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE8E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE908u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE928u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE950u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE96Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE980u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE998u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA30u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA58u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA80u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA94u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEAA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEAA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEAB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEAC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEAD0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEAE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEAFCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB48u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB94u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBBCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBD8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBE4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBF0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC14u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFECB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFECC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFECD8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFECE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFECF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFECFCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED48u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEDA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEDA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEDB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEDB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEDECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE34u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE54u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF48u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF58u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF68u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEFB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEFBCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEFC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEFD0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEFD8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEFECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF010u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF020u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF028u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF030u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF038u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF040u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF048u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF058u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF064u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF06Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF074u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF07Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF084u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF094u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF110u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF11Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF124u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF134u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF13Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF144u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF14Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF15Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF168u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF170u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF178u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF180u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF188u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF198u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF204u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF20Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF21Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF224u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF22Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF234u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF244u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF250u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF258u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF260u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF268u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF270u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF280u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF28Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF294u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF2A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF2C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF2D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF2E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF2F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF300u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF320u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF33Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF348u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF350u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF35Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF364u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF368u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF374u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF384u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF398u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF39Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF404u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF414u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF430u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF440u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF45Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF468u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF474u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF47Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF480u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF488u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF494u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF49Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF508u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF530u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF53Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF548u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF550u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF558u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF560u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF56Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF57Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF58Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF600u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF610u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF61Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF624u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF62Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF634u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF63Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF64Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF654u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF664u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF67Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF684u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF68Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF69Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF700u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF708u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF710u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF718u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF720u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF728u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF730u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF768u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF788u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF790u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF798u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF808u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF814u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF81Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF824u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF830u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF838u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF85Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF864u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF870u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF878u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF884u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF890u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF898u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF914u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF91Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF924u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF92Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF934u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF93Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF944u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF94Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF954u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA30u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA68u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA78u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAF8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB14u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB34u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB44u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB68u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB78u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB80u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB88u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBF0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC04u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC0Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC34u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC44u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCF8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD14u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD88u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFDB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFDC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFDD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFDDCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE80u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE88u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFEA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFEBCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFEC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFECCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFEF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFEFCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF94u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFFA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFFBCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFFD8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFFDCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFFE4u, &recomp_unit_0190, "recomp_unit_0190");
}
} // namespace psprecomp
