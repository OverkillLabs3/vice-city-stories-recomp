#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0025[4094] = {
    1, 0, 2, 3, 0, 0, 4, 0, 5, 0, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 10, 0, 11, 0, 12, 13, 0, 14, 0, 15, 0, 16,
    17, 0, 18, 0, 19, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 26, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 39, 40, 0, 41, 0, 0, 0,
    0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0,
    51, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58,
    0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 71, 0, 0, 0,
    0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 76, 77, 0, 0, 78, 0,
    0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 86, 87, 0, 88, 0, 89, 0, 90, 91, 0, 92, 0, 93, 94,
    0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0,
    0, 100, 101, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0,
    0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113, 114, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 126,
    0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0,
    0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0,
    0, 0, 0, 0, 145, 0, 146, 147, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156, 157,
    0, 158, 0, 159, 0, 160, 161, 0, 162, 0, 163, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 171, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174,
    0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0,
    0, 182, 0, 0, 183, 184, 0, 185, 0, 0, 0, 0, 186, 0, 187, 188, 0, 0, 0, 189, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 197, 0, 0, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0,
    0, 208, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 0, 218, 0, 0, 0,
    0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0,
    0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 231, 232, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0,
    235, 0, 0, 236, 0, 237, 0, 238, 239, 0, 240, 0, 241, 0, 242, 243, 0, 244, 0, 245, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0,
    0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 253, 0, 0, 254, 0, 0, 255,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 263, 0, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 268,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 274, 0, 275,
    0, 0, 0, 0, 276, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 281, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 285, 0, 286, 0,
    0, 287, 0, 0, 288, 0, 0, 289, 0, 290, 0, 291, 0, 292, 293, 0, 294, 0, 295, 296, 0, 297, 0, 0, 298, 0, 299, 300, 0, 301, 0, 302,
    303, 0, 304, 0, 0, 305, 0, 306, 307, 0, 308, 0, 309, 310, 0, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 313, 0, 314, 0, 315, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 319, 0, 320, 0, 0, 321, 0, 0, 322,
    0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0,
    0, 330, 0, 331, 0, 332, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0,
    0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0,
    351, 0, 0, 352, 0, 353, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359,
    0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 364, 0, 365, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0,
    0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0,
    0, 377, 0, 0, 378, 0, 0, 379, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0,
    383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 385, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0,
    0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 396, 0, 397, 0,
    0, 0, 398, 399, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0,
    0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 408, 0, 409, 0, 0, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412,
    0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 421, 0, 0, 0, 0, 0, 0, 0, 422,
    0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 430, 0, 431, 432,
    0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 439,
    0, 0, 0, 440, 441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 446, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 450, 0, 451, 0,
    452, 0, 0, 0, 0, 453, 0, 454, 0, 455, 0, 0, 456, 0, 457, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 460, 0, 461, 0, 0, 462, 0,
    463, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 466, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 471, 0, 472, 0, 473,
    0, 474, 0, 475, 0, 476, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0,
    480, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487,
    0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 492, 0, 493, 0, 0, 0, 494, 0, 495, 0, 496, 0, 497,
    0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 500, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0,
    505, 0, 506, 0, 0, 507, 0, 508, 0, 0, 509, 0, 510, 0, 511, 0, 0, 512, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0,
    0, 0, 516, 0, 517, 0, 0, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 523, 0, 524, 0, 525,
    0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 531, 0, 0, 532, 0, 0, 0, 533, 0,
    0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 537, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 540, 0, 541, 542, 0, 543, 0,
    0, 0, 544, 545, 0, 0, 0, 0, 546, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 549, 0, 550, 0, 551, 0,
    0, 0, 0, 552, 0, 553, 0, 0, 554, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 558, 0, 0,
    0, 0, 559, 560, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 563, 0, 564, 0,
    0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 573, 0, 0, 574, 575, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 578,
    0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 580, 581, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 584, 0, 585, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 0, 590, 0, 591, 0, 0, 0, 592, 0, 593,
    0, 0, 594, 0, 595, 0, 596, 0, 597, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 601, 0, 0,
    0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 605, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607,
    0, 0, 608, 0, 0, 609, 0, 610, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0,
    0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0,
    0, 0, 618, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0, 623, 624, 0, 0, 0, 625, 0, 0,
    626, 0, 627, 628, 0, 0, 0, 0, 0, 629, 0, 0, 630, 0, 631, 632, 0, 0, 0, 633, 0, 0, 634, 0, 635, 636, 0, 0, 0, 0, 0, 637,
    0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639,
    0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 646, 0, 647, 0, 648, 649, 0, 0, 0, 0, 0,
    650, 651, 0, 0, 652, 0, 0, 653, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 656, 0, 0, 0,
    0, 0, 657, 0, 658, 0, 659, 0, 0, 660, 0, 0, 0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 668,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 670, 0, 0, 671, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    675, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 677, 0, 678, 0, 679, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 683, 0, 0, 684,
    0, 0, 685, 0, 686, 0, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 689, 0, 0, 690, 0, 0, 0, 0, 691, 0, 0, 692, 0, 0, 0,
    693, 0, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    698, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 700, 0, 0, 701, 0, 0, 0, 0, 702, 0, 0, 0, 0, 703, 0, 0, 704, 0, 0, 0,
    0, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 707, 0, 708, 709, 0, 0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 712, 0, 0, 0, 0, 0,
    0, 0, 0, 713, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 717, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 0, 723, 0, 0, 0, 0, 0, 0, 724, 0, 0, 725, 0, 0, 0, 0, 0, 0, 726,
    0, 0, 727, 0, 0, 0, 0, 0, 0, 728, 0, 0, 729, 0, 0, 0, 0, 0, 0, 730, 0, 0, 731, 0, 0, 0, 0, 0, 0, 732, 0, 0,
    733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 735, 0, 0, 0, 0, 0, 0,
    736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 739,
    0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 743, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 745,
    0, 746, 0, 747, 0, 748, 0, 749, 0, 750, 0, 751, 0, 0, 0, 0, 752, 753, 754, 0, 755, 756, 757, 0, 758, 759, 0, 0, 0, 0, 0, 0,
    0, 760, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 762, 0, 0, 763, 0, 0, 764, 0, 765, 0, 0, 0, 0, 766, 0, 767, 0, 0, 0,
    0, 0, 0, 0, 0, 768, 0, 0, 769, 0, 770, 771, 0, 0, 0, 772, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 774, 0, 0, 775, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 777, 0, 0, 778, 0, 0, 0, 779, 0, 0, 0, 780, 0, 0, 0, 0, 781, 0, 0, 782, 0,
    0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 784, 0, 0, 785, 0, 786, 787, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0,
    0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 791, 0, 0, 792, 0, 793, 794, 0, 0, 795, 0, 0, 0, 0, 0, 0, 796, 0,
    0, 797, 0, 0, 798, 799, 0, 0, 0, 800, 0, 801, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 803, 0, 0, 804, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 806, 0, 0, 0, 807, 0, 0, 808, 0, 0, 0, 809, 0, 0, 810, 0,
    0, 0, 0, 811, 0, 812, 0, 0, 813, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 815, 0, 0, 816, 0, 0, 817, 818,
};
void recomp_unit_0025_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08868004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0025[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08868004;
    case 2u: goto L_0886800C;
    case 3u: goto L_08868010;
    case 4u: goto L_0886801C;
    case 5u: goto L_08868024;
    case 6u: goto L_08868030;
    case 7u: goto L_08868038;
    case 8u: goto L_08868040;
    case 9u: goto L_08868048;
    case 10u: goto L_08868054;
    case 11u: goto L_0886805C;
    case 12u: goto L_08868064;
    case 13u: goto L_08868068;
    case 14u: goto L_08868070;
    case 15u: goto L_08868078;
    case 16u: goto L_08868080;
    case 17u: goto L_08868084;
    case 18u: goto L_0886808C;
    case 19u: goto L_08868094;
    case 20u: goto L_08868098;
    case 21u: goto L_088680A8;
    case 22u: goto L_088680D0;
    case 23u: goto L_088680D8;
    case 24u: goto L_088680F0;
    case 25u: goto L_08868104;
    case 26u: goto L_08868124;
    case 27u: goto L_08868128;
    case 28u: goto L_08868134;
    case 29u: goto L_08868158;
    case 30u: goto L_08868170;
    case 31u: goto L_08868178;
    case 32u: goto L_08868194;
    case 33u: goto L_088681A0;
    case 34u: goto L_088681A8;
    case 35u: goto L_088681B0;
    case 36u: goto L_088681F8;
    case 37u: goto L_08868250;
    case 38u: goto L_0886825C;
    case 39u: goto L_08868268;
    case 40u: goto L_0886826C;
    case 41u: goto L_08868274;
    case 42u: goto L_08868288;
    case 43u: goto L_08868290;
    case 44u: goto L_088682A0;
    case 45u: goto L_088682AC;
    case 46u: goto L_088682B8;
    case 47u: goto L_088682C0;
    case 48u: goto L_088682D8;
    case 49u: goto L_088682E4;
    case 50u: goto L_088682F4;
    case 51u: goto L_08868304;
    case 52u: goto L_0886830C;
    case 53u: goto L_0886831C;
    case 54u: goto L_08868340;
    case 55u: goto L_08868348;
    case 56u: goto L_08868350;
    case 57u: goto L_08868360;
    case 58u: goto L_08868380;
    case 59u: goto L_08868388;
    case 60u: goto L_08868390;
    case 61u: goto L_088683A8;
    case 62u: goto L_088683B4;
    case 63u: goto L_088683BC;
    case 64u: goto L_088683D8;
    case 65u: goto L_088683F4;
    case 66u: goto L_08868410;
    case 67u: goto L_0886842C;
    case 68u: goto L_08868448;
    case 69u: goto L_08868464;
    case 70u: goto L_0886846C;
    case 71u: goto L_08868474;
    case 72u: goto L_08868490;
    case 73u: goto L_088684AC;
    case 74u: goto L_088684C8;
    case 75u: goto L_088684E4;
    case 76u: goto L_088684EC;
    case 77u: goto L_088684F0;
    case 78u: goto L_088684FC;
    case 79u: goto L_0886850C;
    case 80u: goto L_08868518;
    case 81u: goto L_08868524;
    case 82u: goto L_0886852C;
    case 83u: goto L_08868534;
    case 84u: goto L_0886853C;
    case 85u: goto L_08868544;
    case 86u: goto L_0886854C;
    case 87u: goto L_08868550;
    case 88u: goto L_08868558;
    case 89u: goto L_08868560;
    case 90u: goto L_08868568;
    case 91u: goto L_0886856C;
    case 92u: goto L_08868574;
    case 93u: goto L_0886857C;
    case 94u: goto L_08868580;
    case 95u: goto L_08868590;
    case 96u: goto L_088685B4;
    case 97u: goto L_088685BC;
    case 98u: goto L_088685D4;
    case 99u: goto L_088685E8;
    case 100u: goto L_08868608;
    case 101u: goto L_0886860C;
    case 102u: goto L_08868618;
    case 103u: goto L_08868620;
    case 104u: goto L_08868648;
    case 105u: goto L_08868650;
    case 106u: goto L_0886867C;
    case 107u: goto L_08868688;
    case 108u: goto L_08868690;
    case 109u: goto L_08868698;
    case 110u: goto L_088686D4;
    case 111u: goto L_08868728;
    case 112u: goto L_08868734;
    case 113u: goto L_08868740;
    case 114u: goto L_08868744;
    case 115u: goto L_0886874C;
    case 116u: goto L_08868760;
    case 117u: goto L_08868768;
    case 118u: goto L_08868778;
    case 119u: goto L_08868784;
    case 120u: goto L_088687A4;
    case 121u: goto L_088687B4;
    case 122u: goto L_088687BC;
    case 123u: goto L_088687CC;
    case 124u: goto L_088687F0;
    case 125u: goto L_088687F8;
    case 126u: goto L_08868800;
    case 127u: goto L_08868810;
    case 128u: goto L_08868830;
    case 129u: goto L_08868838;
    case 130u: goto L_08868840;
    case 131u: goto L_08868858;
    case 132u: goto L_08868864;
    case 133u: goto L_0886886C;
    case 134u: goto L_08868888;
    case 135u: goto L_088688A4;
    case 136u: goto L_088688C0;
    case 137u: goto L_088688DC;
    case 138u: goto L_088688F8;
    case 139u: goto L_08868914;
    case 140u: goto L_0886891C;
    case 141u: goto L_08868924;
    case 142u: goto L_08868940;
    case 143u: goto L_0886895C;
    case 144u: goto L_08868978;
    case 145u: goto L_08868994;
    case 146u: goto L_0886899C;
    case 147u: goto L_088689A0;
    case 148u: goto L_088689AC;
    case 149u: goto L_088689BC;
    case 150u: goto L_088689C8;
    case 151u: goto L_088689D4;
    case 152u: goto L_088689DC;
    case 153u: goto L_088689E4;
    case 154u: goto L_088689EC;
    case 155u: goto L_088689F4;
    case 156u: goto L_088689FC;
    case 157u: goto L_08868A00;
    case 158u: goto L_08868A08;
    case 159u: goto L_08868A10;
    case 160u: goto L_08868A18;
    case 161u: goto L_08868A1C;
    case 162u: goto L_08868A24;
    case 163u: goto L_08868A2C;
    case 164u: goto L_08868A30;
    case 165u: goto L_08868A48;
    case 166u: goto L_08868A6C;
    case 167u: goto L_08868A74;
    case 168u: goto L_08868A8C;
    case 169u: goto L_08868AA0;
    case 170u: goto L_08868AC0;
    case 171u: goto L_08868AC4;
    case 172u: goto L_08868AD0;
    case 173u: goto L_08868AD8;
    case 174u: goto L_08868B00;
    case 175u: goto L_08868B08;
    case 176u: goto L_08868B34;
    case 177u: goto L_08868B40;
    case 178u: goto L_08868B48;
    case 179u: goto L_08868B50;
    case 180u: goto L_08868B8C;
    case 181u: goto L_08868BF0;
    case 182u: goto L_08868C08;
    case 183u: goto L_08868C14;
    case 184u: goto L_08868C18;
    case 185u: goto L_08868C20;
    case 186u: goto L_08868C34;
    case 187u: goto L_08868C3C;
    case 188u: goto L_08868C40;
    case 189u: goto L_08868C50;
    case 190u: goto L_08868C54;
    case 191u: goto L_08868C6C;
    case 192u: goto L_08868C90;
    case 193u: goto L_08868C98;
    case 194u: goto L_08868CA4;
    case 195u: goto L_08868CB4;
    case 196u: goto L_08868CC4;
    case 197u: goto L_08868CCC;
    case 198u: goto L_08868CDC;
    case 199u: goto L_08868CE4;
    case 200u: goto L_08868CF4;
    case 201u: goto L_08868D1C;
    case 202u: goto L_08868D24;
    case 203u: goto L_08868D2C;
    case 204u: goto L_08868D40;
    case 205u: goto L_08868D60;
    case 206u: goto L_08868D68;
    case 207u: goto L_08868D70;
    case 208u: goto L_08868D88;
    case 209u: goto L_08868D94;
    case 210u: goto L_08868D9C;
    case 211u: goto L_08868DB4;
    case 212u: goto L_08868DBC;
    case 213u: goto L_08868DC8;
    case 214u: goto L_08868DD0;
    case 215u: goto L_08868DD8;
    case 216u: goto L_08868DE0;
    case 217u: goto L_08868DE8;
    case 218u: goto L_08868DF4;
    case 219u: goto L_08868E08;
    case 220u: goto L_08868E1C;
    case 221u: goto L_08868E30;
    case 222u: goto L_08868E44;
    case 223u: goto L_08868E58;
    case 224u: goto L_08868E6C;
    case 225u: goto L_08868E74;
    case 226u: goto L_08868E7C;
    case 227u: goto L_08868E90;
    case 228u: goto L_08868EA4;
    case 229u: goto L_08868EB8;
    case 230u: goto L_08868ECC;
    case 231u: goto L_08868ED4;
    case 232u: goto L_08868ED8;
    case 233u: goto L_08868EE4;
    case 234u: goto L_08868EEC;
    case 235u: goto L_08868F04;
    case 236u: goto L_08868F10;
    case 237u: goto L_08868F18;
    case 238u: goto L_08868F20;
    case 239u: goto L_08868F24;
    case 240u: goto L_08868F2C;
    case 241u: goto L_08868F34;
    case 242u: goto L_08868F3C;
    case 243u: goto L_08868F40;
    case 244u: goto L_08868F48;
    case 245u: goto L_08868F50;
    case 246u: goto L_08868F54;
    case 247u: goto L_08868F6C;
    case 248u: goto L_08868F90;
    case 249u: goto L_08868F98;
    case 250u: goto L_08868FB0;
    case 251u: goto L_08868FC4;
    case 252u: goto L_08868FE4;
    case 253u: goto L_08868FE8;
    case 254u: goto L_08868FF4;
    case 255u: goto L_08869000;
    case 256u: goto L_0886902C;
    case 257u: goto L_08869034;
    case 258u: goto L_08869058;
    case 259u: goto L_08869064;
    case 260u: goto L_088690AC;
    case 261u: goto L_0886912C;
    case 262u: goto L_08869134;
    case 263u: goto L_08869140;
    case 264u: goto L_08869150;
    case 265u: goto L_0886915C;
    case 266u: goto L_08869168;
    case 267u: goto L_08869174;
    case 268u: goto L_08869180;
    case 269u: goto L_088691A8;
    case 270u: goto L_088691B0;
    case 271u: goto L_088691C4;
    case 272u: goto L_088691DC;
    case 273u: goto L_088691EC;
    case 274u: goto L_088691F8;
    case 275u: goto L_08869200;
    case 276u: goto L_08869214;
    case 277u: goto L_0886921C;
    case 278u: goto L_08869228;
    case 279u: goto L_08869234;
    case 280u: goto L_08869240;
    case 281u: goto L_08869248;
    case 282u: goto L_0886924C;
    case 283u: goto L_0886925C;
    case 284u: goto L_0886926C;
    case 285u: goto L_08869274;
    case 286u: goto L_0886927C;
    case 287u: goto L_08869288;
    case 288u: goto L_08869294;
    case 289u: goto L_088692A0;
    case 290u: goto L_088692A8;
    case 291u: goto L_088692B0;
    case 292u: goto L_088692B8;
    case 293u: goto L_088692BC;
    case 294u: goto L_088692C4;
    case 295u: goto L_088692CC;
    case 296u: goto L_088692D0;
    case 297u: goto L_088692D8;
    case 298u: goto L_088692E4;
    case 299u: goto L_088692EC;
    case 300u: goto L_088692F0;
    case 301u: goto L_088692F8;
    case 302u: goto L_08869300;
    case 303u: goto L_08869304;
    case 304u: goto L_0886930C;
    case 305u: goto L_08869318;
    case 306u: goto L_08869320;
    case 307u: goto L_08869324;
    case 308u: goto L_0886932C;
    case 309u: goto L_08869334;
    case 310u: goto L_08869338;
    case 311u: goto L_08869340;
    case 312u: goto L_08869348;
    case 313u: goto L_08869390;
    case 314u: goto L_08869398;
    case 315u: goto L_088693A0;
    case 316u: goto L_088693AC;
    case 317u: goto L_088693C0;
    case 318u: goto L_088693D4;
    case 319u: goto L_088693E0;
    case 320u: goto L_088693E8;
    case 321u: goto L_088693F4;
    case 322u: goto L_08869400;
    case 323u: goto L_08869408;
    case 324u: goto L_08869410;
    case 325u: goto L_08869438;
    case 326u: goto L_0886944C;
    case 327u: goto L_08869454;
    case 328u: goto L_0886946C;
    case 329u: goto L_0886947C;
    case 330u: goto L_08869488;
    case 331u: goto L_08869490;
    case 332u: goto L_08869498;
    case 333u: goto L_088694A4;
    case 334u: goto L_088694B8;
    case 335u: goto L_088694CC;
    case 336u: goto L_088694FC;
    case 337u: goto L_08869528;
    case 338u: goto L_08869578;
    case 339u: goto L_08869598;
    case 340u: goto L_0886961C;
    case 341u: goto L_08869670;
    case 342u: goto L_08869684;
    case 343u: goto L_0886969C;
    case 344u: goto L_088696C4;
    case 345u: goto L_088696F8;
    case 346u: goto L_0886972C;
    case 347u: goto L_0886973C;
    case 348u: goto L_0886974C;
    case 349u: goto L_08869768;
    case 350u: goto L_08869770;
    case 351u: goto L_08869784;
    case 352u: goto L_08869790;
    case 353u: goto L_08869798;
    case 354u: goto L_0886979C;
    case 355u: goto L_088697A8;
    case 356u: goto L_088697EC;
    case 357u: goto L_08869838;
    case 358u: goto L_0886986C;
    case 359u: goto L_08869880;
    case 360u: goto L_08869888;
    case 361u: goto L_088698A4;
    case 362u: goto L_088698B4;
    case 363u: goto L_088698C0;
    case 364u: goto L_088698D0;
    case 365u: goto L_088698D8;
    case 366u: goto L_088698E4;
    case 367u: goto L_088698F0;
    case 368u: goto L_0886993C;
    case 369u: goto L_0886997C;
    case 370u: goto L_08869A04;
    case 371u: goto L_08869A58;
    case 372u: goto L_08869A7C;
    case 373u: goto L_08869A90;
    case 374u: goto L_08869AA4;
    case 375u: goto L_08869AD0;
    case 376u: goto L_08869AE4;
    case 377u: goto L_08869B08;
    case 378u: goto L_08869B14;
    case 379u: goto L_08869B20;
    case 380u: goto L_08869B24;
    case 381u: goto L_08869B2C;
    case 382u: goto L_08869B70;
    case 383u: goto L_08869B84;
    case 384u: goto L_08869BE8;
    case 385u: goto L_08869C24;
    case 386u: goto L_08869C28;
    case 387u: goto L_08869C6C;
    case 388u: goto L_08869CDC;
    case 389u: goto L_08869CEC;
    case 390u: goto L_08869D68;
    case 391u: goto L_08869D8C;
    case 392u: goto L_08869DB4;
    case 393u: goto L_08869DC0;
    case 394u: goto L_08869DDC;
    case 395u: goto L_08869DE4;
    case 396u: goto L_08869DF4;
    case 397u: goto L_08869DFC;
    case 398u: goto L_08869E0C;
    case 399u: goto L_08869E10;
    case 400u: goto L_08869E18;
    case 401u: goto L_08869E20;
    case 402u: goto L_08869E58;
    case 403u: goto L_08869E60;
    case 404u: goto L_08869E6C;
    case 405u: goto L_08869E8C;
    case 406u: goto L_08869EA8;
    case 407u: goto L_08869EB0;
    case 408u: goto L_08869EC0;
    case 409u: goto L_08869EC8;
    case 410u: goto L_08869ED8;
    case 411u: goto L_08869EE0;
    case 412u: goto L_08869F00;
    case 413u: goto L_08869F10;
    case 414u: goto L_08869F18;
    case 415u: goto L_08869F38;
    case 416u: goto L_08869F48;
    case 417u: goto L_08869F50;
    case 418u: goto L_08869F58;
    case 419u: goto L_08869F78;
    case 420u: goto L_08869FDC;
    case 421u: goto L_08869FE0;
    case 422u: goto L_0886A000;
    case 423u: goto L_0886A00C;
    case 424u: goto L_0886A030;
    case 425u: goto L_0886A0A8;
    case 426u: goto L_0886A0B4;
    case 427u: goto L_0886A0C4;
    case 428u: goto L_0886A0D8;
    case 429u: goto L_0886A0EC;
    case 430u: goto L_0886A0F4;
    case 431u: goto L_0886A0FC;
    case 432u: goto L_0886A100;
    case 433u: goto L_0886A118;
    case 434u: goto L_0886A128;
    case 435u: goto L_0886A13C;
    case 436u: goto L_0886A150;
    case 437u: goto L_0886A158;
    case 438u: goto L_0886A174;
    case 439u: goto L_0886A180;
    case 440u: goto L_0886A190;
    case 441u: goto L_0886A194;
    case 442u: goto L_0886A1B4;
    case 443u: goto L_0886A1F4;
    case 444u: goto L_0886A1FC;
    case 445u: goto L_0886A23C;
    case 446u: goto L_0886A240;
    case 447u: goto L_0886A248;
    case 448u: goto L_0886A260;
    case 449u: goto L_0886A26C;
    case 450u: goto L_0886A274;
    case 451u: goto L_0886A27C;
    case 452u: goto L_0886A284;
    case 453u: goto L_0886A298;
    case 454u: goto L_0886A2A0;
    case 455u: goto L_0886A2A8;
    case 456u: goto L_0886A2B4;
    case 457u: goto L_0886A2BC;
    case 458u: goto L_0886A2C8;
    case 459u: goto L_0886A2DC;
    case 460u: goto L_0886A2E8;
    case 461u: goto L_0886A2F0;
    case 462u: goto L_0886A2FC;
    case 463u: goto L_0886A304;
    case 464u: goto L_0886A314;
    case 465u: goto L_0886A328;
    case 466u: goto L_0886A330;
    case 467u: goto L_0886A33C;
    case 468u: goto L_0886A344;
    case 469u: goto L_0886A360;
    case 470u: goto L_0886A368;
    case 471u: goto L_0886A370;
    case 472u: goto L_0886A378;
    case 473u: goto L_0886A380;
    case 474u: goto L_0886A388;
    case 475u: goto L_0886A390;
    case 476u: goto L_0886A398;
    case 477u: goto L_0886A39C;
    case 478u: goto L_0886A3B0;
    case 479u: goto L_0886A3E0;
    case 480u: goto L_0886A404;
    case 481u: goto L_0886A420;
    case 482u: goto L_0886A428;
    case 483u: goto L_0886A434;
    case 484u: goto L_0886A440;
    case 485u: goto L_0886A454;
    case 486u: goto L_0886A46C;
    case 487u: goto L_0886A480;
    case 488u: goto L_0886A494;
    case 489u: goto L_0886A4A4;
    case 490u: goto L_0886A4B8;
    case 491u: goto L_0886A4C8;
    case 492u: goto L_0886A4D0;
    case 493u: goto L_0886A4D8;
    case 494u: goto L_0886A4E8;
    case 495u: goto L_0886A4F0;
    case 496u: goto L_0886A4F8;
    case 497u: goto L_0886A500;
    case 498u: goto L_0886A518;
    case 499u: goto L_0886A520;
    case 500u: goto L_0886A538;
    case 501u: goto L_0886A540;
    case 502u: goto L_0886A548;
    case 503u: goto L_0886A570;
    case 504u: goto L_0886A578;
    case 505u: goto L_0886A584;
    case 506u: goto L_0886A58C;
    case 507u: goto L_0886A598;
    case 508u: goto L_0886A5A0;
    case 509u: goto L_0886A5AC;
    case 510u: goto L_0886A5B4;
    case 511u: goto L_0886A5BC;
    case 512u: goto L_0886A5C8;
    case 513u: goto L_0886A5CC;
    case 514u: goto L_0886A5E0;
    case 515u: goto L_0886A5F8;
    case 516u: goto L_0886A60C;
    case 517u: goto L_0886A614;
    case 518u: goto L_0886A624;
    case 519u: goto L_0886A630;
    case 520u: goto L_0886A648;
    case 521u: goto L_0886A658;
    case 522u: goto L_0886A668;
    case 523u: goto L_0886A670;
    case 524u: goto L_0886A678;
    case 525u: goto L_0886A680;
    case 526u: goto L_0886A68C;
    case 527u: goto L_0886A69C;
    case 528u: goto L_0886A6B4;
    case 529u: goto L_0886A6C4;
    case 530u: goto L_0886A6D0;
    case 531u: goto L_0886A6E0;
    case 532u: goto L_0886A6EC;
    case 533u: goto L_0886A6FC;
    case 534u: goto L_0886A710;
    case 535u: goto L_0886A724;
    case 536u: goto L_0886A734;
    case 537u: goto L_0886A73C;
    case 538u: goto L_0886A74C;
    case 539u: goto L_0886A754;
    case 540u: goto L_0886A768;
    case 541u: goto L_0886A770;
    case 542u: goto L_0886A774;
    case 543u: goto L_0886A77C;
    case 544u: goto L_0886A78C;
    case 545u: goto L_0886A790;
    case 546u: goto L_0886A7A4;
    case 547u: goto L_0886A7AC;
    case 548u: goto L_0886A7E0;
    case 549u: goto L_0886A7EC;
    case 550u: goto L_0886A7F4;
    case 551u: goto L_0886A7FC;
    case 552u: goto L_0886A810;
    case 553u: goto L_0886A818;
    case 554u: goto L_0886A824;
    case 555u: goto L_0886A82C;
    case 556u: goto L_0886A858;
    case 557u: goto L_0886A86C;
    case 558u: goto L_0886A878;
    case 559u: goto L_0886A88C;
    case 560u: goto L_0886A890;
    case 561u: goto L_0886A898;
    case 562u: goto L_0886A8E0;
    case 563u: goto L_0886A8F4;
    case 564u: goto L_0886A8FC;
    case 565u: goto L_0886A908;
    case 566u: goto L_0886A920;
    case 567u: goto L_0886A92C;
    case 568u: goto L_0886A938;
    case 569u: goto L_0886A964;
    case 570u: goto L_0886A990;
    case 571u: goto L_0886A9B0;
    case 572u: goto L_0886A9B8;
    case 573u: goto L_0886A9C0;
    case 574u: goto L_0886A9CC;
    case 575u: goto L_0886A9D0;
    case 576u: goto L_0886A9DC;
    case 577u: goto L_0886A9F0;
    case 578u: goto L_0886AA00;
    case 579u: goto L_0886AA1C;
    case 580u: goto L_0886AA3C;
    case 581u: goto L_0886AA40;
    case 582u: goto L_0886AA64;
    case 583u: goto L_0886AAB0;
    case 584u: goto L_0886AB18;
    case 585u: goto L_0886AB20;
    case 586u: goto L_0886AB28;
    case 587u: goto L_0886AB30;
    case 588u: goto L_0886AB4C;
    case 589u: goto L_0886AB54;
    case 590u: goto L_0886AB60;
    case 591u: goto L_0886AB68;
    case 592u: goto L_0886AB78;
    case 593u: goto L_0886AB80;
    case 594u: goto L_0886AB8C;
    case 595u: goto L_0886AB94;
    case 596u: goto L_0886AB9C;
    case 597u: goto L_0886ABA4;
    case 598u: goto L_0886ABAC;
    case 599u: goto L_0886ABE4;
    case 600u: goto L_0886ABF0;
    case 601u: goto L_0886ABF8;
    case 602u: goto L_0886AC08;
    case 603u: goto L_0886AC30;
    case 604u: goto L_0886AC44;
    case 605u: goto L_0886AC54;
    case 606u: goto L_0886AC58;
    case 607u: goto L_0886AC80;
    case 608u: goto L_0886AC8C;
    case 609u: goto L_0886AC98;
    case 610u: goto L_0886ACA0;
    case 611u: goto L_0886ACC0;
    case 612u: goto L_0886ACFC;
    case 613u: goto L_0886AD1C;
    case 614u: goto L_0886AD2C;
    case 615u: goto L_0886AD34;
    case 616u: goto L_0886AD48;
    case 617u: goto L_0886AD68;
    case 618u: goto L_0886AD8C;
    case 619u: goto L_0886AD98;
    case 620u: goto L_0886ADC4;
    case 621u: goto L_0886ADD0;
    case 622u: goto L_0886ADDC;
    case 623u: goto L_0886ADE4;
    case 624u: goto L_0886ADE8;
    case 625u: goto L_0886ADF8;
    case 626u: goto L_0886AE04;
    case 627u: goto L_0886AE0C;
    case 628u: goto L_0886AE10;
    case 629u: goto L_0886AE28;
    case 630u: goto L_0886AE34;
    case 631u: goto L_0886AE3C;
    case 632u: goto L_0886AE40;
    case 633u: goto L_0886AE50;
    case 634u: goto L_0886AE5C;
    case 635u: goto L_0886AE64;
    case 636u: goto L_0886AE68;
    case 637u: goto L_0886AE80;
    case 638u: goto L_0886AE8C;
    case 639u: goto L_0886AF00;
    case 640u: goto L_0886AF0C;
    case 641u: goto L_0886AF6C;
    case 642u: goto L_0886AFD0;
    case 643u: goto L_0886AFF8;
    case 644u: goto L_0886B03C;
    case 645u: goto L_0886B050;
    case 646u: goto L_0886B058;
    case 647u: goto L_0886B060;
    case 648u: goto L_0886B068;
    case 649u: goto L_0886B06C;
    case 650u: goto L_0886B084;
    case 651u: goto L_0886B088;
    case 652u: goto L_0886B094;
    case 653u: goto L_0886B0A0;
    case 654u: goto L_0886B0A8;
    case 655u: goto L_0886B0EC;
    case 656u: goto L_0886B0F4;
    case 657u: goto L_0886B10C;
    case 658u: goto L_0886B114;
    case 659u: goto L_0886B11C;
    case 660u: goto L_0886B128;
    case 661u: goto L_0886B13C;
    case 662u: goto L_0886B148;
    case 663u: goto L_0886B174;
    case 664u: goto L_0886B1A4;
    case 665u: goto L_0886B21C;
    case 666u: goto L_0886B254;
    case 667u: goto L_0886B26C;
    case 668u: goto L_0886B280;
    case 669u: goto L_0886B2B0;
    case 670u: goto L_0886B2BC;
    case 671u: goto L_0886B2C8;
    case 672u: goto L_0886B2CC;
    case 673u: goto L_0886B334;
    case 674u: goto L_0886B35C;
    case 675u: goto L_0886B384;
    case 676u: goto L_0886B3A4;
    case 677u: goto L_0886B3B4;
    case 678u: goto L_0886B3BC;
    case 679u: goto L_0886B3C4;
    case 680u: goto L_0886B3D8;
    case 681u: goto L_0886B414;
    case 682u: goto L_0886B45C;
    case 683u: goto L_0886B474;
    case 684u: goto L_0886B480;
    case 685u: goto L_0886B48C;
    case 686u: goto L_0886B494;
    case 687u: goto L_0886B4AC;
    case 688u: goto L_0886B4BC;
    case 689u: goto L_0886B4C8;
    case 690u: goto L_0886B4D4;
    case 691u: goto L_0886B4E8;
    case 692u: goto L_0886B4F4;
    case 693u: goto L_0886B504;
    case 694u: goto L_0886B518;
    case 695u: goto L_0886B52C;
    case 696u: goto L_0886B534;
    case 697u: goto L_0886B548;
    case 698u: goto L_0886B584;
    case 699u: goto L_0886B5A8;
    case 700u: goto L_0886B5B4;
    case 701u: goto L_0886B5C0;
    case 702u: goto L_0886B5D4;
    case 703u: goto L_0886B5E8;
    case 704u: goto L_0886B5F4;
    case 705u: goto L_0886B610;
    case 706u: goto L_0886B628;
    case 707u: goto L_0886B630;
    case 708u: goto L_0886B638;
    case 709u: goto L_0886B63C;
    case 710u: goto L_0886B650;
    case 711u: goto L_0886B660;
    case 712u: goto L_0886B66C;
    case 713u: goto L_0886B690;
    case 714u: goto L_0886B698;
    case 715u: goto L_0886B6A8;
    case 716u: goto L_0886B6CC;
    case 717u: goto L_0886B6D4;
    case 718u: goto L_0886B6DC;
    case 719u: goto L_0886B6F0;
    case 720u: goto L_0886B734;
    case 721u: goto L_0886B894;
    case 722u: goto L_0886B8B0;
    case 723u: goto L_0886B8BC;
    case 724u: goto L_0886B8D8;
    case 725u: goto L_0886B8E4;
    case 726u: goto L_0886B900;
    case 727u: goto L_0886B90C;
    case 728u: goto L_0886B928;
    case 729u: goto L_0886B934;
    case 730u: goto L_0886B950;
    case 731u: goto L_0886B95C;
    case 732u: goto L_0886B978;
    case 733u: goto L_0886B984;
    case 734u: goto L_0886B9DC;
    case 735u: goto L_0886B9E8;
    case 736u: goto L_0886BA04;
    case 737u: goto L_0886BACC;
    case 738u: goto L_0886BAE0;
    case 739u: goto L_0886BB00;
    case 740u: goto L_0886BB14;
    case 741u: goto L_0886BB34;
    case 742u: goto L_0886BB40;
    case 743u: goto L_0886BB50;
    case 744u: goto L_0886BB5C;
    case 745u: goto L_0886BB80;
    case 746u: goto L_0886BB88;
    case 747u: goto L_0886BB90;
    case 748u: goto L_0886BB98;
    case 749u: goto L_0886BBA0;
    case 750u: goto L_0886BBA8;
    case 751u: goto L_0886BBB0;
    case 752u: goto L_0886BBC4;
    case 753u: goto L_0886BBC8;
    case 754u: goto L_0886BBCC;
    case 755u: goto L_0886BBD4;
    case 756u: goto L_0886BBD8;
    case 757u: goto L_0886BBDC;
    case 758u: goto L_0886BBE4;
    case 759u: goto L_0886BBE8;
    case 760u: goto L_0886BC08;
    case 761u: goto L_0886BC24;
    case 762u: goto L_0886BC38;
    case 763u: goto L_0886BC44;
    case 764u: goto L_0886BC50;
    case 765u: goto L_0886BC58;
    case 766u: goto L_0886BC6C;
    case 767u: goto L_0886BC74;
    case 768u: goto L_0886BC98;
    case 769u: goto L_0886BCA4;
    case 770u: goto L_0886BCAC;
    case 771u: goto L_0886BCB0;
    case 772u: goto L_0886BCC0;
    case 773u: goto L_0886BCD0;
    case 774u: goto L_0886BCEC;
    case 775u: goto L_0886BCF8;
    case 776u: goto L_0886BD20;
    case 777u: goto L_0886BD30;
    case 778u: goto L_0886BD3C;
    case 779u: goto L_0886BD4C;
    case 780u: goto L_0886BD5C;
    case 781u: goto L_0886BD70;
    case 782u: goto L_0886BD7C;
    case 783u: goto L_0886BD98;
    case 784u: goto L_0886BDB0;
    case 785u: goto L_0886BDBC;
    case 786u: goto L_0886BDC4;
    case 787u: goto L_0886BDC8;
    case 788u: goto L_0886BDE8;
    case 789u: goto L_0886BE0C;
    case 790u: goto L_0886BE2C;
    case 791u: goto L_0886BE3C;
    case 792u: goto L_0886BE48;
    case 793u: goto L_0886BE50;
    case 794u: goto L_0886BE54;
    case 795u: goto L_0886BE60;
    case 796u: goto L_0886BE7C;
    case 797u: goto L_0886BE88;
    case 798u: goto L_0886BE94;
    case 799u: goto L_0886BE98;
    case 800u: goto L_0886BEA8;
    case 801u: goto L_0886BEB0;
    case 802u: goto L_0886BED0;
    case 803u: goto L_0886BEE4;
    case 804u: goto L_0886BEF0;
    case 805u: goto L_0886BF38;
    case 806u: goto L_0886BF44;
    case 807u: goto L_0886BF54;
    case 808u: goto L_0886BF60;
    case 809u: goto L_0886BF70;
    case 810u: goto L_0886BF7C;
    case 811u: goto L_0886BF90;
    case 812u: goto L_0886BF98;
    case 813u: goto L_0886BFA4;
    case 814u: goto L_0886BFC0;
    case 815u: goto L_0886BFDC;
    case 816u: goto L_0886BFE8;
    case 817u: goto L_0886BFF4;
    case 818u: goto L_0886BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08868004:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08868010;
      }
      goto L_0886800C;
    }
