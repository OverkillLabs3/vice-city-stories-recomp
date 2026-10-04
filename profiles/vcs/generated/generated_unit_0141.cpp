#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0141[4095] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9,
    0, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 0, 0, 17,
    0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 25, 0,
    0, 0, 26, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0,
    0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41,
    0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 50, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 70, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0,
    0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 83, 0, 0,
    0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0,
    92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 0,
    0, 100, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0,
    108, 0, 0, 0, 109, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0, 0,
    116, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 124,
    0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132,
    0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 0, 174,
    0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0,
    0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 190,
    0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0,
    0, 0, 199, 0, 200, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0,
    0, 207, 0, 0, 0, 208, 0, 209, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 214, 0, 0,
    0, 215, 0, 0, 216, 0, 0, 0, 217, 0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0,
    223, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 226, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0,
    231, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 239, 0, 240, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 249, 0, 0, 250, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 253, 0, 254, 0, 0, 0, 255, 0, 0, 256, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 0, 264, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 268, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 271, 0, 272, 0, 0, 0,
    273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 277, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 281,
    0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0,
    289, 0, 290, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 295, 0, 0, 0, 296, 0, 0, 297,
    0, 0, 0, 298, 0, 299, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 304, 0, 0, 0, 305,
    0, 0, 306, 0, 0, 0, 307, 0, 308, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 313, 0,
    0, 0, 314, 0, 0, 315, 0, 0, 0, 316, 0, 317, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0,
    0, 322, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 325, 0, 326, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329,
    0, 330, 0, 0, 331, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 334, 0, 335, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 338, 0, 339, 0, 0, 340, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 343, 0, 344, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 358, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 361, 0, 362, 0, 0, 0, 363, 0,
    0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 0, 367, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 370, 0, 371, 0, 0,
    0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 376, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 379, 0,
    380, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 385, 0, 0, 0, 386, 0, 0, 387, 0, 0,
    0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392,
    0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0,
    0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 405, 406, 0, 407, 0, 408, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 412, 0, 413, 0, 414,
    415, 0, 416, 0, 417, 0, 418, 0, 0, 0, 419, 0, 420, 0, 421, 0, 422, 423, 0, 424, 0, 425, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0,
    0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    435, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 444, 0, 0, 0, 0, 445, 0,
    0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 466, 0,
    0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 474,
    0, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 479, 0, 0, 0, 480, 0, 481, 0, 482, 0, 483, 0, 0, 0,
    0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 489, 0, 0, 0, 0, 0,
    490, 0, 0, 491, 0, 492, 0, 493, 0, 0, 0, 0, 494, 0, 495, 0, 496, 0, 0, 0, 0, 497, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0,
    0, 500, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 503, 0, 504, 0, 505, 0, 0, 0, 0, 506, 0, 507, 0, 508, 0, 0, 0, 0, 509, 0,
    510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0,
    0, 0, 520, 0, 521, 0, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 524, 0, 525, 0, 0, 526, 0, 0, 0, 527, 0, 0,
    0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0,
    0, 0, 0, 532, 0, 0, 533, 0, 534, 0, 0, 0, 535, 0, 536, 0, 537, 0, 0, 0, 538, 539, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0,
    542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 548, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0,
    552, 0, 553, 0, 0, 0, 554, 555, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0,
    561, 0, 0, 562, 0, 0, 563, 0, 0, 564, 0, 0, 565, 0, 566, 0, 0, 567, 0, 0, 0, 0, 0, 568, 569, 0, 570, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 579, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 581, 582, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0,
    0, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 591, 0,
    592, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0,
    0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0,
    0, 0, 601, 0, 0, 0, 602, 0, 603, 0, 604, 0, 605, 0, 606, 0, 0, 607, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610,
    0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 613, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0,
    0, 0, 0, 617, 0, 0, 618, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 623, 0, 624, 0, 0, 625, 0, 0, 626, 627,
    628, 0, 629, 0, 0, 0, 630, 0, 0, 631, 0, 632, 0, 0, 633, 634, 635, 0, 636, 0, 0, 637, 0, 0, 638, 0, 0, 639, 0, 0, 640, 641,
    642, 0, 643, 0, 0, 0, 644, 0, 0, 645, 0, 646, 0, 0, 647, 648, 649, 0, 650, 0, 0, 651, 0, 0, 652, 0, 0, 653, 0, 0, 654, 655,
    656, 0, 657, 0, 0, 0, 658, 0, 0, 659, 0, 660, 0, 0, 661, 662, 663, 0, 664, 0, 0, 665, 0, 0, 666, 0, 0, 667, 0, 0, 668, 669,
    670, 0, 671, 0, 0, 0, 672, 0, 0, 673, 0, 674, 0, 0, 675, 676, 677, 0, 678, 0, 0, 679, 0, 0, 680, 0, 0, 681, 0, 0, 682, 683,
    684, 0, 685, 0, 0, 0, 686, 0, 0, 687, 0, 688, 0, 0, 689, 690, 691, 0, 692, 0, 0, 693, 0, 0, 694, 0, 0, 695, 0, 0, 696, 697,
    698, 0, 699, 0, 0, 0, 700, 0, 0, 701, 0, 702, 0, 0, 703, 704, 705, 0, 706, 0, 0, 707, 0, 708, 0, 0, 709, 0, 0, 710, 0, 0,
    711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0,
    0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 722, 0, 0, 0, 0, 0, 0, 723, 724, 0, 0,
    0, 0, 725, 0, 726, 0, 0, 0, 0, 0, 0, 727, 728, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 732, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 737, 738, 0, 0, 739, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 743, 0, 744, 745, 0, 0, 0, 746, 0, 0, 747,
    0, 748, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 751, 0, 0, 0, 752, 0, 753, 0, 0, 0, 754, 0,
    0, 755, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 758, 0, 0, 0, 759, 0, 0, 0, 0, 760, 0, 761, 0, 0, 0, 762, 0, 763, 0, 0, 0, 0, 764, 0, 765, 0, 0, 766, 0, 767, 0,
    0, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 771, 772, 0, 773, 0, 774, 0, 0, 775, 0, 0, 0,
    0, 0, 0, 0, 776, 0, 0, 0, 777, 0, 778, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 781, 0, 0, 0, 782,
    783, 0, 784, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 787, 0, 0, 0, 788, 0, 789, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 794, 0, 0, 0, 795, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 799, 0, 0, 0, 0, 0, 800, 801, 0, 0, 0, 0, 0, 0, 802, 0,
    0, 0, 803, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 806, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0,
    0, 0, 0, 0, 0, 0, 809, 0, 810, 0, 0, 0, 811, 0, 0, 0, 812, 0, 813, 0, 0, 814, 0, 815, 0, 0, 0, 0, 816, 0, 0, 0,
    0, 0, 0, 0, 817, 0, 0, 0, 818, 0, 819, 820, 0, 0, 821, 0, 822, 823, 0, 0, 824, 0, 825, 0, 826, 0, 0, 827, 0, 0, 0, 0,
    0, 828, 0, 829, 0, 0, 830, 0, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0, 832, 0, 0, 0, 833, 0, 834, 0, 0, 0, 835, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 837, 0, 838, 0, 0, 0, 839, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 841,
    0, 842, 0, 843, 0, 0, 0, 844, 0, 0, 0, 845, 0, 0, 0, 846, 847, 0, 0, 0, 0, 0, 0, 0, 848, 0, 849, 0, 0, 0, 850, 0,
    851, 0, 0, 852, 0, 0, 853, 0, 0, 0, 854, 0, 0, 0, 0, 855, 0, 0, 0, 856, 0, 0, 0, 857, 0, 858, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 859, 0, 860, 0, 861, 0, 862, 0, 863, 0, 864, 0, 0, 0, 865, 0, 0, 866, 0, 867, 0, 0, 0, 868, 0,
    869, 0, 870, 0, 0, 0, 0, 871, 0, 0, 0, 872, 0, 0, 0, 0, 0, 873, 0, 0, 874, 0, 0, 0, 0, 0, 875, 0, 876, 0, 0, 877,
    0, 878, 0, 0, 879, 0, 0, 0, 880, 0, 0, 0, 881, 0, 0, 0, 882, 0, 0, 0, 883, 0, 0, 0, 884, 0, 0, 0, 885, 0, 886,
};
void recomp_unit_0141_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A38004u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0141[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A38004;
    case 2u: goto L_08A3800C;
    case 3u: goto L_08A3801C;
    case 4u: goto L_08A38028;
    case 5u: goto L_08A38050;
    case 6u: goto L_08A38058;
    case 7u: goto L_08A38064;
    case 8u: goto L_08A38074;
    case 9u: goto L_08A38080;
    case 10u: goto L_08A38090;
    case 11u: goto L_08A38098;
    case 12u: goto L_08A380A8;
    case 13u: goto L_08A380B4;
    case 14u: goto L_08A380DC;
    case 15u: goto L_08A380E4;
    case 16u: goto L_08A380F0;
    case 17u: goto L_08A38100;
    case 18u: goto L_08A3810C;
    case 19u: goto L_08A3811C;
    case 20u: goto L_08A38124;
    case 21u: goto L_08A38134;
    case 22u: goto L_08A38140;
    case 23u: goto L_08A38168;
    case 24u: goto L_08A38170;
    case 25u: goto L_08A3817C;
    case 26u: goto L_08A3818C;
    case 27u: goto L_08A38198;
    case 28u: goto L_08A381A8;
    case 29u: goto L_08A381B0;
    case 30u: goto L_08A381C0;
    case 31u: goto L_08A381CC;
    case 32u: goto L_08A381F4;
    case 33u: goto L_08A381FC;
    case 34u: goto L_08A38208;
    case 35u: goto L_08A38218;
    case 36u: goto L_08A38224;
    case 37u: goto L_08A38234;
    case 38u: goto L_08A3823C;
    case 39u: goto L_08A3824C;
    case 40u: goto L_08A38258;
    case 41u: goto L_08A38280;
    case 42u: goto L_08A38288;
    case 43u: goto L_08A38294;
    case 44u: goto L_08A382A4;
    case 45u: goto L_08A382B0;
    case 46u: goto L_08A382C0;
    case 47u: goto L_08A382C8;
    case 48u: goto L_08A382D8;
    case 49u: goto L_08A382E4;
    case 50u: goto L_08A3830C;
    case 51u: goto L_08A38314;
    case 52u: goto L_08A38320;
    case 53u: goto L_08A38330;
    case 54u: goto L_08A3833C;
    case 55u: goto L_08A3834C;
    case 56u: goto L_08A38354;
    case 57u: goto L_08A38364;
    case 58u: goto L_08A38370;
    case 59u: goto L_08A38398;
    case 60u: goto L_08A383A0;
    case 61u: goto L_08A383AC;
    case 62u: goto L_08A383BC;
    case 63u: goto L_08A383C8;
    case 64u: goto L_08A383D8;
    case 65u: goto L_08A383E0;
    case 66u: goto L_08A383F0;
    case 67u: goto L_08A383FC;
    case 68u: goto L_08A38424;
    case 69u: goto L_08A3842C;
    case 70u: goto L_08A38438;
    case 71u: goto L_08A38448;
    case 72u: goto L_08A38454;
    case 73u: goto L_08A38464;
    case 74u: goto L_08A3846C;
    case 75u: goto L_08A3847C;
    case 76u: goto L_08A38488;
    case 77u: goto L_08A384B0;
    case 78u: goto L_08A384B8;
    case 79u: goto L_08A384C4;
    case 80u: goto L_08A384D4;
    case 81u: goto L_08A384E0;
    case 82u: goto L_08A384F0;
    case 83u: goto L_08A384F8;
    case 84u: goto L_08A38508;
    case 85u: goto L_08A38514;
    case 86u: goto L_08A3853C;
    case 87u: goto L_08A38544;
    case 88u: goto L_08A38550;
    case 89u: goto L_08A38560;
    case 90u: goto L_08A3856C;
    case 91u: goto L_08A3857C;
    case 92u: goto L_08A38584;
    case 93u: goto L_08A38594;
    case 94u: goto L_08A385A0;
    case 95u: goto L_08A385C8;
    case 96u: goto L_08A385D0;
    case 97u: goto L_08A385DC;
    case 98u: goto L_08A385EC;
    case 99u: goto L_08A385F8;
    case 100u: goto L_08A38608;
    case 101u: goto L_08A38610;
    case 102u: goto L_08A38620;
    case 103u: goto L_08A3862C;
    case 104u: goto L_08A38654;
    case 105u: goto L_08A3865C;
    case 106u: goto L_08A38668;
    case 107u: goto L_08A38678;
    case 108u: goto L_08A38684;
    case 109u: goto L_08A38694;
    case 110u: goto L_08A3869C;
    case 111u: goto L_08A386AC;
    case 112u: goto L_08A386B8;
    case 113u: goto L_08A386E0;
    case 114u: goto L_08A386E8;
    case 115u: goto L_08A386F4;
    case 116u: goto L_08A38704;
    case 117u: goto L_08A38710;
    case 118u: goto L_08A38720;
    case 119u: goto L_08A38728;
    case 120u: goto L_08A38738;
    case 121u: goto L_08A38744;
    case 122u: goto L_08A3876C;
    case 123u: goto L_08A38774;
    case 124u: goto L_08A38780;
    case 125u: goto L_08A38790;
    case 126u: goto L_08A3879C;
    case 127u: goto L_08A387AC;
    case 128u: goto L_08A387B4;
    case 129u: goto L_08A387C4;
    case 130u: goto L_08A387D0;
    case 131u: goto L_08A387F8;
    case 132u: goto L_08A38800;
    case 133u: goto L_08A3880C;
    case 134u: goto L_08A3881C;
    case 135u: goto L_08A38828;
    case 136u: goto L_08A38838;
    case 137u: goto L_08A38840;
    case 138u: goto L_08A38850;
    case 139u: goto L_08A3885C;
    case 140u: goto L_08A38884;
    case 141u: goto L_08A3888C;
    case 142u: goto L_08A38898;
    case 143u: goto L_08A388A8;
    case 144u: goto L_08A388B4;
    case 145u: goto L_08A388C4;
    case 146u: goto L_08A388CC;
    case 147u: goto L_08A388DC;
    case 148u: goto L_08A388E8;
    case 149u: goto L_08A38910;
    case 150u: goto L_08A38918;
    case 151u: goto L_08A38924;
    case 152u: goto L_08A38934;
    case 153u: goto L_08A38940;
    case 154u: goto L_08A38950;
    case 155u: goto L_08A38958;
    case 156u: goto L_08A38968;
    case 157u: goto L_08A38974;
    case 158u: goto L_08A3899C;
    case 159u: goto L_08A389A4;
    case 160u: goto L_08A389B0;
    case 161u: goto L_08A389C0;
    case 162u: goto L_08A389CC;
    case 163u: goto L_08A389DC;
    case 164u: goto L_08A389E4;
    case 165u: goto L_08A389F4;
    case 166u: goto L_08A38A00;
    case 167u: goto L_08A38A28;
    case 168u: goto L_08A38A30;
    case 169u: goto L_08A38A3C;
    case 170u: goto L_08A38A4C;
    case 171u: goto L_08A38A58;
    case 172u: goto L_08A38A68;
    case 173u: goto L_08A38A70;
    case 174u: goto L_08A38A80;
    case 175u: goto L_08A38A8C;
    case 176u: goto L_08A38AB4;
    case 177u: goto L_08A38ABC;
    case 178u: goto L_08A38AC8;
    case 179u: goto L_08A38AD8;
    case 180u: goto L_08A38AE4;
    case 181u: goto L_08A38AF4;
    case 182u: goto L_08A38AFC;
    case 183u: goto L_08A38B0C;
    case 184u: goto L_08A38B18;
    case 185u: goto L_08A38B40;
    case 186u: goto L_08A38B48;
    case 187u: goto L_08A38B54;
    case 188u: goto L_08A38B64;
    case 189u: goto L_08A38B70;
    case 190u: goto L_08A38B80;
    case 191u: goto L_08A38B88;
    case 192u: goto L_08A38B98;
    case 193u: goto L_08A38BA4;
    case 194u: goto L_08A38BCC;
    case 195u: goto L_08A38BD4;
    case 196u: goto L_08A38BE0;
    case 197u: goto L_08A38BF0;
    case 198u: goto L_08A38BFC;
    case 199u: goto L_08A38C0C;
    case 200u: goto L_08A38C14;
    case 201u: goto L_08A38C24;
    case 202u: goto L_08A38C30;
    case 203u: goto L_08A38C58;
    case 204u: goto L_08A38C60;
    case 205u: goto L_08A38C6C;
    case 206u: goto L_08A38C7C;
    case 207u: goto L_08A38C88;
    case 208u: goto L_08A38C98;
    case 209u: goto L_08A38CA0;
    case 210u: goto L_08A38CB0;
    case 211u: goto L_08A38CBC;
    case 212u: goto L_08A38CE4;
    case 213u: goto L_08A38CEC;
    case 214u: goto L_08A38CF8;
    case 215u: goto L_08A38D08;
    case 216u: goto L_08A38D14;
    case 217u: goto L_08A38D24;
    case 218u: goto L_08A38D2C;
    case 219u: goto L_08A38D3C;
    case 220u: goto L_08A38D48;
    case 221u: goto L_08A38D70;
    case 222u: goto L_08A38D78;
    case 223u: goto L_08A38D84;
    case 224u: goto L_08A38D94;
    case 225u: goto L_08A38DA0;
    case 226u: goto L_08A38DB0;
    case 227u: goto L_08A38DB8;
    case 228u: goto L_08A38DC8;
    case 229u: goto L_08A38DD4;
    case 230u: goto L_08A38DFC;
    case 231u: goto L_08A38E04;
    case 232u: goto L_08A38E10;
    case 233u: goto L_08A38E20;
    case 234u: goto L_08A38E2C;
    case 235u: goto L_08A38E3C;
    case 236u: goto L_08A38E44;
    case 237u: goto L_08A38E54;
    case 238u: goto L_08A38E60;
    case 239u: goto L_08A38E88;
    case 240u: goto L_08A38E90;
    case 241u: goto L_08A38E9C;
    case 242u: goto L_08A38EAC;
    case 243u: goto L_08A38EB8;
    case 244u: goto L_08A38EC8;
    case 245u: goto L_08A38ED0;
    case 246u: goto L_08A38EE0;
    case 247u: goto L_08A38EEC;
    case 248u: goto L_08A38F14;
    case 249u: goto L_08A38F1C;
    case 250u: goto L_08A38F28;
    case 251u: goto L_08A38F38;
    case 252u: goto L_08A38F44;
    case 253u: goto L_08A38F54;
    case 254u: goto L_08A38F5C;
    case 255u: goto L_08A38F6C;
    case 256u: goto L_08A38F78;
    case 257u: goto L_08A38FA0;
    case 258u: goto L_08A38FA8;
    case 259u: goto L_08A38FB4;
    case 260u: goto L_08A38FC4;
    case 261u: goto L_08A38FD0;
    case 262u: goto L_08A38FE0;
    case 263u: goto L_08A38FE8;
    case 264u: goto L_08A38FF8;
    case 265u: goto L_08A39004;
    case 266u: goto L_08A3902C;
    case 267u: goto L_08A39034;
    case 268u: goto L_08A39040;
    case 269u: goto L_08A39050;
    case 270u: goto L_08A3905C;
    case 271u: goto L_08A3906C;
    case 272u: goto L_08A39074;
    case 273u: goto L_08A39084;
    case 274u: goto L_08A39090;
    case 275u: goto L_08A390B8;
    case 276u: goto L_08A390C0;
    case 277u: goto L_08A390CC;
    case 278u: goto L_08A390DC;
    case 279u: goto L_08A390E8;
    case 280u: goto L_08A390F8;
    case 281u: goto L_08A39100;
    case 282u: goto L_08A39110;
    case 283u: goto L_08A3911C;
    case 284u: goto L_08A39144;
    case 285u: goto L_08A3914C;
    case 286u: goto L_08A39158;
    case 287u: goto L_08A39168;
    case 288u: goto L_08A39174;
    case 289u: goto L_08A39184;
    case 290u: goto L_08A3918C;
    case 291u: goto L_08A3919C;
    case 292u: goto L_08A391A8;
    case 293u: goto L_08A391D0;
    case 294u: goto L_08A391D8;
    case 295u: goto L_08A391E4;
    case 296u: goto L_08A391F4;
    case 297u: goto L_08A39200;
    case 298u: goto L_08A39210;
    case 299u: goto L_08A39218;
    case 300u: goto L_08A39228;
    case 301u: goto L_08A39234;
    case 302u: goto L_08A3925C;
    case 303u: goto L_08A39264;
    case 304u: goto L_08A39270;
    case 305u: goto L_08A39280;
    case 306u: goto L_08A3928C;
    case 307u: goto L_08A3929C;
    case 308u: goto L_08A392A4;
    case 309u: goto L_08A392B4;
    case 310u: goto L_08A392C0;
    case 311u: goto L_08A392E8;
    case 312u: goto L_08A392F0;
    case 313u: goto L_08A392FC;
    case 314u: goto L_08A3930C;
    case 315u: goto L_08A39318;
    case 316u: goto L_08A39328;
    case 317u: goto L_08A39330;
    case 318u: goto L_08A39340;
    case 319u: goto L_08A3934C;
    case 320u: goto L_08A39374;
    case 321u: goto L_08A3937C;
    case 322u: goto L_08A39388;
    case 323u: goto L_08A39398;
    case 324u: goto L_08A393A4;
    case 325u: goto L_08A393B4;
    case 326u: goto L_08A393BC;
    case 327u: goto L_08A393CC;
    case 328u: goto L_08A393D8;
    case 329u: goto L_08A39400;
    case 330u: goto L_08A39408;
    case 331u: goto L_08A39414;
    case 332u: goto L_08A39424;
    case 333u: goto L_08A39430;
    case 334u: goto L_08A39440;
    case 335u: goto L_08A39448;
    case 336u: goto L_08A39458;
    case 337u: goto L_08A39464;
    case 338u: goto L_08A3948C;
    case 339u: goto L_08A39494;
    case 340u: goto L_08A394A0;
    case 341u: goto L_08A394B0;
    case 342u: goto L_08A394BC;
    case 343u: goto L_08A394CC;
    case 344u: goto L_08A394D4;
    case 345u: goto L_08A394E4;
    case 346u: goto L_08A394F0;
    case 347u: goto L_08A39518;
    case 348u: goto L_08A39520;
    case 349u: goto L_08A3952C;
    case 350u: goto L_08A3953C;
    case 351u: goto L_08A39548;
    case 352u: goto L_08A39558;
    case 353u: goto L_08A39560;
    case 354u: goto L_08A39570;
    case 355u: goto L_08A3957C;
    case 356u: goto L_08A395A4;
    case 357u: goto L_08A395AC;
    case 358u: goto L_08A395B8;
    case 359u: goto L_08A395C8;
    case 360u: goto L_08A395D4;
    case 361u: goto L_08A395E4;
    case 362u: goto L_08A395EC;
    case 363u: goto L_08A395FC;
    case 364u: goto L_08A39608;
    case 365u: goto L_08A39630;
    case 366u: goto L_08A39638;
    case 367u: goto L_08A39644;
    case 368u: goto L_08A39654;
    case 369u: goto L_08A39660;
    case 370u: goto L_08A39670;
    case 371u: goto L_08A39678;
    case 372u: goto L_08A39688;
    case 373u: goto L_08A39694;
    case 374u: goto L_08A396BC;
    case 375u: goto L_08A396C4;
    case 376u: goto L_08A396D0;
    case 377u: goto L_08A396E0;
    case 378u: goto L_08A396EC;
    case 379u: goto L_08A396FC;
    case 380u: goto L_08A39704;
    case 381u: goto L_08A39714;
    case 382u: goto L_08A39720;
    case 383u: goto L_08A39748;
    case 384u: goto L_08A39750;
    case 385u: goto L_08A3975C;
    case 386u: goto L_08A3976C;
    case 387u: goto L_08A39778;
    case 388u: goto L_08A39788;
    case 389u: goto L_08A39790;
    case 390u: goto L_08A397AC;
    case 391u: goto L_08A39A64;
    case 392u: goto L_08A39A80;
    case 393u: goto L_08A39A88;
    case 394u: goto L_08A39AA0;
    case 395u: goto L_08A39AB8;
    case 396u: goto L_08A39ACC;
    case 397u: goto L_08A39AEC;
    case 398u: goto L_08A39AF4;
    case 399u: goto L_08A39B08;
    case 400u: goto L_08A39B1C;
    case 401u: goto L_08A39B34;
    case 402u: goto L_08A39B48;
    case 403u: goto L_08A39B54;
    case 404u: goto L_08A39B60;
    case 405u: goto L_08A39B68;
    case 406u: goto L_08A39B6C;
    case 407u: goto L_08A39B74;
    case 408u: goto L_08A39B7C;
    case 409u: goto L_08A39BAC;
    case 410u: goto L_08A39BD4;
    case 411u: goto L_08A39BE4;
    case 412u: goto L_08A39BF0;
    case 413u: goto L_08A39BF8;
    case 414u: goto L_08A39C00;
    case 415u: goto L_08A39C04;
    case 416u: goto L_08A39C0C;
    case 417u: goto L_08A39C14;
    case 418u: goto L_08A39C1C;
    case 419u: goto L_08A39C2C;
    case 420u: goto L_08A39C34;
    case 421u: goto L_08A39C3C;
    case 422u: goto L_08A39C44;
    case 423u: goto L_08A39C48;
    case 424u: goto L_08A39C50;
    case 425u: goto L_08A39C58;
    case 426u: goto L_08A39C5C;
    case 427u: goto L_08A39C74;
    case 428u: goto L_08A39CB4;
    case 429u: goto L_08A39CE0;
    case 430u: goto L_08A39CFC;
    case 431u: goto L_08A39D10;
    case 432u: goto L_08A39D1C;
    case 433u: goto L_08A39D48;
    case 434u: goto L_08A39D50;
    case 435u: goto L_08A39D84;
    case 436u: goto L_08A39D9C;
    case 437u: goto L_08A39DA8;
    case 438u: goto L_08A39DB4;
    case 439u: goto L_08A39DC0;
    case 440u: goto L_08A39DC8;
    case 441u: goto L_08A39DD0;
    case 442u: goto L_08A39DD8;
    case 443u: goto L_08A39DE0;
    case 444u: goto L_08A39DE8;
    case 445u: goto L_08A39DFC;
    case 446u: goto L_08A39E18;
    case 447u: goto L_08A39E28;
    case 448u: goto L_08A39E34;
    case 449u: goto L_08A39E48;
    case 450u: goto L_08A39E68;
    case 451u: goto L_08A39E7C;
    case 452u: goto L_08A39F24;
    case 453u: goto L_08A39F40;
    case 454u: goto L_08A39F50;
    case 455u: goto L_08A39F60;
    case 456u: goto L_08A39F70;
    case 457u: goto L_08A39FB0;
    case 458u: goto L_08A39FBC;
    case 459u: goto L_08A39FCC;
    case 460u: goto L_08A39FDC;
    case 461u: goto L_08A39FE8;
    case 462u: goto L_08A3A03C;
    case 463u: goto L_08A3A04C;
    case 464u: goto L_08A3A05C;
    case 465u: goto L_08A3A070;
    case 466u: goto L_08A3A07C;
    case 467u: goto L_08A3A090;
    case 468u: goto L_08A3A0B0;
    case 469u: goto L_08A3A0F0;
    case 470u: goto L_08A3A0FC;
    case 471u: goto L_08A3A150;
    case 472u: goto L_08A3A160;
    case 473u: goto L_08A3A170;
    case 474u: goto L_08A3A180;
    case 475u: goto L_08A3A194;
    case 476u: goto L_08A3A1A0;
    case 477u: goto L_08A3A1BC;
    case 478u: goto L_08A3A1C4;
    case 479u: goto L_08A3A1CC;
    case 480u: goto L_08A3A1DC;
    case 481u: goto L_08A3A1E4;
    case 482u: goto L_08A3A1EC;
    case 483u: goto L_08A3A1F4;
    case 484u: goto L_08A3A208;
    case 485u: goto L_08A3A24C;
    case 486u: goto L_08A3A2BC;
    case 487u: goto L_08A3A2D4;
    case 488u: goto L_08A3A2E4;
    case 489u: goto L_08A3A2EC;
    case 490u: goto L_08A3A304;
    case 491u: goto L_08A3A310;
    case 492u: goto L_08A3A318;
    case 493u: goto L_08A3A320;
    case 494u: goto L_08A3A334;
    case 495u: goto L_08A3A33C;
    case 496u: goto L_08A3A344;
    case 497u: goto L_08A3A358;
    case 498u: goto L_08A3A360;
    case 499u: goto L_08A3A378;
    case 500u: goto L_08A3A388;
    case 501u: goto L_08A3A390;
    case 502u: goto L_08A3A3A8;
    case 503u: goto L_08A3A3B4;
    case 504u: goto L_08A3A3BC;
    case 505u: goto L_08A3A3C4;
    case 506u: goto L_08A3A3D8;
    case 507u: goto L_08A3A3E0;
    case 508u: goto L_08A3A3E8;
    case 509u: goto L_08A3A3FC;
    case 510u: goto L_08A3A404;
    case 511u: goto L_08A3A434;
    case 512u: goto L_08A3A44C;
    case 513u: goto L_08A3A464;
    case 514u: goto L_08A3A478;
    case 515u: goto L_08A3A4C0;
    case 516u: goto L_08A3A524;
    case 517u: goto L_08A3A540;
    case 518u: goto L_08A3A574;
    case 519u: goto L_08A3A57C;
    case 520u: goto L_08A3A58C;
    case 521u: goto L_08A3A594;
    case 522u: goto L_08A3A5A0;
    case 523u: goto L_08A3A5BC;
    case 524u: goto L_08A3A5D4;
    case 525u: goto L_08A3A5DC;
    case 526u: goto L_08A3A5E8;
    case 527u: goto L_08A3A5F8;
    case 528u: goto L_08A3A61C;
    case 529u: goto L_08A3A648;
    case 530u: goto L_08A3A664;
    case 531u: goto L_08A3A678;
    case 532u: goto L_08A3A690;
    case 533u: goto L_08A3A69C;
    case 534u: goto L_08A3A6A4;
    case 535u: goto L_08A3A6B4;
    case 536u: goto L_08A3A6BC;
    case 537u: goto L_08A3A6C4;
    case 538u: goto L_08A3A6D4;
    case 539u: goto L_08A3A6D8;
    case 540u: goto L_08A3A6E4;
    case 541u: goto L_08A3A6F4;
    case 542u: goto L_08A3A704;
    case 543u: goto L_08A3A734;
    case 544u: goto L_08A3A754;
    case 545u: goto L_08A3A770;
    case 546u: goto L_08A3A778;
    case 547u: goto L_08A3A7B0;
    case 548u: goto L_08A3A7BC;
    case 549u: goto L_08A3A7C8;
    case 550u: goto L_08A3A7D8;
    case 551u: goto L_08A3A7F8;
    case 552u: goto L_08A3A804;
    case 553u: goto L_08A3A80C;
    case 554u: goto L_08A3A81C;
    case 555u: goto L_08A3A820;
    case 556u: goto L_08A3A828;
    case 557u: goto L_08A3A83C;
    case 558u: goto L_08A3A84C;
    case 559u: goto L_08A3A864;
    case 560u: goto L_08A3A86C;
    case 561u: goto L_08A3A884;
    case 562u: goto L_08A3A890;
    case 563u: goto L_08A3A89C;
    case 564u: goto L_08A3A8A8;
    case 565u: goto L_08A3A8B4;
    case 566u: goto L_08A3A8BC;
    case 567u: goto L_08A3A8C8;
    case 568u: goto L_08A3A8E0;
    case 569u: goto L_08A3A8E4;
    case 570u: goto L_08A3A8EC;
    case 571u: goto L_08A3A934;
    case 572u: goto L_08A3A940;
    case 573u: goto L_08A3A958;
    case 574u: goto L_08A3A97C;
    case 575u: goto L_08A3A9A8;
    case 576u: goto L_08A3A9C8;
    case 577u: goto L_08A3A9DC;
    case 578u: goto L_08A3A9EC;
    case 579u: goto L_08A3A9FC;
    case 580u: goto L_08A3AA2C;
    case 581u: goto L_08A3AA90;
    case 582u: goto L_08A3AA94;
    case 583u: goto L_08A3AAA0;
    case 584u: goto L_08A3AAD0;
    case 585u: goto L_08A3AAFC;
    case 586u: goto L_08A3AB14;
    case 587u: goto L_08A3AB28;
    case 588u: goto L_08A3AB40;
    case 589u: goto L_08A3AB50;
    case 590u: goto L_08A3AB70;
    case 591u: goto L_08A3AB7C;
    case 592u: goto L_08A3AB84;
    case 593u: goto L_08A3ABA0;
    case 594u: goto L_08A3ABB8;
    case 595u: goto L_08A3ABD0;
    case 596u: goto L_08A3ABF8;
    case 597u: goto L_08A3AC0C;
    case 598u: goto L_08A3AC20;
    case 599u: goto L_08A3AC4C;
    case 600u: goto L_08A3AC68;
    case 601u: goto L_08A3AC8C;
    case 602u: goto L_08A3AC9C;
    case 603u: goto L_08A3ACA4;
    case 604u: goto L_08A3ACAC;
    case 605u: goto L_08A3ACB4;
    case 606u: goto L_08A3ACBC;
    case 607u: goto L_08A3ACC8;
    case 608u: goto L_08A3ACD0;
    case 609u: goto L_08A3ACE8;
    case 610u: goto L_08A3AD00;
    case 611u: goto L_08A3AD0C;
    case 612u: goto L_08A3AD24;
    case 613u: goto L_08A3AD38;
    case 614u: goto L_08A3AD44;
    case 615u: goto L_08A3AD68;
    case 616u: goto L_08A3AD78;
    case 617u: goto L_08A3AD90;
    case 618u: goto L_08A3AD9C;
    case 619u: goto L_08A3ADA8;
    case 620u: goto L_08A3ADE8;
    case 621u: goto L_08A3AE40;
    case 622u: goto L_08A3AE54;
    case 623u: goto L_08A3AE5C;
    case 624u: goto L_08A3AE64;
    case 625u: goto L_08A3AE70;
    case 626u: goto L_08A3AE7C;
    case 627u: goto L_08A3AE80;
    case 628u: goto L_08A3AE84;
    case 629u: goto L_08A3AE8C;
    case 630u: goto L_08A3AE9C;
    case 631u: goto L_08A3AEA8;
    case 632u: goto L_08A3AEB0;
    case 633u: goto L_08A3AEBC;
    case 634u: goto L_08A3AEC0;
    case 635u: goto L_08A3AEC4;
    case 636u: goto L_08A3AECC;
    case 637u: goto L_08A3AED8;
    case 638u: goto L_08A3AEE4;
    case 639u: goto L_08A3AEF0;
    case 640u: goto L_08A3AEFC;
    case 641u: goto L_08A3AF00;
    case 642u: goto L_08A3AF04;
    case 643u: goto L_08A3AF0C;
    case 644u: goto L_08A3AF1C;
    case 645u: goto L_08A3AF28;
    case 646u: goto L_08A3AF30;
    case 647u: goto L_08A3AF3C;
    case 648u: goto L_08A3AF40;
    case 649u: goto L_08A3AF44;
    case 650u: goto L_08A3AF4C;
    case 651u: goto L_08A3AF58;
    case 652u: goto L_08A3AF64;
    case 653u: goto L_08A3AF70;
    case 654u: goto L_08A3AF7C;
    case 655u: goto L_08A3AF80;
    case 656u: goto L_08A3AF84;
    case 657u: goto L_08A3AF8C;
    case 658u: goto L_08A3AF9C;
    case 659u: goto L_08A3AFA8;
    case 660u: goto L_08A3AFB0;
    case 661u: goto L_08A3AFBC;
    case 662u: goto L_08A3AFC0;
    case 663u: goto L_08A3AFC4;
    case 664u: goto L_08A3AFCC;
    case 665u: goto L_08A3AFD8;
    case 666u: goto L_08A3AFE4;
    case 667u: goto L_08A3AFF0;
    case 668u: goto L_08A3AFFC;
    case 669u: goto L_08A3B000;
    case 670u: goto L_08A3B004;
    case 671u: goto L_08A3B00C;
    case 672u: goto L_08A3B01C;
    case 673u: goto L_08A3B028;
    case 674u: goto L_08A3B030;
    case 675u: goto L_08A3B03C;
    case 676u: goto L_08A3B040;
    case 677u: goto L_08A3B044;
    case 678u: goto L_08A3B04C;
    case 679u: goto L_08A3B058;
    case 680u: goto L_08A3B064;
    case 681u: goto L_08A3B070;
    case 682u: goto L_08A3B07C;
    case 683u: goto L_08A3B080;
    case 684u: goto L_08A3B084;
    case 685u: goto L_08A3B08C;
    case 686u: goto L_08A3B09C;
    case 687u: goto L_08A3B0A8;
    case 688u: goto L_08A3B0B0;
    case 689u: goto L_08A3B0BC;
    case 690u: goto L_08A3B0C0;
    case 691u: goto L_08A3B0C4;
    case 692u: goto L_08A3B0CC;
    case 693u: goto L_08A3B0D8;
    case 694u: goto L_08A3B0E4;
    case 695u: goto L_08A3B0F0;
    case 696u: goto L_08A3B0FC;
    case 697u: goto L_08A3B100;
    case 698u: goto L_08A3B104;
    case 699u: goto L_08A3B10C;
    case 700u: goto L_08A3B11C;
    case 701u: goto L_08A3B128;
    case 702u: goto L_08A3B130;
    case 703u: goto L_08A3B13C;
    case 704u: goto L_08A3B140;
    case 705u: goto L_08A3B144;
    case 706u: goto L_08A3B14C;
    case 707u: goto L_08A3B158;
    case 708u: goto L_08A3B160;
    case 709u: goto L_08A3B16C;
    case 710u: goto L_08A3B178;
    case 711u: goto L_08A3B184;
    case 712u: goto L_08A3B1BC;
    case 713u: goto L_08A3B1F8;
    case 714u: goto L_08A3B214;
    case 715u: goto L_08A3B22C;
    case 716u: goto L_08A3B244;
    case 717u: goto L_08A3B260;
    case 718u: goto L_08A3B278;
    case 719u: goto L_08A3B2AC;
    case 720u: goto L_08A3B3A0;
    case 721u: goto L_08A3B3D0;
    case 722u: goto L_08A3B3D8;
    case 723u: goto L_08A3B3F4;
    case 724u: goto L_08A3B3F8;
    case 725u: goto L_08A3B40C;
    case 726u: goto L_08A3B414;
    case 727u: goto L_08A3B430;
    case 728u: goto L_08A3B434;
    case 729u: goto L_08A3B438;
    case 730u: goto L_08A3B478;
    case 731u: goto L_08A3B4BC;
    case 732u: goto L_08A3B4C8;
    case 733u: goto L_08A3B4D0;
    case 734u: goto L_08A3B508;
    case 735u: goto L_08A3B548;
    case 736u: goto L_08A3B550;
    case 737u: goto L_08A3B564;
    case 738u: goto L_08A3B568;
    case 739u: goto L_08A3B574;
    case 740u: goto L_08A3B5A4;
    case 741u: goto L_08A3B5AC;
    case 742u: goto L_08A3B5D0;
    case 743u: goto L_08A3B5D8;
    case 744u: goto L_08A3B5E0;
    case 745u: goto L_08A3B5E4;
    case 746u: goto L_08A3B5F4;
    case 747u: goto L_08A3B600;
    case 748u: goto L_08A3B608;
    case 749u: goto L_08A3B610;
    case 750u: goto L_08A3B648;
    case 751u: goto L_08A3B654;
    case 752u: goto L_08A3B664;
    case 753u: goto L_08A3B66C;
    case 754u: goto L_08A3B67C;
    case 755u: goto L_08A3B688;
    case 756u: goto L_08A3B694;
    case 757u: goto L_08A3B6C4;
    case 758u: goto L_08A3B708;
    case 759u: goto L_08A3B718;
    case 760u: goto L_08A3B72C;
    case 761u: goto L_08A3B734;
    case 762u: goto L_08A3B744;
    case 763u: goto L_08A3B74C;
    case 764u: goto L_08A3B760;
    case 765u: goto L_08A3B768;
    case 766u: goto L_08A3B774;
    case 767u: goto L_08A3B77C;
    case 768u: goto L_08A3B7A0;
    case 769u: goto L_08A3B7A8;
    case 770u: goto L_08A3B7CC;
    case 771u: goto L_08A3B7D4;
    case 772u: goto L_08A3B7D8;
    case 773u: goto L_08A3B7E0;
    case 774u: goto L_08A3B7E8;
    case 775u: goto L_08A3B7F4;
    case 776u: goto L_08A3B814;
    case 777u: goto L_08A3B824;
    case 778u: goto L_08A3B82C;
    case 779u: goto L_08A3B840;
    case 780u: goto L_08A3B85C;
    case 781u: goto L_08A3B870;
    case 782u: goto L_08A3B880;
    case 783u: goto L_08A3B884;
    case 784u: goto L_08A3B88C;
    case 785u: goto L_08A3B8A0;
    case 786u: goto L_08A3B8C4;
    case 787u: goto L_08A3B8CC;
    case 788u: goto L_08A3B8DC;
    case 789u: goto L_08A3B8E4;
    case 790u: goto L_08A3B914;
    case 791u: goto L_08A3B968;
    case 792u: goto L_08A3B990;
    case 793u: goto L_08A3B9B4;
    case 794u: goto L_08A3B9BC;
    case 795u: goto L_08A3B9CC;
    case 796u: goto L_08A3B9D4;
    case 797u: goto L_08A3BA14;
    case 798u: goto L_08A3BA34;
    case 799u: goto L_08A3BA44;
    case 800u: goto L_08A3BA5C;
    case 801u: goto L_08A3BA60;
    case 802u: goto L_08A3BA7C;
    case 803u: goto L_08A3BA8C;
    case 804u: goto L_08A3BA9C;
    case 805u: goto L_08A3BABC;
    case 806u: goto L_08A3BAC8;
    case 807u: goto L_08A3BAD8;
    case 808u: goto L_08A3BAFC;
    case 809u: goto L_08A3BB1C;
    case 810u: goto L_08A3BB24;
    case 811u: goto L_08A3BB34;
    case 812u: goto L_08A3BB44;
    case 813u: goto L_08A3BB4C;
    case 814u: goto L_08A3BB58;
    case 815u: goto L_08A3BB60;
    case 816u: goto L_08A3BB74;
    case 817u: goto L_08A3BB94;
    case 818u: goto L_08A3BBA4;
    case 819u: goto L_08A3BBAC;
    case 820u: goto L_08A3BBB0;
    case 821u: goto L_08A3BBBC;
    case 822u: goto L_08A3BBC4;
    case 823u: goto L_08A3BBC8;
    case 824u: goto L_08A3BBD4;
    case 825u: goto L_08A3BBDC;
    case 826u: goto L_08A3BBE4;
    case 827u: goto L_08A3BBF0;
    case 828u: goto L_08A3BC08;
    case 829u: goto L_08A3BC10;
    case 830u: goto L_08A3BC1C;
    case 831u: goto L_08A3BC34;
    case 832u: goto L_08A3BC4C;
    case 833u: goto L_08A3BC5C;
    case 834u: goto L_08A3BC64;
    case 835u: goto L_08A3BC74;
    case 836u: goto L_08A3BCBC;
    case 837u: goto L_08A3BCD0;
    case 838u: goto L_08A3BCD8;
    case 839u: goto L_08A3BCE8;
    case 840u: goto L_08A3BD44;
    case 841u: goto L_08A3BD80;
    case 842u: goto L_08A3BD88;
    case 843u: goto L_08A3BD90;
    case 844u: goto L_08A3BDA0;
    case 845u: goto L_08A3BDB0;
    case 846u: goto L_08A3BDC0;
    case 847u: goto L_08A3BDC4;
    case 848u: goto L_08A3BDE4;
    case 849u: goto L_08A3BDEC;
    case 850u: goto L_08A3BDFC;
    case 851u: goto L_08A3BE04;
    case 852u: goto L_08A3BE10;
    case 853u: goto L_08A3BE1C;
    case 854u: goto L_08A3BE2C;
    case 855u: goto L_08A3BE40;
    case 856u: goto L_08A3BE50;
    case 857u: goto L_08A3BE60;
    case 858u: goto L_08A3BE68;
    case 859u: goto L_08A3BEA0;
    case 860u: goto L_08A3BEA8;
    case 861u: goto L_08A3BEB0;
    case 862u: goto L_08A3BEB8;
    case 863u: goto L_08A3BEC0;
    case 864u: goto L_08A3BEC8;
    case 865u: goto L_08A3BED8;
    case 866u: goto L_08A3BEE4;
    case 867u: goto L_08A3BEEC;
    case 868u: goto L_08A3BEFC;
    case 869u: goto L_08A3BF04;
    case 870u: goto L_08A3BF0C;
    case 871u: goto L_08A3BF20;
    case 872u: goto L_08A3BF30;
    case 873u: goto L_08A3BF48;
    case 874u: goto L_08A3BF54;
    case 875u: goto L_08A3BF6C;
    case 876u: goto L_08A3BF74;
    case 877u: goto L_08A3BF80;
    case 878u: goto L_08A3BF88;
    case 879u: goto L_08A3BF94;
    case 880u: goto L_08A3BFA4;
    case 881u: goto L_08A3BFB4;
    case 882u: goto L_08A3BFC4;
    case 883u: goto L_08A3BFD4;
    case 884u: goto L_08A3BFE4;
    case 885u: goto L_08A3BFF4;
    case 886u: goto L_08A3BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A38004:
    ctx.gpr[31] = (0x08A3800Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3800Cu) goto L_08A3800C;
    return;
L_08A3800C:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8884))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A3801Cu);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A3801Cu) goto L_08A3801C;
    return;
