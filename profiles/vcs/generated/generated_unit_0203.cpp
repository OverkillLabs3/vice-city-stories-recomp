#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0203[4093] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0,
    44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70,
    0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0,
    76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 92, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0,
    99, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    123, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 150, 0, 0,
    0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 172, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0,
    0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0,
    180, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0,
    187, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 194,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199,
    0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 206,
    0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 214, 215, 0, 216, 0, 217, 0, 218,
    219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229,
    0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 235, 0,
    236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0,
    0, 241, 0, 242, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0,
    0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0,
    254, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 260, 0, 0,
    0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0,
    0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 276, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 0, 283, 0, 284, 0, 0,
    285, 286, 0, 287, 0, 0, 288, 289, 0, 290, 0, 0, 291, 0, 292, 0, 293, 0, 0, 294, 0, 295, 0, 296, 0, 0, 297, 0, 298, 0, 299, 0,
    0, 0, 300, 301, 0, 302, 0, 0, 0, 303, 304, 0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 0, 308, 309, 0, 310, 0, 0, 0, 311, 0,
    0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 315, 316, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 0, 320, 0, 321, 0, 0, 322, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 325, 326, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0,
    330, 0, 0, 331, 0, 332, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0,
    0, 0, 0, 0, 342, 0, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0, 349, 0, 0, 350, 0, 351, 0, 0, 352, 353, 0, 354, 0,
    0, 355, 356, 0, 357, 0, 0, 358, 0, 359, 0, 360, 0, 0, 361, 362, 0, 363, 0, 0, 364, 0, 365, 0, 366, 0, 0, 0, 367, 368, 0, 369,
    0, 0, 0, 370, 371, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 0, 375, 376, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 380,
    0, 0, 381, 0, 0, 382, 383, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 0, 387, 388, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400,
    0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 405, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 408,
    0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 416, 0, 417, 0, 418, 0, 419, 0, 420, 0, 421,
    0, 422, 0, 0, 423, 0, 424, 0, 0, 425, 426, 0, 427, 0, 0, 428, 429, 0, 430, 0, 0, 431, 0, 432, 0, 433, 0, 0, 434, 0, 435, 0,
    436, 0, 0, 437, 0, 438, 0, 439, 0, 0, 0, 440, 441, 0, 442, 0, 0, 0, 443, 444, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 0,
    448, 449, 0, 450, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 455, 456, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0,
    0, 460, 461, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 470,
    0, 0, 471, 0, 472, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 479,
    0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488,
    0, 0, 0, 0, 0, 489, 0, 0, 490, 491, 0, 492, 0, 493, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 498,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    500, 0, 0, 501, 0, 0, 502, 0, 0, 0, 503, 0, 0, 504, 0, 505, 0, 0, 506, 0, 507, 0, 508, 0, 0, 509, 0, 0, 510, 0, 0, 511,
    512, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 519, 0,
    0, 0, 520, 0, 521, 0, 0, 0, 522, 0, 0, 0, 523, 0, 524, 0, 0, 0, 525, 0, 0, 526, 0, 0, 527, 0, 0, 528, 0, 529, 0, 530,
    0, 531, 0, 0, 0, 532, 0, 533, 534, 0, 535, 0, 0, 0, 536, 0, 537, 538, 0, 539, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0,
    548, 0, 549, 0, 550, 0, 551, 0, 0, 552, 0, 0, 553, 0, 554, 0, 0, 555, 0, 0, 556, 0, 557, 558, 0, 0, 0, 0, 0, 559, 0, 560,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0,
    0, 0, 0, 0, 566, 0, 0, 0, 567, 0, 568, 0, 569, 0, 570, 0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 0, 0, 574,
    0, 575, 0, 0, 0, 576, 0, 0, 0, 577, 578, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 0, 0, 582, 0, 583, 0,
    0, 0, 0, 584, 0, 0, 585, 586, 0, 0, 587, 0, 0, 588, 0, 0, 589, 590, 0, 591, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 595, 596, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 600, 0, 0, 0,
    601, 0, 0, 602, 0, 603, 0, 604, 0, 0, 605, 0, 0, 0, 0, 606, 0, 0, 607, 0, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 0, 0,
    610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 613, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0,
    617, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0,
    0, 622, 0, 623, 0, 624, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627,
    0, 628, 0, 629, 0, 0, 0, 0, 0, 0, 630, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 633, 0, 634, 0, 635, 0, 636, 0,
    637, 0, 0, 0, 638, 0, 639, 0, 640, 0, 641, 0, 0, 0, 0, 0, 0, 0, 642, 0, 643, 0, 644, 0, 0, 0, 0, 0, 645, 0, 0, 646,
    0, 647, 0, 648, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 652, 0, 0, 0, 0, 653, 0, 0, 654, 0, 655, 0, 0,
    0, 656, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 659, 0, 0, 660, 0, 661, 0, 0, 0, 0, 662, 0, 663, 0, 664, 0, 0, 665,
    0, 666, 0, 667, 0, 668, 0, 0, 0, 669, 0, 670, 0, 0, 0, 671, 0, 672, 0, 0, 0, 673, 0, 674, 0, 0, 0, 675, 0, 676, 0, 0,
    0, 677, 0, 678, 0, 0, 0, 0, 679, 0, 680, 0, 0, 0, 681, 0, 682, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 684, 0, 0,
    0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 687, 0, 688, 0, 689, 0, 690, 0, 691, 0, 0, 0, 692, 0, 0, 0,
    0, 693, 0, 694, 0, 0, 0, 695, 0, 0, 0, 0, 696, 0, 697, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0,
    700, 0, 701, 0, 0, 702, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0,
    0, 0, 705, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 710, 0, 711,
    712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 715, 0, 716, 0, 0,
    0, 0, 0, 0, 717, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 0, 722, 0, 723, 0, 0, 0, 0, 0, 0,
    724, 0, 725, 726, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 728, 0, 729, 0, 730, 0, 0, 0, 731, 0, 732, 0, 733, 0, 0, 0, 734,
    0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0,
    0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 741,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 743, 0, 744, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 747, 0, 748, 0, 749, 0, 0, 0, 0, 750, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 757, 0, 758, 0, 0, 0, 0, 759, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 763, 0, 764, 0, 0, 0, 765,
    0, 766, 0, 0, 0, 0, 767, 0, 768, 769, 0, 0, 770, 0, 0, 771, 0, 0, 0, 0, 772, 0, 0, 773, 0, 774, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 778, 0, 779, 0,
    0, 0, 0, 780, 0, 0, 0, 0, 0, 781, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 786, 0,
    0, 0, 787, 0, 788, 0, 0, 0, 0, 789, 0, 790, 0, 791, 0, 0, 792, 0, 0, 793, 0, 0, 794, 0, 795, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 796, 797, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 0, 0, 799, 0, 800, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 801, 802, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 807, 0, 808, 0,
    0, 0, 809, 0, 810, 0, 0, 0, 0, 811, 0, 812, 813, 0, 0, 814, 0, 0, 815, 0, 0, 816, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 818, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 821, 0, 822,
};
void recomp_unit_0203_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B30000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0203[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B30000;
    case 2u: goto L_08B30008;
    case 3u: goto L_08B3003C;
    case 4u: goto L_08B3006C;
    case 5u: goto L_08B30090;
    case 6u: goto L_08B300B8;
    case 7u: goto L_08B300C4;
    case 8u: goto L_08B30104;
    case 9u: goto L_08B3012C;
    case 10u: goto L_08B30138;
    case 11u: goto L_08B30148;
    case 12u: goto L_08B30154;
    case 13u: goto L_08B3016C;
    case 14u: goto L_08B30194;
    case 15u: goto L_08B301A0;
    case 16u: goto L_08B301B0;
    case 17u: goto L_08B301BC;
    case 18u: goto L_08B301D4;
    case 19u: goto L_08B30200;
    case 20u: goto L_08B30210;
    case 21u: goto L_08B30228;
    case 22u: goto L_08B30238;
    case 23u: goto L_08B30248;
    case 24u: goto L_08B3025C;
    case 25u: goto L_08B3026C;
    case 26u: goto L_08B3029C;
    case 27u: goto L_08B302C8;
    case 28u: goto L_08B302D8;
    case 29u: goto L_08B302F0;
    case 30u: goto L_08B30300;
    case 31u: goto L_08B30310;
    case 32u: goto L_08B30324;
    case 33u: goto L_08B30334;
    case 34u: goto L_08B30364;
    case 35u: goto L_08B30394;
    case 36u: goto L_08B303A0;
    case 37u: goto L_08B303B8;
    case 38u: goto L_08B303D4;
    case 39u: goto L_08B30404;
    case 40u: goto L_08B30410;
    case 41u: goto L_08B30428;
    case 42u: goto L_08B30444;
    case 43u: goto L_08B30474;
    case 44u: goto L_08B30480;
    case 45u: goto L_08B30494;
    case 46u: goto L_08B304A4;
    case 47u: goto L_08B304BC;
    case 48u: goto L_08B304D8;
    case 49u: goto L_08B30508;
    case 50u: goto L_08B30514;
    case 51u: goto L_08B30528;
    case 52u: goto L_08B30538;
    case 53u: goto L_08B30550;
    case 54u: goto L_08B3056C;
    case 55u: goto L_08B30594;
    case 56u: goto L_08B305A0;
    case 57u: goto L_08B305E4;
    case 58u: goto L_08B3060C;
    case 59u: goto L_08B30618;
    case 60u: goto L_08B30628;
    case 61u: goto L_08B30638;
    case 62u: goto L_08B30648;
    case 63u: goto L_08B30660;
    case 64u: goto L_08B30688;
    case 65u: goto L_08B30694;
    case 66u: goto L_08B306A4;
    case 67u: goto L_08B306B0;
    case 68u: goto L_08B306BC;
    case 69u: goto L_08B306D4;
    case 70u: goto L_08B306FC;
    case 71u: goto L_08B30708;
    case 72u: goto L_08B30718;
    case 73u: goto L_08B30720;
    case 74u: goto L_08B3074C;
    case 75u: goto L_08B30778;
    case 76u: goto L_08B30780;
    case 77u: goto L_08B30790;
    case 78u: goto L_08B307A0;
    case 79u: goto L_08B307A8;
    case 80u: goto L_08B307B8;
    case 81u: goto L_08B307C8;
    case 82u: goto L_08B307E0;
    case 83u: goto L_08B30808;
    case 84u: goto L_08B30814;
    case 85u: goto L_08B3084C;
    case 86u: goto L_08B3086C;
    case 87u: goto L_08B3089C;
    case 88u: goto L_08B308C4;
    case 89u: goto L_08B308D0;
    case 90u: goto L_08B308DC;
    case 91u: goto L_08B308E8;
    case 92u: goto L_08B308F0;
    case 93u: goto L_08B308F8;
    case 94u: goto L_08B3091C;
    case 95u: goto L_08B30934;
    case 96u: goto L_08B3095C;
    case 97u: goto L_08B30968;
    case 98u: goto L_08B30974;
    case 99u: goto L_08B30980;
    case 100u: goto L_08B30988;
    case 101u: goto L_08B30990;
    case 102u: goto L_08B309B4;
    case 103u: goto L_08B309CC;
    case 104u: goto L_08B309FC;
    case 105u: goto L_08B30A08;
    case 106u: goto L_08B30A20;
    case 107u: goto L_08B30A30;
    case 108u: goto L_08B30A38;
    case 109u: goto L_08B30A4C;
    case 110u: goto L_08B30A68;
    case 111u: goto L_08B30A90;
    case 112u: goto L_08B30A9C;
    case 113u: goto L_08B30AAC;
    case 114u: goto L_08B30AB8;
    case 115u: goto L_08B30AC4;
    case 116u: goto L_08B30ADC;
    case 117u: goto L_08B30B04;
    case 118u: goto L_08B30B10;
    case 119u: goto L_08B30B1C;
    case 120u: goto L_08B30B3C;
    case 121u: goto L_08B30B54;
    case 122u: goto L_08B30B74;
    case 123u: goto L_08B30B80;
    case 124u: goto L_08B30B8C;
    case 125u: goto L_08B30BA0;
    case 126u: goto L_08B30BC8;
    case 127u: goto L_08B30BD4;
    case 128u: goto L_08B30C04;
    case 129u: goto L_08B30C2C;
    case 130u: goto L_08B30C38;
    case 131u: goto L_08B30C6C;
    case 132u: goto L_08B30C8C;
    case 133u: goto L_08B30C98;
    case 134u: goto L_08B30CB0;
    case 135u: goto L_08B30CD8;
    case 136u: goto L_08B30CE4;
    case 137u: goto L_08B30CF0;
    case 138u: goto L_08B30D1C;
    case 139u: goto L_08B30D34;
    case 140u: goto L_08B30D54;
    case 141u: goto L_08B30D60;
    case 142u: goto L_08B30D74;
    case 143u: goto L_08B30D9C;
    case 144u: goto L_08B30DA8;
    case 145u: goto L_08B30DB8;
    case 146u: goto L_08B30DC4;
    case 147u: goto L_08B30DD0;
    case 148u: goto L_08B30DDC;
    case 149u: goto L_08B30DE4;
    case 150u: goto L_08B30DF4;
    case 151u: goto L_08B30E0C;
    case 152u: goto L_08B30E34;
    case 153u: goto L_08B30E40;
    case 154u: goto L_08B30E50;
    case 155u: goto L_08B30E60;
    case 156u: goto L_08B30E70;
    case 157u: goto L_08B30E88;
    case 158u: goto L_08B30EB0;
    case 159u: goto L_08B30EBC;
    case 160u: goto L_08B30ECC;
    case 161u: goto L_08B30ED8;
    case 162u: goto L_08B30EE4;
    case 163u: goto L_08B30EFC;
    case 164u: goto L_08B30F24;
    case 165u: goto L_08B30F30;
    case 166u: goto L_08B30F40;
    case 167u: goto L_08B30F44;
    case 168u: goto L_08B30F68;
    case 169u: goto L_08B30F70;
    case 170u: goto L_08B30F90;
    case 171u: goto L_08B30F9C;
    case 172u: goto L_08B30FB4;
    case 173u: goto L_08B30FB8;
    case 174u: goto L_08B30FD0;
    case 175u: goto L_08B30FF8;
    case 176u: goto L_08B31004;
    case 177u: goto L_08B3103C;
    case 178u: goto L_08B31064;
    case 179u: goto L_08B31070;
    case 180u: goto L_08B31080;
    case 181u: goto L_08B3108C;
    case 182u: goto L_08B31098;
    case 183u: goto L_08B310B0;
    case 184u: goto L_08B310D8;
    case 185u: goto L_08B310E4;
    case 186u: goto L_08B310F4;
    case 187u: goto L_08B31100;
    case 188u: goto L_08B3110C;
    case 189u: goto L_08B31124;
    case 190u: goto L_08B3114C;
    case 191u: goto L_08B31158;
    case 192u: goto L_08B31168;
    case 193u: goto L_08B31174;
    case 194u: goto L_08B3117C;
    case 195u: goto L_08B311A0;
    case 196u: goto L_08B311B8;
    case 197u: goto L_08B311E0;
    case 198u: goto L_08B311EC;
    case 199u: goto L_08B311FC;
    case 200u: goto L_08B31208;
    case 201u: goto L_08B31214;
    case 202u: goto L_08B3122C;
    case 203u: goto L_08B31254;
    case 204u: goto L_08B31260;
    case 205u: goto L_08B31270;
    case 206u: goto L_08B3127C;
    case 207u: goto L_08B31288;
    case 208u: goto L_08B312A0;
    case 209u: goto L_08B312C8;
    case 210u: goto L_08B312D4;
    case 211u: goto L_08B312F4;
    case 212u: goto L_08B31350;
    case 213u: goto L_08B31358;
    case 214u: goto L_08B31360;
    case 215u: goto L_08B31364;
    case 216u: goto L_08B3136C;
    case 217u: goto L_08B31374;
    case 218u: goto L_08B3137C;
    case 219u: goto L_08B31380;
    case 220u: goto L_08B31390;
    case 221u: goto L_08B313BC;
    case 222u: goto L_08B313D8;
    case 223u: goto L_08B313E0;
    case 224u: goto L_08B313F0;
    case 225u: goto L_08B3141C;
    case 226u: goto L_08B31438;
    case 227u: goto L_08B31440;
    case 228u: goto L_08B31450;
    case 229u: goto L_08B3147C;
    case 230u: goto L_08B31498;
    case 231u: goto L_08B314A0;
    case 232u: goto L_08B314CC;
    case 233u: goto L_08B314E8;
    case 234u: goto L_08B314F0;
    case 235u: goto L_08B314F8;
    case 236u: goto L_08B31500;
    case 237u: goto L_08B31508;
    case 238u: goto L_08B31534;
    case 239u: goto L_08B31550;
    case 240u: goto L_08B31564;
    case 241u: goto L_08B31584;
    case 242u: goto L_08B3158C;
    case 243u: goto L_08B31594;
    case 244u: goto L_08B315A4;
    case 245u: goto L_08B315B8;
    case 246u: goto L_08B315CC;
    case 247u: goto L_08B315D8;
    case 248u: goto L_08B315E8;
    case 249u: goto L_08B31604;
    case 250u: goto L_08B31614;
    case 251u: goto L_08B31644;
    case 252u: goto L_08B3164C;
    case 253u: goto L_08B31678;
    case 254u: goto L_08B31680;
    case 255u: goto L_08B31690;
    case 256u: goto L_08B316A4;
    case 257u: goto L_08B316B4;
    case 258u: goto L_08B316E0;
    case 259u: goto L_08B316EC;
    case 260u: goto L_08B316F4;
    case 261u: goto L_08B31704;
    case 262u: goto L_08B31720;
    case 263u: goto L_08B31730;
    case 264u: goto L_08B31760;
    case 265u: goto L_08B31768;
    case 266u: goto L_08B31790;
    case 267u: goto L_08B31798;
    case 268u: goto L_08B317A8;
    case 269u: goto L_08B317BC;
    case 270u: goto L_08B317E8;
    case 271u: goto L_08B317F0;
    case 272u: goto L_08B31804;
    case 273u: goto L_08B31844;
    case 274u: goto L_08B31890;
    case 275u: goto L_08B318A4;
    case 276u: goto L_08B318B0;
    case 277u: goto L_08B318B8;
    case 278u: goto L_08B318C0;
    case 279u: goto L_08B318C8;
    case 280u: goto L_08B318D0;
    case 281u: goto L_08B318D8;
    case 282u: goto L_08B318E0;
    case 283u: goto L_08B318EC;
    case 284u: goto L_08B318F4;
    case 285u: goto L_08B31900;
    case 286u: goto L_08B31904;
    case 287u: goto L_08B3190C;
    case 288u: goto L_08B31918;
    case 289u: goto L_08B3191C;
    case 290u: goto L_08B31924;
    case 291u: goto L_08B31930;
    case 292u: goto L_08B31938;
    case 293u: goto L_08B31940;
    case 294u: goto L_08B3194C;
    case 295u: goto L_08B31954;
    case 296u: goto L_08B3195C;
    case 297u: goto L_08B31968;
    case 298u: goto L_08B31970;
    case 299u: goto L_08B31978;
    case 300u: goto L_08B31988;
    case 301u: goto L_08B3198C;
    case 302u: goto L_08B31994;
    case 303u: goto L_08B319A4;
    case 304u: goto L_08B319A8;
    case 305u: goto L_08B319B4;
    case 306u: goto L_08B319C0;
    case 307u: goto L_08B319CC;
    case 308u: goto L_08B319DC;
    case 309u: goto L_08B319E0;
    case 310u: goto L_08B319E8;
    case 311u: goto L_08B319F8;
    case 312u: goto L_08B31A08;
    case 313u: goto L_08B31A14;
    case 314u: goto L_08B31A20;
    case 315u: goto L_08B31A2C;
    case 316u: goto L_08B31A30;
    case 317u: goto L_08B31A38;
    case 318u: goto L_08B31A44;
    case 319u: goto L_08B31A50;
    case 320u: goto L_08B31A60;
    case 321u: goto L_08B31A68;
    case 322u: goto L_08B31A74;
    case 323u: goto L_08B31AD4;
    case 324u: goto L_08B31AE8;
    case 325u: goto L_08B31AF4;
    case 326u: goto L_08B31AF8;
    case 327u: goto L_08B31B50;
    case 328u: goto L_08B31B64;
    case 329u: goto L_08B31B74;
    case 330u: goto L_08B31B80;
    case 331u: goto L_08B31B8C;
    case 332u: goto L_08B31B94;
    case 333u: goto L_08B31BA0;
    case 334u: goto L_08B31BAC;
    case 335u: goto L_08B31BB8;
    case 336u: goto L_08B31BCC;
    case 337u: goto L_08B31BD8;
    case 338u: goto L_08B31BF0;
    case 339u: goto L_08B31C24;
    case 340u: goto L_08B31C6C;
    case 341u: goto L_08B31C78;
    case 342u: goto L_08B31C90;
    case 343u: goto L_08B31C9C;
    case 344u: goto L_08B31CA4;
    case 345u: goto L_08B31CAC;
    case 346u: goto L_08B31CB4;
    case 347u: goto L_08B31CBC;
    case 348u: goto L_08B31CC4;
    case 349u: goto L_08B31CCC;
    case 350u: goto L_08B31CD8;
    case 351u: goto L_08B31CE0;
    case 352u: goto L_08B31CEC;
    case 353u: goto L_08B31CF0;
    case 354u: goto L_08B31CF8;
    case 355u: goto L_08B31D04;
    case 356u: goto L_08B31D08;
    case 357u: goto L_08B31D10;
    case 358u: goto L_08B31D1C;
    case 359u: goto L_08B31D24;
    case 360u: goto L_08B31D2C;
    case 361u: goto L_08B31D38;
    case 362u: goto L_08B31D3C;
    case 363u: goto L_08B31D44;
    case 364u: goto L_08B31D50;
    case 365u: goto L_08B31D58;
    case 366u: goto L_08B31D60;
    case 367u: goto L_08B31D70;
    case 368u: goto L_08B31D74;
    case 369u: goto L_08B31D7C;
    case 370u: goto L_08B31D8C;
    case 371u: goto L_08B31D90;
    case 372u: goto L_08B31D9C;
    case 373u: goto L_08B31DA8;
    case 374u: goto L_08B31DB4;
    case 375u: goto L_08B31DC4;
    case 376u: goto L_08B31DC8;
    case 377u: goto L_08B31DD0;
    case 378u: goto L_08B31DE0;
    case 379u: goto L_08B31DF0;
    case 380u: goto L_08B31DFC;
    case 381u: goto L_08B31E08;
    case 382u: goto L_08B31E14;
    case 383u: goto L_08B31E18;
    case 384u: goto L_08B31E20;
    case 385u: goto L_08B31E2C;
    case 386u: goto L_08B31E38;
    case 387u: goto L_08B31E48;
    case 388u: goto L_08B31E4C;
    case 389u: goto L_08B31E54;
    case 390u: goto L_08B31E64;
    case 391u: goto L_08B31EB0;
    case 392u: goto L_08B31EC4;
    case 393u: goto L_08B31F0C;
    case 394u: goto L_08B31F20;
    case 395u: goto L_08B31F2C;
    case 396u: goto L_08B31F38;
    case 397u: goto L_08B31F44;
    case 398u: goto L_08B31F50;
    case 399u: goto L_08B31F70;
    case 400u: goto L_08B31F7C;
    case 401u: goto L_08B31F84;
    case 402u: goto L_08B31FB0;
    case 403u: goto L_08B31FBC;
    case 404u: goto L_08B31FC8;
    case 405u: goto L_08B31FD0;
    case 406u: goto L_08B31FDC;
    case 407u: goto L_08B31FF0;
    case 408u: goto L_08B31FFC;
    case 409u: goto L_08B32014;
    case 410u: goto L_08B3201C;
    case 411u: goto L_08B32034;
    case 412u: goto L_08B32064;
    case 413u: goto L_08B320A8;
    case 414u: goto L_08B320B4;
    case 415u: goto L_08B320C8;
    case 416u: goto L_08B320D4;
    case 417u: goto L_08B320DC;
    case 418u: goto L_08B320E4;
    case 419u: goto L_08B320EC;
    case 420u: goto L_08B320F4;
    case 421u: goto L_08B320FC;
    case 422u: goto L_08B32104;
    case 423u: goto L_08B32110;
    case 424u: goto L_08B32118;
    case 425u: goto L_08B32124;
    case 426u: goto L_08B32128;
    case 427u: goto L_08B32130;
    case 428u: goto L_08B3213C;
    case 429u: goto L_08B32140;
    case 430u: goto L_08B32148;
    case 431u: goto L_08B32154;
    case 432u: goto L_08B3215C;
    case 433u: goto L_08B32164;
    case 434u: goto L_08B32170;
    case 435u: goto L_08B32178;
    case 436u: goto L_08B32180;
    case 437u: goto L_08B3218C;
    case 438u: goto L_08B32194;
    case 439u: goto L_08B3219C;
    case 440u: goto L_08B321AC;
    case 441u: goto L_08B321B0;
    case 442u: goto L_08B321B8;
    case 443u: goto L_08B321C8;
    case 444u: goto L_08B321CC;
    case 445u: goto L_08B321D8;
    case 446u: goto L_08B321E4;
    case 447u: goto L_08B321F0;
    case 448u: goto L_08B32200;
    case 449u: goto L_08B32204;
    case 450u: goto L_08B3220C;
    case 451u: goto L_08B3221C;
    case 452u: goto L_08B3222C;
    case 453u: goto L_08B32238;
    case 454u: goto L_08B32244;
    case 455u: goto L_08B32250;
    case 456u: goto L_08B32254;
    case 457u: goto L_08B3225C;
    case 458u: goto L_08B32268;
    case 459u: goto L_08B32274;
    case 460u: goto L_08B32284;
    case 461u: goto L_08B32288;
    case 462u: goto L_08B32290;
    case 463u: goto L_08B3229C;
    case 464u: goto L_08B322E8;
    case 465u: goto L_08B322FC;
    case 466u: goto L_08B32344;
    case 467u: goto L_08B32358;
    case 468u: goto L_08B32364;
    case 469u: goto L_08B32370;
    case 470u: goto L_08B3237C;
    case 471u: goto L_08B32388;
    case 472u: goto L_08B32390;
    case 473u: goto L_08B323A4;
    case 474u: goto L_08B323B0;
    case 475u: goto L_08B323BC;
    case 476u: goto L_08B323C8;
    case 477u: goto L_08B323E8;
    case 478u: goto L_08B323F0;
    case 479u: goto L_08B323FC;
    case 480u: goto L_08B32410;
    case 481u: goto L_08B3241C;
    case 482u: goto L_08B32434;
    case 483u: goto L_08B3243C;
    case 484u: goto L_08B32454;
    case 485u: goto L_08B32480;
    case 486u: goto L_08B324C4;
    case 487u: goto L_08B324D0;
    case 488u: goto L_08B324FC;
    case 489u: goto L_08B32514;
    case 490u: goto L_08B32520;
    case 491u: goto L_08B32524;
    case 492u: goto L_08B3252C;
    case 493u: goto L_08B32534;
    case 494u: goto L_08B32540;
    case 495u: goto L_08B32554;
    case 496u: goto L_08B32564;
    case 497u: goto L_08B32574;
    case 498u: goto L_08B3257C;
    case 499u: goto L_08B325D8;
    case 500u: goto L_08B32600;
    case 501u: goto L_08B3260C;
    case 502u: goto L_08B32618;
    case 503u: goto L_08B32628;
    case 504u: goto L_08B32634;
    case 505u: goto L_08B3263C;
    case 506u: goto L_08B32648;
    case 507u: goto L_08B32650;
    case 508u: goto L_08B32658;
    case 509u: goto L_08B32664;
    case 510u: goto L_08B32670;
    case 511u: goto L_08B3267C;
    case 512u: goto L_08B32680;
    case 513u: goto L_08B32690;
    case 514u: goto L_08B326A0;
    case 515u: goto L_08B326BC;
    case 516u: goto L_08B326C4;
    case 517u: goto L_08B326D8;
    case 518u: goto L_08B326E8;
    case 519u: goto L_08B326F8;
    case 520u: goto L_08B32708;
    case 521u: goto L_08B32710;
    case 522u: goto L_08B32720;
    case 523u: goto L_08B32730;
    case 524u: goto L_08B32738;
    case 525u: goto L_08B32748;
    case 526u: goto L_08B32754;
    case 527u: goto L_08B32760;
    case 528u: goto L_08B3276C;
    case 529u: goto L_08B32774;
    case 530u: goto L_08B3277C;
    case 531u: goto L_08B32784;
    case 532u: goto L_08B32794;
    case 533u: goto L_08B3279C;
    case 534u: goto L_08B327A0;
    case 535u: goto L_08B327A8;
    case 536u: goto L_08B327B8;
    case 537u: goto L_08B327C0;
    case 538u: goto L_08B327C4;
    case 539u: goto L_08B327CC;
    case 540u: goto L_08B327D0;
    case 541u: goto L_08B32810;
    case 542u: goto L_08B3281C;
    case 543u: goto L_08B32828;
    case 544u: goto L_08B32834;
    case 545u: goto L_08B32840;
    case 546u: goto L_08B3284C;
    case 547u: goto L_08B32878;
    case 548u: goto L_08B32880;
    case 549u: goto L_08B32888;
    case 550u: goto L_08B32890;
    case 551u: goto L_08B32898;
    case 552u: goto L_08B328A4;
    case 553u: goto L_08B328B0;
    case 554u: goto L_08B328B8;
    case 555u: goto L_08B328C4;
    case 556u: goto L_08B328D0;
    case 557u: goto L_08B328D8;
    case 558u: goto L_08B328DC;
    case 559u: goto L_08B328F4;
    case 560u: goto L_08B328FC;
    case 561u: goto L_08B32928;
    case 562u: goto L_08B32944;
    case 563u: goto L_08B32974;
    case 564u: goto L_08B329CC;
    case 565u: goto L_08B329F8;
    case 566u: goto L_08B32A10;
    case 567u: goto L_08B32A20;
    case 568u: goto L_08B32A28;
    case 569u: goto L_08B32A30;
    case 570u: goto L_08B32A38;
    case 571u: goto L_08B32A40;
    case 572u: goto L_08B32A54;
    case 573u: goto L_08B32A64;
    case 574u: goto L_08B32A7C;
    case 575u: goto L_08B32A84;
    case 576u: goto L_08B32A94;
    case 577u: goto L_08B32AA4;
    case 578u: goto L_08B32AA8;
    case 579u: goto L_08B32AB8;
    case 580u: goto L_08B32AC8;
    case 581u: goto L_08B32AD8;
    case 582u: goto L_08B32AF0;
    case 583u: goto L_08B32AF8;
    case 584u: goto L_08B32B0C;
    case 585u: goto L_08B32B18;
    case 586u: goto L_08B32B1C;
    case 587u: goto L_08B32B28;
    case 588u: goto L_08B32B34;
    case 589u: goto L_08B32B40;
    case 590u: goto L_08B32B44;
    case 591u: goto L_08B32B4C;
    case 592u: goto L_08B32B58;
    case 593u: goto L_08B32BB8;
    case 594u: goto L_08B32BCC;
    case 595u: goto L_08B32BD8;
    case 596u: goto L_08B32BDC;
    case 597u: goto L_08B32C40;
    case 598u: goto L_08B32C54;
    case 599u: goto L_08B32C64;
    case 600u: goto L_08B32C70;
    case 601u: goto L_08B32C80;
    case 602u: goto L_08B32C8C;
    case 603u: goto L_08B32C94;
    case 604u: goto L_08B32C9C;
    case 605u: goto L_08B32CA8;
    case 606u: goto L_08B32CBC;
    case 607u: goto L_08B32CC8;
    case 608u: goto L_08B32CE0;
    case 609u: goto L_08B32CE8;
    case 610u: goto L_08B32D00;
    case 611u: goto L_08B32D3C;
    case 612u: goto L_08B32D64;
    case 613u: goto L_08B32D90;
    case 614u: goto L_08B32DA4;
    case 615u: goto L_08B32E84;
    case 616u: goto L_08B32EE4;
    case 617u: goto L_08B32F00;
    case 618u: goto L_08B32F1C;
    case 619u: goto L_08B32F38;
    case 620u: goto L_08B32F54;
    case 621u: goto L_08B32F70;
    case 622u: goto L_08B32F84;
    case 623u: goto L_08B32F8C;
    case 624u: goto L_08B32F94;
    case 625u: goto L_08B32F98;
    case 626u: goto L_08B32FCC;
    case 627u: goto L_08B32FFC;
    case 628u: goto L_08B33004;
    case 629u: goto L_08B3300C;
    case 630u: goto L_08B33028;
    case 631u: goto L_08B3302C;
    case 632u: goto L_08B33054;
    case 633u: goto L_08B33060;
    case 634u: goto L_08B33068;
    case 635u: goto L_08B33070;
    case 636u: goto L_08B33078;
    case 637u: goto L_08B33080;
    case 638u: goto L_08B33090;
    case 639u: goto L_08B33098;
    case 640u: goto L_08B330A0;
    case 641u: goto L_08B330A8;
    case 642u: goto L_08B330C8;
    case 643u: goto L_08B330D0;
    case 644u: goto L_08B330D8;
    case 645u: goto L_08B330F0;
    case 646u: goto L_08B330FC;
    case 647u: goto L_08B33104;
    case 648u: goto L_08B3310C;
    case 649u: goto L_08B33114;
    case 650u: goto L_08B3312C;
    case 651u: goto L_08B33140;
    case 652u: goto L_08B3314C;
    case 653u: goto L_08B33160;
    case 654u: goto L_08B3316C;
    case 655u: goto L_08B33174;
    case 656u: goto L_08B33184;
    case 657u: goto L_08B33194;
    case 658u: goto L_08B331A8;
    case 659u: goto L_08B331B8;
    case 660u: goto L_08B331C4;
    case 661u: goto L_08B331CC;
    case 662u: goto L_08B331E0;
    case 663u: goto L_08B331E8;
    case 664u: goto L_08B331F0;
    case 665u: goto L_08B331FC;
    case 666u: goto L_08B33204;
    case 667u: goto L_08B3320C;
    case 668u: goto L_08B33214;
    case 669u: goto L_08B33224;
    case 670u: goto L_08B3322C;
    case 671u: goto L_08B3323C;
    case 672u: goto L_08B33244;
    case 673u: goto L_08B33254;
    case 674u: goto L_08B3325C;
    case 675u: goto L_08B3326C;
    case 676u: goto L_08B33274;
    case 677u: goto L_08B33284;
    case 678u: goto L_08B3328C;
    case 679u: goto L_08B332A0;
    case 680u: goto L_08B332A8;
    case 681u: goto L_08B332B8;
    case 682u: goto L_08B332C0;
    case 683u: goto L_08B332E0;
    case 684u: goto L_08B332F4;
    case 685u: goto L_08B3330C;
    case 686u: goto L_08B33320;
    case 687u: goto L_08B33340;
    case 688u: goto L_08B33348;
    case 689u: goto L_08B33350;
    case 690u: goto L_08B33358;
    case 691u: goto L_08B33360;
    case 692u: goto L_08B33370;
    case 693u: goto L_08B33384;
    case 694u: goto L_08B3338C;
    case 695u: goto L_08B3339C;
    case 696u: goto L_08B333B0;
    case 697u: goto L_08B333B8;
    case 698u: goto L_08B333C8;
    case 699u: goto L_08B333F8;
    case 700u: goto L_08B33400;
    case 701u: goto L_08B33408;
    case 702u: goto L_08B33414;
    case 703u: goto L_08B33424;
    case 704u: goto L_08B3346C;
    case 705u: goto L_08B33488;
    case 706u: goto L_08B334A4;
    case 707u: goto L_08B334C0;
    case 708u: goto L_08B334C4;
    case 709u: goto L_08B334EC;
    case 710u: goto L_08B334F4;
    case 711u: goto L_08B334FC;
    case 712u: goto L_08B33500;
    case 713u: goto L_08B33534;
    case 714u: goto L_08B33564;
    case 715u: goto L_08B3356C;
    case 716u: goto L_08B33574;
    case 717u: goto L_08B33590;
    case 718u: goto L_08B33594;
    case 719u: goto L_08B335BC;
    case 720u: goto L_08B33634;
    case 721u: goto L_08B33648;
    case 722u: goto L_08B3365C;
    case 723u: goto L_08B33664;
    case 724u: goto L_08B33680;
    case 725u: goto L_08B33688;
    case 726u: goto L_08B3368C;
    case 727u: goto L_08B336A4;
    case 728u: goto L_08B336BC;
    case 729u: goto L_08B336C4;
    case 730u: goto L_08B336CC;
    case 731u: goto L_08B336DC;
    case 732u: goto L_08B336E4;
    case 733u: goto L_08B336EC;
    case 734u: goto L_08B336FC;
    case 735u: goto L_08B33710;
    case 736u: goto L_08B33770;
    case 737u: goto L_08B3378C;
    case 738u: goto L_08B337A8;
    case 739u: goto L_08B337C4;
    case 740u: goto L_08B337E0;
    case 741u: goto L_08B337FC;
    case 742u: goto L_08B33828;
    case 743u: goto L_08B33830;
    case 744u: goto L_08B33838;
    case 745u: goto L_08B33840;
    case 746u: goto L_08B33870;
    case 747u: goto L_08B33898;
    case 748u: goto L_08B338A0;
    case 749u: goto L_08B338A8;
    case 750u: goto L_08B338BC;
    case 751u: goto L_08B338C0;
    case 752u: goto L_08B338E8;
    case 753u: goto L_08B33944;
    case 754u: goto L_08B33950;
    case 755u: goto L_08B33980;
    case 756u: goto L_08B339AC;
    case 757u: goto L_08B339B4;
    case 758u: goto L_08B339BC;
    case 759u: goto L_08B339D0;
    case 760u: goto L_08B339D4;
    case 761u: goto L_08B33A00;
    case 762u: goto L_08B33A4C;
    case 763u: goto L_08B33A64;
    case 764u: goto L_08B33A6C;
    case 765u: goto L_08B33A7C;
    case 766u: goto L_08B33A84;
    case 767u: goto L_08B33A98;
    case 768u: goto L_08B33AA0;
    case 769u: goto L_08B33AA4;
    case 770u: goto L_08B33AB0;
    case 771u: goto L_08B33ABC;
    case 772u: goto L_08B33AD0;
    case 773u: goto L_08B33ADC;
    case 774u: goto L_08B33AE4;
    case 775u: goto L_08B33B10;
    case 776u: goto L_08B33B40;
    case 777u: goto L_08B33B68;
    case 778u: goto L_08B33B70;
    case 779u: goto L_08B33B78;
    case 780u: goto L_08B33B8C;
    case 781u: goto L_08B33BA4;
    case 782u: goto L_08B33BA8;
    case 783u: goto L_08B33BD8;
    case 784u: goto L_08B33C30;
    case 785u: goto L_08B33C6C;
    case 786u: goto L_08B33C78;
    case 787u: goto L_08B33C88;
    case 788u: goto L_08B33C90;
    case 789u: goto L_08B33CA4;
    case 790u: goto L_08B33CAC;
    case 791u: goto L_08B33CB4;
    case 792u: goto L_08B33CC0;
    case 793u: goto L_08B33CCC;
    case 794u: goto L_08B33CD8;
    case 795u: goto L_08B33CE0;
    case 796u: goto L_08B33D0C;
    case 797u: goto L_08B33D10;
    case 798u: goto L_08B33D44;
    case 799u: goto L_08B33D64;
    case 800u: goto L_08B33D6C;
    case 801u: goto L_08B33E18;
    case 802u: goto L_08B33E1C;
    case 803u: goto L_08B33E30;
    case 804u: goto L_08B33E54;
    case 805u: goto L_08B33E90;
    case 806u: goto L_08B33EDC;
    case 807u: goto L_08B33EF0;
    case 808u: goto L_08B33EF8;
    case 809u: goto L_08B33F08;
    case 810u: goto L_08B33F10;
    case 811u: goto L_08B33F24;
    case 812u: goto L_08B33F2C;
    case 813u: goto L_08B33F30;
    case 814u: goto L_08B33F3C;
    case 815u: goto L_08B33F48;
    case 816u: goto L_08B33F54;
    case 817u: goto L_08B33F5C;
    case 818u: goto L_08B33F88;
    case 819u: goto L_08B33FB8;
    case 820u: goto L_08B33FE0;
    case 821u: goto L_08B33FE8;
    case 822u: goto L_08B33FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B30000:
    ctx.gpr[31] = (0x08B30008u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 584u, 0x088631C0u>(ctx, &aot_mem) && ctx.pc == 0x08B30008u) goto L_08B30008;
    return;
L_08B30008:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B3003Cu);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 584u, 0x088631C0u>(ctx, &aot_mem) && ctx.pc == 0x08B3003Cu) goto L_08B3003C;
    return;