L_0886800C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08868010;
L_08868010:
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886808C;
      }
      goto L_0886801C;
    }
L_0886801C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886808C;
      }
      goto L_08868024;
    }
L_08868024:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08868054;
      }
      goto L_08868030;
    }
L_08868030:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08868070;
      }
      goto L_08868038;
    }
L_08868038:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08868054;
      }
      goto L_08868040;
    }
L_08868040:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08868070;
      }
      goto L_08868048;
    }
L_08868048:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886808C;
      }
      goto L_08868054;
    }
L_08868054:
    ctx.gpr[31] = (0x0886805Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0886805Cu) goto L_0886805C;
    return;
L_0886805C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868068;
      }
      goto L_08868064;
    }
L_08868064:
    ctx.gpr[16] = (0u | 1u);
    goto L_08868068;
L_08868068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886808C;
      }
      goto L_08868070;
    }
L_08868070:
    ctx.gpr[31] = (0x08868078u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08868078u) goto L_08868078;
    return;
L_08868078:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868084;
      }
      goto L_08868080;
    }
L_08868080:
    ctx.gpr[16] = (0u | 1u);
    goto L_08868084;
L_08868084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886808C;
      }
      goto L_0886808C;
    }
L_0886808C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868098;
      }
      goto L_08868094;
    }