L_08A3801C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38050;
      }
      goto L_08A38028;
    }
L_08A38028:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28452));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A38050;
L_08A38050:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38064;
      }
      goto L_08A38058;
    }
L_08A38058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38064;
L_08A38064:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38074u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38074u) goto L_08A38074;
    return;
L_08A38074:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38098;
      }
      goto L_08A38080;
    }
L_08A38080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A38098;
      }
      goto L_08A38090;
    }
L_08A38090:
    ctx.gpr[31] = (0x08A38098u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A38098u) goto L_08A38098;
    return;
L_08A38098:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9944))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A380A8u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A380A8u) goto L_08A380A8;
    return;
L_08A380A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A380DC;
      }
      goto L_08A380B4;
    }
L_08A380B4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28512));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A380DC;
L_08A380DC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A380F0;
      }
      goto L_08A380E4;
    }
L_08A380E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A380F0;
L_08A380F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38100u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38100u) goto L_08A38100;
    return;
L_08A38100:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38124;
      }
      goto L_08A3810C;
    }
L_08A3810C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A38124;
      }
      goto L_08A3811C;
    }
L_08A3811C:
    ctx.gpr[31] = (0x08A38124u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A38124u) goto L_08A38124;
    return;
L_08A38124:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9945))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A38134u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A38134u) goto L_08A38134;
    return;