L_08B3003C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B3006Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08B3006Cu) goto L_08B3006C;
    return;
L_08B3006C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B30090:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08B300B8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B300B8u) goto L_08B300B8;
    return;
L_08B300B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B300C4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B300C4u) goto L_08B300C4;
    return;
L_08B300C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(472)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-12289));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    ctx.gpr[5] = (ctx.gpr[5] << 12u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1768), ctx.gpr[4]);
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
L_08B30104:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B3012Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B3012Cu) goto L_08B3012C;
    return;
L_08B3012C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30138u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30138u) goto L_08B30138;
    return;
L_08B30138:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30148u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30148u) goto L_08B30148;
    return;
L_08B30148:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B30154u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 890u, 0x08907DB8u>(ctx, &aot_mem) && ctx.pc == 0x08B30154u) goto L_08B30154;
    return;
L_08B30154:
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
L_08B3016C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B30194u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30194u) goto L_08B30194;
    return;
L_08B30194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B301A0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B301A0u) goto L_08B301A0;
    return;
L_08B301A0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08B301B0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08B301B0u) goto L_08B301B0;
    return;
L_08B301B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B301BCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 890u, 0x08907DB8u>(ctx, &aot_mem) && ctx.pc == 0x08B301BCu) goto L_08B301BC;
    return;