L_08868094:
    ctx.gpr[19] = (0u | 0u);
    goto L_08868098;
L_08868098:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 930u, 0x08867E60u>(ctx, &aot_mem); return;
      }
      goto L_088680A8;
    }
L_088680A8:
    ctx.gpr[4] = (0u < ctx.gpr[19] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[19] = (0u < ctx.gpr[19] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088680D8;
      }
      goto L_088680D0;
    }
L_088680D0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08868128;
      }
      goto L_088680D8;
    }
L_088680D8:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08868104;
      }
      goto L_088680F0;
    }
L_088680F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08868128;
      }
      goto L_08868104;
    }
L_08868104:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[19] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868128;
      }
      goto L_08868124;
    }
L_08868124:
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08868128;
L_08868128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868194;
      }
      goto L_08868134;
    }
L_08868134:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[14] = ctx.fpr[16] - ctx.fpr[15];
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
      if (branch_taken) {
          goto L_08868178;
      }
      goto L_08868158;
    }
L_08868158:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08868170u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x08868170u) goto L_08868170;
    return;
L_08868170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868194;
      }
      goto L_08868178;
    }
L_08868178:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08868194u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x08868194u) goto L_08868194;
    return;
L_08868194:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088681B0;
      }
      goto L_088681A0;
    }
L_088681A0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088681B0;
      }
      goto L_088681A8;
    }
L_088681A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088681B0;
      }
      goto L_088681B0;
    }
L_088681B0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088681F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 406 ? 1u : 0u);
    ctx.gpr[30] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08868268;
      }
      goto L_08868250;
    }
L_08868250:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 409 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868268;
      }
      goto L_0886825C;
    }
L_0886825C:
    ctx.gpr[23] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886826C;
      }
      goto L_08868268;
    }
L_08868268:
    ctx.gpr[23] = (0u | 1u);
    goto L_0886826C;
L_0886826C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08868290;
      }
      goto L_08868274;
    }
L_08868274:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08868288u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08868288u) goto L_08868288;
    return;
L_08868288:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088682A0;
      }
      goto L_08868290;
    }
L_08868290:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x088682A0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088682A0u) goto L_088682A0;
    return;
L_088682A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x088682ACu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x088682ACu) goto L_088682AC;
    return;
L_088682AC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088682B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x088682B8u) goto L_088682B8;
    return;
L_088682B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088682D8;
      }
      goto L_088682C0;
    }
L_088682C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088682E4;
      }
      goto L_088682D8;
    }
L_088682D8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_088682E4;
L_088682E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868304;
      }
      goto L_088682F4;
    }
L_088682F4:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0886830C;
      }
      goto L_08868304;
    }
L_08868304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_0886830C;
L_0886830C:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0886831Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x0886831Cu) goto L_0886831C;
    return;
L_0886831C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(260));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    goto L_08868340;
L_08868340:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868590;
      }
      goto L_08868348;
    }
L_08868348:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868590;
      }
      goto L_08868350;
    }
L_08868350:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08868360u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 96u, 0x08818B00u>(ctx, &aot_mem) && ctx.pc == 0x08868360u) goto L_08868360;
    return;
L_08868360:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868580;
      }
      goto L_08868380;
    }
L_08868380:
    ctx.gpr[31] = (0x08868388u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08868388u) goto L_08868388;
    return;
L_08868388:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088683A8;
      }
      goto L_08868390;
    }
L_08868390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088683B4;
      }
      goto L_088683A8;
    }
L_088683A8:
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
    goto L_088683B4;
L_088683B4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868474;
      }
      goto L_088683BC;
    }
L_088683BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886846C;
      }
      goto L_088683D8;
    }
L_088683D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886846C;
      }
      goto L_088683F4;
    }
L_088683F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886846C;
      }
      goto L_08868410;
    }
L_08868410:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886846C;
      }
      goto L_0886842C;
    }
L_0886842C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886846C;
      }
      goto L_08868448;
    }
L_08868448:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886846C;
      }
      goto L_08868464;
    }
L_08868464:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088684F0;
      }
      goto L_0886846C;
    }
L_0886846C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088684F0;
      }
      goto L_08868474;
    }
L_08868474:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088684EC;
      }
      goto L_08868490;
    }
L_08868490:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088684EC;
      }
      goto L_088684AC;
    }
L_088684AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088684EC;
      }
      goto L_088684C8;
    }
L_088684C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088684EC;
      }
      goto L_088684E4;
    }
L_088684E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088684F0;
      }
      goto L_088684EC;
    }
L_088684EC:
    ctx.gpr[4] = (0u | 0u);
    goto L_088684F0;
L_088684F0:
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868574;
      }
      goto L_088684FC;
    }
L_088684FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 407 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 408 ? 1u : 0u);
      if (branch_taken) {
          goto L_08868524;
      }
      goto L_0886850C;
    }
L_0886850C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 406 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868574;
      }
      goto L_08868518;
    }
L_08868518:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868574;
      }
      goto L_08868524;
    }
L_08868524:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 409 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886853C;
      }
      goto L_0886852C;
    }
L_0886852C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868558;
      }
      goto L_08868534;
    }
L_08868534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868574;
      }
      goto L_0886853C;
    }
L_0886853C:
    ctx.gpr[31] = (0x08868544u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08868544u) goto L_08868544;
    return;
L_08868544:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868550;
      }
      goto L_0886854C;
    }
L_0886854C:
    ctx.gpr[16] = (0u | 1u);
    goto L_08868550;
L_08868550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868574;
      }
      goto L_08868558;
    }