L_08A38134:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38168;
      }
      goto L_08A38140;
    }
L_08A38140:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28736));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A38168;
L_08A38168:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A3817C;
      }
      goto L_08A38170;
    }
L_08A38170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A3817C;
L_08A3817C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3818Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3818Cu) goto L_08A3818C;
    return;
L_08A3818C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A381B0;
      }
      goto L_08A38198;
    }
L_08A38198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A381B0;
      }
      goto L_08A381A8;
    }
L_08A381A8:
    ctx.gpr[31] = (0x08A381B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A381B0u) goto L_08A381B0;
    return;
L_08A381B0:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9946))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A381C0u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A381C0u) goto L_08A381C0;
    return;
L_08A381C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A381F4;
      }
      goto L_08A381CC;
    }
L_08A381CC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28896));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A381F4;
L_08A381F4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38208;
      }
      goto L_08A381FC;
    }
L_08A381FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38208;
L_08A38208:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38218u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38218u) goto L_08A38218;
    return;
L_08A38218:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3823C;
      }
      goto L_08A38224;
    }
L_08A38224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3823C;
      }
      goto L_08A38234;
    }
L_08A38234:
    ctx.gpr[31] = (0x08A3823Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3823Cu) goto L_08A3823C;
    return;
L_08A3823C:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8724))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A3824Cu);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A3824Cu) goto L_08A3824C;
    return;