L_08B301BC:
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
L_08B301D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B30200u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30200u) goto L_08B30200;
    return;
L_08B30200:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30210u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30210u) goto L_08B30210;
    return;
L_08B30210:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08B30238;
      }
      goto L_08B30228;
    }
L_08B30228:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B30238;
L_08B30238:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(71)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B3025C;
      }
      goto L_08B30248;
    }
L_08B30248:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31512));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08B3025Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08B3025Cu) goto L_08B3025C;
    return;
L_08B3025C:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1276));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B3026Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 632u, 0x08903654u>(ctx, &aot_mem) && ctx.pc == 0x08B3026Cu) goto L_08B3026C;
    return;
L_08B3026C:
    ctx.gpr[4] = (ctx.gpr[17] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2272), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2273), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3029C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B302C8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B302C8u) goto L_08B302C8;
    return;
L_08B302C8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B302D8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B302D8u) goto L_08B302D8;
    return;
L_08B302D8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08B30300;
      }
      goto L_08B302F0;
    }
L_08B302F0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B30300;
L_08B30300:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B30324;
      }
      goto L_08B30310;
    }
L_08B30310:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31448));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08B30324u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08B30324u) goto L_08B30324;
    return;
L_08B30324:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1276));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B30334u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 640u, 0x08903730u>(ctx, &aot_mem) && ctx.pc == 0x08B30334u) goto L_08B30334;
    return;
L_08B30334:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2272), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2273), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B30364:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B30394u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30394u) goto L_08B30394;
    return;
L_08B30394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B303A0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B303A0u) goto L_08B303A0;
    return;
L_08B303A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2272))))));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B303B8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08B303B8u) goto L_08B303B8;
    return;
L_08B303B8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B303D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B30404u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30404u) goto L_08B30404;
    return;
L_08B30404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30410u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30410u) goto L_08B30410;
    return;
L_08B30410:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2273))))));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B30428u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08B30428u) goto L_08B30428;
    return;
L_08B30428:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B30444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B30474u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30474u) goto L_08B30474;
    return;
L_08B30474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30480u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30480u) goto L_08B30480;
    return;
L_08B30480:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B304A4;
      }
      goto L_08B30494;
    }
L_08B30494:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B304A4;
L_08B304A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(71)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B304BCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08B304BCu) goto L_08B304BC;
    return;
L_08B304BC:
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
L_08B304D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B30508u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30508u) goto L_08B30508;
    return;
L_08B30508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30514u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30514u) goto L_08B30514;
    return;
L_08B30514:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B30538;
      }
      goto L_08B30528;
    }
L_08B30528:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B30538;
L_08B30538:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B30550u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08B30550u) goto L_08B30550;
    return;
L_08B30550:
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
L_08B3056C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B30594u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30594u) goto L_08B30594;
    return;
L_08B30594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B305A0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B305A0u) goto L_08B305A0;
    return;
L_08B305A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] << 9u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
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
L_08B305E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B3060Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B3060Cu) goto L_08B3060C;
    return;
L_08B3060C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30618u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30618u) goto L_08B30618;
    return;
L_08B30618:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(456)));
      if (branch_taken) {
          goto L_08B30638;
      }
      goto L_08B30628;
    }
L_08B30628:
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B30648;
      }
      goto L_08B30638;
    }