L_08868558:
    ctx.gpr[31] = (0x08868560u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08868560u) goto L_08868560;
    return;
L_08868560:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886856C;
      }
      goto L_08868568;
    }
L_08868568:
    ctx.gpr[16] = (0u | 1u);
    goto L_0886856C;
L_0886856C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868574;
      }
      goto L_08868574;
    }
L_08868574:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868580;
      }
      goto L_0886857C;
    }
L_0886857C:
    ctx.gpr[19] = (0u | 0u);
    goto L_08868580;
L_08868580:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08868340;
      }
      goto L_08868590;
    }
L_08868590:
    ctx.gpr[4] = (0u < ctx.gpr[19] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u < ctx.gpr[19] ? 1u : 0u);
      if (branch_taken) {
          goto L_088685BC;
      }
      goto L_088685B4;
    }
L_088685B4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_0886860C;
      }
      goto L_088685BC;
    }
L_088685BC:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088685E8;
      }
      goto L_088685D4;
    }
L_088685D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0886860C;
      }
      goto L_088685E8;
    }
L_088685E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[19] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886860C;
      }
      goto L_08868608;
    }
L_08868608:
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_0886860C;
L_0886860C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886867C;
      }
      goto L_08868618;
    }
L_08868618:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868650;
      }
      goto L_08868620;
    }
L_08868620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    ctx.gpr[31] = (0x08868648u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x08868648u) goto L_08868648;
    return;
L_08868648:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886867C;
      }
      goto L_08868650;
    }
L_08868650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[31] = (0x0886867Cu);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x0886867Cu) goto L_0886867C;
    return;
L_0886867C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868698;
      }
      goto L_08868688;
    }
L_08868688:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868698;
      }
      goto L_08868690;
    }
L_08868690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868698;
      }
      goto L_08868698;
    }
L_08868698:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088686D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 409 ? 1u : 0u);
    ctx.gpr[30] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(29704));
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08868740;
      }
      goto L_08868728;
    }
L_08868728:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 412 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868740;
      }
      goto L_08868734;
    }
L_08868734:
    ctx.gpr[23] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868744;
      }
      goto L_08868740;
    }
L_08868740:
    ctx.gpr[23] = (0u | 1u);
    goto L_08868744;
L_08868744:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08868768;
      }
      goto L_0886874C;
    }
L_0886874C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08868760u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08868760u) goto L_08868760;
    return;
L_08868760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868778;
      }
      goto L_08868768;
    }
L_08868768:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08868778u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08868778u) goto L_08868778;
    return;
L_08868778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08868784u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08868784u) goto L_08868784;
    return;
L_08868784:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088687B4;
      }
      goto L_088687A4;
    }
L_088687A4:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088687BC;
      }
      goto L_088687B4;
    }
L_088687B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_088687BC;
L_088687BC:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x088687CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x088687CCu) goto L_088687CC;
    return;
L_088687CC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(260));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    goto L_088687F0;
L_088687F0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868A48;
      }
      goto L_088687F8;
    }
L_088687F8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868A48;
      }
      goto L_08868800;
    }
L_08868800:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08868810u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 96u, 0x08818B00u>(ctx, &aot_mem) && ctx.pc == 0x08868810u) goto L_08868810;
    return;
L_08868810:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868A30;
      }
      goto L_08868830;
    }
L_08868830:
    ctx.gpr[31] = (0x08868838u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08868838u) goto L_08868838;
    return;
L_08868838:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868858;
      }
      goto L_08868840;
    }
L_08868840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868864;
      }
      goto L_08868858;
    }
L_08868858:
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
    goto L_08868864;
L_08868864:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868924;
      }
      goto L_0886886C;
    }
L_0886886C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886891C;
      }
      goto L_08868888;
    }
L_08868888:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886891C;
      }
      goto L_088688A4;
    }
L_088688A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886891C;
      }
      goto L_088688C0;
    }
L_088688C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886891C;
      }
      goto L_088688DC;
    }
L_088688DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886891C;
      }
      goto L_088688F8;
    }
L_088688F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886891C;
      }
      goto L_08868914;
    }
L_08868914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088689A0;
      }
      goto L_0886891C;
    }
L_0886891C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088689A0;
      }
      goto L_08868924;
    }
L_08868924:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886899C;
      }
      goto L_08868940;
    }
L_08868940:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886899C;
      }
      goto L_0886895C;
    }
L_0886895C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886899C;
      }
      goto L_08868978;
    }
L_08868978:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886899C;
      }
      goto L_08868994;
    }
L_08868994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088689A0;
      }
      goto L_0886899C;
    }
L_0886899C:
    ctx.gpr[4] = (0u | 0u);
    goto L_088689A0;
L_088689A0:
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868A24;
      }
      goto L_088689AC;
    }
L_088689AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 410 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 411 ? 1u : 0u);
      if (branch_taken) {
          goto L_088689D4;
      }
      goto L_088689BC;
    }
L_088689BC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 409 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868A24;
      }
      goto L_088689C8;
    }
L_088689C8:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868A24;
      }
      goto L_088689D4;
    }
L_088689D4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 412 ? 1u : 0u);
      if (branch_taken) {
          goto L_088689EC;
      }
      goto L_088689DC;
    }
L_088689DC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868A08;
      }
      goto L_088689E4;
    }
L_088689E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868A24;
      }
      goto L_088689EC;
    }
L_088689EC:
    ctx.gpr[31] = (0x088689F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x088689F4u) goto L_088689F4;
    return;
L_088689F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868A00;
      }
      goto L_088689FC;
    }
L_088689FC:
    ctx.gpr[16] = (0u | 1u);
    goto L_08868A00;
L_08868A00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868A24;
      }
      goto L_08868A08;
    }
L_08868A08:
    ctx.gpr[31] = (0x08868A10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08868A10u) goto L_08868A10;
    return;
L_08868A10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868A1C;
      }
      goto L_08868A18;
    }
L_08868A18:
    ctx.gpr[16] = (0u | 1u);
    goto L_08868A1C;
L_08868A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868A24;
      }
      goto L_08868A24;
    }
L_08868A24:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868A30;
      }
      goto L_08868A2C;
    }
L_08868A2C:
    ctx.gpr[19] = (0u | 0u);
    goto L_08868A30;
L_08868A30:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088687F0;
      }
      goto L_08868A48;
    }
L_08868A48:
    ctx.gpr[4] = (0u < ctx.gpr[19] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u < ctx.gpr[19] ? 1u : 0u);
      if (branch_taken) {
          goto L_08868A74;
      }
      goto L_08868A6C;
    }
L_08868A6C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08868AC4;
      }
      goto L_08868A74;
    }
L_08868A74:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08868AA0;
      }
      goto L_08868A8C;
    }
L_08868A8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08868AC4;
      }
      goto L_08868AA0;
    }
L_08868AA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[19] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868AC4;
      }
      goto L_08868AC0;
    }
L_08868AC0:
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08868AC4;
L_08868AC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868B34;
      }
      goto L_08868AD0;
    }
L_08868AD0:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868B08;
      }
      goto L_08868AD8;
    }
L_08868AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    ctx.gpr[31] = (0x08868B00u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x08868B00u) goto L_08868B00;
    return;
L_08868B00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868B34;
      }
      goto L_08868B08;
    }
L_08868B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[31] = (0x08868B34u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x08868B34u) goto L_08868B34;
    return;
L_08868B34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868B50;
      }
      goto L_08868B40;
    }
L_08868B40:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868B50;
      }
      goto L_08868B48;
    }
L_08868B48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868B50;
      }
      goto L_08868B50;
    }
L_08868B50:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868B8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(-412));
    ctx.gpr[22] = (ctx.gpr[20] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08868C14;
      }
      goto L_08868BF0;
    }
L_08868BF0:
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[20]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25560)));
    jump_target = ctx.gpr[1];
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868C08:
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868C18;
      }
      goto L_08868C14;
    }
L_08868C14:
    ctx.gpr[17] = (0u | 1u);
    goto L_08868C18;
L_08868C18:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08868C40;
      }
      goto L_08868C20;
    }
L_08868C20:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08868C34u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08868C34u) goto L_08868C34;
    return;
L_08868C34:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08868C54;
      }
      goto L_08868C3C;
    }
L_08868C3C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08868C40;
L_08868C40:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08868C50u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08868C50u) goto L_08868C50;
    return;
L_08868C50:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08868C54;
L_08868C54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868CA4;
      }
      goto L_08868C6C;
    }
L_08868C6C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868C98;
      }
      goto L_08868C90;
    }
L_08868C90:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08868C98;
L_08868C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08868CB4;
      }
      goto L_08868CA4;
    }
L_08868CA4:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08868CB4;
L_08868CB4:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868CCC;
      }
      goto L_08868CC4;
    }
L_08868CC4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08868CCC;
L_08868CCC:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868CE4;
      }
      goto L_08868CDC;
    }
L_08868CDC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08868CE4;
L_08868CE4:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08868CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08868CF4u) goto L_08868CF4;
    return;
L_08868CF4:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(260));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    goto L_08868D1C;
L_08868D1C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868F6C;
      }
      goto L_08868D24;
    }
L_08868D24:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868F6C;
      }
      goto L_08868D2C;
    }
L_08868D2C:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[31] = (0x08868D40u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 96u, 0x08818B00u>(ctx, &aot_mem) && ctx.pc == 0x08868D40u) goto L_08868D40;
    return;
L_08868D40:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868F54;
      }
      goto L_08868D60;
    }
L_08868D60:
    ctx.gpr[31] = (0x08868D68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08868D68u) goto L_08868D68;
    return;
L_08868D68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868D88;
      }
      goto L_08868D70;
    }
L_08868D70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868D94;
      }
      goto L_08868D88;
    }
L_08868D88:
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
    goto L_08868D94;
L_08868D94:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868DE0;
      }
      goto L_08868D9C;
    }
L_08868D9C:
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[20]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25528)));
    jump_target = ctx.gpr[1];
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868DB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868DE0;
      }
      goto L_08868DBC;
    }
L_08868DBC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08868DC8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 745u, 0x08863CB4u>(ctx, &aot_mem) && ctx.pc == 0x08868DC8u) goto L_08868DC8;
    return;
L_08868DC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868DD8;
      }
      goto L_08868DD0;
    }
L_08868DD0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (0u | 1u);
    goto L_08868DD8;
L_08868DD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868DE0;
      }
      goto L_08868DE0;
    }
L_08868DE0:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868F54;
      }
      goto L_08868DE8;
    }
L_08868DE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868E7C;
      }
      goto L_08868DF4;
    }
L_08868DF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868E74;
      }
      goto L_08868E08;
    }
L_08868E08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868E74;
      }
      goto L_08868E1C;
    }
L_08868E1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868E74;
      }
      goto L_08868E30;
    }
L_08868E30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868E74;
      }
      goto L_08868E44;
    }
L_08868E44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868E74;
      }
      goto L_08868E58;
    }
L_08868E58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868E74;
      }
      goto L_08868E6C;
    }
L_08868E6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08868ED8;
      }
      goto L_08868E74;
    }
L_08868E74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08868ED8;
      }
      goto L_08868E7C;
    }
L_08868E7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868ED4;
      }
      goto L_08868E90;
    }
L_08868E90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868ED4;
      }
      goto L_08868EA4;
    }
L_08868EA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868ED4;
      }
      goto L_08868EB8;
    }
L_08868EB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868ED4;
      }
      goto L_08868ECC;
    }
L_08868ECC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08868ED8;
      }
      goto L_08868ED4;
    }
L_08868ED4:
    ctx.gpr[4] = (0u | 0u);
    goto L_08868ED8;
L_08868ED8:
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868F48;
      }
      goto L_08868EE4;
    }
L_08868EE4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868F48;
      }
      goto L_08868EEC;
    }
L_08868EEC:
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[20]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25496)));
    jump_target = ctx.gpr[1];
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868F04:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868F48;
      }
      goto L_08868F10;
    }
L_08868F10:
    ctx.gpr[31] = (0x08868F18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08868F18u) goto L_08868F18;
    return;
L_08868F18:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868F24;
      }
      goto L_08868F20;
    }
L_08868F20:
    ctx.gpr[16] = (0u | 1u);
    goto L_08868F24;
L_08868F24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868F48;
      }
      goto L_08868F2C;
    }
L_08868F2C:
    ctx.gpr[31] = (0x08868F34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08868F34u) goto L_08868F34;
    return;
L_08868F34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868F40;
      }
      goto L_08868F3C;
    }
L_08868F3C:
    ctx.gpr[16] = (0u | 1u);
    goto L_08868F40;
L_08868F40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868F48;
      }
      goto L_08868F48;
    }
L_08868F48:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868F54;
      }
      goto L_08868F50;
    }
L_08868F50:
    ctx.gpr[19] = (0u | 0u);
    goto L_08868F54;
L_08868F54:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08868D1C;
      }
      goto L_08868F6C;
    }
L_08868F6C:
    ctx.gpr[4] = (0u < ctx.gpr[19] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u < ctx.gpr[19] ? 1u : 0u);
      if (branch_taken) {
          goto L_08868F98;
      }
      goto L_08868F90;
    }
L_08868F90:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08868FE8;
      }
      goto L_08868F98;
    }
L_08868F98:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08868FC4;
      }
      goto L_08868FB0;
    }
L_08868FB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08868FE8;
      }
      goto L_08868FC4;
    }
L_08868FC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[19] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868FE8;
      }
      goto L_08868FE4;
    }
L_08868FE4:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08868FE8;
L_08868FE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869058;
      }
      goto L_08868FF4;
    }
L_08868FF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869034;
      }
      goto L_08869000;
    }
L_08869000:
    ctx.fpr[16] = ctx.fpr[24] + ctx.fpr[30];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0886902Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x0886902Cu) goto L_0886902C;
    return;
L_0886902C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08869058;
      }
      goto L_08869034;
    }
L_08869034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08869058u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x08869058u) goto L_08869058;
    return;
L_08869058:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869064;
      }
      goto L_08869064;
    }
L_08869064:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088690AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7960), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7956), 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(18712));
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7960));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[18] = (2239u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(23008));
    goto L_0886912C;
L_0886912C:
    ctx.gpr[31] = (0x08869134u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 369u, 0x088623ECu>(ctx, &aot_mem) && ctx.pc == 0x08869134u) goto L_08869134;
    return;
L_08869134:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08869140u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 415u, 0x088626F8u>(ctx, &aot_mem) && ctx.pc == 0x08869140u) goto L_08869140;
    return;
L_08869140:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(536));
      if (branch_taken) {
          goto L_0886912C;
      }
      goto L_08869150;
    }
L_08869150:
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[31] = (0x0886915Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21784));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 272u, 0x08861C5Cu>(ctx, &aot_mem) && ctx.pc == 0x0886915Cu) goto L_0886915C;
    return;
L_0886915C:
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[31] = (0x08869168u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22192));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 293u, 0x08861DF8u>(ctx, &aot_mem) && ctx.pc == 0x08869168u) goto L_08869168;
    return;
L_08869168:
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[31] = (0x08869174u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22240));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 329u, 0x08862038u>(ctx, &aot_mem) && ctx.pc == 0x08869174u) goto L_08869174;
    return;
L_08869174:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08869180u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 299u, 0x08888F30u>(ctx, &aot_mem) && ctx.pc == 0x08869180u) goto L_08869180;
    return;
L_08869180:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7996), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7992), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7968), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7972), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7976), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7980), ctx.gpr[21]);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_088691A8;
L_088691A8:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_088691B0;
L_088691B0:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088691B0;
      }
      goto L_088691C4;
    }
L_088691C4:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 305 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_088691A8;
      }
      goto L_088691DC;
    }
L_088691DC:
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7984), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869348;
      }
      goto L_088691EC;
    }