L_08A3824C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38280;
      }
      goto L_08A38258;
    }
L_08A38258:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29036));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A38280;
L_08A38280:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38294;
      }
      goto L_08A38288;
    }
L_08A38288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38294;
L_08A38294:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A382A4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A382A4u) goto L_08A382A4;
    return;
L_08A382A4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A382C8;
      }
      goto L_08A382B0;
    }
L_08A382B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A382C8;
      }
      goto L_08A382C0;
    }
L_08A382C0:
    ctx.gpr[31] = (0x08A382C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A382C8u) goto L_08A382C8;
    return;
L_08A382C8:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9947))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A382D8u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A382D8u) goto L_08A382D8;
    return;
L_08A382D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A3830C;
      }
      goto L_08A382E4;
    }
L_08A382E4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29464));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A3830C;
L_08A3830C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38320;
      }
      goto L_08A38314;
    }
L_08A38314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38320;
L_08A38320:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38330u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38330u) goto L_08A38330;
    return;
L_08A38330:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38354;
      }
      goto L_08A3833C;
    }
L_08A3833C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A38354;
      }
      goto L_08A3834C;
    }
L_08A3834C:
    ctx.gpr[31] = (0x08A38354u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A38354u) goto L_08A38354;
    return;
L_08A38354:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9948))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A38364u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A38364u) goto L_08A38364;
    return;
L_08A38364:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38398;
      }
      goto L_08A38370;
    }
L_08A38370:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29648));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A38398;
L_08A38398:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A383AC;
      }
      goto L_08A383A0;
    }
L_08A383A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A383AC;
L_08A383AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A383BCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A383BCu) goto L_08A383BC;
    return;
L_08A383BC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A383E0;
      }
      goto L_08A383C8;
    }
L_08A383C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A383E0;
      }
      goto L_08A383D8;
    }
L_08A383D8:
    ctx.gpr[31] = (0x08A383E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A383E0u) goto L_08A383E0;
    return;
L_08A383E0:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9949))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A383F0u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A383F0u) goto L_08A383F0;
    return;
L_08A383F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38424;
      }
      goto L_08A383FC;
    }
L_08A383FC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29808));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A38424;
L_08A38424:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38438;
      }
      goto L_08A3842C;
    }
L_08A3842C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38438;
L_08A38438:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38448u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38448u) goto L_08A38448;
    return;
L_08A38448:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3846C;
      }
      goto L_08A38454;
    }
L_08A38454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3846C;
      }
      goto L_08A38464;
    }
L_08A38464:
    ctx.gpr[31] = (0x08A3846Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3846Cu) goto L_08A3846C;
    return;
L_08A3846C:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9950))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A3847Cu);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A3847Cu) goto L_08A3847C;
    return;
L_08A3847C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A384B0;
      }
      goto L_08A38488;
    }
L_08A38488:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29932));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A384B0;
L_08A384B0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A384C4;
      }
      goto L_08A384B8;
    }
L_08A384B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A384C4;
L_08A384C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A384D4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A384D4u) goto L_08A384D4;
    return;
L_08A384D4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A384F8;
      }
      goto L_08A384E0;
    }
L_08A384E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A384F8;
      }
      goto L_08A384F0;
    }
L_08A384F0:
    ctx.gpr[31] = (0x08A384F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A384F8u) goto L_08A384F8;
    return;
L_08A384F8:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9951))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A38508u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A38508u) goto L_08A38508;
    return;
L_08A38508:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A3853C;
      }
      goto L_08A38514;
    }
L_08A38514:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29976));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A3853C;
L_08A3853C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38550;
      }
      goto L_08A38544;
    }
L_08A38544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38550;
L_08A38550:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38560u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38560u) goto L_08A38560;
    return;
L_08A38560:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38584;
      }
      goto L_08A3856C;
    }
L_08A3856C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A38584;
      }
      goto L_08A3857C;
    }
L_08A3857C:
    ctx.gpr[31] = (0x08A38584u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A38584u) goto L_08A38584;
    return;
L_08A38584:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8681))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A38594u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A38594u) goto L_08A38594;
    return;
L_08A38594:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A385C8;
      }
      goto L_08A385A0;
    }
L_08A385A0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2190u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20880));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A385C8;
L_08A385C8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A385DC;
      }
      goto L_08A385D0;
    }
L_08A385D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A385DC;
L_08A385DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A385ECu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A385ECu) goto L_08A385EC;
    return;
L_08A385EC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38610;
      }
      goto L_08A385F8;
    }
L_08A385F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A38610;
      }
      goto L_08A38608;
    }
L_08A38608:
    ctx.gpr[31] = (0x08A38610u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A38610u) goto L_08A38610;
    return;
L_08A38610:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9637))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A38620u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A38620u) goto L_08A38620;
    return;
L_08A38620:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38654;
      }
      goto L_08A3862C;
    }
L_08A3862C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2212u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15860));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A38654;
L_08A38654:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38668;
      }
      goto L_08A3865C;
    }
L_08A3865C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38668;
L_08A38668:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38678u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38678u) goto L_08A38678;
    return;
L_08A38678:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3869C;
      }
      goto L_08A38684;
    }
L_08A38684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3869C;
      }
      goto L_08A38694;
    }
L_08A38694:
    ctx.gpr[31] = (0x08A3869Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3869Cu) goto L_08A3869C;
    return;
L_08A3869C:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9642))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A386ACu);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A386ACu) goto L_08A386AC;
    return;
L_08A386AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A386E0;
      }
      goto L_08A386B8;
    }
L_08A386B8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2212u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(992));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A386E0;
L_08A386E0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A386F4;
      }
      goto L_08A386E8;
    }
L_08A386E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A386F4;
L_08A386F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38704u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38704u) goto L_08A38704;
    return;
L_08A38704:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38728;
      }
      goto L_08A38710;
    }
L_08A38710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A38728;
      }
      goto L_08A38720;
    }
L_08A38720:
    ctx.gpr[31] = (0x08A38728u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A38728u) goto L_08A38728;
    return;
L_08A38728:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9638))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A38738u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A38738u) goto L_08A38738;
    return;
L_08A38738:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A3876C;
      }
      goto L_08A38744;
    }
L_08A38744:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2212u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-956));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A3876C;
L_08A3876C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38780;
      }
      goto L_08A38774;
    }
L_08A38774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38780;
L_08A38780:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38790u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38790u) goto L_08A38790;
    return;
L_08A38790:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A387B4;
      }
      goto L_08A3879C;
    }
L_08A3879C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A387B4;
      }
      goto L_08A387AC;
    }
L_08A387AC:
    ctx.gpr[31] = (0x08A387B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A387B4u) goto L_08A387B4;
    return;
L_08A387B4:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9639))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A387C4u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A387C4u) goto L_08A387C4;
    return;
L_08A387C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A387F8;
      }
      goto L_08A387D0;
    }
L_08A387D0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2212u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(212));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A387F8;
L_08A387F8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A3880C;
      }
      goto L_08A38800;
    }
L_08A38800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A3880C;
L_08A3880C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3881Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3881Cu) goto L_08A3881C;
    return;
L_08A3881C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38840;
      }
      goto L_08A38828;
    }
L_08A38828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A38840;
      }
      goto L_08A38838;
    }
L_08A38838:
    ctx.gpr[31] = (0x08A38840u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A38840u) goto L_08A38840;
    return;
L_08A38840:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9640))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A38850u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A38850u) goto L_08A38850;
    return;
L_08A38850:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38884;
      }
      goto L_08A3885C;
    }
L_08A3885C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2212u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-556));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A38884;
L_08A38884:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38898;
      }
      goto L_08A3888C;
    }
L_08A3888C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38898;
L_08A38898:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A388A8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A388A8u) goto L_08A388A8;
    return;
L_08A388A8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A388CC;
      }
      goto L_08A388B4;
    }
L_08A388B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A388CC;
      }
      goto L_08A388C4;
    }
L_08A388C4:
    ctx.gpr[31] = (0x08A388CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A388CCu) goto L_08A388CC;
    return;
L_08A388CC:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8064))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A388DCu);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A388DCu) goto L_08A388DC;
    return;
L_08A388DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38910;
      }
      goto L_08A388E8;
    }
L_08A388E8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2184u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-56));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A38910;
L_08A38910:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38924;
      }
      goto L_08A38918;
    }
L_08A38918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38924;
L_08A38924:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38934u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38934u) goto L_08A38934;
    return;
L_08A38934:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38958;
      }
      goto L_08A38940;
    }
L_08A38940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A38958;
      }
      goto L_08A38950;
    }
L_08A38950:
    ctx.gpr[31] = (0x08A38958u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A38958u) goto L_08A38958;
    return;
L_08A38958:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8433))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A38968u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A38968u) goto L_08A38968;
    return;
L_08A38968:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A3899C;
      }
      goto L_08A38974;
    }
L_08A38974:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2185u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A3899C;
L_08A3899C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A389B0;
      }
      goto L_08A389A4;
    }
L_08A389A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A389B0;
L_08A389B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A389C0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A389C0u) goto L_08A389C0;
    return;
L_08A389C0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A389E4;
      }
      goto L_08A389CC;
    }
L_08A389CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A389E4;
      }
      goto L_08A389DC;
    }
L_08A389DC:
    ctx.gpr[31] = (0x08A389E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A389E4u) goto L_08A389E4;
    return;
L_08A389E4:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9641))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A389F4u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A389F4u) goto L_08A389F4;
    return;
L_08A389F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38A28;
      }
      goto L_08A38A00;
    }
L_08A38A00:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2212u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A38A28;
L_08A38A28:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38A3C;
      }
      goto L_08A38A30;
    }
L_08A38A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38A3C;
L_08A38A3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38A4Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38A4Cu) goto L_08A38A4C;
    return;
L_08A38A4C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38A70;
      }
      goto L_08A38A58;
    }
L_08A38A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A38A70;
      }
      goto L_08A38A68;
    }
L_08A38A68:
    ctx.gpr[31] = (0x08A38A70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A38A70u) goto L_08A38A70;
    return;
L_08A38A70:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9643))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A38A80u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A38A80u) goto L_08A38A80;
    return;
L_08A38A80:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38AB4;
      }
      goto L_08A38A8C;
    }
L_08A38A8C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2212u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1836));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A38AB4;
L_08A38AB4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38AC8;
      }
      goto L_08A38ABC;
    }
L_08A38ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38AC8;
L_08A38AC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38AD8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38AD8u) goto L_08A38AD8;
    return;
L_08A38AD8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38AFC;
      }
      goto L_08A38AE4;
    }
L_08A38AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A38AFC;
      }
      goto L_08A38AF4;
    }
L_08A38AF4:
    ctx.gpr[31] = (0x08A38AFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A38AFCu) goto L_08A38AFC;
    return;
L_08A38AFC:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9645))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A38B0Cu);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A38B0Cu) goto L_08A38B0C;
    return;
L_08A38B0C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38B40;
      }
      goto L_08A38B18;
    }
L_08A38B18:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2212u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2436));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A38B40;
L_08A38B40:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38B54;
      }
      goto L_08A38B48;
    }
L_08A38B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38B54;
L_08A38B54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38B64u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38B64u) goto L_08A38B64;
    return;
L_08A38B64:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38B88;
      }
      goto L_08A38B70;
    }
L_08A38B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A38B88;
      }
      goto L_08A38B80;
    }
L_08A38B80:
    ctx.gpr[31] = (0x08A38B88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A38B88u) goto L_08A38B88;
    return;
L_08A38B88:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9646))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A38B98u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A38B98u) goto L_08A38B98;
    return;
L_08A38B98:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38BCC;
      }
      goto L_08A38BA4;
    }
L_08A38BA4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2212u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17920));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A38BCC;
L_08A38BCC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38BE0;
      }
      goto L_08A38BD4;
    }
L_08A38BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38BE0;
L_08A38BE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38BF0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38BF0u) goto L_08A38BF0;
    return;
L_08A38BF0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38C14;
      }
      goto L_08A38BFC;
    }
L_08A38BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A38C14;
      }
      goto L_08A38C0C;
    }
L_08A38C0C:
    ctx.gpr[31] = (0x08A38C14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A38C14u) goto L_08A38C14;
    return;
L_08A38C14:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9745))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A38C24u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A38C24u) goto L_08A38C24;
    return;
L_08A38C24:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38C58;
      }
      goto L_08A38C30;
    }
L_08A38C30:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20808));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A38C58;
L_08A38C58:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38C6C;
      }
      goto L_08A38C60;
    }
L_08A38C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38C6C;
L_08A38C6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38C7Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38C7Cu) goto L_08A38C7C;
    return;
L_08A38C7C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38CA0;
      }
      goto L_08A38C88;
    }
L_08A38C88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A38CA0;
      }
      goto L_08A38C98;
    }
L_08A38C98:
    ctx.gpr[31] = (0x08A38CA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A38CA0u) goto L_08A38CA0;
    return;
L_08A38CA0:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9744))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A38CB0u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A38CB0u) goto L_08A38CB0;
    return;
L_08A38CB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38CE4;
      }
      goto L_08A38CBC;
    }
L_08A38CBC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21024));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A38CE4;
L_08A38CE4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38CF8;
      }
      goto L_08A38CEC;
    }
L_08A38CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38CF8;
L_08A38CF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38D08u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38D08u) goto L_08A38D08;
    return;
L_08A38D08:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38D2C;
      }
      goto L_08A38D14;
    }
L_08A38D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A38D2C;
      }
      goto L_08A38D24;
    }
L_08A38D24:
    ctx.gpr[31] = (0x08A38D2Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A38D2Cu) goto L_08A38D2C;
    return;
L_08A38D2C:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9746))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A38D3Cu);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A38D3Cu) goto L_08A38D3C;
    return;
L_08A38D3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38D70;
      }
      goto L_08A38D48;
    }
L_08A38D48:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19948));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A38D70;
L_08A38D70:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38D84;
      }
      goto L_08A38D78;
    }
L_08A38D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38D84;
L_08A38D84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38D94u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38D94u) goto L_08A38D94;
    return;
L_08A38D94:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38DB8;
      }
      goto L_08A38DA0;
    }
L_08A38DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A38DB8;
      }
      goto L_08A38DB0;
    }
L_08A38DB0:
    ctx.gpr[31] = (0x08A38DB8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A38DB8u) goto L_08A38DB8;
    return;
L_08A38DB8:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9684))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A38DC8u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A38DC8u) goto L_08A38DC8;
    return;
L_08A38DC8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38DFC;
      }
      goto L_08A38DD4;
    }
L_08A38DD4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2207u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27216));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A38DFC;
L_08A38DFC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38E10;
      }
      goto L_08A38E04;
    }
L_08A38E04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38E10;
L_08A38E10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38E20u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38E20u) goto L_08A38E20;
    return;
L_08A38E20:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38E44;
      }
      goto L_08A38E2C;
    }
L_08A38E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A38E44;
      }
      goto L_08A38E3C;
    }
L_08A38E3C:
    ctx.gpr[31] = (0x08A38E44u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A38E44u) goto L_08A38E44;
    return;
L_08A38E44:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9636))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A38E54u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A38E54u) goto L_08A38E54;
    return;
L_08A38E54:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38E88;
      }
      goto L_08A38E60;
    }
L_08A38E60:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2205u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1176));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A38E88;
L_08A38E88:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38E9C;
      }
      goto L_08A38E90;
    }