L_08B30638:
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08B30648;
L_08B30648:
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
L_08B30660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B30688u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30688u) goto L_08B30688;
    return;
L_08B30688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30694u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30694u) goto L_08B30694;
    return;
L_08B30694:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(460)));
      if (branch_taken) {
          goto L_08B306B0;
      }
      goto L_08B306A4;
    }
L_08B306A4:
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B306BC;
      }
      goto L_08B306B0;
    }
L_08B306B0:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    goto L_08B306BC;
L_08B306BC:
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
L_08B306D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08B306FCu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B306FCu) goto L_08B306FC;
    return;
L_08B306FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30708u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30708u) goto L_08B30708;
    return;
L_08B30708:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3074C;
      }
      goto L_08B30718;
    }
L_08B30718:
    ctx.gpr[31] = (0x08B30720u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x08B30720u) goto L_08B30720;
    return;
L_08B30720:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(888), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 15u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(889), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
      if (branch_taken) {
          goto L_08B30778;
      }
      goto L_08B3074C;
    }
L_08B3074C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (49152u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 15u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(888), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(889), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    goto L_08B30778;
L_08B30778:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B30790;
      }
      goto L_08B30780;
    }
L_08B30780:
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B307A0;
      }
      goto L_08B30790;
    }
L_08B30790:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08B307A0;
L_08B307A0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B307B8;
      }
      goto L_08B307A8;
    }
L_08B307A8:
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B307C8;
      }
      goto L_08B307B8;
    }
L_08B307B8:
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08B307C8;
L_08B307C8:
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
L_08B307E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B30808u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30808u) goto L_08B30808;
    return;
L_08B30808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30814u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30814u) goto L_08B30814;
    return;
L_08B30814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(472)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 11u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
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
L_08B3084C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B3086Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B3086Cu) goto L_08B3086C;
    return;
L_08B3086C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24276)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3089C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B308C4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B308C4u) goto L_08B308C4;
    return;
L_08B308C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B308D0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B308D0u) goto L_08B308D0;
    return;
L_08B308D0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3091C;
      }
      goto L_08B308DC;
    }
L_08B308DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3091C;
      }
      goto L_08B308E8;
    }
L_08B308E8:
    ctx.gpr[31] = (0x08B308F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B308F0u) goto L_08B308F0;
    return;
L_08B308F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3091C;
      }
      goto L_08B308F8;
    }
L_08B308F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08B3091C;
L_08B3091C:
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
L_08B30934:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B3095Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B3095Cu) goto L_08B3095C;
    return;
L_08B3095C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30968u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30968u) goto L_08B30968;
    return;
L_08B30968:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B309B4;
      }
      goto L_08B30974;
    }
L_08B30974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B309B4;
      }
      goto L_08B30980;
    }
L_08B30980:
    ctx.gpr[31] = (0x08B30988u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30988u) goto L_08B30988;
    return;
L_08B30988:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B309B4;
      }
      goto L_08B30990;
    }
L_08B30990:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3236), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08B309B4;
L_08B309B4:
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
L_08B309CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B309FCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B309FCu) goto L_08B309FC;
    return;
L_08B309FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30A08u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30A08u) goto L_08B30A08;
    return;
L_08B30A08:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B30A4C;
      }
      goto L_08B30A20;
    }
L_08B30A20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B30A38;
      }
      goto L_08B30A30;
    }
L_08B30A30:
    ctx.gpr[31] = (0x08B30A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 452u, 0x08882930u>(ctx, &aot_mem) && ctx.pc == 0x08B30A38u) goto L_08B30A38;
    return;
L_08B30A38:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B30A20;
      }
      goto L_08B30A4C;
    }
L_08B30A4C:
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
L_08B30A68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B30A90u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30A90u) goto L_08B30A90;
    return;
L_08B30A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30A9Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30A9Cu) goto L_08B30A9C;
    return;
L_08B30A9C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(460)));
      if (branch_taken) {
          goto L_08B30AB8;
      }
      goto L_08B30AAC;
    }
L_08B30AAC:
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B30AC4;
      }
      goto L_08B30AB8;
    }
L_08B30AB8:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    goto L_08B30AC4;
L_08B30AC4:
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
L_08B30ADC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B30B04u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30B04u) goto L_08B30B04;
    return;
L_08B30B04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30B10u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30B10u) goto L_08B30B10;
    return;
L_08B30B10:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B30B3C;
      }
      goto L_08B30B1C;
    }
L_08B30B1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(472)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] << 14u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(472), ctx.gpr[5]);
    goto L_08B30B3C;
L_08B30B3C:
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
L_08B30B54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B30B74u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30B74u) goto L_08B30B74;
    return;
L_08B30B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30B80u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30B80u) goto L_08B30B80;
    return;
L_08B30B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08B30B8Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 190u, 0x08945304u>(ctx, &aot_mem) && ctx.pc == 0x08B30B8Cu) goto L_08B30B8C;
    return;
L_08B30B8C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B30BA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B30BC8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30BC8u) goto L_08B30BC8;
    return;
L_08B30BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30BD4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30BD4u) goto L_08B30BD4;
    return;
L_08B30BD4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(1948)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(1948), static_cast<std::uint16_t>(ctx.gpr[4]));
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
L_08B30C04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B30C2Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30C2Cu) goto L_08B30C2C;
    return;
L_08B30C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30C38u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30C38u) goto L_08B30C38;
    return;
L_08B30C38:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(1948)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (~(ctx.gpr[5] | 0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(1948), static_cast<std::uint16_t>(ctx.gpr[4]));
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
L_08B30C6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B30C8Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30C8Cu) goto L_08B30C8C;
    return;
L_08B30C8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30C98u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30C98u) goto L_08B30C98;
    return;
L_08B30C98:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(1948), static_cast<std::uint16_t>(0u));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B30CB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B30CD8u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30CD8u) goto L_08B30CD8;
    return;
L_08B30CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30CE4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30CE4u) goto L_08B30CE4;
    return;
L_08B30CE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B30D1C;
      }
      goto L_08B30CF0;
    }
L_08B30CF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1780))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1780), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08B30D1C;
L_08B30D1C:
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
L_08B30D34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B30D54u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30D54u) goto L_08B30D54;
    return;
L_08B30D54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30D60u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30D60u) goto L_08B30D60;
    return;
L_08B30D60:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B30D74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08B30D9Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30D9Cu) goto L_08B30D9C;
    return;
L_08B30D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30DA8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30DA8u) goto L_08B30DA8;
    return;
L_08B30DA8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B30DD0;
      }
      goto L_08B30DB8;
    }
L_08B30DB8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B30DC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08B30DC4u) goto L_08B30DC4;
    return;
L_08B30DC4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B30DE4;
      }
      goto L_08B30DD0;
    }
L_08B30DD0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B30DDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30DDCu) goto L_08B30DDC;
    return;
L_08B30DDC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08B30DE4;
L_08B30DE4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B30DF4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 348u, 0x08911494u>(ctx, &aot_mem) && ctx.pc == 0x08B30DF4u) goto L_08B30DF4;
    return;
L_08B30DF4:
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
L_08B30E0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B30E34u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30E34u) goto L_08B30E34;
    return;
L_08B30E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30E40u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30E40u) goto L_08B30E40;
    return;
L_08B30E40:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(472)));
      if (branch_taken) {
          goto L_08B30E60;
      }
      goto L_08B30E50;
    }
L_08B30E50:
    ctx.gpr[6] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B30E70;
      }
      goto L_08B30E60;
    }
L_08B30E60:
    ctx.gpr[6] = (57344u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    goto L_08B30E70;
L_08B30E70:
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
L_08B30E88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B30EB0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30EB0u) goto L_08B30EB0;
    return;
L_08B30EB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30EBCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30EBCu) goto L_08B30EBC;
    return;
L_08B30EBC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(476)));
      if (branch_taken) {
          goto L_08B30ED8;
      }
      goto L_08B30ECC;
    }
L_08B30ECC:
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B30EE4;
      }
      goto L_08B30ED8;
    }
L_08B30ED8:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    goto L_08B30EE4;
L_08B30EE4:
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
L_08B30EFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B30F24u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30F24u) goto L_08B30F24;
    return;
L_08B30F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B30F30u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B30F30u) goto L_08B30F30;
    return;
L_08B30F30:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1712)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B30F44;
      }
      goto L_08B30F40;
    }
L_08B30F40:
    ctx.gpr[4] = (0u | 1u);
    goto L_08B30F44;
L_08B30F44:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B30F70;
      }
      goto L_08B30F68;
    }
L_08B30F68:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B30FB8;
      }
      goto L_08B30F70;
    }
L_08B30F70:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B30F9C;
      }
      goto L_08B30F90;
    }
L_08B30F90:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B30FB8;
      }
      goto L_08B30F9C;
    }
L_08B30F9C:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B30FB8;
      }
      goto L_08B30FB4;
    }
L_08B30FB4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B30FB8;
L_08B30FB8:
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
L_08B30FD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B30FF8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B30FF8u) goto L_08B30FF8;
    return;
L_08B30FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B31004u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B31004u) goto L_08B31004;
    return;
L_08B31004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(476)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
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
L_08B3103C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B31064u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B31064u) goto L_08B31064;
    return;
L_08B31064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B31070u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B31070u) goto L_08B31070;
    return;
L_08B31070:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(476)));
      if (branch_taken) {
          goto L_08B3108C;
      }
      goto L_08B31080;
    }
L_08B31080:
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B31098;
      }
      goto L_08B3108C;
    }
L_08B3108C:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    goto L_08B31098;
L_08B31098:
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
L_08B310B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B310D8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B310D8u) goto L_08B310D8;
    return;
L_08B310D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B310E4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B310E4u) goto L_08B310E4;
    return;
L_08B310E4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(476)));
      if (branch_taken) {
          goto L_08B31100;
      }
      goto L_08B310F4;
    }
L_08B310F4:
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B3110C;
      }
      goto L_08B31100;
    }
L_08B31100:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    goto L_08B3110C;
L_08B3110C:
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
L_08B31124:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08B3114Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B3114Cu) goto L_08B3114C;
    return;
L_08B3114C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B31158u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B31158u) goto L_08B31158;
    return;
L_08B31158:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08B31168u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08B31168u) goto L_08B31168;
    return;
L_08B31168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B311A0;
      }
      goto L_08B31174;
    }
L_08B31174:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B311A0;
      }
      goto L_08B3117C;
    }
L_08B3117C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(476)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-193));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B311A0;
      }
      goto L_08B311A0;
    }
L_08B311A0:
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
L_08B311B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B311E0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B311E0u) goto L_08B311E0;
    return;
L_08B311E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B311ECu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B311ECu) goto L_08B311EC;
    return;
L_08B311EC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(476)));
      if (branch_taken) {
          goto L_08B31208;
      }
      goto L_08B311FC;
    }
L_08B311FC:
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B31214;
      }
      goto L_08B31208;
    }
L_08B31208:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    goto L_08B31214;
L_08B31214:
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
L_08B3122C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B31254u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B31254u) goto L_08B31254;
    return;
L_08B31254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B31260u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B31260u) goto L_08B31260;
    return;
L_08B31260:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(476)));
      if (branch_taken) {
          goto L_08B3127C;
      }
      goto L_08B31270;
    }
L_08B31270:
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B31288;
      }
      goto L_08B3127C;
    }
L_08B3127C:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    goto L_08B31288;
L_08B31288:
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
L_08B312A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B312C8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B312C8u) goto L_08B312C8;
    return;
L_08B312C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B312D4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B312D4u) goto L_08B312D4;
    return;
L_08B312D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1939), static_cast<std::uint8_t>(ctx.gpr[4]));
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
L_08B312F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[31]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] & 255u);
    ctx.gpr[31] = (0x08B31350u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B31350u) goto L_08B31350;
    return;
L_08B31350:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31360;
      }
      goto L_08B31358;
    }
L_08B31358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08B31364;
      }
      goto L_08B31360;
    }
L_08B31360:
    ctx.gpr[17] = (0u | 0u);
    goto L_08B31364;
L_08B31364:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B314F0;
      }
      goto L_08B3136C;
    }
L_08B3136C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B31380;
      }
      goto L_08B31374;
    }
L_08B31374:
    ctx.gpr[31] = (0x08B3137Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 160u, 0x08AD0AE4u>(ctx, &aot_mem) && ctx.pc == 0x08B3137Cu) goto L_08B3137C;
    return;
L_08B3137C:
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[0];
    goto L_08B31380;
L_08B31380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B313E0;
      }
      goto L_08B31390;
    }
L_08B31390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B313BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B313BCu) goto L_08B313BC;
    return;
L_08B313BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B313D8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 424u, 0x0886A030u>(ctx, &aot_mem) && ctx.pc == 0x08B313D8u) goto L_08B313D8;
    return;
L_08B313D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31804;
      }
      goto L_08B313E0;
    }
L_08B313E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B31440;
      }
      goto L_08B313F0;
    }
L_08B313F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B3141Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B3141Cu) goto L_08B3141C;
    return;
L_08B3141C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B31438u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 424u, 0x0886A030u>(ctx, &aot_mem) && ctx.pc == 0x08B31438u) goto L_08B31438;
    return;
L_08B31438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31804;
      }
      goto L_08B31440;
    }
L_08B31440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B314A0;
      }
      goto L_08B31450;
    }
L_08B31450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B3147Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B3147Cu) goto L_08B3147C;
    return;
L_08B3147C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B31498u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 424u, 0x0886A030u>(ctx, &aot_mem) && ctx.pc == 0x08B31498u) goto L_08B31498;
    return;
L_08B31498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31804;
      }
      goto L_08B314A0;
    }
L_08B314A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B314CCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B314CCu) goto L_08B314CC;
    return;
L_08B314CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B314E8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 424u, 0x0886A030u>(ctx, &aot_mem) && ctx.pc == 0x08B314E8u) goto L_08B314E8;
    return;
L_08B314E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31804;
      }
      goto L_08B314F0;
    }
L_08B314F0:
    if (ctx.gpr[16] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[19]);
        goto L_08B31508;
    }
    goto L_08B314F8;
L_08B314F8:
    ctx.gpr[31] = (0x08B31500u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 160u, 0x08AD0AE4u>(ctx, &aot_mem) && ctx.pc == 0x08B31500u) goto L_08B31500;
    return;
L_08B31500:
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[19]);
    goto L_08B31508;
L_08B31508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B31534u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B31534u) goto L_08B31534;
    return;
L_08B31534:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B31550u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 424u, 0x0886A030u>(ctx, &aot_mem) && ctx.pc == 0x08B31550u) goto L_08B31550;
    return;
L_08B31550:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (16384u << 16u);
      if (branch_taken) {
          goto L_08B31804;
      }
      goto L_08B31564;
    }
L_08B31564:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_08B31584;
L_08B31584:
    ctx.gpr[31] = (0x08B3158Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B3158Cu) goto L_08B3158C;
    return;
L_08B3158C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31798;
      }
      goto L_08B31594;
    }
L_08B31594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B31680;
      }
      goto L_08B315A4;
    }
L_08B315A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B31680;
      }
      goto L_08B315B8;
    }
L_08B315B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B31680;
      }
      goto L_08B315CC;
    }