L_088691EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869348;
      }
      goto L_088691F8;
    }
L_088691F8:
    ctx.gpr[31] = (0x08869200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 54u, 0x08870454u>(ctx, &aot_mem) && ctx.pc == 0x08869200u) goto L_08869200;
    return;
L_08869200:
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869228;
      }
      goto L_08869214;
    }
L_08869214:
    ctx.gpr[31] = (0x0886921Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 111u, 0x08A309DCu>(ctx, &aot_mem) && ctx.pc == 0x0886921Cu) goto L_0886921C;
    return;
L_0886921C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869214;
      }
      goto L_08869228;
    }
L_08869228:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088692A8;
      }
      goto L_08869234;
    }
L_08869234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_0886924C;
    }
    goto L_08869240;
L_08869240:
    ctx.gpr[31] = (0x08869248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08869248u) goto L_08869248;
    return;
L_08869248:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_0886924C;
L_0886924C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0886926C;
      }
      goto L_0886925C;
    }
L_0886925C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08869274;
      }
      goto L_0886926C;
    }
L_0886926C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08869274;
L_08869274:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088692A8;
      }
      goto L_0886927C;
    }
L_0886927C:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08869288u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 316u, 0x08A225A4u>(ctx, &aot_mem) && ctx.pc == 0x08869288u) goto L_08869288;
    return;
L_08869288:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08869294u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 225u, 0x08941948u>(ctx, &aot_mem) && ctx.pc == 0x08869294u) goto L_08869294;
    return;
L_08869294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088692B0;
      }
      goto L_088692A0;
    }
L_088692A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_088692BC;
      }
      goto L_088692A8;
    }
L_088692A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088697A8;
      }
      goto L_088692B0;
    }
L_088692B0:
    ctx.gpr[31] = (0x088692B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x088692B8u) goto L_088692B8;
    return;
L_088692B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_088692BC;
L_088692BC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088692D0;
      }
      goto L_088692C4;
    }
L_088692C4:
    ctx.gpr[31] = (0x088692CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x088692CCu) goto L_088692CC;
    return;
L_088692CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088692D0;
L_088692D0:
    ctx.gpr[31] = (0x088692D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 644u, 0x089BB018u>(ctx, &aot_mem) && ctx.pc == 0x088692D8u) goto L_088692D8;
    return;
L_088692D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_088692F0;
    }
    goto L_088692E4;
L_088692E4:
    ctx.gpr[31] = (0x088692ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x088692ECu) goto L_088692EC;
    return;
L_088692EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_088692F0;
L_088692F0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08869304;
      }
      goto L_088692F8;
    }
L_088692F8:
    ctx.gpr[31] = (0x08869300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08869300u) goto L_08869300;
    return;
L_08869300:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08869304;
L_08869304:
    ctx.gpr[31] = (0x0886930Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 683u, 0x089BB268u>(ctx, &aot_mem) && ctx.pc == 0x0886930Cu) goto L_0886930C;
    return;
L_0886930C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_08869324;
    }
    goto L_08869318;
L_08869318:
    ctx.gpr[31] = (0x08869320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08869320u) goto L_08869320;
    return;
L_08869320:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08869324;
L_08869324:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08869338;
      }
      goto L_0886932C;
    }
L_0886932C:
    ctx.gpr[31] = (0x08869334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08869334u) goto L_08869334;
    return;
L_08869334:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08869338;
L_08869338:
    ctx.gpr[31] = (0x08869340u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 645u, 0x089BB020u>(ctx, &aot_mem) && ctx.pc == 0x08869340u) goto L_08869340;
    return;
L_08869340:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088697A8;
      }
      goto L_08869348;
    }
L_08869348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(31984));
    ctx.gpr[18] = (2240u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28496));
    ctx.gpr[19] = (2239u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(31552));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (2239u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32064));
    ctx.gpr[6] = (2240u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (2240u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28704));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08869398;
      }
      goto L_08869390;
    }
L_08869390:
    ctx.gpr[31] = (0x08869398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 595u, 0x088633B4u>(ctx, &aot_mem) && ctx.pc == 0x08869398u) goto L_08869398;
    return;
L_08869398:
    ctx.gpr[31] = (0x088693A0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-29084));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 351u, 0x08871328u>(ctx, &aot_mem) && ctx.pc == 0x088693A0u) goto L_088693A0;
    return;
L_088693A0:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-29076));
    ctx.gpr[31] = (0x088693ACu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-29064));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 359u, 0x088713B4u>(ctx, &aot_mem) && ctx.pc == 0x088693ACu) goto L_088693AC;
    return;
L_088693AC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8004));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088693C0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 361u, 0x088713D0u>(ctx, &aot_mem) && ctx.pc == 0x088693C0u) goto L_088693C0;
    return;
L_088693C0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8008), 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8008));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088693D4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 361u, 0x088713D0u>(ctx, &aot_mem) && ctx.pc == 0x088693D4u) goto L_088693D4;
    return;
L_088693D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088693E8;
      }
      goto L_088693E0;
    }
L_088693E0:
    ctx.gpr[31] = (0x088693E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 659u, 0x0887F14Cu>(ctx, &aot_mem) && ctx.pc == 0x088693E8u) goto L_088693E8;
    return;
L_088693E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869454;
      }
      goto L_088693F4;
    }
L_088693F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869408;
      }
      goto L_08869400;
    }
L_08869400:
    ctx.gpr[31] = (0x08869408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08869408u) goto L_08869408;
    return;
L_08869408:
    ctx.gpr[31] = (0x08869410u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 301u, 0x08A55334u>(ctx, &aot_mem) && ctx.pc == 0x08869410u) goto L_08869410;
    return;
L_08869410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8008)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-29060));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08869438u);
    ctx.gpr[9] = (0u | 0u);
    ctx.pc = 0x08B73534u;
    return;
L_08869438:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0886944Cu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B7342Cu;
    return;
L_0886944C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148), ctx.gpr[4]);
    goto L_08869454;
L_08869454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8008)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0886946Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x0886946Cu) goto L_0886946C;
    return;
L_0886946C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[31] = (0x0886947Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 361u, 0x088713D0u>(ctx, &aot_mem) && ctx.pc == 0x0886947Cu) goto L_0886947C;
    return;
L_0886947C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29152), ctx.gpr[16]);
    ctx.gpr[31] = (0x08869488u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-29048));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 351u, 0x08871328u>(ctx, &aot_mem) && ctx.pc == 0x08869488u) goto L_08869488;
    return;
L_08869488:
    ctx.gpr[31] = (0x08869490u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 33u, 0x08864248u>(ctx, &aot_mem) && ctx.pc == 0x08869490u) goto L_08869490;
    return;
L_08869490:
    ctx.gpr[31] = (0x08869498u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 39u, 0x08864394u>(ctx, &aot_mem) && ctx.pc == 0x08869498u) goto L_08869498;
    return;
L_08869498:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8024), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8000), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[16] = (0u | 0u);
    goto L_088694A4;
L_088694A4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 150 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088694A4;
      }
      goto L_088694B8;
    }
L_088694B8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8016), 0u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8020), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8022), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x088694CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 44u, 0x0886441Cu>(ctx, &aot_mem) && ctx.pc == 0x088694CCu) goto L_088694CC;
    return;
L_088694CC:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8025), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8028), 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8001), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8002), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7720), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7728), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (0u | 1u);
    goto L_088694FC;
L_088694FC:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), 0u);
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
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088694FC;
      }
      goto L_08869528;
    }
L_08869528:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (16117u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16271u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (17391u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17440u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[18]);
    goto L_08869578;
L_08869578:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 225u);
    ctx.gpr[6] = (0u | 225u);
    ctx.gpr[7] = (0u | 225u);
    ctx.gpr[31] = (0x08869598u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08869598u) goto L_08869598;
    return;
L_08869598:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[7] = (0u | 128u);
    ctx.gpr[31] = (0x0886961Cu);
    ctx.gpr[8] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x0886961Cu) goto L_0886961C;
    return;
L_0886961C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    goto L_08869670;
L_08869670:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08869670;
      }
      goto L_08869684;
    }
L_08869684:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(168));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(168));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(168));
      if (branch_taken) {
          goto L_08869578;
      }
      goto L_0886969C;
    }
L_0886969C:
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7986), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7988), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_088696C4;
L_088696C4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088696F8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x088696F8u) goto L_088696F8;
    return;
L_088696F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_088696C4;
      }
      goto L_0886972C;
    }
L_0886972C:
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7990), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869768;
      }
      goto L_0886973C;
    }
L_0886973C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (2240u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29664));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0886974C;
L_0886974C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 80 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0886974C;
      }
      goto L_08869768;
    }
L_08869768:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (0u | 0u);
    goto L_08869770;
L_08869770:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 52 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08869770;
      }
      goto L_08869784;
    }
L_08869784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886979C;
      }
      goto L_08869790;
    }
L_08869790:
    ctx.gpr[31] = (0x08869798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 222u, 0x08AB513Cu>(ctx, &aot_mem) && ctx.pc == 0x08869798u) goto L_08869798;
    return;
L_08869798:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_0886979C;
L_0886979C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8040), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8044), 0u);
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    goto L_088697A8;
L_088697A8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088697EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869880;
      }
      goto L_08869838;
    }
L_08869838:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[28] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08869888;
      }
      goto L_0886986C;
    }
L_0886986C:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088698A4;
      }
      goto L_08869880;
    }
L_08869880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08869C28;
      }
      goto L_08869888;
    }
L_08869888:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_088698A4;
L_088698A4:
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22192));
    ctx.gpr[31] = (0x088698B4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 296u, 0x08861E2Cu>(ctx, &aot_mem) && ctx.pc == 0x088698B4u) goto L_088698B4;
    return;
L_088698B4:
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[31] = (0x088698C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22240));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 332u, 0x088620ACu>(ctx, &aot_mem) && ctx.pc == 0x088698C0u) goto L_088698C0;
    return;
L_088698C0:
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21784));
    ctx.gpr[31] = (0x088698D0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 237u, 0x08865220u>(ctx, &aot_mem) && ctx.pc == 0x088698D0u) goto L_088698D0;
    return;
L_088698D0:
    ctx.gpr[31] = (0x088698D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 57u, 0x08864628u>(ctx, &aot_mem) && ctx.pc == 0x088698D8u) goto L_088698D8;
    return;
L_088698D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8025)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
        goto L_088698F0;
    }
    goto L_088698E4;
L_088698E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8025), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    goto L_088698F0;
L_088698F0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (2239u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32064));
    ctx.gpr[4] = (16117u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16271u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (17391u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17440u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-33));
    goto L_0886993C;
L_0886993C:
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 225u);
    ctx.gpr[6] = (0u | 225u);
    ctx.gpr[7] = (0u | 225u);
    ctx.gpr[31] = (0x0886997Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x0886997Cu) goto L_0886997C;
    return;
L_0886997C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[7] = (0u | 128u);
    ctx.gpr[31] = (0x08869A04u);
    ctx.gpr[8] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08869A04u) goto L_08869A04;
    return;
L_08869A04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_08869A58;
L_08869A58:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869A58;
      }
      goto L_08869A7C;
    }
L_08869A7C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886993C;
      }
      goto L_08869A90;
    }
L_08869A90:
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7986), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30112));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7956)));
    goto L_08869AA4;
L_08869AA4:
    ctx.gpr[7] = (ctx.gpr[4] << 3u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869AA4;
      }
      goto L_08869AD0;
    }
L_08869AD0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7990), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-29140), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08869B2C;
      }
      goto L_08869AE4;
    }
L_08869AE4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(500)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(500), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(504), ctx.gpr[4]);
    ctx.gpr[31] = (0x08869B08u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 375u, 0x088624A4u>(ctx, &aot_mem) && ctx.pc == 0x08869B08u) goto L_08869B08;
    return;
L_08869B08:
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869B24;
      }
      goto L_08869B14;
    }
L_08869B14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(520)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869B24;
      }
      goto L_08869B20;
    }
L_08869B20:
    ctx.gpr[6] = (0u | 0u);
    goto L_08869B24;
L_08869B24:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869AE4;
      }
      goto L_08869B2C;
    }
L_08869B2C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-29140), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8036)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08869C24;
      }
      goto L_08869B70;
    }
L_08869B70:
    ctx.gpr[5] = (17377u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 1u);
    goto L_08869B84;
L_08869B84:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(33)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(34)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08869BE8u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem) && ctx.pc == 0x08869BE8u) goto L_08869BE8;
    return;
L_08869BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869B84;
      }
      goto L_08869C24;
    }
L_08869C24:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7728), static_cast<std::uint8_t>(0u));
    goto L_08869C28;
L_08869C28:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08869C6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7956)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[6] = (2240u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-29664));
    ctx.gpr[18] = (2240u << 16u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28704));
      if (branch_taken) {
          goto L_08869CEC;
      }
      goto L_08869CDC;
    }
L_08869CDC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869CDC;
      }
      goto L_08869CEC;
    }
L_08869CEC:
    ctx.gpr[8] = (ctx.gpr[16] << 3u);
    ctx.gpr[9] = (0u - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[20] = (0u | 1720u);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1720));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[8] + static_cast<std::uint32_t>(-8));
    ctx.gpr[8] = (0u | 83u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (0u | 82u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869D8C;
      }
      goto L_08869D68;
    }
L_08869D68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869D68;
      }
      goto L_08869D8C;
    }
L_08869D8C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7968)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7976)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    goto L_08869DB4;
L_08869DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869E18;
      }
      goto L_08869DC0;
    }
L_08869DC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(184));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08869DDCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08869DDCu) goto L_08869DDC;
    return;
L_08869DDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869DFC;
      }
      goto L_08869DE4;
    }
L_08869DE4:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15964)));
    ctx.gpr[31] = (0x08869DF4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 697u, 0x08B66E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08869DF4u) goto L_08869DF4;
    return;
L_08869DF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08869E10;
      }
      goto L_08869DFC;
    }
L_08869DFC:
    ctx.gpr[19] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15968)));
    ctx.gpr[31] = (0x08869E0Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 698u, 0x08B66E98u>(ctx, &aot_mem) && ctx.pc == 0x08869E0Cu) goto L_08869E0C;
    return;
L_08869E0C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08869E10;
L_08869E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08869E20;
      }
      goto L_08869E18;
    }
L_08869E18:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08869E20;
L_08869E20:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] < static_cast<std::uint32_t>(80) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08869DB4;
      }
      goto L_08869E58;
    }
L_08869E58:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08869E60;
L_08869E60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869F50;
      }
      goto L_08869E6C;
    }
L_08869E6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869EE0;
      }
      goto L_08869E8C;
    }
L_08869E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(184));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08869EA8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08869EA8u) goto L_08869EA8;
    return;
L_08869EA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869EC8;
      }
      goto L_08869EB0;
    }
L_08869EB0:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15964)));
    ctx.gpr[31] = (0x08869EC0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 697u, 0x08B66E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08869EC0u) goto L_08869EC0;
    return;
L_08869EC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08869F58;
      }
      goto L_08869EC8;
    }
L_08869EC8:
    ctx.gpr[19] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15968)));
    ctx.gpr[31] = (0x08869ED8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 698u, 0x08B66E98u>(ctx, &aot_mem) && ctx.pc == 0x08869ED8u) goto L_08869ED8;
    return;
L_08869ED8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08869F58;
      }
      goto L_08869EE0;
    }
L_08869EE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 8u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869F18;
      }
      goto L_08869F00;
    }
L_08869F00:
    ctx.gpr[19] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[31] = (0x08869F10u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 696u, 0x08B66E60u>(ctx, &aot_mem) && ctx.pc == 0x08869F10u) goto L_08869F10;
    return;