L_08A38E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38E9C;
L_08A38E9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38EACu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38EACu) goto L_08A38EAC;
    return;
L_08A38EAC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38ED0;
      }
      goto L_08A38EB8;
    }
L_08A38EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A38ED0;
      }
      goto L_08A38EC8;
    }
L_08A38EC8:
    ctx.gpr[31] = (0x08A38ED0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A38ED0u) goto L_08A38ED0;
    return;
L_08A38ED0:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7884))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A38EE0u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A38EE0u) goto L_08A38EE0;
    return;
L_08A38EE0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38F14;
      }
      goto L_08A38EEC;
    }
L_08A38EEC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30208));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A38F14;
L_08A38F14:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38F28;
      }
      goto L_08A38F1C;
    }
L_08A38F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38F28;
L_08A38F28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38F38u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38F38u) goto L_08A38F38;
    return;
L_08A38F38:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38F5C;
      }
      goto L_08A38F44;
    }
L_08A38F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A38F5C;
      }
      goto L_08A38F54;
    }
L_08A38F54:
    ctx.gpr[31] = (0x08A38F5Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A38F5Cu) goto L_08A38F5C;
    return;
L_08A38F5C:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9956))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A38F6Cu);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A38F6Cu) goto L_08A38F6C;
    return;
L_08A38F6C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A38FA0;
      }
      goto L_08A38F78;
    }
L_08A38F78:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30628));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A38FA0;
L_08A38FA0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A38FB4;
      }
      goto L_08A38FA8;
    }
L_08A38FA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A38FB4;
L_08A38FB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A38FC4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A38FC4u) goto L_08A38FC4;
    return;
L_08A38FC4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38FE8;
      }
      goto L_08A38FD0;
    }
L_08A38FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A38FE8;
      }
      goto L_08A38FE0;
    }
L_08A38FE0:
    ctx.gpr[31] = (0x08A38FE8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A38FE8u) goto L_08A38FE8;
    return;
L_08A38FE8:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9954))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A38FF8u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A38FF8u) goto L_08A38FF8;
    return;
L_08A38FF8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A3902C;
      }
      goto L_08A39004;
    }
L_08A39004:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30832));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A3902C;
L_08A3902C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A39040;
      }
      goto L_08A39034;
    }
L_08A39034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A39040;
L_08A39040:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A39050u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A39050u) goto L_08A39050;
    return;
L_08A39050:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39074;
      }
      goto L_08A3905C;
    }
L_08A3905C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A39074;
      }
      goto L_08A3906C;
    }
L_08A3906C:
    ctx.gpr[31] = (0x08A39074u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A39074u) goto L_08A39074;
    return;
L_08A39074:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9955))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A39084u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A39084u) goto L_08A39084;
    return;
L_08A39084:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A390B8;
      }
      goto L_08A39090;
    }
L_08A39090:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31248));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A390B8;
L_08A390B8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A390CC;
      }
      goto L_08A390C0;
    }
L_08A390C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A390CC;
L_08A390CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A390DCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A390DCu) goto L_08A390DC;
    return;
L_08A390DC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39100;
      }
      goto L_08A390E8;
    }
L_08A390E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A39100;
      }
      goto L_08A390F8;
    }
L_08A390F8:
    ctx.gpr[31] = (0x08A39100u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A39100u) goto L_08A39100;
    return;
L_08A39100:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9960))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A39110u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A39110u) goto L_08A39110;
    return;
L_08A39110:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A39144;
      }
      goto L_08A3911C;
    }
L_08A3911C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2212u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1456));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A39144;
L_08A39144:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A39158;
      }
      goto L_08A3914C;
    }
L_08A3914C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A39158;
L_08A39158:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A39168u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A39168u) goto L_08A39168;
    return;
L_08A39168:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3918C;
      }
      goto L_08A39174;
    }
L_08A39174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3918C;
      }
      goto L_08A39184;
    }
L_08A39184:
    ctx.gpr[31] = (0x08A3918Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3918Cu) goto L_08A3918C;
    return;
L_08A3918C:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9961))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A3919Cu);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A3919Cu) goto L_08A3919C;
    return;
L_08A3919C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A391D0;
      }
      goto L_08A391A8;
    }
L_08A391A8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2212u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A391D0;
L_08A391D0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A391E4;
      }
      goto L_08A391D8;
    }
L_08A391D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A391E4;
L_08A391E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A391F4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A391F4u) goto L_08A391F4;
    return;
L_08A391F4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39218;
      }
      goto L_08A39200;
    }
L_08A39200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A39218;
      }
      goto L_08A39210;
    }
L_08A39210:
    ctx.gpr[31] = (0x08A39218u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A39218u) goto L_08A39218;
    return;
L_08A39218:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8680))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A39228u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A39228u) goto L_08A39228;
    return;
L_08A39228:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A3925C;
      }
      goto L_08A39234;
    }
L_08A39234:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2190u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10520));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A3925C;
L_08A3925C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A39270;
      }
      goto L_08A39264;
    }
L_08A39264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A39270;
L_08A39270:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A39280u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A39280u) goto L_08A39280;
    return;
L_08A39280:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A392A4;
      }
      goto L_08A3928C;
    }
L_08A3928C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A392A4;
      }
      goto L_08A3929C;
    }
L_08A3929C:
    ctx.gpr[31] = (0x08A392A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A392A4u) goto L_08A392A4;
    return;
L_08A392A4:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9953))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A392B4u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A392B4u) goto L_08A392B4;
    return;
L_08A392B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A392E8;
      }
      goto L_08A392C0;
    }
L_08A392C0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31672));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A392E8;
L_08A392E8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A392FC;
      }
      goto L_08A392F0;
    }
L_08A392F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A392FC;
L_08A392FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3930Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3930Cu) goto L_08A3930C;
    return;
L_08A3930C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39330;
      }
      goto L_08A39318;
    }
L_08A39318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A39330;
      }
      goto L_08A39328;
    }
L_08A39328:
    ctx.gpr[31] = (0x08A39330u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A39330u) goto L_08A39330;
    return;
L_08A39330:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9644))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A39340u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A39340u) goto L_08A39340;
    return;
L_08A39340:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A39374;
      }
      goto L_08A3934C;
    }
L_08A3934C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2205u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19140));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A39374;
L_08A39374:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A39388;
      }
      goto L_08A3937C;
    }
L_08A3937C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A39388;
L_08A39388:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A39398u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A39398u) goto L_08A39398;
    return;
L_08A39398:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A393BC;
      }
      goto L_08A393A4;
    }
L_08A393A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A393BC;
      }
      goto L_08A393B4;
    }
L_08A393B4:
    ctx.gpr[31] = (0x08A393BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A393BCu) goto L_08A393BC;
    return;
L_08A393BC:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7788))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A393CCu);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A393CCu) goto L_08A393CC;
    return;
L_08A393CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A39400;
      }
      goto L_08A393D8;
    }
L_08A393D8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2178u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20996));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A39400;
L_08A39400:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A39414;
      }
      goto L_08A39408;
    }
L_08A39408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A39414;
L_08A39414:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A39424u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A39424u) goto L_08A39424;
    return;
L_08A39424:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39448;
      }
      goto L_08A39430;
    }
L_08A39430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A39448;
      }
      goto L_08A39440;
    }
L_08A39440:
    ctx.gpr[31] = (0x08A39448u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A39448u) goto L_08A39448;
    return;
L_08A39448:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7789))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A39458u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A39458u) goto L_08A39458;
    return;
L_08A39458:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A3948C;
      }
      goto L_08A39464;
    }
L_08A39464:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2178u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21120));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A3948C;
L_08A3948C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A394A0;
      }
      goto L_08A39494;
    }
L_08A39494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A394A0;
L_08A394A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A394B0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A394B0u) goto L_08A394B0;
    return;
L_08A394B0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A394D4;
      }
      goto L_08A394BC;
    }
L_08A394BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A394D4;
      }
      goto L_08A394CC;
    }
L_08A394CC:
    ctx.gpr[31] = (0x08A394D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A394D4u) goto L_08A394D4;
    return;
L_08A394D4:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9957))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A394E4u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A394E4u) goto L_08A394E4;
    return;
L_08A394E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A39518;
      }
      goto L_08A394F0;
    }
L_08A394F0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31968));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A39518;
L_08A39518:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A3952C;
      }
      goto L_08A39520;
    }
L_08A39520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A3952C;
L_08A3952C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3953Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3953Cu) goto L_08A3953C;
    return;
L_08A3953C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39560;
      }
      goto L_08A39548;
    }
L_08A39548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A39560;
      }
      goto L_08A39558;
    }
L_08A39558:
    ctx.gpr[31] = (0x08A39560u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A39560u) goto L_08A39560;
    return;
L_08A39560:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8617))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A39570u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A39570u) goto L_08A39570;
    return;
L_08A39570:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A395A4;
      }
      goto L_08A3957C;
    }
L_08A3957C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30016));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A395A4;
L_08A395A4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A395B8;
      }
      goto L_08A395AC;
    }
L_08A395AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A395B8;
L_08A395B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A395C8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A395C8u) goto L_08A395C8;
    return;
L_08A395C8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A395EC;
      }
      goto L_08A395D4;
    }
L_08A395D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A395EC;
      }
      goto L_08A395E4;
    }
L_08A395E4:
    ctx.gpr[31] = (0x08A395ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A395ECu) goto L_08A395EC;
    return;
L_08A395EC:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9952))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A395FCu);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A395FCu) goto L_08A395FC;
    return;
L_08A395FC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A39630;
      }
      goto L_08A39608;
    }
L_08A39608:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32128));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A39630;
L_08A39630:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A39644;
      }
      goto L_08A39638;
    }
L_08A39638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A39644;
L_08A39644:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A39654u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A39654u) goto L_08A39654;
    return;
L_08A39654:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39678;
      }
      goto L_08A39660;
    }
L_08A39660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A39678;
      }
      goto L_08A39670;
    }
L_08A39670:
    ctx.gpr[31] = (0x08A39678u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A39678u) goto L_08A39678;
    return;
L_08A39678:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9958))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A39688u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A39688u) goto L_08A39688;
    return;
L_08A39688:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A396BC;
      }
      goto L_08A39694;
    }
L_08A39694:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32144));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A396BC;
L_08A396BC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A396D0;
      }
      goto L_08A396C4;
    }
L_08A396C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A396D0;
L_08A396D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A396E0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A396E0u) goto L_08A396E0;
    return;
L_08A396E0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39704;
      }
      goto L_08A396EC;
    }
L_08A396EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A39704;
      }
      goto L_08A396FC;
    }
L_08A396FC:
    ctx.gpr[31] = (0x08A39704u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A39704u) goto L_08A39704;
    return;
L_08A39704:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9959))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A39714u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A39714u) goto L_08A39714;
    return;
L_08A39714:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08A39748;
      }
      goto L_08A39720;
    }
L_08A39720:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32300));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A39748;
L_08A39748:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A3975C;
      }
      goto L_08A39750;
    }
L_08A39750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A3975C;
L_08A3975C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3976Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3976Cu) goto L_08A3976C;
    return;
L_08A3976C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39790;
      }
      goto L_08A39778;
    }
L_08A39778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A39790;
      }
      goto L_08A39788;
    }
L_08A39788:
    ctx.gpr[31] = (0x08A39790u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A39790u) goto L_08A39790;
    return;
L_08A39790:
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
L_08A397AC:
    ctx.gpr[4] = (0u | 61u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9943), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9943)));
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[7] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-30144));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9747), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6736));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9747)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8884), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6720));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8884)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8885), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6704));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8885)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9944), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6688));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9944)));
    ctx.gpr[5] = (0u | 9u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9945), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5984));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9945)));
    ctx.gpr[5] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9946), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6004));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9946)));
    ctx.gpr[5] = (0u | 11u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8724), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6036));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8724)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 13u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9947), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6672));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9947)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6660));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9948)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 19u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9949), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6644));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9949)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9950), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6628));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9950)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9951), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6616));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9951)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 60u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8617), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6600));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8617)));
    ctx.gpr[5] = (0u | 62u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9952), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6056));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9952)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 58u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9953), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6588));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9953)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 57u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9954), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6576));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9954)));
    ctx.gpr[5] = (0u | 63u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9955), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6076));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9955)));
    ctx.gpr[5] = (0u | 56u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9956), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6104));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9956)));
    ctx.gpr[5] = (0u | 55u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7884), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6124));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7884)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 26u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9957), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6560));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9957)));
    ctx.gpr[5] = (0u | 64u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9958), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6144));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9958)));
    ctx.gpr[5] = (0u | 65u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9959), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6168));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9959)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6188));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39A64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A39A88;
      }
      goto L_08A39A80;
    }
L_08A39A80:
    ctx.gpr[31] = (0x08A39A88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A39ACC;
L_08A39A88:
    ctx.gpr[4] = (12u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28672));
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A39AA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39AA0u) goto L_08A39AA0;
    return;
L_08A39AA0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(300), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A39AB8u);
    ctx.gpr[7] = (8u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 485u, 0x08ABE3E4u>(ctx, &aot_mem) && ctx.pc == 0x08A39AB8u) goto L_08A39AB8;
    return;
L_08A39AB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39ACC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A39AECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A39AECu) goto L_08A39AEC;
    return;
L_08A39AEC:
    ctx.gpr[31] = (0x08A39AF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 500u, 0x08ABE564u>(ctx, &aot_mem) && ctx.pc == 0x08A39AF4u) goto L_08A39AF4;
    return;
L_08A39AF4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(300), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39B08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A39B1Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 484u, 0x08ABE3BCu>(ctx, &aot_mem) && ctx.pc == 0x08A39B1Cu) goto L_08A39B1C;
    return;
L_08A39B1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(300), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39B34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A39B48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    goto L_08A39B08;
L_08A39B48:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39B54:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39B68;
      }
      goto L_08A39B60;
    }
L_08A39B60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39B6C;
      }
      goto L_08A39B68;
    }
L_08A39B68:
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6544));
    goto L_08A39B6C;
L_08A39B6C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39B74:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39B7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[7] << 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A39C58;
      }
      goto L_08A39BAC;
    }
L_08A39BAC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 6u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[2] = (ctx.gpr[2] & 7u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (0u | 4u);
      if (branch_taken) {
          goto L_08A39C04;
      }
      goto L_08A39BD4;
    }
L_08A39BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[7] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A39BF0;
      }
      goto L_08A39BE4;
    }
L_08A39BE4:
    ctx.gpr[7] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A39BF8;
      }
      goto L_08A39BF0;
    }
L_08A39BF0:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    goto L_08A39BF8;
L_08A39BF8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39C04;
      }
      goto L_08A39C00;
    }
L_08A39C00:
    ctx.gpr[17] = (0u | 0u);
    goto L_08A39C04;
L_08A39C04:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A39C1C;
      }
      goto L_08A39C0C;
    }
L_08A39C0C:
    ctx.gpr[31] = (0x08A39C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 80u, 0x0894854Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39C14u) goto L_08A39C14;
    return;
L_08A39C14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39C34;
      }
      goto L_08A39C1C;
    }
L_08A39C1C:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[2] = (ctx.gpr[2] & 7u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A39C44;
      }
      goto L_08A39C2C;
    }
L_08A39C2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_08A39C3C;
      }
      goto L_08A39C34;
    }
L_08A39C34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08A39C5C;
      }
      goto L_08A39C3C;
    }
L_08A39C3C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A39C48;
      }
      goto L_08A39C44;
    }
L_08A39C44:
    ctx.gpr[17] = (0u | 0u);
    goto L_08A39C48;
L_08A39C48:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39C58;
      }
      goto L_08A39C50;
    }
L_08A39C50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39C5C;
      }
      goto L_08A39C58;
    }
L_08A39C58:
    ctx.gpr[2] = (0u | 5u);
    goto L_08A39C5C;
L_08A39C5C:
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
L_08A39C74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A39CB4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08A3A524;
L_08A39CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[6] = (ctx.gpr[5] & 992u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] >> 5u);
    ctx.gpr[31] = (0x08A39CE0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 26u, 0x088201D0u>(ctx, &aot_mem) && ctx.pc == 0x08A39CE0u) goto L_08A39CE0;
    return;