L_08B315CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[31] = (0x08B315D8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 370u, 0x08AC5124u>(ctx, &aot_mem) && ctx.pc == 0x08B315D8u) goto L_08B315D8;
    return;
L_08B315D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[31] = (0x08B315E8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 424u, 0x0886A030u>(ctx, &aot_mem) && ctx.pc == 0x08B315E8u) goto L_08B315E8;
    return;
L_08B315E8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[26];
    ctx.gpr[31] = (0x08B31604u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem) && ctx.pc == 0x08B31604u) goto L_08B31604;
    return;
L_08B31604:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[26];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31678;
      }
      goto L_08B31614;
    }
L_08B31614:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08B31644u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem) && ctx.pc == 0x08B31644u) goto L_08B31644;
    return;
L_08B31644:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31678;
      }
      goto L_08B3164C;
    }
L_08B3164C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B31678u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B31678u) goto L_08B31678;
    return;
L_08B31678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B317F0;
      }
      goto L_08B31680;
    }
L_08B31680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B317F0;
      }
      goto L_08B31690;
    }
L_08B31690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B317F0;
      }
      goto L_08B316A4;
    }
L_08B316A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B316E0;
      }
      goto L_08B316B4;
    }
L_08B316B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B316F4;
      }
      goto L_08B316E0;
    }
L_08B316E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[31] = (0x08B316ECu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 370u, 0x08AC5124u>(ctx, &aot_mem) && ctx.pc == 0x08B316ECu) goto L_08B316EC;
    return;
L_08B316EC:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    goto L_08B316F4;
L_08B316F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[31] = (0x08B31704u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 424u, 0x0886A030u>(ctx, &aot_mem) && ctx.pc == 0x08B31704u) goto L_08B31704;
    return;
L_08B31704:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[26];
    ctx.gpr[31] = (0x08B31720u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem) && ctx.pc == 0x08B31720u) goto L_08B31720;
    return;
L_08B31720:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[26];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31790;
      }
      goto L_08B31730;
    }
L_08B31730:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08B31760u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem) && ctx.pc == 0x08B31760u) goto L_08B31760;
    return;
L_08B31760:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31790;
      }
      goto L_08B31768;
    }
L_08B31768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B31790u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B31790u) goto L_08B31790;
    return;
L_08B31790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B317F0;
      }
      goto L_08B31798;
    }
L_08B31798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B317F0;
      }
      goto L_08B317A8;
    }
L_08B317A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B317F0;
      }
      goto L_08B317BC;
    }
L_08B317BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B317E8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B317E8u) goto L_08B317E8;
    return;
L_08B317E8:
    ctx.gpr[31] = (0x08B317F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 66u, 0x08A0C494u>(ctx, &aot_mem) && ctx.pc == 0x08B317F0u) goto L_08B317F0;
    return;
L_08B317F0:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B31584;
      }
      goto L_08B31804;
    }
L_08B31804:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B31844:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08B31890u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B31890u) goto L_08B31890;
    return;
L_08B31890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B318E0;
      }
      goto L_08B318A4;
    }
L_08B318A4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08B319A8;
      }
      goto L_08B318B0;
    }
L_08B318B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B318F4;
      }
      goto L_08B318B8;
    }
L_08B318B8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B31924;
      }
      goto L_08B318C0;
    }
L_08B318C0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08B31940;
      }
      goto L_08B318C8;
    }
L_08B318C8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B3195C;
      }
      goto L_08B318D0;
    }
L_08B318D0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08B31978;
      }
      goto L_08B318D8;
    }
L_08B318D8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08B31994;
      }
      goto L_08B318E0;
    }
L_08B318E0:
    ctx.gpr[6] = (0u | 119u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B3190C;
      }
      goto L_08B318EC;
    }
L_08B318EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B319A8;
      }
      goto L_08B318F4;
    }
L_08B318F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B31904;
      }
      goto L_08B31900;
    }
L_08B31900:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    goto L_08B31904;
L_08B31904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B319A8;
      }
      goto L_08B3190C;
    }
L_08B3190C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B3191C;
      }
      goto L_08B31918;
    }
L_08B31918:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08B3191C;
L_08B3191C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B319A8;
      }
      goto L_08B31924;
    }
L_08B31924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B31938;
      }
      goto L_08B31930;
    }
L_08B31930:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B31938;
L_08B31938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B319A8;
      }
      goto L_08B31940;
    }
L_08B31940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B31954;
      }
      goto L_08B3194C;
    }
L_08B3194C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B31954;
L_08B31954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B319A8;
      }
      goto L_08B3195C;
    }
L_08B3195C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B31970;
      }
      goto L_08B31968;
    }
L_08B31968:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B31970;
L_08B31970:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B319A8;
      }
      goto L_08B31978;
    }
L_08B31978:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B3198C;
      }
      goto L_08B31988;
    }
L_08B31988:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B3198C;
L_08B3198C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B319A8;
      }
      goto L_08B31994;
    }
L_08B31994:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B319A8;
      }
      goto L_08B319A4;
    }
L_08B319A4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B319A8;
L_08B319A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B319E8;
      }
      goto L_08B319B4;
    }
L_08B319B4:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08B319C0u);
    ctx.gpr[4] = (0u | 2352u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 475u, 0x089062ECu>(ctx, &aot_mem) && ctx.pc == 0x08B319C0u) goto L_08B319C0;
    return;
L_08B319C0:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B319E0;
      }
      goto L_08B319CC;
    }
L_08B319CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B319DCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 437u, 0x08A31EA4u>(ctx, &aot_mem) && ctx.pc == 0x08B319DCu) goto L_08B319DC;
    return;
L_08B319DC:
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    goto L_08B319E0;
L_08B319E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08B31A68;
      }
      goto L_08B319E8;
    }
L_08B319E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B31A08;
      }
      goto L_08B319F8;
    }
L_08B319F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B31A38;
      }
      goto L_08B31A08;
    }
L_08B31A08:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08B31A14u);
    ctx.gpr[4] = (0u | 2320u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 475u, 0x089062ECu>(ctx, &aot_mem) && ctx.pc == 0x08B31A14u) goto L_08B31A14;
    return;
L_08B31A14:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31A30;
      }
      goto L_08B31A20;
    }
L_08B31A20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B31A2Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 300u, 0x08B219ACu>(ctx, &aot_mem) && ctx.pc == 0x08B31A2Cu) goto L_08B31A2C;
    return;
L_08B31A2C:
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    goto L_08B31A30;
L_08B31A30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08B31A68;
      }
      goto L_08B31A38;
    }
L_08B31A38:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08B31A44u);
    ctx.gpr[4] = (0u | 2384u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 475u, 0x089062ECu>(ctx, &aot_mem) && ctx.pc == 0x08B31A44u) goto L_08B31A44;
    return;
L_08B31A44:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[22] == 0u) {
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
        goto L_08B31A68;
    }
    goto L_08B31A50;
L_08B31A50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B31A60u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 453u, 0x089E2490u>(ctx, &aot_mem) && ctx.pc == 0x08B31A60u) goto L_08B31A60;
    return;
L_08B31A60:
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    goto L_08B31A68;
L_08B31A68:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B31A74u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem) && ctx.pc == 0x08B31A74u) goto L_08B31A74;
    return;
L_08B31A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (65024u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (50042u << 16u);
      if (branch_taken) {
          goto L_08B31AE8;
      }
      goto L_08B31AD4;
    }
L_08B31AD4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B31AF8;
      }
      goto L_08B31AE8;
    }
L_08B31AE8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08B31AF4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08B31AF4u) goto L_08B31AF4;
    return;
L_08B31AF4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B31AF8;
L_08B31AF8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B31B50u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x08B31B50u) goto L_08B31B50;
    return;
L_08B31B50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08B31B64u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08B31B64u) goto L_08B31B64;
    return;
L_08B31B64:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B31B74u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 424u, 0x0886A030u>(ctx, &aot_mem) && ctx.pc == 0x08B31B74u) goto L_08B31B74;
    return;
L_08B31B74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31B8C;
      }
      goto L_08B31B80;
    }
L_08B31B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_08B31B8C;
L_08B31B8C:
    ctx.gpr[31] = (0x08B31B94u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08B31B94u) goto L_08B31B94;
    return;
L_08B31B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x08B31BA0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem) && ctx.pc == 0x08B31BA0u) goto L_08B31BA0;
    return;
L_08B31BA0:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x08B31BACu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 540u, 0x08B26CECu>(ctx, &aot_mem) && ctx.pc == 0x08B31BACu) goto L_08B31BAC;
    return;
L_08B31BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B31BB8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem) && ctx.pc == 0x08B31BB8u) goto L_08B31BB8;
    return;
L_08B31BB8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B31BCCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08B31BCCu) goto L_08B31BCC;
    return;
L_08B31BCC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31BF0;
      }
      goto L_08B31BD8;
    }
L_08B31BD8:
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21784));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B31BF0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 275u, 0x08861C90u>(ctx, &aot_mem) && ctx.pc == 0x08B31BF0u) goto L_08B31BF0;
    return;
L_08B31BF0:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B31C24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08B31C6Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B31C6Cu) goto L_08B31C6C;
    return;
L_08B31C6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08B31C78u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08B31C78u) goto L_08B31C78;
    return;
L_08B31C78:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08B31CCC;
      }
      goto L_08B31C90;
    }
L_08B31C90:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08B31D90;
      }
      goto L_08B31C9C;
    }
L_08B31C9C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B31CE0;
      }
      goto L_08B31CA4;
    }
L_08B31CA4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B31D10;
      }
      goto L_08B31CAC;
    }
L_08B31CAC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08B31D2C;
      }
      goto L_08B31CB4;
    }
L_08B31CB4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B31D44;
      }
      goto L_08B31CBC;
    }
L_08B31CBC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08B31D60;
      }
      goto L_08B31CC4;
    }
L_08B31CC4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08B31D7C;
      }
      goto L_08B31CCC;
    }
L_08B31CCC:
    ctx.gpr[6] = (0u | 119u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B31CF8;
      }
      goto L_08B31CD8;
    }
L_08B31CD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31D90;
      }
      goto L_08B31CE0;
    }
L_08B31CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B31CF0;
      }
      goto L_08B31CEC;
    }
L_08B31CEC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), 0u);
    goto L_08B31CF0;
L_08B31CF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31D90;
      }
      goto L_08B31CF8;
    }
L_08B31CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B31D08;
      }
      goto L_08B31D04;
    }
L_08B31D04:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08B31D08;
L_08B31D08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31D90;
      }
      goto L_08B31D10;
    }
L_08B31D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B31D24;
      }
      goto L_08B31D1C;
    }
L_08B31D1C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08B31D24;
L_08B31D24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31D90;
      }
      goto L_08B31D2C;
    }
L_08B31D2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B31D3C;
      }
      goto L_08B31D38;
    }
L_08B31D38:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    goto L_08B31D3C;
L_08B31D3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31D90;
      }
      goto L_08B31D44;
    }
L_08B31D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B31D58;
      }
      goto L_08B31D50;
    }
L_08B31D50:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08B31D58;
L_08B31D58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31D90;
      }
      goto L_08B31D60;
    }
L_08B31D60:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B31D74;
      }
      goto L_08B31D70;
    }
L_08B31D70:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08B31D74;
L_08B31D74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31D90;
      }
      goto L_08B31D7C;
    }
L_08B31D7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B31D90;
      }
      goto L_08B31D8C;
    }
L_08B31D8C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08B31D90;
L_08B31D90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B31DD0;
      }
      goto L_08B31D9C;
    }
L_08B31D9C:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08B31DA8u);
    ctx.gpr[4] = (0u | 2352u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 475u, 0x089062ECu>(ctx, &aot_mem) && ctx.pc == 0x08B31DA8u) goto L_08B31DA8;
    return;
L_08B31DA8:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31DC8;
      }
      goto L_08B31DB4;
    }
L_08B31DB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08B31DC4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 437u, 0x08A31EA4u>(ctx, &aot_mem) && ctx.pc == 0x08B31DC4u) goto L_08B31DC4;
    return;
L_08B31DC4:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08B31DC8;
L_08B31DC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31E4C;
      }
      goto L_08B31DD0;
    }
L_08B31DD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B31DF0;
      }
      goto L_08B31DE0;
    }
L_08B31DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B31E20;
      }
      goto L_08B31DF0;
    }
L_08B31DF0:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08B31DFCu);
    ctx.gpr[4] = (0u | 2320u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 475u, 0x089062ECu>(ctx, &aot_mem) && ctx.pc == 0x08B31DFCu) goto L_08B31DFC;
    return;
L_08B31DFC:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31E18;
      }
      goto L_08B31E08;
    }
L_08B31E08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B31E14u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 300u, 0x08B219ACu>(ctx, &aot_mem) && ctx.pc == 0x08B31E14u) goto L_08B31E14;
    return;
L_08B31E14:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08B31E18;
L_08B31E18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31E4C;
      }
      goto L_08B31E20;
    }
L_08B31E20:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08B31E2Cu);
    ctx.gpr[4] = (0u | 2384u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 475u, 0x089062ECu>(ctx, &aot_mem) && ctx.pc == 0x08B31E2Cu) goto L_08B31E2C;
    return;
L_08B31E2C:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31E4C;
      }
      goto L_08B31E38;
    }
L_08B31E38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B31E48u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 453u, 0x089E2490u>(ctx, &aot_mem) && ctx.pc == 0x08B31E48u) goto L_08B31E48;
    return;
L_08B31E48:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08B31E4C;
L_08B31E4C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3201C;
      }
      goto L_08B31E54;
    }
L_08B31E54:
    ctx.gpr[19] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B31E64u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem) && ctx.pc == 0x08B31E64u) goto L_08B31E64;
    return;
L_08B31E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (65024u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B31EC4;
      }
      goto L_08B31EB0;
    }
L_08B31EB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08B31EC4;
L_08B31EC4:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B31F0Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x08B31F0Cu) goto L_08B31F0C;
    return;
L_08B31F0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08B31F20u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08B31F20u) goto L_08B31F20;
    return;
L_08B31F20:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B31F2Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x08B31F2Cu) goto L_08B31F2C;
    return;
L_08B31F2C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B31F38u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 72u, 0x08B00520u>(ctx, &aot_mem) && ctx.pc == 0x08B31F38u) goto L_08B31F38;
    return;
L_08B31F38:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B31F44u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem) && ctx.pc == 0x08B31F44u) goto L_08B31F44;
    return;
L_08B31F44:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B31F50u);
    ctx.gpr[5] = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08B31F50u) goto L_08B31F50;
    return;
L_08B31F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08B31F84;
      }
      goto L_08B31F70;
    }
L_08B31F70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08B31F84;
      }
      goto L_08B31F7C;
    }
L_08B31F7C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B31F84;
L_08B31F84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B31FB0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 307u, 0x089B56FCu>(ctx, &aot_mem) && ctx.pc == 0x08B31FB0u) goto L_08B31FB0;
    return;
L_08B31FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x08B31FBCu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem) && ctx.pc == 0x08B31FBCu) goto L_08B31FBC;
    return;
L_08B31FBC:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x08B31FC8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08B31FC8u) goto L_08B31FC8;
    return;
L_08B31FC8:
    ctx.gpr[31] = (0x08B31FD0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 540u, 0x08B26CECu>(ctx, &aot_mem) && ctx.pc == 0x08B31FD0u) goto L_08B31FD0;
    return;