L_08869F10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08869F58;
      }
      goto L_08869F18;
    }
L_08869F18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 12u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08869F58;
      }
      goto L_08869F38;
    }
L_08869F38:
    ctx.gpr[19] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15952)));
    ctx.gpr[31] = (0x08869F48u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 699u, 0x08B66EB4u>(ctx, &aot_mem) && ctx.pc == 0x08869F48u) goto L_08869F48;
    return;
L_08869F48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08869F58;
      }
      goto L_08869F50;
    }
L_08869F50:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08869F58;
L_08869F58:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[18] < static_cast<std::uint32_t>(52) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08869E60;
      }
      goto L_08869F78;
    }
L_08869F78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8000)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8001)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8004)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8016)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8020))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8022))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7956)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A00C;
      }
      goto L_08869FDC;
    }
L_08869FDC:
    ctx.gpr[4] = (0u | 0u);
    goto L_08869FE0;
L_08869FE0:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(536) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869FE0;
      }
      goto L_0886A000;
    }
L_0886A000:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08869FDC;
      }
      goto L_0886A00C;
    }
L_0886A00C:
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
L_0886A030:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0886A0A8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 365u, 0x0889A004u>(ctx, &aot_mem) && ctx.pc == 0x0886A0A8u) goto L_0886A0A8;
    return;
L_0886A0A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0886A3B0;
      }
      goto L_0886A0B4;
    }
L_0886A0B4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 3u);
      if (branch_taken) {
          goto L_0886A118;
      }
      goto L_0886A0C4;
    }
L_0886A0C4:
    ctx.gpr[17] = (ctx.gpr[19] << 2u);
    ctx.gpr[17] = (ctx.gpr[29] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0886A100;
      }
      goto L_0886A0D8;
    }
L_0886A0D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0886A100;
      }
      goto L_0886A0EC;
    }
L_0886A0EC:
    ctx.gpr[31] = (0x0886A0F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0886A0F4u) goto L_0886A0F4;
    return;
L_0886A0F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A100;
      }
      goto L_0886A0FC;
    }
L_0886A0FC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    goto L_0886A100;
L_0886A100:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A0C4;
      }
      goto L_0886A118;
    }
L_0886A118:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (16256u << 16u);
      if (branch_taken) {
          goto L_0886A3B0;
      }
      goto L_0886A128;
    }
L_0886A128:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (2235u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(20384));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    goto L_0886A13C;
L_0886A13C:
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0886A39C;
      }
      goto L_0886A150;
    }
L_0886A150:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A39C;
      }
      goto L_0886A158;
    }
L_0886A158:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
      if (branch_taken) {
          goto L_0886A180;
      }
      goto L_0886A174;
    }
L_0886A174:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0886A180;
L_0886A180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(53)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0886A1FC;
      }
      goto L_0886A190;
    }
L_0886A190:
    ctx.gpr[4] = (0u | 0u);
    goto L_0886A194;
L_0886A194:
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A194;
      }
      goto L_0886A1B4;
    }
L_0886A1B4:
    ctx.gpr[4] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0886A1F4u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 66u, 0x088B4738u>(ctx, &aot_mem) && ctx.pc == 0x0886A1F4u) goto L_0886A1F4;
    return;
L_0886A1F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0886A240;
      }
      goto L_0886A1FC;
    }
L_0886A1FC:
    ctx.gpr[4] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x0886A23Cu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 66u, 0x088B4738u>(ctx, &aot_mem) && ctx.pc == 0x0886A23Cu) goto L_0886A23C;
    return;
L_0886A23C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0886A240;
L_0886A240:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0886A398;
      }
      goto L_0886A248;
    }
L_0886A248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_0886A274;
    }
    goto L_0886A260;
L_0886A260:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A398;
      }
      goto L_0886A26C;
    }
L_0886A26C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A284;
      }
      goto L_0886A274;
    }
L_0886A274:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A368;
      }
      goto L_0886A27C;
    }
L_0886A27C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A398;
      }
      goto L_0886A284;
    }
L_0886A284:
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A360;
      }
      goto L_0886A298;
    }
L_0886A298:
    ctx.gpr[31] = (0x0886A2A0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 772u, 0x08AFF508u>(ctx, &aot_mem) && ctx.pc == 0x0886A2A0u) goto L_0886A2A0;
    return;
L_0886A2A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A360;
      }
      goto L_0886A2A8;
    }
L_0886A2A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A2C8;
      }
      goto L_0886A2B4;
    }
L_0886A2B4:
    ctx.gpr[31] = (0x0886A2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem) && ctx.pc == 0x0886A2BCu) goto L_0886A2BC;
    return;
L_0886A2BC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0886A2C8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 72u, 0x08B00520u>(ctx, &aot_mem) && ctx.pc == 0x0886A2C8u) goto L_0886A2C8;
    return;
L_0886A2C8:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(565)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A328;
      }
      goto L_0886A2DC;
    }
L_0886A2DC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0886A2E8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A2E8u) goto L_0886A2E8;
    return;
L_0886A2E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A314;
      }
      goto L_0886A2F0;
    }
L_0886A2F0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0886A2FCu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A2FCu) goto L_0886A2FC;
    return;
L_0886A2FC:
    ctx.gpr[31] = (0x0886A304u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem) && ctx.pc == 0x0886A304u) goto L_0886A304;
    return;
L_0886A304:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0886A314u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem) && ctx.pc == 0x0886A314u) goto L_0886A314;
    return;
L_0886A314:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(565)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A2DC;
      }
      goto L_0886A328;
    }
L_0886A328:
    ctx.gpr[31] = (0x0886A330u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 369u, 0x08B41658u>(ctx, &aot_mem) && ctx.pc == 0x0886A330u) goto L_0886A330;
    return;
L_0886A330:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0886A33Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A33Cu) goto L_0886A33C;
    return;
L_0886A33C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A360;
      }
      goto L_0886A344;
    }
L_0886A344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0886A360u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886A360u) goto L_0886A360;
    return;
L_0886A360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A398;
      }
      goto L_0886A368;
    }
L_0886A368:
    ctx.gpr[31] = (0x0886A370u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A370u) goto L_0886A370;
    return;
L_0886A370:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A390;
      }
      goto L_0886A378;
    }
L_0886A378:
    ctx.gpr[31] = (0x0886A380u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 128u, 0x0890C798u>(ctx, &aot_mem) && ctx.pc == 0x0886A380u) goto L_0886A380;
    return;
L_0886A380:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A390;
      }
      goto L_0886A388;
    }
L_0886A388:
    ctx.gpr[31] = (0x0886A390u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem) && ctx.pc == 0x0886A390u) goto L_0886A390;
    return;
L_0886A390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A398;
      }
      goto L_0886A398;
    }
L_0886A398:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    goto L_0886A39C;
L_0886A39C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A13C;
      }
      goto L_0886A3B0;
    }
L_0886A3B0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A3E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7940), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7944), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[31] = (0x0886A404u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21784));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 270u, 0x08861C34u>(ctx, &aot_mem) && ctx.pc == 0x0886A404u) goto L_0886A404;
    return;
L_0886A404:
    ctx.gpr[4] = (2240u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29728));
    ctx.gpr[7] = (2223u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(17092));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x0886A420u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A420u) goto L_0886A420;
    return;
L_0886A420:
    ctx.gpr[31] = (0x0886A428u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-29044));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x0886A428u) goto L_0886A428;
    return;
L_0886A428:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8036), 0u);
    ctx.gpr[31] = (0x0886A434u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-29032));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x0886A434u) goto L_0886A434;
    return;
L_0886A434:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A440:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A518;
      }
      goto L_0886A454;
    }
L_0886A454:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (2234u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(14520));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0886A46C;
L_0886A46C:
    ctx.gpr[15] = (ctx.gpr[9] | 0u);
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[14] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0886A4E8;
      }
      goto L_0886A480;
    }
L_0886A480:
    ctx.gpr[24] = (ctx.gpr[8] + ctx.gpr[13]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[24] = (ctx.gpr[24] & 2u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A4A4;
      }
      goto L_0886A494;
    }
L_0886A494:
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-32));
    ctx.gpr[13] = (ctx.gpr[13] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 24u));
      if (branch_taken) {
          goto L_0886A4A4;
      }
      goto L_0886A4A4;
    }
L_0886A4A4:
    ctx.gpr[24] = (ctx.gpr[8] + ctx.gpr[12]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[24] = (ctx.gpr[24] & 2u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A4C8;
      }
      goto L_0886A4B8;
    }
L_0886A4B8:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-32));
    ctx.gpr[12] = (ctx.gpr[12] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 24u));
      if (branch_taken) {
          goto L_0886A4C8;
      }
      goto L_0886A4C8;
    }
L_0886A4C8:
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[12];
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886A4D8;
      }
      goto L_0886A4D0;
    }
L_0886A4D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (0u | 1u);
      if (branch_taken) {
          goto L_0886A4F8;
      }
      goto L_0886A4D8;
    }
L_0886A4D8:
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0886A480;
      }
      goto L_0886A4E8;
    }
L_0886A4E8:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[12] = (0u | 0u);
      if (branch_taken) {
          goto L_0886A4F8;
      }
      goto L_0886A4F0;
    }
L_0886A4F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (0u | 1u);
      if (branch_taken) {
          goto L_0886A4F8;
      }
      goto L_0886A4F8;
    }
L_0886A4F8:
    if (ctx.gpr[12] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
        goto L_0886A520;
    }
    goto L_0886A500;
L_0886A500:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(32));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(32));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0886A46C;
      }
      goto L_0886A518;
    }
L_0886A518:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0886A538;
      }
      goto L_0886A520;
    }
L_0886A520:
    ctx.gpr[2] = (ctx.gpr[3] | 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0886A538;
L_0886A538:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A540:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A548:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-29008));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A570u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem) && ctx.pc == 0x0886A570u) goto L_0886A570;
    return;
L_0886A570:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-29000));
      if (branch_taken) {
          goto L_0886A5B4;
      }
      goto L_0886A578;
    }
L_0886A578:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A584u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem) && ctx.pc == 0x0886A584u) goto L_0886A584;
    return;
L_0886A584:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-28992));
      if (branch_taken) {
          goto L_0886A5B4;
      }
      goto L_0886A58C;
    }
L_0886A58C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A598u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem) && ctx.pc == 0x0886A598u) goto L_0886A598;
    return;
L_0886A598:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-28984));
      if (branch_taken) {
          goto L_0886A5B4;
      }
      goto L_0886A5A0;
    }
L_0886A5A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886A5ACu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem) && ctx.pc == 0x0886A5ACu) goto L_0886A5AC;
    return;
L_0886A5AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A5C8;
      }
      goto L_0886A5B4;
    }
L_0886A5B4:
    ctx.gpr[31] = (0x0886A5BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x0886A5BCu) goto L_0886A5BC;
    return;
L_0886A5BC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0886A5CC;
      }
      goto L_0886A5C8;
    }
L_0886A5C8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0886A5CC;
L_0886A5CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A5E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A5F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x0886A5F8u) goto L_0886A5F8;
    return;
L_0886A5F8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A60C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A614:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A624u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem) && ctx.pc == 0x0886A624u) goto L_0886A624;
    return;
L_0886A624:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A630:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A648u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A648u) goto L_0886A648;
    return;
L_0886A648:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A658:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-28960)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0886A670;
      }
      goto L_0886A668;
    }
L_0886A668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A678;
      }
      goto L_0886A670;
    }
L_0886A670:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-28960), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-28959), static_cast<std::uint8_t>(0u));
    goto L_0886A678;
L_0886A678:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A680:
    ctx.gpr[4] = (0u | 1u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-28959), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A68C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-28960)));
    ctx.gpr[2] = (ctx.gpr[4] ^ 3u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A69C:
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25552));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A6B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A6C4u);
    // nop
    goto L_0886A6EC;
L_0886A6C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A6D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886A6E0u);
    // nop
    goto L_0886A964;
L_0886A6E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A6EC:
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25552));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15968)));
    ctx.gpr[6] = (0u | 0u);
    goto L_0886A6FC;
L_0886A6FC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886A6FC;
      }
      goto L_0886A710;
    }
L_0886A710:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-28976), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_0886A7A4;
      }
      goto L_0886A724;
    }
L_0886A724:
    ctx.gpr[7] = (ctx.gpr[8] << 5u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_0886A734;
L_0886A734:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_0886A74C;
      }
      goto L_0886A73C;
    }
L_0886A73C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_0886A754;
    }
    goto L_0886A74C;
L_0886A74C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0886A774;
      }
      goto L_0886A754;
    }
L_0886A754:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0886A770;
    }
    goto L_0886A768;
L_0886A768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0886A774;
      }
      goto L_0886A770;
    }
L_0886A770:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    goto L_0886A774;
L_0886A774:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A790;
      }
      goto L_0886A77C;
    }
L_0886A77C:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(306)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0886A790;
      }
      goto L_0886A78C;
    }
L_0886A78C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-28976), ctx.gpr[6]);
    goto L_0886A790;
L_0886A790:
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_0886A734;
      }
      goto L_0886A7A4;
    }
L_0886A7A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A7AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-28958)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A7F4;
      }
      goto L_0886A7E0;
    }
L_0886A7E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-28957)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A7FC;
      }
      goto L_0886A7EC;
    }
L_0886A7EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A818;
      }
      goto L_0886A7F4;
    }
L_0886A7F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A938;
      }
      goto L_0886A7FC;
    }
L_0886A7FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-28956));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (0x0886A810u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x0886A810u) goto L_0886A810;
    return;
L_0886A810:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-28957), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0886A818;
L_0886A818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x0886A824u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x0886A824u) goto L_0886A824;
    return;
L_0886A824:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A938;
      }
      goto L_0886A82C;
    }
L_0886A82C:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.gpr[20] = (2240u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2240u << 16u);
    ctx.gpr[16] = (2240u << 16u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-25504));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-25456));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25552));
    goto L_0886A858;
L_0886A858:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0886A86Cu);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 392u, 0x0882B994u>(ctx, &aot_mem) && ctx.pc == 0x0886A86Cu) goto L_0886A86C;
    return;
L_0886A86C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A890;
      }
      goto L_0886A878;
    }
L_0886A878:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (0x0886A88Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 351u, 0x0882B688u>(ctx, &aot_mem) && ctx.pc == 0x0886A88Cu) goto L_0886A88C;
    return;
L_0886A88C:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_0886A890;
L_0886A890:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0886A908;
      }
      goto L_0886A898;
    }
L_0886A898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28976)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
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
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0886A8E0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x0886A8E0u) goto L_0886A8E0;
    return;
L_0886A8E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0886A8F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x0886A8F4u) goto L_0886A8F4;
    return;
L_0886A8F4:
    ctx.gpr[31] = (0x0886A8FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A8FCu) goto L_0886A8FC;
    return;
L_0886A8FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0886A908;
L_0886A908:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886A858;
      }
      goto L_0886A920;
    }
L_0886A920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x0886A92Cu);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0886A92Cu) goto L_0886A92C;
    return;
L_0886A92C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-28958), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-28957), static_cast<std::uint8_t>(0u));
    goto L_0886A938;
L_0886A938:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A964:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-28958)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A9B8;
      }
      goto L_0886A990;
    }
L_0886A990:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-28957)));
    ctx.gpr[19] = (2240u << 16u);
    ctx.gpr[18] = (2240u << 16u);
    ctx.gpr[17] = (2240u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-25504));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-25456));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25552));
      if (branch_taken) {
          goto L_0886A9C0;
      }
      goto L_0886A9B0;
    }
L_0886A9B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A9D0;
      }
      goto L_0886A9B8;
    }