L_08A39CE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A39CFCu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 115u, 0x08820850u>(ctx, &aot_mem) && ctx.pc == 0x08A39CFCu) goto L_08A39CFC;
    return;
L_08A39CFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39D10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39D48;
      }
      goto L_08A39D1C;
    }
L_08A39D1C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08A39D48;
L_08A39D48:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39D50:
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
    ctx.gpr[31] = (0x08A39D84u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08A39D84u) goto L_08A39D84;
    return;
L_08A39D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A39DC0;
      }
      goto L_08A39D9C;
    }
L_08A39D9C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A39DC0;
      }
      goto L_08A39DA8;
    }
L_08A39DA8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A39DC0;
      }
      goto L_08A39DB4;
    }
L_08A39DB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A39DE8;
      }
      goto L_08A39DC0;
    }
L_08A39DC0:
    ctx.gpr[31] = (0x08A39DC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39DC8u) goto L_08A39DC8;
    return;
L_08A39DC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39DE8;
      }
      goto L_08A39DD0;
    }
L_08A39DD0:
    ctx.gpr[31] = (0x08A39DD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 80u, 0x0894854Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39DD8u) goto L_08A39DD8;
    return;
L_08A39DD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39DE8;
      }
      goto L_08A39DE0;
    }
L_08A39DE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 12u);
      if (branch_taken) {
          goto L_08A39DFC;
      }
      goto L_08A39DE8;
    }
L_08A39DE8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A39DFCu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 576u, 0x088230BCu>(ctx, &aot_mem) && ctx.pc == 0x08A39DFCu) goto L_08A39DFC;
    return;
L_08A39DFC:
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
L_08A39E18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A39E28u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A3A524;
L_08A39E28:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39E34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A39E48u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 424u, 0x0881E6E4u>(ctx, &aot_mem) && ctx.pc == 0x08A39E48u) goto L_08A39E48;
    return;
L_08A39E48:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29640));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A39E68u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A3A524;
L_08A39E68:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39E7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[31]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
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
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (21352u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 54437u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A3A070;
      }
      goto L_08A39F24;
    }
L_08A39F24:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (0u | 58u);
    ctx.gpr[23] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
    goto L_08A39F40;
L_08A39F40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1824)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08A39F70;
    }
    goto L_08A39F50;
L_08A39F50:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A39F60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A39F60u) goto L_08A39F60;
    return;
L_08A39F60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A39F70;
L_08A39F70:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A05C;
      }
      goto L_08A39FB0;
    }
L_08A39FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08A39FDC;
    }
    goto L_08A39FBC;
L_08A39FBC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A39FCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A39FCCu) goto L_08A39FCC;
    return;
L_08A39FCC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A39FDC;
L_08A39FDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A3A05C;
      }
      goto L_08A39FE8;
    }
L_08A39FE8:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A05C;
      }
      goto L_08A3A03C;
    }
L_08A3A03C:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A05C;
      }
      goto L_08A3A04C;
    }
L_08A3A04C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[16]);
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
    goto L_08A3A05C;
L_08A3A05C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A39F40;
      }
      goto L_08A3A070;
    }
L_08A3A070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A1A0;
      }
      goto L_08A3A07C;
    }
L_08A3A07C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
      if (branch_taken) {
          goto L_08A3A194;
      }
      goto L_08A3A090;
    }
L_08A3A090:
    ctx.gpr[10] = (16256u << 16u);
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 58u);
    ctx.gpr[6] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_08A3A0B0;
L_08A3A0B0:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[3] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[3] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A180;
      }
      goto L_08A3A0F0;
    }
L_08A3A0F0:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3A180;
      }
      goto L_08A3A0FC;
    }
L_08A3A0FC:
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[3]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[3] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[3]);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[3] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A180;
      }
      goto L_08A3A150;
    }
L_08A3A150:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A180;
      }
      goto L_08A3A160;
    }
L_08A3A160:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(468)));
    ctx.gpr[3] = (ctx.gpr[3] & 256u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A180;
      }
      goto L_08A3A170;
    }
L_08A3A170:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[10]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_08A3A180;
L_08A3A180:
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3A0B0;
      }
      goto L_08A3A194;
    }
L_08A3A194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A1C4;
      }
      goto L_08A3A1A0;
    }
L_08A3A1A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A3A1CC;
      }
      goto L_08A3A1BC;
    }
L_08A3A1BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A1DC;
      }
      goto L_08A3A1C4;
    }
L_08A3A1C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A208;
      }
      goto L_08A3A1CC;
    }
L_08A3A1CC:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A1EC;
      }
      goto L_08A3A1DC;
    }
L_08A3A1DC:
    ctx.gpr[31] = (0x08A3A1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08A3A1E4u) goto L_08A3A1E4;
    return;
L_08A3A1E4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A3A1EC;
      }
      goto L_08A3A1EC;
    }
L_08A3A1EC:
    ctx.gpr[31] = (0x08A3A1F4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x08A3A1F4u) goto L_08A3A1F4;
    return;
L_08A3A1F4:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A3A208u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x08A3A208u) goto L_08A3A208;
    return;
L_08A3A208:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A24C:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16181u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 1153u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (17152u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[24] = (0u - ctx.gpr[15]);
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[24]) ? 1u : 0u);
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[24]) ? 1u : 0u);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[24]) ? 1u : 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[24]) ? 1u : 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A2E4;
      }
      goto L_08A3A2BC;
    }
L_08A3A2BC:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[15] = (0u | 1u);
    ctx.gpr[15] = (ctx.gpr[15] << (ctx.gpr[10] & 31u));
    ctx.gpr[24] = (ctx.gpr[24] | ctx.gpr[15]);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[24]);
      if (branch_taken) {
          goto L_08A3A310;
      }
      goto L_08A3A2D4;
    }
L_08A3A2D4:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[15] = (ctx.gpr[24] | ctx.gpr[15]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[15]);
      if (branch_taken) {
          goto L_08A3A310;
      }
      goto L_08A3A2E4;
    }
L_08A3A2E4:
    { const bool branch_taken = ctx.gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A310;
      }
      goto L_08A3A2EC;
    }
L_08A3A2EC:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[15] = (0u | 1u);
    ctx.gpr[15] = (ctx.gpr[15] << (ctx.gpr[11] & 31u));
    ctx.gpr[24] = (ctx.gpr[24] | ctx.gpr[15]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[24]);
      if (branch_taken) {
          goto L_08A3A310;
      }
      goto L_08A3A304;
    }
L_08A3A304:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[15] = (ctx.gpr[24] | ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[15]);
    goto L_08A3A310;
L_08A3A310:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A334;
      }
      goto L_08A3A318;
    }
L_08A3A318:
    { const bool branch_taken = ctx.gpr[14] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A334;
      }
      goto L_08A3A320;
    }
L_08A3A320:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (0u | 1u);
    ctx.gpr[10] = (ctx.gpr[14] << (ctx.gpr[10] & 31u));
    ctx.gpr[10] = (ctx.gpr[12] | ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_08A3A334;
L_08A3A334:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A358;
      }
      goto L_08A3A33C;
    }
L_08A3A33C:
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A358;
      }
      goto L_08A3A344;
    }
L_08A3A344:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (0u | 1u);
    ctx.gpr[11] = (ctx.gpr[3] << (ctx.gpr[11] & 31u));
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_08A3A358;
L_08A3A358:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A388;
      }
      goto L_08A3A360;
    }
L_08A3A360:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[10] = (ctx.gpr[10] << (ctx.gpr[2] & 31u));
    ctx.gpr[11] = (ctx.gpr[11] | ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08A3A3B4;
      }
      goto L_08A3A378;
    }
L_08A3A378:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[11] | ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08A3A3B4;
      }
      goto L_08A3A388;
    }
L_08A3A388:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A3B4;
      }
      goto L_08A3A390;
    }
L_08A3A390:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[10] = (ctx.gpr[10] << (ctx.gpr[9] & 31u));
    ctx.gpr[11] = (ctx.gpr[11] | ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08A3A3B4;
      }
      goto L_08A3A3A8;
    }
L_08A3A3A8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[11] | ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    goto L_08A3A3B4;
L_08A3A3B4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A3D8;
      }
      goto L_08A3A3BC;
    }
L_08A3A3BC:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A3D8;
      }
      goto L_08A3A3C4;
    }
L_08A3A3C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[8] = (ctx.gpr[8] << (ctx.gpr[2] & 31u));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08A3A3D8;
L_08A3A3D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A3FC;
      }
      goto L_08A3A3E0;
    }
L_08A3A3E0:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A3FC;
      }
      goto L_08A3A3E8;
    }
L_08A3A3E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] << (ctx.gpr[9] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A3A3FC;
L_08A3A3FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A404:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A3A434u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A434u) goto L_08A3A434;
    return;
L_08A3A434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[6] = (ctx.gpr[2] << 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3A44Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 348u, 0x0881E25Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A44Cu) goto L_08A3A44C;
    return;
L_08A3A44C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A3A464u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 426u, 0x0881E7E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A464u) goto L_08A3A464;
    return;
L_08A3A464:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A478:
    ctx.gpr[6] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> (ctx.gpr[5] & 31u)));
    ctx.gpr[2] = (ctx.gpr[4] & 7u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A4C0:
    ctx.gpr[7] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[8] = (0u | 7u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[9] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[8] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (~(ctx.gpr[7] | 0u));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A524:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A3A540u);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 726u, 0x0881FF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A540u) goto L_08A3A540;
    return;
L_08A3A540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A3A574u);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A574u) goto L_08A3A574;
    return;
L_08A3A574:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A58C;
      }
      goto L_08A3A57C;
    }
L_08A3A57C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[31] = (0x08A3A58Cu);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A58Cu) goto L_08A3A58C;
    return;
L_08A3A58C:
    ctx.gpr[31] = (0x08A3A594u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 664u, 0x0881FA54u>(ctx, &aot_mem) && ctx.pc == 0x08A3A594u) goto L_08A3A594;
    return;
L_08A3A594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A5E8;
      }
      goto L_08A3A5A0;
    }
L_08A3A5A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A5E8;
      }
      goto L_08A3A5BC;
    }
L_08A3A5BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(216));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A3A5D4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A5D4u) goto L_08A3A5D4;
    return;
L_08A3A5D4:
    ctx.gpr[31] = (0x08A3A5DCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 563u, 0x0881F274u>(ctx, &aot_mem) && ctx.pc == 0x08A3A5DCu) goto L_08A3A5DC;
    return;
L_08A3A5DC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3A5F8;
      }
      goto L_08A3A5E8;
    }
L_08A3A5E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A3A5F8;
L_08A3A5F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A61C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A3A648u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 620u, 0x0881F7A0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A648u) goto L_08A3A648;
    return;
L_08A3A648:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[19] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08A3A664u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 344u, 0x0881E21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A664u) goto L_08A3A664;
    return;
L_08A3A664:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A6B4;
      }
      goto L_08A3A678;
    }
L_08A3A678:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] << (ctx.gpr[18] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A6A4;
      }
      goto L_08A3A690;
    }
L_08A3A690:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3A69Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A69Cu) goto L_08A3A69C;
    return;
L_08A3A69C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A3A6B4;
      }
      goto L_08A3A6A4;
    }
L_08A3A6A4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A678;
      }
      goto L_08A3A6B4;
    }
L_08A3A6B4:
    ctx.gpr[31] = (0x08A3A6BCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 344u, 0x0881E21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A6BCu) goto L_08A3A6BC;
    return;
L_08A3A6BC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3A6D8;
      }
      goto L_08A3A6C4;
    }
L_08A3A6C4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3A6D4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A6D4u) goto L_08A3A6D4;
    return;
L_08A3A6D4:
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    goto L_08A3A6D8;
L_08A3A6D8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3A6E4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A6E4u) goto L_08A3A6E4;
    return;
L_08A3A6E4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3A6F4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A6F4u) goto L_08A3A6F4;
    return;
L_08A3A6F4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3A704u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A3A404;
L_08A3A704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    jump_target = ctx.gpr[11];
    ctx.gpr[31] = (0x08A3A734u);
    ctx.gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A734u) goto L_08A3A734;
    return;
L_08A3A734:
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
L_08A3A754:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (0u | 255u);
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
        goto L_08A3A778;
    }
    goto L_08A3A770;
L_08A3A770:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    goto L_08A3A778;
L_08A3A778:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A7F8;
      }
      goto L_08A3A7B0;
    }
L_08A3A7B0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A7D8;
      }
      goto L_08A3A7BC;
    }
L_08A3A7BC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A81C;
      }
      goto L_08A3A7C8;
    }
L_08A3A7C8:
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3A820;
      }
      goto L_08A3A7D8;
    }
L_08A3A7D8:
    ctx.gpr[5] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3A820;
      }
      goto L_08A3A7F8;
    }
L_08A3A7F8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A81C;
      }
      goto L_08A3A804;
    }
L_08A3A804:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A81C;
      }
      goto L_08A3A80C;
    }
L_08A3A80C:
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3A820;
      }
      goto L_08A3A81C;
    }
L_08A3A81C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A3A820;
L_08A3A820:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A828:
    ctx.gpr[4] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A3A864;
      }
      goto L_08A3A83C;
    }
L_08A3A83C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A8E0;
      }
      goto L_08A3A84C;
    }
L_08A3A84C:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(6216)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3A8E4;
      }
      goto L_08A3A86C;
    }
L_08A3A86C:
    ctx.gpr[5] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 5u);
    ctx.gpr[2] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3A8E4;
      }
      goto L_08A3A884;
    }
L_08A3A884:
    ctx.gpr[2] = (ctx.gpr[4] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A8E4;
      }
      goto L_08A3A890;
    }
L_08A3A890:
    ctx.gpr[2] = (ctx.gpr[4] ^ 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A8E4;
      }
      goto L_08A3A89C;
    }
L_08A3A89C:
    ctx.gpr[2] = (ctx.gpr[4] ^ 5u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A8E4;
      }
      goto L_08A3A8A8;
    }
L_08A3A8A8:
    ctx.gpr[2] = (ctx.gpr[4] ^ 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A8E4;
      }
      goto L_08A3A8B4;
    }
L_08A3A8B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A8E4;
      }
      goto L_08A3A8BC;
    }
L_08A3A8BC:
    ctx.gpr[2] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3A8E4;
      }
      goto L_08A3A8C8;
    }
L_08A3A8C8:
    ctx.gpr[5] = (ctx.gpr[4] ^ 7u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 5u);
    ctx.gpr[2] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3A8E4;
      }
      goto L_08A3A8E0;
    }
L_08A3A8E0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A3A8E4;
L_08A3A8E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A8EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A3A958;
      }
      goto L_08A3A934;
    }
L_08A3A934:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3A940u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A940u) goto L_08A3A940;
    return;
L_08A3A940:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A934;
      }
      goto L_08A3A958;
    }
L_08A3A958:
    ctx.gpr[2] = (ctx.gpr[19] + ctx.gpr[16]);
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
L_08A3A97C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A3A9A8u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08A3A8EC;
L_08A3A9A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3A9C8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A9C8u) goto L_08A3A9C8;
    return;
L_08A3A9C8:
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A9FC;
      }
      goto L_08A3A9DC;
    }
L_08A3A9DC:
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3A9ECu);
    ctx.gpr[6] = (0u | 0u);
    goto L_08A3A4C0;
L_08A3A9EC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A9DC;
      }
      goto L_08A3A9FC;
    }
L_08A3A9FC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[5]));
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
L_08A3AA2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6536)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-6536), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2076)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[8] & 255u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A3AA94;
      }
      goto L_08A3AA90;
    }
L_08A3AA90:
    ctx.gpr[21] = (0u | 0u);
    goto L_08A3AA94;
L_08A3AA94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3AAA0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 727u, 0x0881FF54u>(ctx, &aot_mem) && ctx.pc == 0x08A3AAA0u) goto L_08A3AAA0;
    return;
L_08A3AAA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3AAD0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 55u, 0x08820384u>(ctx, &aot_mem) && ctx.pc == 0x08A3AAD0u) goto L_08A3AAD0;
    return;