L_08B31FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B31FDCu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem) && ctx.pc == 0x08B31FDCu) goto L_08B31FDC;
    return;
L_08B31FDC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B31FF0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08B31FF0u) goto L_08B31FF0;
    return;
L_08B31FF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32034;
      }
      goto L_08B31FFC;
    }
L_08B31FFC:
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21784));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B32014u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 275u, 0x08861C90u>(ctx, &aot_mem) && ctx.pc == 0x08B32014u) goto L_08B32014;
    return;
L_08B32014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32034;
      }
      goto L_08B3201C;
    }
L_08B3201C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B32034u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08B32034u) goto L_08B32034;
    return;
L_08B32034:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B32064:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08B320A8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B320A8u) goto L_08B320A8;
    return;
L_08B320A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08B320B4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08B320B4u) goto L_08B320B4;
    return;
L_08B320B4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_08B32104;
      }
      goto L_08B320C8;
    }
L_08B320C8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08B321CC;
      }
      goto L_08B320D4;
    }
L_08B320D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B32118;
      }
      goto L_08B320DC;
    }
L_08B320DC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B32148;
      }
      goto L_08B320E4;
    }
L_08B320E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08B32164;
      }
      goto L_08B320EC;
    }
L_08B320EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B32180;
      }
      goto L_08B320F4;
    }
L_08B320F4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08B3219C;
      }
      goto L_08B320FC;
    }
L_08B320FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08B321B8;
      }
      goto L_08B32104;
    }
L_08B32104:
    ctx.gpr[6] = (0u | 119u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B32130;
      }
      goto L_08B32110;
    }
L_08B32110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B321CC;
      }
      goto L_08B32118;
    }
L_08B32118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B32128;
      }
      goto L_08B32124;
    }
L_08B32124:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), 0u);
    goto L_08B32128;
L_08B32128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B321CC;
      }
      goto L_08B32130;
    }
L_08B32130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B32140;
      }
      goto L_08B3213C;
    }
L_08B3213C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08B32140;
L_08B32140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B321CC;
      }
      goto L_08B32148;
    }
L_08B32148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B3215C;
      }
      goto L_08B32154;
    }
L_08B32154:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08B3215C;
L_08B3215C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B321CC;
      }
      goto L_08B32164;
    }
L_08B32164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B32178;
      }
      goto L_08B32170;
    }
L_08B32170:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08B32178;
L_08B32178:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B321CC;
      }
      goto L_08B32180;
    }
L_08B32180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B32194;
      }
      goto L_08B3218C;
    }
L_08B3218C:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08B32194;
L_08B32194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B321CC;
      }
      goto L_08B3219C;
    }
L_08B3219C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B321B0;
      }
      goto L_08B321AC;
    }
L_08B321AC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08B321B0;
L_08B321B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B321CC;
      }
      goto L_08B321B8;
    }
L_08B321B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B321CC;
      }
      goto L_08B321C8;
    }
L_08B321C8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08B321CC;
L_08B321CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B3220C;
      }
      goto L_08B321D8;
    }
L_08B321D8:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08B321E4u);
    ctx.gpr[4] = (0u | 2352u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 475u, 0x089062ECu>(ctx, &aot_mem) && ctx.pc == 0x08B321E4u) goto L_08B321E4;
    return;
L_08B321E4:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32204;
      }
      goto L_08B321F0;
    }
L_08B321F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B32200u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 437u, 0x08A31EA4u>(ctx, &aot_mem) && ctx.pc == 0x08B32200u) goto L_08B32200;
    return;
L_08B32200:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08B32204;
L_08B32204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32288;
      }
      goto L_08B3220C;
    }
L_08B3220C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B3222C;
      }
      goto L_08B3221C;
    }
L_08B3221C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B3225C;
      }
      goto L_08B3222C;
    }
L_08B3222C:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08B32238u);
    ctx.gpr[4] = (0u | 2320u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 475u, 0x089062ECu>(ctx, &aot_mem) && ctx.pc == 0x08B32238u) goto L_08B32238;
    return;
L_08B32238:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32254;
      }
      goto L_08B32244;
    }
L_08B32244:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B32250u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 300u, 0x08B219ACu>(ctx, &aot_mem) && ctx.pc == 0x08B32250u) goto L_08B32250;
    return;
L_08B32250:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08B32254;
L_08B32254:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32288;
      }
      goto L_08B3225C;
    }
L_08B3225C:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08B32268u);
    ctx.gpr[4] = (0u | 2384u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 475u, 0x089062ECu>(ctx, &aot_mem) && ctx.pc == 0x08B32268u) goto L_08B32268;
    return;
L_08B32268:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32288;
      }
      goto L_08B32274;
    }
L_08B32274:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B32284u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 453u, 0x089E2490u>(ctx, &aot_mem) && ctx.pc == 0x08B32284u) goto L_08B32284;
    return;
L_08B32284:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08B32288;
L_08B32288:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3243C;
      }
      goto L_08B32290;
    }
L_08B32290:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B3229Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem) && ctx.pc == 0x08B3229Cu) goto L_08B3229C;
    return;
L_08B3229C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (65024u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B322FC;
      }
      goto L_08B322E8;
    }
L_08B322E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08B322FC;
L_08B322FC:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B32344u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x08B32344u) goto L_08B32344;
    return;
L_08B32344:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08B32358u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08B32358u) goto L_08B32358;
    return;
L_08B32358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x08B32364u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem) && ctx.pc == 0x08B32364u) goto L_08B32364;
    return;
L_08B32364:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x08B32370u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08B32370u) goto L_08B32370;
    return;
L_08B32370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B32390;
      }
      goto L_08B3237C;
    }
L_08B3237C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B32388u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 10u, 0x08B000ACu>(ctx, &aot_mem) && ctx.pc == 0x08B32388u) goto L_08B32388;
    return;
L_08B32388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B323A4;
      }
      goto L_08B32390;
    }
L_08B32390:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B323A4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 24u, 0x08B00214u>(ctx, &aot_mem) && ctx.pc == 0x08B323A4u) goto L_08B323A4;
    return;
L_08B323A4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B323B0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x08B323B0u) goto L_08B323B0;
    return;
L_08B323B0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B323BCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem) && ctx.pc == 0x08B323BCu) goto L_08B323BC;
    return;
L_08B323BC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B323C8u);
    ctx.gpr[5] = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08B323C8u) goto L_08B323C8;
    return;
L_08B323C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B323E8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 307u, 0x089B56FCu>(ctx, &aot_mem) && ctx.pc == 0x08B323E8u) goto L_08B323E8;
    return;
L_08B323E8:
    ctx.gpr[31] = (0x08B323F0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 540u, 0x08B26CECu>(ctx, &aot_mem) && ctx.pc == 0x08B323F0u) goto L_08B323F0;
    return;
L_08B323F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B323FCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem) && ctx.pc == 0x08B323FCu) goto L_08B323FC;
    return;
L_08B323FC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B32410u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08B32410u) goto L_08B32410;
    return;
L_08B32410:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32454;
      }
      goto L_08B3241C;
    }
L_08B3241C:
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21784));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B32434u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 275u, 0x08861C90u>(ctx, &aot_mem) && ctx.pc == 0x08B32434u) goto L_08B32434;
    return;
L_08B32434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32454;
      }
      goto L_08B3243C;
    }
L_08B3243C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B32454u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08B32454u) goto L_08B32454;
    return;
L_08B32454:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B32480:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08B324C4u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B324C4u) goto L_08B324C4;
    return;
L_08B324C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B324D0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B324D0u) goto L_08B324D0;
    return;
L_08B324D0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[12])) && ctx.fpr[22] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (0u | 6u);
      if (branch_taken) {
          goto L_08B32514;
      }
      goto L_08B324FC;
    }
L_08B324FC:
    ctx.gpr[4] = (50042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B32524;
      }
      goto L_08B32514;
    }
L_08B32514:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08B32520u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08B32520u) goto L_08B32520;
    return;
L_08B32520:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B32524;
L_08B32524:
    ctx.gpr[31] = (0x08B3252Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B3252Cu) goto L_08B3252C;
    return;
L_08B3252C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32810;
      }
      goto L_08B32534;
    }
L_08B32534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32810;
      }
      goto L_08B32540;
    }
L_08B32540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32564;
      }
      goto L_08B32554;
    }
L_08B32554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08B32564;
L_08B32564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B32600;
      }
      goto L_08B32574;
    }
L_08B32574:
    ctx.gpr[31] = (0x08B3257Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 78u, 0x08B00578u>(ctx, &aot_mem) && ctx.pc == 0x08B3257Cu) goto L_08B3257C;
    return;
L_08B3257C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(613));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (46887u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 50604u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08B325D8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x08B325D8u) goto L_08B325D8;
    return;
L_08B325D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3260C;
      }
      goto L_08B32600;
    }
L_08B32600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[31] = (0x08B3260Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 40u, 0x08B00384u>(ctx, &aot_mem) && ctx.pc == 0x08B3260Cu) goto L_08B3260C;
    return;
L_08B3260C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2274)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32810;
      }
      goto L_08B32618;
    }
L_08B32618:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 11 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B32648;
      }
      goto L_08B32628;
    }
L_08B32628:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3267C;
      }
      goto L_08B32634;
    }
L_08B32634:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32670;
      }
      goto L_08B3263C;
    }
L_08B3263C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32680;
      }
      goto L_08B32648;
    }
L_08B32648:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B32664;
      }
      goto L_08B32650;
    }
L_08B32650:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3267C;
      }
      goto L_08B32658;
    }
L_08B32658:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32680;
      }
      goto L_08B32664;
    }
L_08B32664:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32680;
      }
      goto L_08B32670;
    }
L_08B32670:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32680;
      }
      goto L_08B3267C;
    }
L_08B3267C:
    ctx.gpr[4] = (0u | 2u);
    goto L_08B32680;
L_08B32680:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 63u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B326C4;
      }
      goto L_08B32690;
    }
L_08B32690:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B326C4;
      }
      goto L_08B326A0;
    }
L_08B326A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(296));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B326BCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B326BCu) goto L_08B326BC;
    return;
L_08B326BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B32810;
      }
      goto L_08B326C4;
    }
L_08B326C4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B32738;
      }
      goto L_08B326D8;
    }
L_08B326D8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[6] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B32708;
      }
      goto L_08B326E8;
    }
L_08B326E8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B32708;
      }
      goto L_08B326F8;
    }
L_08B326F8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[6] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B32710;
      }
      goto L_08B32708;
    }
L_08B32708:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_08B327D0;
      }
      goto L_08B32710;
    }
L_08B32710:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[6] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B32730;
      }
      goto L_08B32720;
    }
L_08B32720:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[6] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B327D0;
      }
      goto L_08B32730;
    }
L_08B32730:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_08B327D0;
      }
      goto L_08B32738;
    }
L_08B32738:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 11 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3276C;
      }
      goto L_08B32748;
    }
L_08B32748:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B327D0;
      }
      goto L_08B32754;
    }
L_08B32754:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B327CC;
      }
      goto L_08B32760;
    }
L_08B32760:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B327D0;
      }
      goto L_08B3276C;
    }
L_08B3276C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B32784;
      }
      goto L_08B32774;
    }
L_08B32774:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B327A8;
      }
      goto L_08B3277C;
    }
L_08B3277C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B327D0;
      }
      goto L_08B32784;
    }
L_08B32784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(565)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B3279C;
      }
      goto L_08B32794;
    }
L_08B32794:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08B327A0;
      }
      goto L_08B3279C;
    }
L_08B3279C:
    ctx.gpr[4] = (0u | 3u);
    goto L_08B327A0;
L_08B327A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B327D0;
      }
      goto L_08B327A8;
    }
L_08B327A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(565)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B327C0;
      }
      goto L_08B327B8;
    }
L_08B327B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08B327C4;
      }
      goto L_08B327C0;
    }
L_08B327C0:
    ctx.gpr[4] = (0u | 3u);
    goto L_08B327C4;
L_08B327C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B327D0;
      }
      goto L_08B327CC;
    }
L_08B327CC:
    ctx.gpr[4] = (0u | 8u);
    goto L_08B327D0;
L_08B327D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(564));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(272));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[6] = (0u | 173u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B32810u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B32810u) goto L_08B32810;
    return;
L_08B32810:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B3281Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 756u, 0x089AB8B4u>(ctx, &aot_mem) && ctx.pc == 0x08B3281Cu) goto L_08B3281C;
    return;
L_08B3281C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B32828u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem) && ctx.pc == 0x08B32828u) goto L_08B32828;
    return;
L_08B32828:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B32834u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08B32834u) goto L_08B32834;
    return;
L_08B32834:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B32840u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x08B32840u) goto L_08B32840;
    return;
L_08B32840:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B3284Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x08B3284Cu) goto L_08B3284C;
    return;
L_08B3284C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B32878u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x08B32878u) goto L_08B32878;
    return;
L_08B32878:
    ctx.gpr[31] = (0x08B32880u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 107u, 0x08908630u>(ctx, &aot_mem) && ctx.pc == 0x08B32880u) goto L_08B32880;
    return;
L_08B32880:
    ctx.gpr[31] = (0x08B32888u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08B32888u) goto L_08B32888;
    return;
L_08B32888:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B328A4;
      }
      goto L_08B32890;
    }
L_08B32890:
    ctx.gpr[31] = (0x08B32898u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08B32898u) goto L_08B32898;
    return;
L_08B32898:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08B328A4;
L_08B328A4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B328B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B328B0u) goto L_08B328B0;
    return;
L_08B328B0:
    ctx.gpr[31] = (0x08B328B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 976u, 0x0890BDFCu>(ctx, &aot_mem) && ctx.pc == 0x08B328B8u) goto L_08B328B8;
    return;
L_08B328B8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B328C4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08B328C4u) goto L_08B328C4;
    return;
L_08B328C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B328DC;
    }
    goto L_08B328D0;
L_08B328D0:
    ctx.gpr[31] = (0x08B328D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B328D8u) goto L_08B328D8;
    return;
L_08B328D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B328DC;
L_08B328DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(776)));
    ctx.gpr[7] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08B328F4u);
    ctx.gpr[7] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem) && ctx.pc == 0x08B328F4u) goto L_08B328F4;
    return;
L_08B328F4:
    ctx.gpr[31] = (0x08B328FCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 160u, 0x08AD0AE4u>(ctx, &aot_mem) && ctx.pc == 0x08B328FCu) goto L_08B328FC;
    return;
L_08B328FC:
    ctx.fpr[20] = ctx.fpr[22] + ctx.fpr[0];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B32928u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B32928u) goto L_08B32928;
    return;
L_08B32928:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B32944u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 424u, 0x0886A030u>(ctx, &aot_mem) && ctx.pc == 0x08B32944u) goto L_08B32944;
    return;
L_08B32944:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
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
L_08B32974:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08B329CCu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B329CCu) goto L_08B329CC;
    return;
L_08B329CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08B329F8u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 111u, 0x089609B4u>(ctx, &aot_mem) && ctx.pc == 0x08B329F8u) goto L_08B329F8;
    return;
L_08B329F8:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x08B32A10u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 526u, 0x08A8EB48u>(ctx, &aot_mem) && ctx.pc == 0x08B32A10u) goto L_08B32A10;
    return;