L_0886A9B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AA40;
      }
      goto L_0886A9C0;
    }
L_0886A9C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x0886A9CCu);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0886A9CCu) goto L_0886A9CC;
    return;
L_0886A9CC:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-28957), static_cast<std::uint8_t>(0u));
    goto L_0886A9D0;
L_0886A9D0:
    ctx.gpr[20] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (0u | 1u);
    goto L_0886A9DC;
L_0886A9DC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0886A9F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A9F0u) goto L_0886A9F0;
    return;
L_0886A9F0:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17613), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AA1C;
      }
      goto L_0886AA00;
    }
L_0886AA00:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0886AA1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886AA1Cu) goto L_0886AA1C;
    return;
L_0886AA1C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17613), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886A9DC;
      }
      goto L_0886AA3C;
    }
L_0886AA3C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-28958), static_cast<std::uint8_t>(0u));
    goto L_0886AA40;
L_0886AA40:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
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
L_0886AA64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28976)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AB28;
      }
      goto L_0886AAB0;
    }
L_0886AAB0:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28976)));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18351u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51200u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0886AB30;
      }
      goto L_0886AB18;
    }
L_0886AB18:
    ctx.gpr[31] = (0x0886AB20u);
    // nop
    goto L_0886A964;
L_0886AB20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AB54;
      }
      goto L_0886AB28;
    }
L_0886AB28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B0A8;
      }
      goto L_0886AB30;
    }
L_0886AB30:
    ctx.gpr[4] = (18323u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46208u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886AB54;
      }
      goto L_0886AB4C;
    }
L_0886AB4C:
    ctx.gpr[31] = (0x0886AB54u);
    // nop
    goto L_0886A7AC;
L_0886AB54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0886AB68;
      }
      goto L_0886AB60;
    }
L_0886AB60:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-28960), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0886AB68;
L_0886AB68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-28960)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886AB94;
      }
      goto L_0886AB78;
    }
L_0886AB78:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (15692u << 16u);
      if (branch_taken) {
          goto L_0886AD34;
      }
      goto L_0886AB80;
    }
L_0886AB80:
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0886ABAC;
      }
      goto L_0886AB8C;
    }
L_0886AB8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886ABF8;
      }
      goto L_0886AB94;
    }
L_0886AB94:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886ACA0;
      }
      goto L_0886AB9C;
    }
L_0886AB9C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AD34;
      }
      goto L_0886ABA4;
    }
L_0886ABA4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-28972), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0886AD34;
      }
      goto L_0886ABAC;
    }
L_0886ABAC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[24];
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28972)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28932)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-28972), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0886ABF0;
      }
      goto L_0886ABE4;
    }
L_0886ABE4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-28972), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-28960), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0886ABF0;
L_0886ABF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AD34;
      }
      goto L_0886ABF8;
    }
L_0886ABF8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-28972), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-28959)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AC98;
      }
      goto L_0886AC08;
    }
L_0886AC08:
    ctx.gpr[4] = (16134u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28968)));
    ctx.gpr[4] = (15878u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0886AC44;
      }
      goto L_0886AC30;
    }
L_0886AC30:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886AC30;
      }
      goto L_0886AC44;
    }
L_0886AC44:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886AC58;
      }
      goto L_0886AC54;
    }
L_0886AC54:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_0886AC58;
L_0886AC58:
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-28964), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0886AC8C;
      }
      goto L_0886AC80;
    }
L_0886AC80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28964)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-28964), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0886AC8C;
L_0886AC8C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-28959), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-28960), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0886AC98;
L_0886AC98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AD34;
      }
      goto L_0886ACA0;
    }
L_0886ACA0:
    ctx.gpr[4] = (15878u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28964)));
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886ACFC;
      }
      goto L_0886ACC0;
    }
L_0886ACC0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28964)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-28972), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28928)));
    goto L_0886ACFC;
L_0886ACFC:
    ctx.gpr[4] = (15172u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28972)));
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886AD2C;
      }
      goto L_0886AD1C;
    }
L_0886AD1C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-28972), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-28964), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-28960), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0886AD2C;
L_0886AD2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AD34;
      }
      goto L_0886AD34;
    }
L_0886AD34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28964)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
        goto L_0886AD68;
    }
    goto L_0886AD48;
L_0886AD48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28972)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28964)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-28964), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    goto L_0886AD68;
L_0886AD68:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28972)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28968)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-28968), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0886AD98;
      }
      goto L_0886AD8C;
    }
L_0886AD8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28968)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-28968), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0886AD98;
L_0886AD98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28972)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886ADC4u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem) && ctx.pc == 0x0886ADC4u) goto L_0886ADC4;
    return;
L_0886ADC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28976)));
    ctx.gpr[31] = (0x0886ADD0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 10u, 0x088603A0u>(ctx, &aot_mem) && ctx.pc == 0x0886ADD0u) goto L_0886ADD0;
    return;
L_0886ADD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
        goto L_0886ADE8;
    }
    goto L_0886ADDC;
L_0886ADDC:
    ctx.gpr[31] = (0x0886ADE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x0886ADE4u) goto L_0886ADE4;
    return;
L_0886ADE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_0886ADE8;
L_0886ADE8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1488));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AE28;
      }
      goto L_0886ADF8;
    }
L_0886ADF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
        goto L_0886AE10;
    }
    goto L_0886AE04;
L_0886AE04:
    ctx.gpr[31] = (0x0886AE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x0886AE0Cu) goto L_0886AE0C;
    return;
L_0886AE0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_0886AE10;
L_0886AE10:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1681), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28976)));
    ctx.gpr[31] = (0x0886AE28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1600));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem) && ctx.pc == 0x0886AE28u) goto L_0886AE28;
    return;
L_0886AE28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
        goto L_0886AE40;
    }
    goto L_0886AE34;
L_0886AE34:
    ctx.gpr[31] = (0x0886AE3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x0886AE3Cu) goto L_0886AE3C;
    return;
L_0886AE3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_0886AE40;
L_0886AE40:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1488));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(400)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AE80;
      }
      goto L_0886AE50;
    }
L_0886AE50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
        goto L_0886AE68;
    }
    goto L_0886AE5C;
L_0886AE5C:
    ctx.gpr[31] = (0x0886AE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x0886AE64u) goto L_0886AE64;
    return;
L_0886AE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_0886AE68;
L_0886AE68:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1889), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28976)));
    ctx.gpr[31] = (0x0886AE80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1808));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem) && ctx.pc == 0x0886AE80u) goto L_0886AE80;
    return;
L_0886AE80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-28958)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_0886B088;
    }
    goto L_0886AE8C;
L_0886AE8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28976)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28924)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (2240u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25552));
    ctx.gpr[17] = (2240u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25456));
    ctx.gpr[18] = (2240u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-25504));
    ctx.gpr[4] = (16134u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0886AF00;
L_0886AF00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B06C;
      }
      goto L_0886AF0C;
    }
L_0886AF0C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[20]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28920)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28916)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-28968)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0886AF6Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem) && ctx.pc == 0x0886AF6Cu) goto L_0886AF6C;
    return;
L_0886AF6C:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[12]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_0886AFD0;
    }
    goto L_0886AFD0;
L_0886AFD0:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0886AFF8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x0886AFF8u) goto L_0886AFF8;
    return;
L_0886AFF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0886B03Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x0886B03Cu) goto L_0886B03C;
    return;
L_0886B03C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[31] = (0x0886B050u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x0886B050u) goto L_0886B050;
    return;
L_0886B050:
    ctx.gpr[31] = (0x0886B058u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x0886B058u) goto L_0886B058;
    return;
L_0886B058:
    ctx.gpr[31] = (0x0886B060u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B060u) goto L_0886B060;
    return;
L_0886B060:
    ctx.gpr[31] = (0x0886B068u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 161u, 0x08A69104u>(ctx, &aot_mem) && ctx.pc == 0x0886B068u) goto L_0886B068;
    return;
L_0886B068:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    goto L_0886B06C;
L_0886B06C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886AF00;
      }
      goto L_0886B084;
    }
L_0886B084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_0886B088;
L_0886B088:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B0A8;
      }
      goto L_0886B094;
    }
L_0886B094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B0A8;
      }
      goto L_0886B0A0;
    }
L_0886B0A0:
    ctx.gpr[31] = (0x0886B0A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x0886B0A8u) goto L_0886B0A8;
    return;
L_0886B0A8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B0EC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B0F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886B10Cu);
    ctx.gpr[7] = (0u | 88u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x0886B10Cu) goto L_0886B10C;
    return;
L_0886B10C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886B11C;
      }
      goto L_0886B114;
    }
L_0886B114:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0886B11C;
      }
      goto L_0886B11C;
    }
L_0886B11C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B128:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (0u | 88u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886B13Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x0886B13Cu) goto L_0886B13C;
    return;
L_0886B13C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B148:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886B174u);
    ctx.gpr[7] = (0u | 360u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x0886B174u) goto L_0886B174;
    return;
L_0886B174:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 45u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(360));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0886B1A4u);
    ctx.gpr[7] = (0u | 192u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x0886B1A4u) goto L_0886B1A4;
    return;
L_0886B1A4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B21C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886B254u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x0886B254u) goto L_0886B254;
    return;
L_0886B254:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[31] = (0x0886B26Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x0886B26Cu) goto L_0886B26C;
    return;
L_0886B26C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B280:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886B2B0u);
    ctx.gpr[7] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x0886B2B0u) goto L_0886B2B0;
    return;
L_0886B2B0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[17] != 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
        goto L_0886B2CC;
    }
    goto L_0886B2BC;
L_0886B2BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886B2C8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 446u, 0x088719B4u>(ctx, &aot_mem) && ctx.pc == 0x0886B2C8u) goto L_0886B2C8;
    return;
L_0886B2C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    goto L_0886B2CC;
L_0886B2CC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2183u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20244));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (0u | 236u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886B334u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0886B148;
L_0886B334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(52));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0886B35Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 588u, 0x08A93C14u>(ctx, &aot_mem) && ctx.pc == 0x0886B35Cu) goto L_0886B35C;
    return;
L_0886B35C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0886B384u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 588u, 0x08A93C14u>(ctx, &aot_mem) && ctx.pc == 0x0886B384u) goto L_0886B384;
    return;
L_0886B384:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(44));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x0886B3A4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 588u, 0x08A93C14u>(ctx, &aot_mem) && ctx.pc == 0x0886B3A4u) goto L_0886B3A4;
    return;
L_0886B3A4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886B3B4u);
    ctx.gpr[5] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 295u, 0x089D1B60u>(ctx, &aot_mem) && ctx.pc == 0x0886B3B4u) goto L_0886B3B4;
    return;
L_0886B3B4:
    ctx.gpr[31] = (0x0886B3BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 32u, 0x08B24538u>(ctx, &aot_mem) && ctx.pc == 0x0886B3BCu) goto L_0886B3BC;
    return;
L_0886B3BC:
    ctx.gpr[31] = (0x0886B3C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 528u, 0x089FB62Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B3C4u) goto L_0886B3C4;
    return;
L_0886B3C4:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[31] = (0x0886B3D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25464));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem) && ctx.pc == 0x0886B3D8u) goto L_0886B3D8;
    return;
L_0886B3D8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(5));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
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
L_0886B414:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B45C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886B474u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 68u, 0x08AB05DCu>(ctx, &aot_mem) && ctx.pc == 0x0886B474u) goto L_0886B474;
    return;
L_0886B474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B4BC;
      }
      goto L_0886B480;
    }
L_0886B480:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886B48Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 503u, 0x08A16B5Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B48Cu) goto L_0886B48C;
    return;
L_0886B48C:
    ctx.gpr[31] = (0x0886B494u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 293u, 0x089D1B34u>(ctx, &aot_mem) && ctx.pc == 0x0886B494u) goto L_0886B494;
    return;
L_0886B494:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0886B4ACu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x0886B4ACu) goto L_0886B4AC;
    return;
L_0886B4AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    goto L_0886B4BC;
L_0886B4BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886B4C8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0886B21C;
L_0886B4C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B4E8;
      }
      goto L_0886B4D4;
    }
L_0886B4D4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 148u);
    ctx.gpr[31] = (0x0886B4E8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x0886B4E8u) goto L_0886B4E8;
    return;
L_0886B4E8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0886B4F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0886B128;
L_0886B4F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B504:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886B518u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0886B0F4;
L_0886B518:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886B52Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 539u, 0x08A16D90u>(ctx, &aot_mem) && ctx.pc == 0x0886B52Cu) goto L_0886B52C;
    return;
L_0886B52C:
    ctx.gpr[31] = (0x0886B534u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886B414;
L_0886B534:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0886B548u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    goto L_0886B148;
L_0886B548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B584:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886B5A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 68u, 0x08AB05DCu>(ctx, &aot_mem) && ctx.pc == 0x0886B5A8u) goto L_0886B5A8;
    return;
L_0886B5A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886B5B4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0886B21C;
L_0886B5B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886B5C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0886B128;
L_0886B5C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B5D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886B5E8u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0886B0F4;
L_0886B5E8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B63C;
      }
      goto L_0886B5F4;
    }
L_0886B5F4:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0886B610u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886B414;
L_0886B610:
    ctx.gpr[5] = (2183u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0886B628u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19840));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 452u, 0x08871A18u>(ctx, &aot_mem) && ctx.pc == 0x0886B628u) goto L_0886B628;
    return;
L_0886B628:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B63C;
      }
      goto L_0886B630;
    }
L_0886B630:
    ctx.gpr[31] = (0x0886B638u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886B45C;
L_0886B638:
    ctx.gpr[16] = (0u | 0u);
    goto L_0886B63C;
L_0886B63C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B650:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886B660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 498u, 0x08A16A94u>(ctx, &aot_mem) && ctx.pc == 0x0886B660u) goto L_0886B660;
    return;
L_0886B660:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B66C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886B690u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 68u, 0x08AB05DCu>(ctx, &aot_mem) && ctx.pc == 0x0886B690u) goto L_0886B690;
    return;
L_0886B690:
    ctx.gpr[31] = (0x0886B698u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 338u, 0x08A15E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B698u) goto L_0886B698;
    return;
L_0886B698:
    ctx.gpr[17] = (2183u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-18864));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_0886B6A8;
L_0886B6A8:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886B6CCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 452u, 0x08871A18u>(ctx, &aot_mem) && ctx.pc == 0x0886B6CCu) goto L_0886B6CC;
    return;
L_0886B6CC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_0886B6A8;
    }
    goto L_0886B6D4;
L_0886B6D4:
    ctx.gpr[31] = (0x0886B6DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886B45C;
L_0886B6DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B6F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28612));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0886B734u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem) && ctx.pc == 0x0886B734u) goto L_0886B734;
    return;
L_0886B734:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28596));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(193)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(194)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(195)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(195), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    ctx.gpr[5] = (ctx.gpr[5] >> 2u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    ctx.gpr[5] = (ctx.gpr[5] >> 3u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(205))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(206))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(206), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(207))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(207), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(208))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_0886B894;
L_0886B894:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(209)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0886B894;
      }
      goto L_0886B8B0;
    }
L_0886B8B0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0886B8BC;
L_0886B8BC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(216), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886B8BC;
      }
      goto L_0886B8D8;
    }
L_0886B8D8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0886B8E4;
L_0886B8E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(232)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886B8E4;
      }
      goto L_0886B900;
    }
L_0886B900:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0886B90C;
L_0886B90C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(248)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886B90C;
      }
      goto L_0886B928;
    }
L_0886B928:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0886B934;
L_0886B934:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886B934;
      }
      goto L_0886B950;
    }
L_0886B950:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0886B95C;
L_0886B95C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886B95C;
      }
      goto L_0886B978;
    }