L_08A3AAD0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (ctx.gpr[20] << 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AB28;
      }
      goto L_08A3AAFC;
    }
L_08A3AAFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3AB14u);
    ctx.gpr[8] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 4u, 0x0882001Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3AB14u) goto L_08A3AB14;
    return;
L_08A3AB14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A3AB50;
      }
      goto L_08A3AB28;
    }
L_08A3AB28:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3AB40u);
    ctx.gpr[8] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 4u, 0x0882001Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3AB40u) goto L_08A3AB40;
    return;
L_08A3AB40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08A3AB50;
L_08A3AB50:
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AC0C;
      }
      goto L_08A3AB70;
    }
L_08A3AB70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AC0C;
      }
      goto L_08A3AB7C;
    }
L_08A3AB7C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3ABF8;
      }
      goto L_08A3AB84;
    }
L_08A3AB84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AC0C;
      }
      goto L_08A3ABA0;
    }
L_08A3ABA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A3ABB8u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3ABB8u) goto L_08A3ABB8;
    return;
L_08A3ABB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A3ABD0u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3ABD0u) goto L_08A3ABD0;
    return;
L_08A3ABD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AC0C;
      }
      goto L_08A3ABF8;
    }
L_08A3ABF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3AC0Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 613u, 0x0881F6CCu>(ctx, &aot_mem) && ctx.pc == 0x08A3AC0Cu) goto L_08A3AC0C;
    return;
L_08A3AC0C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[30] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3AC20u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A3A524;
L_08A3AC20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] << 6u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] & 992u);
    ctx.gpr[6] = (ctx.gpr[6] >> 5u);
    ctx.gpr[31] = (0x08A3AC4Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 26u, 0x088201D0u>(ctx, &aot_mem) && ctx.pc == 0x08A3AC4Cu) goto L_08A3AC4C;
    return;
L_08A3AC4C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3AC68u);
    ctx.gpr[9] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 115u, 0x08820850u>(ctx, &aot_mem) && ctx.pc == 0x08A3AC68u) goto L_08A3AC68;
    return;
L_08A3AC68:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3AC8Cu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 468u, 0x0881EB44u>(ctx, &aot_mem) && ctx.pc == 0x08A3AC8Cu) goto L_08A3AC8C;
    return;
L_08A3AC8C:
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[22];
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(9)));
      if (branch_taken) {
          goto L_08A3ACA4;
      }
      goto L_08A3AC9C;
    }
L_08A3AC9C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A3AD0C;
      }
      goto L_08A3ACA4;
    }
L_08A3ACA4:
    ctx.gpr[31] = (0x08A3ACACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 80u, 0x0894854Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3ACACu) goto L_08A3ACAC;
    return;
L_08A3ACAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AD0C;
      }
      goto L_08A3ACB4;
    }
L_08A3ACB4:
    ctx.gpr[31] = (0x08A3ACBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem) && ctx.pc == 0x08A3ACBCu) goto L_08A3ACBC;
    return;
L_08A3ACBC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (49024u << 16u);
      if (branch_taken) {
          goto L_08A3AD0C;
      }
      goto L_08A3ACC8;
    }
L_08A3ACC8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    goto L_08A3ACD0;
L_08A3ACD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AD00;
      }
      goto L_08A3ACE8;
    }
L_08A3ACE8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_08A3AD00;
L_08A3AD00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3ACD0;
      }
      goto L_08A3AD0C;
    }
L_08A3AD0C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[4] & 61440u);
    ctx.gpr[4] = (ctx.gpr[4] >> 12u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AD68;
      }
      goto L_08A3AD24;
    }
L_08A3AD24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A3AD44;
      }
      goto L_08A3AD38;
    }
L_08A3AD38:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A3AD44;
L_08A3AD44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1732), ctx.gpr[4]);
    goto L_08A3AD68;
L_08A3AD68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3AD9C;
      }
      goto L_08A3AD78;
    }
L_08A3AD78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3AD9C;
      }
      goto L_08A3AD90;
    }
L_08A3AD90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3AD9Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A39E7C;
L_08A3AD9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3ADA8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 203u, 0x08820E28u>(ctx, &aot_mem) && ctx.pc == 0x08A3ADA8u) goto L_08A3ADA8;
    return;
L_08A3ADA8:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6536)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-6536), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3ADE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-400));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(154)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A3AE5C;
      }
      goto L_08A3AE40;
    }
L_08A3AE40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(38))))));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (49920u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A3AE64;
      }
      goto L_08A3AE54;
    }
L_08A3AE54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(38))))));
      if (branch_taken) {
          goto L_08A3AEA8;
      }
      goto L_08A3AE5C;
    }
L_08A3AE5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B4D0;
      }
      goto L_08A3AE64;
    }
L_08A3AE64:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(38))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3AE80;
      }
      goto L_08A3AE70;
    }
L_08A3AE70:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A3AE84;
      }
      goto L_08A3AE7C;
    }
L_08A3AE7C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A3AE80;
L_08A3AE80:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A3AE84;
L_08A3AE84:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_08A3AE9C;
    }
    goto L_08A3AE8C;
L_08A3AE8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08A3AE9C;
L_08A3AE9C:
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3AED8;
      }
      goto L_08A3AEA8;
    }
L_08A3AEA8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3AEC0;
      }
      goto L_08A3AEB0;
    }
L_08A3AEB0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A3AEC4;
      }
      goto L_08A3AEBC;
    }
L_08A3AEBC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A3AEC0;
L_08A3AEC0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A3AEC4;
L_08A3AEC4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AED8;
      }
      goto L_08A3AECC;
    }
L_08A3AECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A3AED8;
L_08A3AED8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(40))))));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(40))))));
        goto L_08A3AF28;
    }
    goto L_08A3AEE4;
L_08A3AEE4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3AF00;
      }
      goto L_08A3AEF0;
    }
L_08A3AEF0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(90))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A3AF04;
      }
      goto L_08A3AEFC;
    }
L_08A3AEFC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A3AF00;
L_08A3AF00:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A3AF04;
L_08A3AF04:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_08A3AF1C;
    }
    goto L_08A3AF0C;
L_08A3AF0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08A3AF1C;
L_08A3AF1C:
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3AF58;
      }
      goto L_08A3AF28;
    }
L_08A3AF28:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3AF40;
      }
      goto L_08A3AF30;
    }
L_08A3AF30:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(90))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A3AF44;
      }
      goto L_08A3AF3C;
    }
L_08A3AF3C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A3AF40;
L_08A3AF40:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A3AF44;
L_08A3AF44:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AF58;
      }
      goto L_08A3AF4C;
    }
L_08A3AF4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A3AF58;
L_08A3AF58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(44))))));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(44))))));
        goto L_08A3AFA8;
    }
    goto L_08A3AF64;
L_08A3AF64:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3AF80;
      }
      goto L_08A3AF70;
    }
L_08A3AF70:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(94))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A3AF84;
      }
      goto L_08A3AF7C;
    }
L_08A3AF7C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A3AF80;
L_08A3AF80:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A3AF84;
L_08A3AF84:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_08A3AF9C;
    }
    goto L_08A3AF8C;
L_08A3AF8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08A3AF9C;
L_08A3AF9C:
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3AFD8;
      }
      goto L_08A3AFA8;
    }
L_08A3AFA8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3AFC0;
      }
      goto L_08A3AFB0;
    }
L_08A3AFB0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(94))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A3AFC4;
      }
      goto L_08A3AFBC;
    }
L_08A3AFBC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A3AFC0;
L_08A3AFC0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A3AFC4;
L_08A3AFC4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AFD8;
      }
      goto L_08A3AFCC;
    }
L_08A3AFCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A3AFD8;
L_08A3AFD8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(42))))));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(42))))));
        goto L_08A3B028;
    }
    goto L_08A3AFE4;
L_08A3AFE4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3B000;
      }
      goto L_08A3AFF0;
    }
L_08A3AFF0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A3B004;
      }
      goto L_08A3AFFC;
    }
L_08A3AFFC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A3B000;
L_08A3B000:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A3B004;
L_08A3B004:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_08A3B01C;
    }
    goto L_08A3B00C;
L_08A3B00C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08A3B01C;
L_08A3B01C:
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3B058;
      }
      goto L_08A3B028;
    }
L_08A3B028:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3B040;
      }
      goto L_08A3B030;
    }
L_08A3B030:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A3B044;
      }
      goto L_08A3B03C;
    }
L_08A3B03C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A3B040;
L_08A3B040:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A3B044;
L_08A3B044:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B058;
      }
      goto L_08A3B04C;
    }
L_08A3B04C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A3B058;
L_08A3B058:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
        goto L_08A3B0A8;
    }
    goto L_08A3B064;
L_08A3B064:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3B080;
      }
      goto L_08A3B070;
    }
L_08A3B070:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A3B084;
      }
      goto L_08A3B07C;
    }
L_08A3B07C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A3B080;
L_08A3B080:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A3B084;
L_08A3B084:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_08A3B09C;
    }
    goto L_08A3B08C;
L_08A3B08C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08A3B09C;
L_08A3B09C:
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3B0D8;
      }
      goto L_08A3B0A8;
    }
L_08A3B0A8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3B0C0;
      }
      goto L_08A3B0B0;
    }
L_08A3B0B0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A3B0C4;
      }
      goto L_08A3B0BC;
    }
L_08A3B0BC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A3B0C0;
L_08A3B0C0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A3B0C4;
L_08A3B0C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B0D8;
      }
      goto L_08A3B0CC;
    }
L_08A3B0CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A3B0D8;
L_08A3B0D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08A3B128;
    }
    goto L_08A3B0E4;
L_08A3B0E4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3B100;
      }
      goto L_08A3B0F0;
    }
L_08A3B0F0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A3B104;
      }
      goto L_08A3B0FC;
    }
L_08A3B0FC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A3B100;
L_08A3B100:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A3B104;
L_08A3B104:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_08A3B11C;
    }
    goto L_08A3B10C;
L_08A3B10C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08A3B11C;
L_08A3B11C:
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3B158;
      }
      goto L_08A3B128;
    }
L_08A3B128:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3B140;
      }
      goto L_08A3B130;
    }
L_08A3B130:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A3B144;
      }
      goto L_08A3B13C;
    }
L_08A3B13C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A3B140;
L_08A3B140:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A3B144;
L_08A3B144:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B158;
      }
      goto L_08A3B14C;
    }
L_08A3B14C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A3B158;
L_08A3B158:
    ctx.gpr[31] = (0x08A3B160u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 956u, 0x0898BB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B160u) goto L_08A3B160;
    return;
L_08A3B160:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3B16Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 960u, 0x0898BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B16Cu) goto L_08A3B16C;
    return;
L_08A3B16C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3B178u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 964u, 0x0898BBCCu>(ctx, &aot_mem) && ctx.pc == 0x08A3B178u) goto L_08A3B178;
    return;
L_08A3B178:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B184u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 968u, 0x0898BC0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B184u) goto L_08A3B184;
    return;
L_08A3B184:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (0u | 18u);
    ctx.gpr[3] = (0u | 19u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (0u | 16u);
    ctx.gpr[11] = (0u | 17u);
    ctx.gpr[31] = (0x08A3B1BCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A3A24C;
L_08A3B1BC:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) & 0x7FFFFFFFu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A3B214;
      }
      goto L_08A3B1F8;
    }
L_08A3B1F8:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08A3B22C;
      }
      goto L_08A3B214;
    }
L_08A3B214:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_08A3B22C;
L_08A3B22C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3B260;
      }
      goto L_08A3B244;
    }
L_08A3B244:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3B278;
      }
      goto L_08A3B260;
    }
L_08A3B260:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A3B278;
L_08A3B278:
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[2] = (0u | 13u);
    ctx.gpr[3] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[10] = (0u | 11u);
    ctx.gpr[11] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A3B2ACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A3A24C;
L_08A3B2AC:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3B3A0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 934u, 0x0885FE8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B3A0u) goto L_08A3B3A0;
    return;
L_08A3B3A0:
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3B3D8;
      }
      goto L_08A3B3D0;
    }
L_08A3B3D0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A3B3F8;
      }
      goto L_08A3B3D8;
    }
L_08A3B3D8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[4] = (17150u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3B3F8;
      }
      goto L_08A3B3F4;
    }
L_08A3B3F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3B3F8;
L_08A3B3F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3B414;
      }
      goto L_08A3B40C;
    }
L_08A3B40C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A3B434;
      }
      goto L_08A3B414;
    }
L_08A3B414:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[4] = (17150u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
        goto L_08A3B438;
    }
    goto L_08A3B430;
L_08A3B430:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3B434;
L_08A3B434:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    goto L_08A3B438;
L_08A3B438:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(145))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(146))))));
    ctx.gpr[2] = (0u | 9u);
    ctx.gpr[3] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[10] = (0u | 7u);
    ctx.gpr[11] = (0u | 8u);
    ctx.gpr[31] = (0x08A3B478u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A3A24C;
L_08A3B478:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A3B4D0;
      }
      goto L_08A3B4BC;
    }
L_08A3B4BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B4D0;
      }
      goto L_08A3B4C8;
    }
L_08A3B4C8:
    ctx.gpr[31] = (0x08A3B4D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3B4D0u) goto L_08A3B4D0;
    return;
L_08A3B4D0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3B508:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A3B550;
      }
      goto L_08A3B548;
    }
L_08A3B548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3B568;
      }
      goto L_08A3B550;
    }
L_08A3B550:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3B564u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 438u, 0x0881E8FCu>(ctx, &aot_mem) && ctx.pc == 0x08A3B564u) goto L_08A3B564;
    return;
L_08A3B564:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    goto L_08A3B568;
L_08A3B568:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3B574u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 545u, 0x0881F0FCu>(ctx, &aot_mem) && ctx.pc == 0x08A3B574u) goto L_08A3B574;
    return;
L_08A3B574:
    ctx.gpr[4] = (17278u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[22] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[21] = (ctx.gpr[20] & 255u);
      if (branch_taken) {
          goto L_08A3B768;
      }
      goto L_08A3B5A4;
    }
L_08A3B5A4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B768;
      }
      goto L_08A3B5AC;
    }
L_08A3B5AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A3B5D0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3B5D0u) goto L_08A3B5D0;
    return;
L_08A3B5D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B5E0;
      }
      goto L_08A3B5D8;
    }
L_08A3B5D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3B5E4;
      }
      goto L_08A3B5E0;
    }
L_08A3B5E0:
    ctx.gpr[19] = (0u | 0u);
    goto L_08A3B5E4;
L_08A3B5E4:
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A3B5F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3B5F4u) goto L_08A3B5F4;
    return;
L_08A3B5F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3B608;
      }
      goto L_08A3B600;
    }
L_08A3B600:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B734;
      }
      goto L_08A3B608;
    }
L_08A3B608:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B66C;
      }
      goto L_08A3B610;
    }
L_08A3B610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    jump_target = ctx.gpr[11];
    ctx.gpr[31] = (0x08A3B648u);
    ctx.gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3B648u) goto L_08A3B648;
    return;
L_08A3B648:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3B654u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A3A524;
L_08A3B654:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08A3B664u);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3B664u) goto L_08A3B664;
    return;
L_08A3B664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B694;
      }
      goto L_08A3B66C;
    }
L_08A3B66C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08A3B67Cu);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3B67Cu) goto L_08A3B67C;
    return;
L_08A3B67C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3B688u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A3A404;
L_08A3B688:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3B694u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A3A524;
L_08A3B694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    jump_target = ctx.gpr[11];
    ctx.gpr[31] = (0x08A3B6C4u);
    ctx.gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3B6C4u) goto L_08A3B6C4;
    return;
L_08A3B6C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B708u);
    ctx.gpr[7] = (0u | 1u);
    goto L_08A3B508;
L_08A3B708:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08A3B718u);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3B718u) goto L_08A3B718;
    return;
L_08A3B718:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B72Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08A3B508;
L_08A3B72C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B8E4;
      }
      goto L_08A3B734;
    }
L_08A3B734:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3B744u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A3A61C;
L_08A3B744:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B760;
      }
      goto L_08A3B74C;
    }
L_08A3B74C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B760u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08A3B508;
L_08A3B760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B8E4;
      }
      goto L_08A3B768;
    }