L_08B32A10:
    ctx.gpr[21] = (0u | 6u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[23] = (0u | 4u);
    ctx.gpr[30] = (0u | 5u);
    goto L_08B32A20;
L_08B32A20:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08B32AB8;
      }
      goto L_08B32A28;
    }
L_08B32A28:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[30];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B32AB8;
      }
      goto L_08B32A30;
    }
L_08B32A30:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32AB8;
      }
      goto L_08B32A38;
    }
L_08B32A38:
    ctx.gpr[31] = (0x08B32A40u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(102)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 31u, 0x089C81D8u>(ctx, &aot_mem) && ctx.pc == 0x08B32A40u) goto L_08B32A40;
    return;
L_08B32A40:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B32A64;
      }
      goto L_08B32A54;
    }
L_08B32A54:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B32A64;
L_08B32A64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08B32A7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B32A7Cu) goto L_08B32A7C;
    return;
L_08B32A7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32AA8;
      }
      goto L_08B32A84;
    }
L_08B32A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08B32AA4;
      }
      goto L_08B32A94;
    }
L_08B32A94:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B32AA4;
L_08B32AA4:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    goto L_08B32AA8;
L_08B32AA8:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] & 65535u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32A20;
      }
      goto L_08B32AB8;
    }
L_08B32AB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B32AD8;
      }
      goto L_08B32AC8;
    }
L_08B32AC8:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B32AD8;
L_08B32AD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08B32AF0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B32AF0u) goto L_08B32AF0;
    return;
L_08B32AF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B32B1C;
      }
      goto L_08B32AF8;
    }
L_08B32AF8:
    ctx.gpr[17] = (0u | 14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08B32B18;
      }
      goto L_08B32B0C;
    }
L_08B32B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B32B18;
L_08B32B18:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    goto L_08B32B1C;
L_08B32B1C:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08B32B28u);
    ctx.gpr[4] = (0u | 2384u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 475u, 0x089062ECu>(ctx, &aot_mem) && ctx.pc == 0x08B32B28u) goto L_08B32B28;
    return;
L_08B32B28:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08B32B44;
      }
      goto L_08B32B34;
    }
L_08B32B34:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B32B40u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 453u, 0x089E2490u>(ctx, &aot_mem) && ctx.pc == 0x08B32B40u) goto L_08B32B40;
    return;
L_08B32B40:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08B32B44;
L_08B32B44:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32CE8;
      }
      goto L_08B32B4C;
    }
L_08B32B4C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B32B58u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem) && ctx.pc == 0x08B32B58u) goto L_08B32B58;
    return;
L_08B32B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (65024u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (50042u << 16u);
      if (branch_taken) {
          goto L_08B32BCC;
      }
      goto L_08B32BB8;
    }
L_08B32BB8:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B32BDC;
      }
      goto L_08B32BCC;
    }
L_08B32BCC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08B32BD8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08B32BD8u) goto L_08B32BD8;
    return;
L_08B32BD8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B32BDC;
L_08B32BDC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B32C40u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x08B32C40u) goto L_08B32C40;
    return;
L_08B32C40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x08B32C54u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08B32C54u) goto L_08B32C54;
    return;
L_08B32C54:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B32C64u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 424u, 0x0886A030u>(ctx, &aot_mem) && ctx.pc == 0x08B32C64u) goto L_08B32C64;
    return;
L_08B32C64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x08B32C70u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem) && ctx.pc == 0x08B32C70u) goto L_08B32C70;
    return;
L_08B32C70:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32C8C;
      }
      goto L_08B32C80;
    }
L_08B32C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_08B32C8C;
L_08B32C8C:
    ctx.gpr[31] = (0x08B32C94u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08B32C94u) goto L_08B32C94;
    return;
L_08B32C94:
    ctx.gpr[31] = (0x08B32C9Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 540u, 0x08B26CECu>(ctx, &aot_mem) && ctx.pc == 0x08B32C9Cu) goto L_08B32C9C;
    return;
L_08B32C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B32CA8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem) && ctx.pc == 0x08B32CA8u) goto L_08B32CA8;
    return;
L_08B32CA8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B32CBCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08B32CBCu) goto L_08B32CBC;
    return;
L_08B32CBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32CE0;
      }
      goto L_08B32CC8;
    }
L_08B32CC8:
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21784));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B32CE0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 275u, 0x08861C90u>(ctx, &aot_mem) && ctx.pc == 0x08B32CE0u) goto L_08B32CE0;
    return;
L_08B32CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B32D00;
      }
      goto L_08B32CE8;
    }
L_08B32CE8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B32D00u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08B32D00u) goto L_08B32D00;
    return;
L_08B32D00:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B32D3C:
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
L_08B32D64:
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
L_08B32D90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B32DA4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(156), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(171), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B32E84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B32F8C;
      }
      goto L_08B32EE4;
    }
L_08B32EE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B32F8C;
      }
      goto L_08B32F00;
    }
L_08B32F00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B32F8C;
      }
      goto L_08B32F1C;
    }
L_08B32F1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B32F8C;
      }
      goto L_08B32F38;
    }
L_08B32F38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B32F8C;
      }
      goto L_08B32F54;
    }
L_08B32F54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B32F8C;
      }
      goto L_08B32F70;
    }
L_08B32F70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B32F94;
      }
      goto L_08B32F84;
    }
L_08B32F84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B33028;
      }
      goto L_08B32F8C;
    }
L_08B32F8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3302C;
      }
      goto L_08B32F94;
    }
L_08B32F94:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08B32F98;
L_08B32F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[21] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B32FCCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08B32D3C;
L_08B32FCC:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[21] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B32FFCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 314u, 0x08B356F8u>(ctx, &aot_mem) && ctx.pc == 0x08B32FFCu) goto L_08B32FFC;
    return;
L_08B32FFC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3300C;
      }
      goto L_08B33004;
    }
L_08B33004:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3302C;
      }
      goto L_08B3300C;
    }
L_08B3300C:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B32F98;
      }
      goto L_08B33028;
    }
L_08B33028:
    ctx.gpr[2] = (0u | 1u);
    goto L_08B3302C;
L_08B3302C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B33054:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(62)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_08B33070;
      }
      goto L_08B33060;
    }
L_08B33060:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 5u);
      if (branch_taken) {
          goto L_08B33070;
      }
      goto L_08B33068;
    }
L_08B33068:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B33078;
      }
      goto L_08B33070;
    }
L_08B33070:
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08B33078;
L_08B33078:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B33080:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(62)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_08B33098;
      }
      goto L_08B33090;
    }
L_08B33090:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B330A0;
      }
      goto L_08B33098;
    }
L_08B33098:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08B330A0;
L_08B330A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B330A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(62)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B33114;
      }
      goto L_08B330C8;
    }
L_08B330C8:
    ctx.gpr[18] = (2247u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14768));
    goto L_08B330D0;
L_08B330D0:
    ctx.gpr[31] = (0x08B330D8u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(61)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 597u, 0x0896E7A4u>(ctx, &aot_mem) && ctx.pc == 0x08B330D8u) goto L_08B330D8;
    return;
L_08B330D8:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08B330F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 220u, 0x08B34FC4u>(ctx, &aot_mem) && ctx.pc == 0x08B330F0u) goto L_08B330F0;
    return;
L_08B330F0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B330FCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08B330FCu) goto L_08B330FC;
    return;
L_08B330FC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3310C;
      }
      goto L_08B33104;
    }
L_08B33104:
    ctx.gpr[31] = (0x08B3310Cu);
    ctx.gpr[4] = (0u | 500u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08B3310C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B330D0;
      }
      goto L_08B33114;
    }
L_08B33114:
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
L_08B3312C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08B3314C;
      }
      goto L_08B33140;
    }
L_08B33140:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08B33174;
      }
      goto L_08B3314C;
    }
L_08B3314C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B3316C;
      }
      goto L_08B33160;
    }
L_08B33160:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08B33174;
      }
      goto L_08B3316C;
    }
L_08B3316C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08B33174;
L_08B33174:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B33194;
      }
      goto L_08B33184;
    }
L_08B33184:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08B331C4;
      }
      goto L_08B33194;
    }
L_08B33194:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B331B8;
      }
      goto L_08B331A8;
    }
L_08B331A8:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[0];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08B331C4;
      }
      goto L_08B331B8;
    }
L_08B331B8:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    goto L_08B331C4;
L_08B331C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B331CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B331E0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B331E0u) goto L_08B331E0;
    return;
L_08B331E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B33204;
      }
      goto L_08B331E8;
    }
L_08B331E8:
    ctx.gpr[31] = (0x08B331F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B331F0u) goto L_08B331F0;
    return;
L_08B331F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3320C;
      }
      goto L_08B331FC;
    }
L_08B331FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B33284;
      }
      goto L_08B33204;
    }
L_08B33204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B33414;
      }
      goto L_08B3320C;
    }
L_08B3320C:
    ctx.gpr[31] = (0x08B33214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B33214u) goto L_08B33214;
    return;
L_08B33214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B33284;
      }
      goto L_08B33224;
    }
L_08B33224:
    ctx.gpr[31] = (0x08B3322Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B3322Cu) goto L_08B3322C;
    return;
L_08B3322C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B33284;
      }
      goto L_08B3323C;
    }
L_08B3323C:
    ctx.gpr[31] = (0x08B33244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B33244u) goto L_08B33244;
    return;
L_08B33244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B33284;
      }
      goto L_08B33254;
    }
L_08B33254:
    ctx.gpr[31] = (0x08B3325Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B3325Cu) goto L_08B3325C;
    return;
L_08B3325C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B33284;
      }
      goto L_08B3326C;
    }
L_08B3326C:
    ctx.gpr[31] = (0x08B33274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B33274u) goto L_08B33274;
    return;
L_08B33274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B33358;
      }
      goto L_08B33284;
    }
L_08B33284:
    ctx.gpr[31] = (0x08B3328Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B3328Cu) goto L_08B3328C;
    return;
L_08B3328C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B33350;
      }
      goto L_08B332A0;
    }
L_08B332A0:
    ctx.gpr[31] = (0x08B332A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B332A8u) goto L_08B332A8;
    return;
L_08B332A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B33350;
      }
      goto L_08B332B8;
    }
L_08B332B8:
    ctx.gpr[31] = (0x08B332C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B332C0u) goto L_08B332C0;
    return;
L_08B332C0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B33348;
      }
      goto L_08B332E0;
    }
L_08B332E0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B33348;
      }
      goto L_08B332F4;
    }
L_08B332F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B33348;
      }
      goto L_08B3330C;
    }
L_08B3330C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B33348;
      }
      goto L_08B33320;
    }
L_08B33320:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(320)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B33360;
      }
      goto L_08B33340;
    }
L_08B33340:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08B33360;
      }
      goto L_08B33348;
    }
L_08B33348:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B33414;
      }
      goto L_08B33350;
    }
L_08B33350:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B33414;
      }
      goto L_08B33358;
    }
L_08B33358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B33414;
      }
      goto L_08B33360;
    }
L_08B33360:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B33400;
      }
      goto L_08B33370;
    }
L_08B33370:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(324)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B3338C;
      }
      goto L_08B33384;
    }
L_08B33384:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08B3338C;
      }
      goto L_08B3338C;
    }
L_08B3338C:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B33400;
      }
      goto L_08B3339C;
    }
L_08B3339C:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(328)));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B333B8;
      }
      goto L_08B333B0;
    }
L_08B333B0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08B333B8;
      }
      goto L_08B333B8;
    }
L_08B333B8:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B33400;
      }
      goto L_08B333C8;
    }
L_08B333C8:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (14545u << 16u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B33408;
      }
      goto L_08B333F8;
    }
L_08B333F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B33414;
      }
      goto L_08B33400;
    }
L_08B33400:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B33414;
      }
      goto L_08B33408;
    }
L_08B33408:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B33414u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08B32E84;
L_08B33414:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B33424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B334C0;
      }
      goto L_08B3346C;
    }
L_08B3346C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
        goto L_08B334C4;
    }
    goto L_08B33488;
L_08B33488:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
        goto L_08B334C4;
    }
    goto L_08B334A4;
L_08B334A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B334F4;
      }
      goto L_08B334C0;
    }
L_08B334C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    goto L_08B334C4;
L_08B334C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B334FC;
      }
      goto L_08B334EC;
    }
L_08B334EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B33590;
      }
      goto L_08B334F4;
    }
L_08B334F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B33594;
      }
      goto L_08B334FC;
    }
L_08B334FC:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08B33500;
L_08B33500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[20] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B33534u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08B32D3C;
L_08B33534:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[20] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B33564u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 314u, 0x08B356F8u>(ctx, &aot_mem) && ctx.pc == 0x08B33564u) goto L_08B33564;
    return;
L_08B33564:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B33574;
      }
      goto L_08B3356C;
    }
L_08B3356C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B33594;
      }
      goto L_08B33574;
    }
L_08B33574:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B33500;
      }
      goto L_08B33590;
    }
L_08B33590:
    ctx.gpr[2] = (0u | 1u);
    goto L_08B33594;
L_08B33594:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B335BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B33634u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 406u, 0x0889A478u>(ctx, &aot_mem) && ctx.pc == 0x08B33634u) goto L_08B33634;
    return;
L_08B33634:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B33680;
      }
      goto L_08B33648;
    }
L_08B33648:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08B3365Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B33710;
L_08B3365C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B33688;
      }
      goto L_08B33664;
    }
L_08B33664:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B33648;
      }
      goto L_08B33680;
    }
L_08B33680:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B3368C;
      }
      goto L_08B33688;
    }
L_08B33688:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B3368C;
L_08B3368C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B336A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B336BCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B336BCu) goto L_08B336BC;
    return;
L_08B336BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B336E4;
      }
      goto L_08B336C4;
    }
L_08B336C4:
    ctx.gpr[31] = (0x08B336CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B336CCu) goto L_08B336CC;
    return;
L_08B336CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08B336DCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08B33424;
L_08B336DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B336FC;
      }
      goto L_08B336E4;
    }
L_08B336E4:
    ctx.gpr[31] = (0x08B336ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B336ECu) goto L_08B336EC;
    return;
L_08B336EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08B336FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08B33424;
L_08B336FC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B33710:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B33830;
      }
      goto L_08B33770;
    }
L_08B33770:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B33830;
      }
      goto L_08B3378C;
    }
L_08B3378C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B33830;
      }
      goto L_08B337A8;
    }
L_08B337A8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B33830;
      }
      goto L_08B337C4;
    }
L_08B337C4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B33830;
      }
      goto L_08B337E0;
    }
L_08B337E0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B33830;
      }
      goto L_08B337FC;
    }
L_08B337FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B33838;
      }
      goto L_08B33828;
    }
L_08B33828:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B338BC;
      }
      goto L_08B33830;
    }
L_08B33830:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B338C0;
      }
      goto L_08B33838;
    }
L_08B33838:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (0u | 0u);
    goto L_08B33840;
L_08B33840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B33870u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08B32D3C;
L_08B33870:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B33898u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 314u, 0x08B356F8u>(ctx, &aot_mem) && ctx.pc == 0x08B33898u) goto L_08B33898;
    return;
L_08B33898:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B338A8;
      }
      goto L_08B338A0;
    }
L_08B338A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B338C0;
      }
      goto L_08B338A8;
    }