L_0886B978:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(304));
    goto L_0886B984;
L_0886B984:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0886B984;
      }
      goto L_0886B9DC;
    }
L_0886B9DC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0886B9E8;
L_0886B9E8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(432), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886B9E8;
      }
      goto L_0886BA04;
    }
L_0886BA04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(452)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(452), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(468));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(468));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(464))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(464), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(524)));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(528)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(528), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BACC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886BAE0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 624u, 0x08A7F694u>(ctx, &aot_mem) && ctx.pc == 0x0886BAE0u) goto L_0886BAE0;
    return;
L_0886BAE0:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27724));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BB00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886BB14u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 650u, 0x08A7F85Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BB14u) goto L_0886BB14;
    return;
L_0886BB14:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27724));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BB34:
    ctx.gpr[2] = (2183u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-17612));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BB40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886BB50u);
    // nop
    goto L_0886BB34;
L_0886BB50:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BB5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886BB80u);
    ctx.gpr[19] = (0u | 0u);
    goto L_0886BB34;
L_0886BB80:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[19] = (0u | 1u);
        goto L_0886BBE8;
    }
    goto L_0886BB88;
L_0886BB88:
    ctx.gpr[31] = (0x0886BB90u);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 666u, 0x08A7FAA4u>(ctx, &aot_mem) && ctx.pc == 0x0886BB90u) goto L_0886BB90;
    return;
L_0886BB90:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[18] = (0u | 1u);
        goto L_0886BBD8;
    }
    goto L_0886BB98;
L_0886BB98:
    ctx.gpr[31] = (0x0886BBA0u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 400u, 0x0888E51Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BBA0u) goto L_0886BBA0;
    return;
L_0886BBA0:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_0886BBC8;
    }
    goto L_0886BBA8;
L_0886BBA8:
    ctx.gpr[31] = (0x0886BBB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 295u, 0x08A9A6CCu>(ctx, &aot_mem) && ctx.pc == 0x0886BBB0u) goto L_0886BBB0;
    return;
L_0886BBB0:
    ctx.gpr[4] = (ctx.gpr[2] ^ ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_0886BBCC;
      }
      goto L_0886BBC4;
    }
L_0886BBC4:
    ctx.gpr[17] = (0u | 1u);
    goto L_0886BBC8;
L_0886BBC8:
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
    goto L_0886BBCC;
L_0886BBCC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_0886BBDC;
      }
      goto L_0886BBD4;
    }
L_0886BBD4:
    ctx.gpr[18] = (0u | 1u);
    goto L_0886BBD8;
L_0886BBD8:
    ctx.gpr[4] = (ctx.gpr[18] & 255u);
    goto L_0886BBDC;
L_0886BBDC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BBE8;
      }
      goto L_0886BBE4;
    }
L_0886BBE4:
    ctx.gpr[19] = (0u | 1u);
    goto L_0886BBE8;
L_0886BBE8:
    ctx.gpr[2] = (ctx.gpr[19] & 255u);
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
L_0886BC08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0886BC58;
      }
      goto L_0886BC24;
    }
L_0886BC24:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27916));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x0886BC38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 425u, 0x08A9B6A8u>(ctx, &aot_mem) && ctx.pc == 0x0886BC38u) goto L_0886BC38;
    return;
L_0886BC38:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886BC44u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 682u, 0x08A7FB94u>(ctx, &aot_mem) && ctx.pc == 0x0886BC44u) goto L_0886BC44;
    return;
L_0886BC44:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BC58;
      }
      goto L_0886BC50;
    }
L_0886BC50:
    ctx.gpr[31] = (0x0886BC58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x0886BC58u) goto L_0886BC58;
    return;
L_0886BC58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BC6C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 8u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BC74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (0u | 544u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886BC98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BC98u) goto L_0886BC98;
    return;
L_0886BC98:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0886BCB0;
      }
      goto L_0886BCA4;
    }
L_0886BCA4:
    ctx.gpr[31] = (0x0886BCACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886BACC;
L_0886BCAC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_0886BCB0;
L_0886BCB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BCC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0886BCEC;
      }
      goto L_0886BCD0;
    }
L_0886BCD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0886BCECu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886BCECu) goto L_0886BCEC;
    return;
L_0886BCEC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BCF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (0u | 544u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886BD20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BD20u) goto L_0886BD20;
    return;
L_0886BD20:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0886BD4C;
      }
      goto L_0886BD30;
    }
L_0886BD30:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0886BD3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886B6F0;
L_0886BD3C:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27724));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_0886BD4C;
L_0886BD4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BD5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886BD70u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 660u, 0x08A7FA3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BD70u) goto L_0886BD70;
    return;
L_0886BD70:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BD7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886BD98u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 680u, 0x08A7FB50u>(ctx, &aot_mem) && ctx.pc == 0x0886BD98u) goto L_0886BD98;
    return;
L_0886BD98:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20672));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0886BDB0u);
    ctx.gpr[4] = (0u | 400u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0886BDB0u) goto L_0886BDB0;
    return;
L_0886BDB0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0886BDC8;
      }
      goto L_0886BDBC;
    }
L_0886BDBC:
    ctx.gpr[31] = (0x0886BDC4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 39u, 0x0886C4A0u>(ctx, &aot_mem) && ctx.pc == 0x0886BDC4u) goto L_0886BDC4;
    return;
L_0886BDC4:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_0886BDC8;
L_0886BDC8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
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
L_0886BDE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886BE0Cu);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 680u, 0x08A7FB50u>(ctx, &aot_mem) && ctx.pc == 0x0886BE0Cu) goto L_0886BE0C;
    return;
L_0886BE0C:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20672));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886BE2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 736u, 0x08ADEF00u>(ctx, &aot_mem) && ctx.pc == 0x0886BE2Cu) goto L_0886BE2C;
    return;
L_0886BE2C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0886BE3Cu);
    ctx.gpr[4] = (0u | 400u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0886BE3Cu) goto L_0886BE3C;
    return;
L_0886BE3C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0886BE54;
      }
      goto L_0886BE48;
    }
L_0886BE48:
    ctx.gpr[31] = (0x0886BE50u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 39u, 0x0886C4A0u>(ctx, &aot_mem) && ctx.pc == 0x0886BE50u) goto L_0886BE50;
    return;
L_0886BE50:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0886BE54;
L_0886BE54:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    ctx.gpr[31] = (0x0886BE60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 692u, 0x08A7FC34u>(ctx, &aot_mem) && ctx.pc == 0x0886BE60u) goto L_0886BE60;
    return;
L_0886BE60:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (0u | 544u);
    ctx.gpr[31] = (0x0886BE7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BE7Cu) goto L_0886BE7C;
    return;
L_0886BE7C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0886BE98;
      }
      goto L_0886BE88;
    }
L_0886BE88:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0886BE94u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0886BB00;
L_0886BE94:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0886BE98;
L_0886BE98:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886BEA8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 456u, 0x08A9B9F4u>(ctx, &aot_mem) && ctx.pc == 0x0886BEA8u) goto L_0886BEA8;
    return;
L_0886BEA8:
    ctx.gpr[31] = (0x0886BEB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 562u, 0x0888F9A4u>(ctx, &aot_mem) && ctx.pc == 0x0886BEB0u) goto L_0886BEB0;
    return;
L_0886BEB0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BED0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886BEE4u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 697u, 0x08A7FD50u>(ctx, &aot_mem) && ctx.pc == 0x0886BEE4u) goto L_0886BEE4;
    return;
L_0886BEE4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BEF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 3u, 0x0886C010u>(ctx, &aot_mem); return;
      }
      goto L_0886BF38;
    }
L_0886BF38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886BF60;
      }
      goto L_0886BF44;
    }
L_0886BF44:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0886BF54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x0886BF54u) goto L_0886BF54;
    return;
L_0886BF54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0886BF60;
L_0886BF60:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x0886BF70u);
    ctx.gpr[4] = (0u | 1184u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x0886BF70u) goto L_0886BF70;
    return;
L_0886BF70:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0886BF98;
      }
      goto L_0886BF7C;
    }
L_0886BF7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[31] = (0x0886BF90u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 689u, 0x088A2F88u>(ctx, &aot_mem) && ctx.pc == 0x0886BF90u) goto L_0886BF90;
    return;
L_0886BF90:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0886BF98;
L_0886BF98:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886BFA4u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 736u, 0x08ADEF00u>(ctx, &aot_mem) && ctx.pc == 0x0886BFA4u) goto L_0886BFA4;
    return;
L_0886BFA4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0886BFC0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 204u, 0x08A82438u>(ctx, &aot_mem) && ctx.pc == 0x0886BFC0u) goto L_0886BFC0;
    return;
L_0886BFC0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (0u | 544u);
    ctx.gpr[31] = (0x0886BFDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x0886BFDCu) goto L_0886BFDC;
    return;
L_0886BFDC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0886BFF8;
      }
      goto L_0886BFE8;
    }
L_0886BFE8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0886BFF4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_0886BB00;
L_0886BFF4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0886BFF8;
L_0886BFF8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x0886C000u; return;
}

void recomp_unit_0025(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0025_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_25(Runtime &runtime) {
    runtime.register_generated_unit(25u, 0x08868000u, 16384u, &recomp_unit_0025, &recomp_unit_0025_entry);
    runtime.register_function(0x08868004u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886800Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868010u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886801Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868024u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868030u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868038u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868040u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868048u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868054u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886805Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868064u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868068u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868070u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868078u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868080u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868084u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886808Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868094u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868098u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088680A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088680D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088680D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088680F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868104u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868124u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868128u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868134u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868158u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868170u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868178u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868194u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088681A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088681A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088681B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088681F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868250u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886825Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868268u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886826Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868274u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868288u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868290u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088682A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088682ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088682B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088682C0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088682D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088682E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088682F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868304u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886830Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886831Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868340u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868348u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868350u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868360u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868380u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868388u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868390u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088683A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088683B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088683BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088683D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088683F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868410u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886842Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868448u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868464u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886846Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868474u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868490u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088684ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088684C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088684E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088684ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088684F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088684FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886850Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868518u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868524u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886852Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868534u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886853Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868544u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886854Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868550u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868558u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868560u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868568u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886856Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868574u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886857Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868580u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868590u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088685B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088685BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088685D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088685E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868608u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886860Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868618u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868620u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868648u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868650u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886867Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868688u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868690u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868698u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088686D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868728u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868734u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868740u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868744u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886874Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868760u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868768u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868778u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868784u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088687A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088687B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088687BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088687CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088687F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088687F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868800u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868810u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868830u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868838u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868840u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868858u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868864u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886886Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868888u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088688A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088688C0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088688DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088688F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868914u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886891Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868924u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868940u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886895Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868978u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868994u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886899Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088689FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A00u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A08u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A10u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A18u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A24u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A2Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A30u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A74u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868A8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868AA0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868AC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868AC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868AD0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868AD8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B00u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B08u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B40u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868B8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868BF0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C08u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C14u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C18u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C40u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868C98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CA4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CB4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CCCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CDCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868CF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D24u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D2Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D40u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D70u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D88u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D94u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868D9Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868DB4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868DBCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868DC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868DD0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868DD8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868DE0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868DE8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868DF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E08u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E30u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E74u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868E90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868EA4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868EB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868ECCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868ED4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868ED8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868EE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868EECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F10u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F18u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F24u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F2Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F40u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868F98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FE8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08868FF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869000u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886902Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869034u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869058u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869064u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088690ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886912Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869134u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869140u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869150u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886915Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869168u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869174u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869180u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088691F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869200u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869214u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886921Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869228u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869234u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869240u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869248u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886924Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886925Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886926Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869274u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886927Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869288u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869294u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088692F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869300u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869304u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886930Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869318u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869320u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869324u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886932Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869334u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869338u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869340u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869348u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869390u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869398u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693C0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088693F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869400u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869408u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869410u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869438u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886944Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869454u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886946Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886947Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869488u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869490u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869498u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088694FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869528u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869578u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869598u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886961Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869670u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869684u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886969Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088696C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088696F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886972Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886973Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886974Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869768u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869770u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869784u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869790u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869798u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886979Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088697A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088697ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869838u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886986Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869880u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869888u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088698A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088698B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088698C0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088698D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088698D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088698E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x088698F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886993Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886997Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869A04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869A58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869A7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869A90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869AA4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869AD0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869AE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B08u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B14u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B24u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B2Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B70u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869B84u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869BE8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C24u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C28u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869C6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CDCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869CECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869D68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869D8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869DB4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869DC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869DDCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869DE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869DF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869DFCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869E0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869E10u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869E18u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869E20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869E58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869E60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869E6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869E8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869EA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869EB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869EC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869EC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869ED8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869EE0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F00u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F10u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F18u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F38u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869F78u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869FDCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x08869FE0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A000u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A00Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A030u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A0FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A100u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A118u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A128u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A13Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A150u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A158u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A174u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A180u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A190u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A194u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A1FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A23Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A240u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A248u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A260u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A26Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A274u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A27Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A284u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A298u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A2FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A304u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A314u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A328u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A330u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A33Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A344u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A360u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A368u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A370u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A378u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A380u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A388u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A390u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A398u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A39Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A3B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A3E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A404u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A420u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A428u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A434u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A440u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A454u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A46Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A480u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A494u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A4F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A500u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A518u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A520u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A538u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A540u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A548u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A570u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A578u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A584u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A58Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A598u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A5F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A60Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A614u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A624u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A630u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A648u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A658u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A668u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A670u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A678u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A680u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A68Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A69Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A6B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A6C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A6D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A6E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A6ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A6FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A710u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A724u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A734u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A73Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A74Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A754u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A768u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A770u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A774u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A77Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A78Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A790u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A7A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A7ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A7E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A7ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A7F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A7FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A810u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A818u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A824u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A82Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A858u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A86Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A878u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A88Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A890u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A898u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A8FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A908u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A920u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A92Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A938u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A964u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A990u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9C0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886A9F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA00u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA40u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AA64u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AAB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB18u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB28u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB30u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB4Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB78u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB94u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AB9Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABA4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABF0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ABF8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC08u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC30u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AC98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACA0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ACFCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD2Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AD98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADD0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADDCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADE8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886ADF8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE10u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE28u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE40u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE5Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE64u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AE8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF00u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AF6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AFD0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886AFF8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B03Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B050u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B058u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B060u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B068u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B06Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B084u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B088u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B094u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B0A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B0A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B0ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B0F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B10Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B114u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B11Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B128u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B13Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B148u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B174u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B1A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B21Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B254u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B26Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B280u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B2B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B2BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B2C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B2CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B334u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B35Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B384u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B3A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B3B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B3BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B3C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B3D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B414u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B45Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B474u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B480u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B48Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B494u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B4ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B4BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B4C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B4D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B4E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B4F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B504u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B518u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B52Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B534u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B548u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B584u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B5A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B5B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B5C0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B5D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B5E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B5F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B610u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B628u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B630u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B638u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B63Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B650u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B660u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B66Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B690u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B698u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B6A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B6CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B6D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B6DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B6F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B734u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B894u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B8B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B8BCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B8D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B8E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B900u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B90Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B928u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B934u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B950u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B95Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B978u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B984u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B9DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886B9E8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BA04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BACCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BAE0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB00u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB14u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB40u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB5Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB88u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BB98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBA0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBCCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBD4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBD8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBDCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BBE8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC08u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC24u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC38u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC74u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BC98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BCA4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BCACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BCB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BCC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BCD0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BCECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BCF8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD30u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD4Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD5Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD70u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BD98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BDB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BDBCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BDC4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BDC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BDE8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE2Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE48u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE88u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE94u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BE98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BEA8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BEB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BED0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BEE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BEF0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BF38u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BF44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BF54u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BF60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BF70u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BF7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BF90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BF98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFA4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFDCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFE8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0886BFF8u, &recomp_unit_0025, "recomp_unit_0025");
}
} // namespace psprecomp