L_08A3B768:
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[31] = (0x08A3B774u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 80u, 0x0894854Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B774u) goto L_08A3B774;
    return;
L_08A3B774:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7D8;
      }
      goto L_08A3B77C;
    }
L_08A3B77C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A3B7A0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3B7A0u) goto L_08A3B7A0;
    return;
L_08A3B7A0:
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3B7D4;
      }
      goto L_08A3B7A8;
    }
L_08A3B7A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A3B7CCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3B7CCu) goto L_08A3B7CC;
    return;
L_08A3B7CC:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3B7D8;
      }
      goto L_08A3B7D4;
    }
L_08A3B7D4:
    ctx.gpr[23] = (0u | 0u);
    goto L_08A3B7D8;
L_08A3B7D8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B870;
      }
      goto L_08A3B7E0;
    }
L_08A3B7E0:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B870;
      }
      goto L_08A3B7E8;
    }
L_08A3B7E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B870;
      }
      goto L_08A3B7F4;
    }
L_08A3B7F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B82C;
      }
      goto L_08A3B814;
    }
L_08A3B814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A3B824u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 571u, 0x088E3E88u>(ctx, &aot_mem) && ctx.pc == 0x08A3B824u) goto L_08A3B824;
    return;
L_08A3B824:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B840;
      }
      goto L_08A3B82C;
    }
L_08A3B82C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_08A3B840;
L_08A3B840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A3B85Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3B85Cu) goto L_08A3B85C;
    return;
L_08A3B85C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A3B870u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 87u, 0x088205F8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B870u) goto L_08A3B870;
    return;
L_08A3B870:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3B884;
      }
      goto L_08A3B880;
    }
L_08A3B880:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[20]));
    goto L_08A3B884;
L_08A3B884:
    ctx.gpr[31] = (0x08A3B88Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 344u, 0x0881E21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B88Cu) goto L_08A3B88C;
    return;
L_08A3B88C:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B8DC;
      }
      goto L_08A3B8A0;
    }
L_08A3B8A0:
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B8C4u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    goto L_08A3B914;
L_08A3B8C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B8E4;
      }
      goto L_08A3B8CC;
    }
L_08A3B8CC:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B8A0;
      }
      goto L_08A3B8DC;
    }
L_08A3B8DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08A3B8E4;
      }
      goto L_08A3B8E4;
    }
L_08A3B8E4:
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
L_08A3B914:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[30]);
    ctx.gpr[22] = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[30] = (ctx.gpr[9] | 0u);
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] & 255u);
    ctx.gpr[18] = (ctx.gpr[10] & 255u);
    ctx.gpr[23] = (ctx.gpr[11] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A3B968u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3B968u) goto L_08A3B968;
    return;
L_08A3B968:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(126), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(ctx.gpr[23]));
      if (branch_taken) {
          goto L_08A3BA34;
      }
      goto L_08A3B990;
    }
L_08A3B990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A3B9B4u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3B9B4u) goto L_08A3B9B4;
    return;
L_08A3B9B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BA34;
      }
      goto L_08A3B9BC;
    }
L_08A3B9BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3B9CCu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08A3A97C;
L_08A3B9CC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BA14;
      }
      goto L_08A3B9D4;
    }
L_08A3B9D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[29] | 0u);
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08A3BA14u);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    goto L_08A3B914;
L_08A3BA14:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] << (ctx.gpr[20] & 31u));
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 25u, 0x08A3C234u>(ctx, &aot_mem); return;
      }
      goto L_08A3BA34;
    }
L_08A3BA34:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3BA60;
      }
      goto L_08A3BA44;
    }
L_08A3BA44:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3BA60;
      }
      goto L_08A3BA5C;
    }
L_08A3BA5C:
    ctx.gpr[19] = (0u | 1u);
    goto L_08A3BA60;
L_08A3BA60:
    ctx.gpr[4] = (ctx.gpr[19] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(13)));
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(125), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 2u, 0x08A3C010u>(ctx, &aot_mem); return;
      }
      goto L_08A3BA7C;
    }
L_08A3BA7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3BA8Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08A3A8EC;
L_08A3BA8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3BA9Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08A3A478;
L_08A3BA9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3BABCu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08A3A828;
L_08A3BABC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(125)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A3BAD8;
      }
      goto L_08A3BAC8;
    }
L_08A3BAC8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A3BB24;
      }
      goto L_08A3BAD8;
    }
L_08A3BAD8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(127), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(113)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3BAFCu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_08A3A754;
L_08A3BAFC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(21));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3BB1Cu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_08A3A754;
L_08A3BB1C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(127)));
    goto L_08A3BB24;
L_08A3BB24:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BBB0;
      }
      goto L_08A3BB34;
    }
L_08A3BB34:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BBB0;
      }
      goto L_08A3BB44;
    }
L_08A3BB44:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3BB60;
      }
      goto L_08A3BB4C;
    }
L_08A3BB4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3BBB0;
      }
      goto L_08A3BB58;
    }
L_08A3BB58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3BBB0;
      }
      goto L_08A3BB60;
    }
L_08A3BB60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BBB0;
      }
      goto L_08A3BB74;
    }
L_08A3BB74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A3BB94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A3A478;
L_08A3BB94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3BBA4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08A3A828;
L_08A3BBA4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BBB0;
      }
      goto L_08A3BBAC;
    }
L_08A3BBAC:
    ctx.gpr[23] = (0u | 1u);
    goto L_08A3BBB0;
L_08A3BBB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(125)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BBC8;
      }
      goto L_08A3BBBC;
    }
L_08A3BBBC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BBC8;
      }
      goto L_08A3BBC4;
    }
L_08A3BBC4:
    ctx.gpr[23] = (0u | 1u);
    goto L_08A3BBC8;
L_08A3BBC8:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BD88;
      }
      goto L_08A3BBD4;
    }
L_08A3BBD4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BD88;
      }
      goto L_08A3BBDC;
    }
L_08A3BBDC:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BC08;
      }
      goto L_08A3BBE4;
    }
L_08A3BBE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(114)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BC08;
      }
      goto L_08A3BBF0;
    }
L_08A3BBF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] << (ctx.gpr[20] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3BD88;
      }
      goto L_08A3BC08;
    }
L_08A3BC08:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BD88;
      }
      goto L_08A3BC10;
    }
L_08A3BC10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(114)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BD88;
      }
      goto L_08A3BC1C;
    }
L_08A3BC1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] << (ctx.gpr[20] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BD88;
      }
      goto L_08A3BC34;
    }
L_08A3BC34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] << (ctx.gpr[20] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BC64;
      }
      goto L_08A3BC4C;
    }
L_08A3BC4C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BCD8;
      }
      goto L_08A3BC5C;
    }
L_08A3BC5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 25u, 0x08A3C234u>(ctx, &aot_mem); return;
      }
      goto L_08A3BC64;
    }
L_08A3BC64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3BC74u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08A3A61C;
L_08A3BC74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A3BCBCu);
    ctx.gpr[7] = (0u | 1u);
    goto L_08A3B508;
L_08A3BCBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A3BCD0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08A3B508;
L_08A3BCD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 25u, 0x08A3C234u>(ctx, &aot_mem); return;
      }
      goto L_08A3BCD8;
    }
L_08A3BCD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3BCE8u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08A3A97C;
L_08A3BCE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(113)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A3BD44u);
    ctx.gpr[10] = (0u | 1u);
    goto L_08A3B914;
L_08A3BD44:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] << (ctx.gpr[20] & 31u));
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3BD80u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    goto L_08A3B914;
L_08A3BD80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 25u, 0x08A3C234u>(ctx, &aot_mem); return;
      }
      goto L_08A3BD88;
    }
L_08A3BD88:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3BF48;
      }
      goto L_08A3BD90;
    }
L_08A3BD90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_08A3BDC4;
    }
    goto L_08A3BDA0;
L_08A3BDA0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_08A3BDC4;
    }
    goto L_08A3BDB0;
L_08A3BDB0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BDEC;
      }
      goto L_08A3BDC0;
    }
L_08A3BDC0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    goto L_08A3BDC4;
L_08A3BDC4:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(126), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[5] << (ctx.gpr[6] & 31u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BE04;
      }
      goto L_08A3BDE4;
    }
L_08A3BDE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BE1C;
      }
      goto L_08A3BDEC;
    }
L_08A3BDEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3BDFCu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08A3A97C;
L_08A3BDFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 25u, 0x08A3C234u>(ctx, &aot_mem); return;
      }
      goto L_08A3BE04;
    }
L_08A3BE04:
    ctx.gpr[5] = (ctx.gpr[22] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BEC8;
      }
      goto L_08A3BE10;
    }
L_08A3BE10:
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_08A3BEC8;
      }
      goto L_08A3BE1C;
    }
L_08A3BE1C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BE40;
      }
      goto L_08A3BE2C;
    }
L_08A3BE2C:
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_08A3BEC8;
      }
      goto L_08A3BE40;
    }
L_08A3BE40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BEC8;
      }
      goto L_08A3BE50;
    }
L_08A3BE50:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[22] & 65535u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A3BE68;
      }
      goto L_08A3BE60;
    }
L_08A3BE60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3BEB8;
      }
      goto L_08A3BE68;
    }
L_08A3BE68:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[9] = (ctx.gpr[6] ^ 1u);
    ctx.gpr[10] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[6] ^ 4u);
    ctx.gpr[9] = (ctx.gpr[10] | ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[11] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 5u);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[9] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
      if (branch_taken) {
          goto L_08A3BEA8;
      }
      goto L_08A3BEA0;
    }
L_08A3BEA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3BEB8;
      }
      goto L_08A3BEA8;
    }
L_08A3BEA8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3BEB8;
      }
      goto L_08A3BEB0;
    }
L_08A3BEB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3BEB8;
      }
      goto L_08A3BEB8;
    }
L_08A3BEB8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BEC8;
      }
      goto L_08A3BEC0;
    }
L_08A3BEC0:
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    goto L_08A3BEC8;
L_08A3BEC8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A3BEE4;
      }
      goto L_08A3BED8;
    }
L_08A3BED8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[22] & 65535u);
    goto L_08A3BEE4;
L_08A3BEE4:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BF30;
      }
      goto L_08A3BEEC;
    }
L_08A3BEEC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BF30;
      }
      goto L_08A3BEFC;
    }
L_08A3BEFC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BF30;
      }
      goto L_08A3BF04;
    }
L_08A3BF04:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3BF30;
      }
      goto L_08A3BF0C;
    }
L_08A3BF0C:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A3BF30;
      }
      goto L_08A3BF20;
    }
L_08A3BF20:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(113)));
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A3BF30;
L_08A3BF30:
    ctx.gpr[22] = (ctx.gpr[22] | ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] & 65535u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3BF48u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08A3A4C0;
L_08A3BF48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BFFC;
      }
      goto L_08A3BF54;
    }
L_08A3BF54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3BF6Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08A3A828;
L_08A3BF6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BF80;
      }
      goto L_08A3BF74;
    }
L_08A3BF74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    goto L_08A3BF80;
L_08A3BF80:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BFFC;
      }
      goto L_08A3BF88;
    }
L_08A3BF88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(114)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BFFC;
      }
      goto L_08A3BF94;
    }
L_08A3BF94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3BFFC;
      }
      goto L_08A3BFA4;
    }
L_08A3BFA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3BFFC;
      }
      goto L_08A3BFB4;
    }
L_08A3BFB4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BFFC;
      }
      goto L_08A3BFC4;
    }
L_08A3BFC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BFFC;
      }
      goto L_08A3BFD4;
    }
L_08A3BFD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BFFC;
      }
      goto L_08A3BFE4;
    }
L_08A3BFE4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3BFF4u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08A3A97C;
L_08A3BFF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 25u, 0x08A3C234u>(ctx, &aot_mem); return;
      }
      goto L_08A3BFFC;
    }
L_08A3BFFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(13)));
    ctx.pc = 0x08A3C000u; return;
}

void recomp_unit_0141(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0141_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_141(Runtime &runtime) {
    runtime.register_generated_unit(141u, 0x08A38000u, 16384u, &recomp_unit_0141, &recomp_unit_0141_entry);
    runtime.register_function(0x08A38004u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3800Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3801Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38028u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38050u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38058u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38064u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38074u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38080u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38090u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38098u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A380A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A380B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A380DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A380E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A380F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38100u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3810Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3811Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38124u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38134u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38140u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38168u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38170u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3817Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3818Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38198u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A381A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A381B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A381C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A381CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A381F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A381FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38208u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38218u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38224u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38234u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3823Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3824Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38258u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38280u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38288u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38294u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3830Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38314u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38320u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38330u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3833Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3834Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38354u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38364u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38370u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38398u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38424u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3842Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38438u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38448u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38454u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38464u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3846Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3847Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38488u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38508u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38514u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3853Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38544u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38550u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38560u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3856Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3857Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38584u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38594u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38608u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38610u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38620u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3862Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38654u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3865Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38668u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38678u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38684u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38694u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3869Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A386ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A386B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A386E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A386E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A386F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38704u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38710u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38720u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38728u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38738u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38744u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3876Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38774u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38780u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38790u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3879Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38800u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3880Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3881Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38828u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38838u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38840u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38850u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3885Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38884u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3888Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38898u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A388A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A388B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A388C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A388CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A388DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A388E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38910u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38918u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38924u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38934u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38940u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38950u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38958u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38968u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38974u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3899Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A30u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A4Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38AB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38ABCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38AC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38AD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38AE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38AF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38AFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B98u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BCCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C30u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C98u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38CA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38CB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38CBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38CE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38CECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38CF8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D78u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38ED0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F38u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F78u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FF8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39004u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3902Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39034u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39040u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39050u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3905Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3906Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39074u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39084u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39090u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39100u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39110u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3911Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39144u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3914Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39158u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39168u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39174u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39184u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3918Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3919Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39200u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39210u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39218u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39228u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39234u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3925Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39264u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39270u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39280u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3928Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3929Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3930Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39318u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39328u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39330u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39340u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3934Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39374u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3937Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39388u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39398u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39400u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39408u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39414u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39424u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39430u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39440u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39448u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39458u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39464u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3948Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39494u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39518u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39520u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3952Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3953Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39548u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39558u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39560u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39570u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3957Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39608u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39630u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39638u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39644u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39654u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39660u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39670u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39678u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39688u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39694u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39704u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39714u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39720u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39748u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39750u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3975Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3976Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39778u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39788u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39790u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A397ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39ACCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BF8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39CB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39CE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39CFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FCCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FDCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A03Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A04Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A05Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A070u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A07Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A090u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A0B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A0F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A0FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A150u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A160u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A170u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A180u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A194u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A208u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A24Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A2BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A2D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A2E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A2ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A304u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A310u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A318u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A320u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A334u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A33Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A344u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A358u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A360u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A378u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A388u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A390u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A404u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A434u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A44Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A464u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A478u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A4C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A524u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A540u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A574u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A57Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A58Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A594u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A61Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A648u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A664u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A678u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A690u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A69Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A704u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A734u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A754u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A770u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A778u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A804u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A80Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A81Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A820u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A828u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A83Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A84Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A864u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A86Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A884u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A890u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A89Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A934u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A940u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A958u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A97Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABF8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC4Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD38u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD78u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ADA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ADE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AECCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AED8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF30u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF4Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFCCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B000u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B004u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B00Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B01Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B028u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B030u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B03Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B040u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B044u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B04Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B058u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B064u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B070u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B07Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B080u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B084u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B08Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B09Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B100u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B104u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B10Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B11Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B128u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B130u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B13Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B140u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B144u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B14Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B158u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B160u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B16Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B178u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B184u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B214u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B22Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B244u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B260u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B278u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B2ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B40Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B414u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B430u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B434u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B438u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B478u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B508u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B548u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B550u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B564u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B568u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B574u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B600u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B608u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B610u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B648u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B654u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B664u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B66Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B67Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B688u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B694u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B6C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B708u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B718u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B72Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B734u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B744u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B74Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B760u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B768u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B774u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B77Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B814u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B824u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B82Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B840u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B85Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B870u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B880u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B884u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B88Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B914u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B968u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B990u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BABCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB4Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBDCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC4Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BCBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BCD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BCD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BCE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BED8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF30u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFFCu, &recomp_unit_0141, "recomp_unit_0141");
}
} // namespace psprecomp