L_08B338A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B33840;
      }
      goto L_08B338BC;
    }
L_08B338BC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B338C0;
L_08B338C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B338E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B339D0;
      }
      goto L_08B33944;
    }
L_08B33944:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (0u | 0u);
    goto L_08B33950;
L_08B33950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B33980u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08B32D3C;
L_08B33980:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B339ACu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 314u, 0x08B356F8u>(ctx, &aot_mem) && ctx.pc == 0x08B339ACu) goto L_08B339AC;
    return;
L_08B339AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B339BC;
      }
      goto L_08B339B4;
    }
L_08B339B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B339D4;
      }
      goto L_08B339BC;
    }
L_08B339BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B33950;
      }
      goto L_08B339D0;
    }
L_08B339D0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B339D4;
L_08B339D4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B33A00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B33BA4;
      }
      goto L_08B33A4C;
    }
L_08B33A4C:
    ctx.gpr[4] = (ctx.gpr[23] << 5u);
    ctx.gpr[30] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (ctx.gpr[30] + ctx.gpr[4]);
    goto L_08B33A64;
L_08B33A64:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) < 0;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08B33A7C;
      }
      goto L_08B33A6C;
    }
L_08B33A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08B33A84;
    }
    goto L_08B33A7C;
L_08B33A7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B33AA4;
      }
      goto L_08B33A84;
    }
L_08B33A84:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08B33AA0;
    }
    goto L_08B33A98;
L_08B33A98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B33AA4;
      }
      goto L_08B33AA0;
    }
L_08B33AA0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    goto L_08B33AA4;
L_08B33AA4:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B33B8C;
      }
      goto L_08B33AB0;
    }
L_08B33AB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B33B8C;
      }
      goto L_08B33ABC;
    }
L_08B33ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B33B8C;
      }
      goto L_08B33AD0;
    }
L_08B33AD0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B33ADCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08B33710;
L_08B33ADC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B33B8C;
      }
      goto L_08B33AE4;
    }
L_08B33AE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B33B8C;
      }
      goto L_08B33B10;
    }
L_08B33B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B33B40u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08B32D3C;
L_08B33B40:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B33B68u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 314u, 0x08B356F8u>(ctx, &aot_mem) && ctx.pc == 0x08B33B68u) goto L_08B33B68;
    return;
L_08B33B68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B33B78;
      }
      goto L_08B33B70;
    }
L_08B33B70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B33BA8;
      }
      goto L_08B33B78;
    }
L_08B33B78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B33B10;
      }
      goto L_08B33B8C;
    }
L_08B33B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-2080));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
      if (branch_taken) {
          goto L_08B33A64;
      }
      goto L_08B33BA4;
    }
L_08B33BA4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B33BA8;
L_08B33BA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B33BD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B33E54;
      }
      goto L_08B33C30;
    }
L_08B33C30:
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_08B33C6C;
L_08B33C6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
      if (branch_taken) {
          goto L_08B33C88;
      }
      goto L_08B33C78;
    }
L_08B33C78:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08B33C90;
    }
    goto L_08B33C88;
L_08B33C88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B33CB4;
      }
      goto L_08B33C90;
    }
L_08B33C90:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
        goto L_08B33CAC;
    }
    goto L_08B33CA4;
L_08B33CA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B33CB4;
      }
      goto L_08B33CAC;
    }
L_08B33CAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08B33CB4;
L_08B33CB4:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B33E30;
      }
      goto L_08B33CC0;
    }
L_08B33CC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B33E30;
      }
      goto L_08B33CCC;
    }
L_08B33CCC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B33CD8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08B33710;
L_08B33CD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B33E30;
      }
      goto L_08B33CE0;
    }
L_08B33CE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08B33E30;
      }
      goto L_08B33D0C;
    }
L_08B33D0C:
    ctx.gpr[21] = (ctx.gpr[19] + static_cast<std::uint32_t>(320));
    goto L_08B33D10;
L_08B33D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B33D44u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08B32D3C;
L_08B33D44:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B33D64u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 314u, 0x08B356F8u>(ctx, &aot_mem) && ctx.pc == 0x08B33D64u) goto L_08B33D64;
    return;
L_08B33D64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B33E1C;
      }
      goto L_08B33D6C;
    }
L_08B33D6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B33E18u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x08B33E18u) goto L_08B33E18;
    return;
L_08B33E18:
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    goto L_08B33E1C;
L_08B33E1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B33D10;
      }
      goto L_08B33E30;
    }
L_08B33E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2080));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B33C6C;
      }
      goto L_08B33E54;
    }
L_08B33E54:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B33E90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 2u, 0x08B3401Cu>(ctx, &aot_mem); return;
      }
      goto L_08B33EDC;
    }
L_08B33EDC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (ctx.lo);
    goto L_08B33EF0;
L_08B33EF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) < 0;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08B33F08;
      }
      goto L_08B33EF8;
    }
L_08B33EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08B33F10;
    }
    goto L_08B33F08;
L_08B33F08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B33F30;
      }
      goto L_08B33F10;
    }
L_08B33F10:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08B33F2C;
    }
    goto L_08B33F24;
L_08B33F24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B33F30;
      }
      goto L_08B33F2C;
    }
L_08B33F2C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    goto L_08B33F30;
L_08B33F30:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 1u, 0x08B34004u>(ctx, &aot_mem); return;
      }
      goto L_08B33F3C;
    }
L_08B33F3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 1u, 0x08B34004u>(ctx, &aot_mem); return;
      }
      goto L_08B33F48;
    }
L_08B33F48:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B33F54u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08B33710;
L_08B33F54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 1u, 0x08B34004u>(ctx, &aot_mem); return;
      }
      goto L_08B33F5C;
    }
L_08B33F5C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 1u, 0x08B34004u>(ctx, &aot_mem); return;
      }
      goto L_08B33F88;
    }
L_08B33F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B33FB8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08B32D3C;
L_08B33FB8:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B33FE0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 314u, 0x08B356F8u>(ctx, &aot_mem) && ctx.pc == 0x08B33FE0u) goto L_08B33FE0;
    return;
L_08B33FE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B33FF0;
      }
      goto L_08B33FE8;
    }
L_08B33FE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 3u, 0x08B34020u>(ctx, &aot_mem); return;
      }
      goto L_08B33FF0;
    }
L_08B33FF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B33F88;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 1u, 0x08B34004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0203(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0203_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_203(Runtime &runtime) {
    runtime.register_generated_unit(203u, 0x08B30000u, 16384u, &recomp_unit_0203, &recomp_unit_0203_entry);
    runtime.register_function(0x08B30000u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30008u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3003Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3006Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30090u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B300B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B300C4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30104u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3012Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30138u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30148u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30154u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3016Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30194u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B301A0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B301B0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B301BCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B301D4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30200u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30210u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30228u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30238u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30248u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3025Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3026Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3029Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B302C8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B302D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B302F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30300u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30310u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30324u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30334u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30364u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30394u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B303A0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B303B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B303D4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30404u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30410u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30428u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30444u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30474u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30480u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30494u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B304A4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B304BCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B304D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30508u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30514u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30528u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30538u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30550u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3056Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30594u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B305A0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B305E4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3060Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30618u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30628u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30638u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30648u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30660u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30688u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30694u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B306A4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B306B0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B306BCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B306D4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B306FCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30708u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30718u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30720u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3074Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30778u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30780u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30790u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B307A0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B307A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B307B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B307C8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B307E0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30808u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30814u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3084Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3086Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3089Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B308C4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B308D0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B308DCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B308E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B308F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B308F8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3091Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30934u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3095Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30968u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30974u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30980u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30988u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30990u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B309B4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B309CCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B309FCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30A08u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30A20u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30A30u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30A38u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30A4Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30A68u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30A90u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30A9Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30AACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30AB8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30AC4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30ADCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30B04u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30B10u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30B1Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30B3Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30B54u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30B74u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30B80u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30B8Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30BA0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30BC8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30BD4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30C04u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30C2Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30C38u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30C6Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30C8Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30C98u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30CB0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30CD8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30CE4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30CF0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30D1Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30D34u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30D54u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30D60u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30D74u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30D9Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30DA8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30DB8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30DC4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30DD0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30DDCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30DE4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30DF4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30E0Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30E34u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30E40u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30E50u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30E60u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30E70u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30E88u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30EB0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30EBCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30ECCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30ED8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30EE4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30EFCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F24u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F30u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F40u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F44u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F68u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F70u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F90u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F9Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30FB4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30FB8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30FD0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30FF8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31004u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3103Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31064u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31070u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31080u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3108Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31098u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B310B0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B310D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B310E4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B310F4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31100u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3110Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31124u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3114Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31158u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31168u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31174u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3117Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B311A0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B311B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B311E0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B311ECu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B311FCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31208u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31214u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3122Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31254u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31260u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31270u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3127Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31288u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B312A0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B312C8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B312D4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B312F4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31350u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31358u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31360u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31364u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3136Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31374u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3137Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31380u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31390u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B313BCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B313D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B313E0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B313F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3141Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31438u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31440u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31450u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3147Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31498u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B314A0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B314CCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B314E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B314F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B314F8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31500u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31508u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31534u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31550u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31564u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31584u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3158Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31594u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B315A4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B315B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B315CCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B315D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B315E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31604u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31614u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31644u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3164Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31678u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31680u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31690u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B316A4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B316B4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B316E0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B316ECu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B316F4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31704u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31720u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31730u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31760u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31768u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31790u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31798u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B317A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B317BCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B317E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B317F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31804u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31844u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31890u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B318A4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B318B0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B318B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B318C0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B318C8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B318D0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B318D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B318E0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B318ECu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B318F4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31900u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31904u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3190Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31918u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3191Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31924u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31930u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31938u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31940u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3194Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31954u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3195Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31968u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31970u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31978u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31988u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3198Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31994u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B319A4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B319A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B319B4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B319C0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B319CCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B319DCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B319E0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B319E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B319F8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A08u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A14u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A20u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A2Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A30u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A38u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A44u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A50u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A60u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A68u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A74u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31AD4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31AE8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31AF4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31AF8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31B50u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31B64u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31B74u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31B80u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31B8Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31B94u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31BA0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31BACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31BB8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31BCCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31BD8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31BF0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31C24u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31C6Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31C78u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31C90u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31C9Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31CA4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31CACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31CB4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31CBCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31CC4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31CCCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31CD8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31CE0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31CECu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31CF0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31CF8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D04u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D08u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D10u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D1Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D24u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D2Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D38u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D3Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D44u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D50u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D58u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D60u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D70u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D74u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D7Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D8Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D90u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D9Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31DA8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31DB4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31DC4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31DC8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31DD0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31DE0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31DF0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31DFCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31E08u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31E14u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31E18u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31E20u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31E2Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31E38u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31E48u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31E4Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31E54u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31E64u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31EB0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31EC4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31F0Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31F20u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31F2Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31F38u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31F44u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31F50u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31F70u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31F7Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31F84u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31FB0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31FBCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31FC8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31FD0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31FDCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31FF0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31FFCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32014u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3201Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32034u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32064u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B320A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B320B4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B320C8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B320D4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B320DCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B320E4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B320ECu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B320F4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B320FCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32104u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32110u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32118u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32124u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32128u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32130u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3213Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32140u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32148u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32154u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3215Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32164u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32170u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32178u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32180u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3218Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32194u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3219Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B321ACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B321B0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B321B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B321C8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B321CCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B321D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B321E4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B321F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32200u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32204u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3220Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3221Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3222Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32238u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32244u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32250u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32254u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3225Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32268u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32274u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32284u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32288u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32290u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3229Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B322E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B322FCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32344u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32358u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32364u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32370u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3237Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32388u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32390u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B323A4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B323B0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B323BCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B323C8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B323E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B323F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B323FCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32410u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3241Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32434u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3243Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32454u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32480u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B324C4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B324D0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B324FCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32514u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32520u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32524u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3252Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32534u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32540u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32554u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32564u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32574u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3257Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B325D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32600u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3260Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32618u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32628u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32634u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3263Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32648u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32650u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32658u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32664u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32670u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3267Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32680u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32690u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B326A0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B326BCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B326C4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B326D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B326E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B326F8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32708u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32710u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32720u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32730u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32738u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32748u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32754u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32760u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3276Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32774u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3277Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32784u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32794u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3279Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B327A0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B327A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B327B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B327C0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B327C4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B327CCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B327D0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32810u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3281Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32828u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32834u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32840u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3284Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32878u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32880u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32888u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32890u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32898u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B328A4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B328B0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B328B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B328C4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B328D0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B328D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B328DCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B328F4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B328FCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32928u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32944u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32974u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B329CCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B329F8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32A10u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32A20u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32A28u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32A30u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32A38u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32A40u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32A54u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32A64u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32A7Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32A84u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32A94u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32AA4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32AA8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32AB8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32AC8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32AD8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32AF0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32AF8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32B0Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32B18u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32B1Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32B28u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32B34u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32B40u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32B44u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32B4Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32B58u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32BB8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32BCCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32BD8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32BDCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32C40u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32C54u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32C64u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32C70u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32C80u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32C8Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32C94u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32C9Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32CA8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32CBCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32CC8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32CE0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32CE8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32D00u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32D3Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32D64u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32D90u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32DA4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32E84u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32EE4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F00u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F1Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F38u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F54u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F70u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F84u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F8Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F94u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F98u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32FCCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32FFCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33004u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3300Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33028u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3302Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33054u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33060u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33068u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33070u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33078u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33080u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33090u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33098u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B330A0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B330A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B330C8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B330D0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B330D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B330F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B330FCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33104u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3310Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33114u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3312Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33140u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3314Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33160u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3316Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33174u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33184u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33194u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B331A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B331B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B331C4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B331CCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B331E0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B331E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B331F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B331FCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33204u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3320Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33214u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33224u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3322Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3323Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33244u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33254u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3325Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3326Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33274u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33284u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3328Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B332A0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B332A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B332B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B332C0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B332E0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B332F4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3330Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33320u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33340u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33348u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33350u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33358u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33360u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33370u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33384u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3338Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3339Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B333B0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B333B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B333C8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B333F8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33400u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33408u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33414u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33424u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3346Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33488u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B334A4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B334C0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B334C4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B334ECu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B334F4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B334FCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33500u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33534u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33564u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3356Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33574u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33590u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33594u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B335BCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33634u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33648u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3365Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33664u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33680u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33688u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3368Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B336A4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B336BCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B336C4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B336CCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B336DCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B336E4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B336ECu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B336FCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33710u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33770u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3378Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B337A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B337C4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B337E0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B337FCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33828u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33830u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33838u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33840u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33870u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33898u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B338A0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B338A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B338BCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B338C0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B338E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33944u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33950u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33980u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B339ACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B339B4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B339BCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B339D0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B339D4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33A00u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33A4Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33A64u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33A6Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33A7Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33A84u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33A98u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33AA0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33AA4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33AB0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33ABCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33AD0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33ADCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33AE4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33B10u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33B40u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33B68u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33B70u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33B78u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33B8Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33BA4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33BA8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33BD8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33C30u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33C6Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33C78u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33C88u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33C90u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33CA4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33CACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33CB4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33CC0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33CCCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33CD8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33CE0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33D0Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33D10u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33D44u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33D64u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33D6Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33E18u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33E1Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33E30u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33E54u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33E90u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33EDCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33EF0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33EF8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33F08u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33F10u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33F24u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33F2Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33F30u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33F3Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33F48u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33F54u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33F5Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33F88u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33FB8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33FE0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33FE8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33FF0u, &recomp_unit_0203, "recomp_unit_0203");
}
} // namespace psprecomp
