#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0064[4095] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 8, 0, 9, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 18, 0,
    0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32,
    0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 36, 37, 38, 0, 39, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 48,
    0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 57, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62,
    0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77,
    0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0,
    0, 87, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 93, 94, 0, 0, 0, 95, 0, 96, 0, 0, 0, 97,
    0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0, 105, 0, 106, 0, 0,
    0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 114, 0, 0, 0, 115, 0, 116,
    0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 123,
    0, 124, 0, 125, 0, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0,
    0, 148, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 154, 0, 155, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 162, 0, 163,
    0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    0, 171, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0,
    0, 188, 0, 0, 0, 0, 0, 189, 190, 191, 0, 192, 0, 0, 0, 0, 0, 193, 0, 194, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 198,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0,
    0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 229, 230,
    0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237,
    0, 0, 238, 239, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 242, 0, 243, 0, 244, 0, 245, 0, 246, 0, 247, 0, 248, 0, 0,
    249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 255, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0, 0, 260, 0, 0, 0, 0, 261,
    0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 269,
    0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    276, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 281, 0, 282, 0, 283, 0, 284,
    0, 285, 0, 286, 0, 287, 288, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 293, 0, 294, 0, 295, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 297, 0, 0, 0, 0, 298, 0, 299, 0, 0, 300, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 305,
    0, 306, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312,
    0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0,
    0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330,
    0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0,
    0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340,
    0, 0, 0, 0, 341, 0, 342, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354,
    0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0,
    0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366,
    0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371,
    0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 374, 0, 0, 0, 375, 0, 376, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0,
    0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0,
    0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 404, 0, 405, 0, 0, 0, 0,
    0, 406, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 408, 0, 409, 0, 410, 0, 411, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 421, 0, 422, 0, 0, 423, 0, 0, 424,
    0, 425, 0, 0, 0, 0, 426, 0, 0, 427, 0, 428, 429, 0, 0, 430, 0, 0, 0, 431, 0, 0, 432, 0, 433, 0, 434, 0, 0, 0, 0, 435,
    0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 441, 0, 0, 442, 0, 0, 0, 443, 0, 0, 444, 0, 0, 445,
    0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 452, 0, 0, 0, 453, 0,
    0, 0, 0, 0, 454, 0, 0, 455, 0, 456, 0, 457, 0, 458, 459, 0, 460, 0, 0, 0, 461, 0, 0, 462, 0, 463, 464, 0, 465, 0, 0, 466,
    0, 0, 467, 0, 0, 0, 468, 0, 0, 469, 0, 470, 471, 0, 472, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476,
    0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 483, 0, 0, 484, 0, 0, 0,
    0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 491, 0, 492, 0,
    0, 0, 0, 493, 0, 494, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0,
    0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 504, 0, 0, 505, 0, 0, 0, 0, 506, 0, 507, 508, 0, 0, 0, 0,
    0, 509, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 515, 0, 0, 0, 516, 0, 517, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 521, 0, 522, 0, 523, 0, 0, 0, 0,
    524, 0, 525, 0, 526, 0, 527, 0, 528, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0,
    0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 535, 0, 536, 0, 0, 0, 0, 537, 538, 0, 0, 0, 0, 0, 0, 0,
    0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 542, 543, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0,
    545, 0, 546, 0, 547, 0, 548, 0, 0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 551, 0, 552, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 555,
    0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 558, 559, 0, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0,
    563, 0, 564, 0, 0, 565, 0, 566, 0, 567, 0, 568, 0, 569, 570, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 573, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0,
    576, 0, 577, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 583, 0, 584, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0, 0, 587, 0, 588, 589, 0, 0, 0, 0, 0, 590, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0,
    596, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 0, 0,
    0, 0, 0, 601, 0, 602, 0, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 606, 0, 0, 0, 607, 0, 608, 0, 609, 610, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 612, 0, 0, 0, 0, 613, 614, 0, 0,
    0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 0, 619, 0, 0, 620, 0, 0, 0, 621, 0, 0,
    0, 622, 0, 623, 0, 0, 0, 0, 0, 624, 0, 625, 626, 0, 627, 0, 0, 0, 628, 0, 629, 630, 0, 631, 0, 0, 0, 632, 0, 633, 0, 634,
    0, 635, 0, 636, 0, 0, 0, 637, 0, 0, 638, 0, 0, 639, 0, 640, 0, 641, 0, 642, 643, 0, 644, 0, 0, 0, 645, 0, 646, 0, 647, 0,
    648, 0, 649, 0, 650, 0, 651, 0, 652, 0, 653, 654, 0, 655, 0, 0, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 662, 663, 0,
    664, 0, 0, 0, 665, 0, 0, 666, 667, 0, 668, 0, 0, 0, 669, 0, 670, 0, 671, 0, 672, 0, 673, 0, 674, 0, 675, 0, 676, 0, 0, 677,
    0, 678, 0, 679, 0, 680, 681, 0, 682, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 685, 0, 686, 0, 687, 0, 0, 688, 0, 0, 0, 0, 0,
    0, 0, 689, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 693, 0, 0, 0, 694, 0, 695, 0, 0,
    0, 0, 0, 0, 0, 696, 0, 697, 0, 698, 0, 699, 0, 700, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 703, 0, 0, 704, 0, 0, 0, 705, 0, 0, 706, 0, 0, 0, 707, 0, 0, 708, 0, 0, 709, 0, 710, 0, 0, 711, 0,
    712, 0, 713, 0, 714, 715, 0, 0, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 720, 0, 721, 0, 0, 0, 722, 0, 723, 0, 724, 0, 0, 725, 0, 0, 0, 0, 726, 0,
    0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 729, 0, 0, 730, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 732, 733, 0, 0, 734, 0, 0, 735, 0, 736, 0, 737, 738, 0, 0, 0, 739, 0, 740, 741, 0, 0, 0, 742, 0, 743, 0,
    744, 0, 0, 0, 745, 0, 0, 746, 0, 0, 0, 0, 747, 0, 748, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 751,
    0, 752, 0, 753, 0, 0, 0, 0, 0, 0, 754, 0, 755, 0, 756, 0, 0, 0, 0, 0, 757, 0, 758, 0, 759, 0, 760, 0, 761, 0, 0, 0,
    0, 762, 0, 763, 0, 764, 0, 0, 0, 765, 0, 766, 0, 0, 767, 0, 0, 0, 768, 0, 769, 0, 770, 0, 0, 771, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 774,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0,
    777, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779,
    0, 0, 0, 0, 0, 780, 0, 781, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 784,
    0, 0, 0, 0, 0, 0, 0, 785, 0, 786, 0, 787, 0, 0, 0, 788, 0, 789, 0, 790, 0, 791, 0, 792, 0, 793, 0, 794, 0, 795, 0, 796,
    0, 797, 0, 0, 798, 0, 799, 0, 800, 0, 801, 0, 0, 802, 0, 803, 0, 804, 0, 805, 0, 806, 0, 807, 0, 808, 0, 0, 0, 0, 809, 0,
    810, 0, 0, 0, 811, 0, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 814, 0, 0, 815, 0, 0, 816,
    0, 817, 0, 818, 0, 819, 0, 0, 820, 0, 0, 821, 0, 0, 0, 0, 822, 823, 0, 0, 0, 824, 0, 0, 0, 0, 825, 0, 826, 0, 827, 0,
    828, 0, 829, 0, 0, 0, 830, 0, 0, 831, 0, 832, 0, 833, 0, 834, 0, 835, 0, 836, 0, 0, 837, 838, 0, 0, 0, 839, 0, 0, 0, 0,
    840, 0, 841, 0, 842, 0, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 0, 844, 0, 0, 0, 845, 0, 846, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 847, 0, 848, 0, 849, 0, 0, 850, 0, 0, 851, 0, 0, 0, 0, 0, 0, 852, 0, 853, 0, 0, 0, 854, 0, 0, 0, 855, 856,
    0, 857, 0, 858, 0, 0, 0, 0, 0, 859, 860, 861, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 862, 0, 863, 0, 864, 0, 865, 0, 0,
    0, 0, 0, 0, 866, 0, 867, 0, 0, 868, 0, 869, 0, 870, 0, 871, 0, 872, 0, 873, 0, 0, 0, 0, 0, 0, 0, 0, 0, 874, 0, 875,
    0, 876, 0, 877, 0, 878, 0, 0, 0, 879, 0, 0, 880, 0, 0, 0, 881, 0, 882, 0, 0, 0, 0, 883, 0, 884, 0, 0, 0, 0, 885, 0,
    886, 0, 887, 888, 0, 889, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 0, 0, 0, 0, 891, 0, 892, 0, 0, 893, 0, 894, 0, 895,
    0, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 0, 897, 0, 0, 0, 0, 0, 0, 0, 0, 0, 898, 0, 0, 0, 899, 0, 900, 0,
    901, 0, 0, 0, 902, 0, 0, 903, 0, 0, 904, 0, 905, 0, 906, 0, 0, 0, 907, 0, 908, 0, 0, 909, 0, 0, 910, 0, 0, 0, 911, 0,
    0, 0, 0, 912, 0, 0, 0, 0, 0, 913, 0, 0, 914, 0, 915, 0, 916, 0, 917, 0, 0, 0, 0, 918, 0, 919, 0, 0, 0, 0, 0, 920,
    921, 0, 0, 0, 0, 0, 0, 922, 0, 0, 0, 0, 0, 0, 0, 0, 923, 0, 0, 924, 0, 925, 0, 0, 0, 0, 926, 0, 0, 0, 927,
};
void recomp_unit_0064_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08904000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0064[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08904000;
    case 2u: goto L_08904018;
    case 3u: goto L_08904024;
    case 4u: goto L_08904038;
    case 5u: goto L_08904048;
    case 6u: goto L_08904050;
    case 7u: goto L_08904058;
    case 8u: goto L_08904064;
    case 9u: goto L_0890406C;
    case 10u: goto L_08904070;
    case 11u: goto L_0890409C;
    case 12u: goto L_089040AC;
    case 13u: goto L_089040C0;
    case 14u: goto L_089040C8;
    case 15u: goto L_089040D4;
    case 16u: goto L_089040DC;
    case 17u: goto L_089040F4;
    case 18u: goto L_089040F8;
    case 19u: goto L_0890410C;
    case 20u: goto L_08904114;
    case 21u: goto L_08904128;
    case 22u: goto L_08904138;
    case 23u: goto L_08904140;
    case 24u: goto L_08904154;
    case 25u: goto L_0890415C;
    case 26u: goto L_0890417C;
    case 27u: goto L_089041AC;
    case 28u: goto L_089041B8;
    case 29u: goto L_089041C8;
    case 30u: goto L_089041D4;
    case 31u: goto L_089041F4;
    case 32u: goto L_089041FC;
    case 33u: goto L_08904204;
    case 34u: goto L_0890420C;
    case 35u: goto L_08904214;
    case 36u: goto L_08904228;
    case 37u: goto L_0890422C;
    case 38u: goto L_08904230;
    case 39u: goto L_08904238;
    case 40u: goto L_0890423C;
    case 41u: goto L_08904258;
    case 42u: goto L_08904270;
    case 43u: goto L_08904294;
    case 44u: goto L_089042A4;
    case 45u: goto L_089042BC;
    case 46u: goto L_089042DC;
    case 47u: goto L_089042F8;
    case 48u: goto L_089042FC;
    case 49u: goto L_08904304;
    case 50u: goto L_0890430C;
    case 51u: goto L_08904314;
    case 52u: goto L_0890431C;
    case 53u: goto L_08904324;
    case 54u: goto L_0890432C;
    case 55u: goto L_08904334;
    case 56u: goto L_0890433C;
    case 57u: goto L_08904340;
    case 58u: goto L_08904348;
    case 59u: goto L_08904354;
    case 60u: goto L_0890435C;
    case 61u: goto L_08904374;
    case 62u: goto L_0890437C;
    case 63u: goto L_08904384;
    case 64u: goto L_0890439C;
    case 65u: goto L_089043AC;
    case 66u: goto L_089043F0;
    case 67u: goto L_08904408;
    case 68u: goto L_0890441C;
    case 69u: goto L_08904434;
    case 70u: goto L_08904444;
    case 71u: goto L_08904488;
    case 72u: goto L_089044A0;
    case 73u: goto L_089044B4;
    case 74u: goto L_089044BC;
    case 75u: goto L_089044C4;
    case 76u: goto L_089044F4;
    case 77u: goto L_089044FC;
    case 78u: goto L_0890450C;
    case 79u: goto L_08904518;
    case 80u: goto L_0890452C;
    case 81u: goto L_08904534;
    case 82u: goto L_0890453C;
    case 83u: goto L_08904544;
    case 84u: goto L_08904554;
    case 85u: goto L_0890455C;
    case 86u: goto L_08904564;
    case 87u: goto L_08904584;
    case 88u: goto L_0890458C;
    case 89u: goto L_0890459C;
    case 90u: goto L_089045A4;
    case 91u: goto L_089045B4;
    case 92u: goto L_089045C4;
    case 93u: goto L_089045D0;
    case 94u: goto L_089045D4;
    case 95u: goto L_089045E4;
    case 96u: goto L_089045EC;
    case 97u: goto L_089045FC;
    case 98u: goto L_0890460C;
    case 99u: goto L_08904624;
    case 100u: goto L_08904634;
    case 101u: goto L_08904640;
    case 102u: goto L_0890464C;
    case 103u: goto L_08904654;
    case 104u: goto L_08904664;
    case 105u: goto L_0890466C;
    case 106u: goto L_08904674;
    case 107u: goto L_08904694;
    case 108u: goto L_0890469C;
    case 109u: goto L_089046AC;
    case 110u: goto L_089046B4;
    case 111u: goto L_089046C4;
    case 112u: goto L_089046D4;
    case 113u: goto L_089046E0;
    case 114u: goto L_089046E4;
    case 115u: goto L_089046F4;
    case 116u: goto L_089046FC;
    case 117u: goto L_0890470C;
    case 118u: goto L_0890471C;
    case 119u: goto L_08904734;
    case 120u: goto L_08904738;
    case 121u: goto L_08904760;
    case 122u: goto L_08904768;
    case 123u: goto L_0890477C;
    case 124u: goto L_08904784;
    case 125u: goto L_0890478C;
    case 126u: goto L_08904798;
    case 127u: goto L_089047A0;
    case 128u: goto L_089047B0;
    case 129u: goto L_089047C4;
    case 130u: goto L_08904818;
    case 131u: goto L_0890482C;
    case 132u: goto L_08904848;
    case 133u: goto L_08904858;
    case 134u: goto L_0890486C;
    case 135u: goto L_0890488C;
    case 136u: goto L_08904898;
    case 137u: goto L_089048A8;
    case 138u: goto L_089048B4;
    case 139u: goto L_089048BC;
    case 140u: goto L_089048D4;
    case 141u: goto L_08904904;
    case 142u: goto L_08904924;
    case 143u: goto L_08904934;
    case 144u: goto L_08904938;
    case 145u: goto L_08904940;
    case 146u: goto L_08904964;
    case 147u: goto L_08904974;
    case 148u: goto L_08904984;
    case 149u: goto L_08904988;
    case 150u: goto L_08904990;
    case 151u: goto L_089049B8;
    case 152u: goto L_089049C8;
    case 153u: goto L_089049D8;
    case 154u: goto L_089049DC;
    case 155u: goto L_089049E4;
    case 156u: goto L_08904A0C;
    case 157u: goto L_08904A28;
    case 158u: goto L_08904A3C;
    case 159u: goto L_08904A58;
    case 160u: goto L_08904A64;
    case 161u: goto L_08904A6C;
    case 162u: goto L_08904A74;
    case 163u: goto L_08904A7C;
    case 164u: goto L_08904A84;
    case 165u: goto L_08904AA4;
    case 166u: goto L_08904AB4;
    case 167u: goto L_08904AC0;
    case 168u: goto L_08904ACC;
    case 169u: goto L_08904AD4;
    case 170u: goto L_08904AE8;
    case 171u: goto L_08904B04;
    case 172u: goto L_08904B18;
    case 173u: goto L_08904B20;
    case 174u: goto L_08904B34;
    case 175u: goto L_08904B3C;
    case 176u: goto L_08904B54;
    case 177u: goto L_08904B5C;
    case 178u: goto L_08904B64;
    case 179u: goto L_08904B8C;
    case 180u: goto L_08904BA8;
    case 181u: goto L_08904BC0;
    case 182u: goto L_08904BD8;
    case 183u: goto L_08904BF4;
    case 184u: goto L_08904C10;
    case 185u: goto L_08904C30;
    case 186u: goto L_08904C40;
    case 187u: goto L_08904C6C;
    case 188u: goto L_08904C84;
    case 189u: goto L_08904C9C;
    case 190u: goto L_08904CA0;
    case 191u: goto L_08904CA4;
    case 192u: goto L_08904CAC;
    case 193u: goto L_08904CC4;
    case 194u: goto L_08904CCC;
    case 195u: goto L_08904CD4;
    case 196u: goto L_08904CE4;
    case 197u: goto L_08904CF4;
    case 198u: goto L_08904CFC;
    case 199u: goto L_08904D70;
    case 200u: goto L_08904D90;
    case 201u: goto L_08904DA0;
    case 202u: goto L_08904DC0;
    case 203u: goto L_08904DF4;
    case 204u: goto L_08904E24;
    case 205u: goto L_08904E34;
    case 206u: goto L_08904E70;
    case 207u: goto L_08904E84;
    case 208u: goto L_08904EEC;
    case 209u: goto L_08904F04;
    case 210u: goto L_08904F14;
    case 211u: goto L_08904F24;
    case 212u: goto L_08904F34;
    case 213u: goto L_08904F54;
    case 214u: goto L_08904FA4;
    case 215u: goto L_08904FB4;
    case 216u: goto L_08904FBC;
    case 217u: goto L_08904FF0;
    case 218u: goto L_08905018;
    case 219u: goto L_08905034;
    case 220u: goto L_08905040;
    case 221u: goto L_08905058;
    case 222u: goto L_08905074;
    case 223u: goto L_08905090;
    case 224u: goto L_089050A0;
    case 225u: goto L_089050AC;
    case 226u: goto L_089050C8;
    case 227u: goto L_089050D8;
    case 228u: goto L_089050E0;
    case 229u: goto L_089050F8;
    case 230u: goto L_089050FC;
    case 231u: goto L_08905104;
    case 232u: goto L_0890510C;
    case 233u: goto L_08905128;
    case 234u: goto L_08905140;
    case 235u: goto L_0890514C;
    case 236u: goto L_08905170;
    case 237u: goto L_0890517C;
    case 238u: goto L_08905188;
    case 239u: goto L_0890518C;
    case 240u: goto L_089051A4;
    case 241u: goto L_089051AC;
    case 242u: goto L_089051C4;
    case 243u: goto L_089051CC;
    case 244u: goto L_089051D4;
    case 245u: goto L_089051DC;
    case 246u: goto L_089051E4;
    case 247u: goto L_089051EC;
    case 248u: goto L_089051F4;
    case 249u: goto L_08905200;
    case 250u: goto L_08905208;
    case 251u: goto L_08905210;
    case 252u: goto L_08905218;
    case 253u: goto L_08905220;
    case 254u: goto L_08905228;
    case 255u: goto L_0890522C;
    case 256u: goto L_08905230;
    case 257u: goto L_08905244;
    case 258u: goto L_08905254;
    case 259u: goto L_0890525C;
    case 260u: goto L_08905268;
    case 261u: goto L_0890527C;
    case 262u: goto L_08905288;
    case 263u: goto L_089052B8;
    case 264u: goto L_089052C0;
    case 265u: goto L_089052CC;
    case 266u: goto L_089052D8;
    case 267u: goto L_089052E4;
    case 268u: goto L_089052F0;
    case 269u: goto L_089052FC;
    case 270u: goto L_08905304;
    case 271u: goto L_08905330;
    case 272u: goto L_08905344;
    case 273u: goto L_08905348;
    case 274u: goto L_08905354;
    case 275u: goto L_08905378;
    case 276u: goto L_08905380;
    case 277u: goto L_08905388;
    case 278u: goto L_08905390;
    case 279u: goto L_089053D0;
    case 280u: goto L_089053D8;
    case 281u: goto L_089053E4;
    case 282u: goto L_089053EC;
    case 283u: goto L_089053F4;
    case 284u: goto L_089053FC;
    case 285u: goto L_08905404;
    case 286u: goto L_0890540C;
    case 287u: goto L_08905414;
    case 288u: goto L_08905418;
    case 289u: goto L_08905420;
    case 290u: goto L_0890542C;
    case 291u: goto L_08905438;
    case 292u: goto L_08905444;
    case 293u: goto L_0890544C;
    case 294u: goto L_08905454;
    case 295u: goto L_0890545C;
    case 296u: goto L_08905460;
    case 297u: goto L_08905488;
    case 298u: goto L_0890549C;
    case 299u: goto L_089054A4;
    case 300u: goto L_089054B0;
    case 301u: goto L_089054C4;
    case 302u: goto L_089054CC;
    case 303u: goto L_089054DC;
    case 304u: goto L_089054E4;
    case 305u: goto L_089054FC;
    case 306u: goto L_08905504;
    case 307u: goto L_0890550C;
    case 308u: goto L_08905520;
    case 309u: goto L_0890553C;
    case 310u: goto L_08905548;
    case 311u: goto L_08905564;
    case 312u: goto L_0890557C;
    case 313u: goto L_08905594;
    case 314u: goto L_0890559C;
    case 315u: goto L_089055B0;
    case 316u: goto L_089055F0;
    case 317u: goto L_089055FC;
    case 318u: goto L_0890562C;
    case 319u: goto L_08905650;
    case 320u: goto L_08905684;
    case 321u: goto L_089056B0;
    case 322u: goto L_089056BC;
    case 323u: goto L_089056C4;
    case 324u: goto L_089056D0;
    case 325u: goto L_089056F8;
    case 326u: goto L_08905710;
    case 327u: goto L_0890572C;
    case 328u: goto L_08905744;
    case 329u: goto L_08905770;
    case 330u: goto L_0890577C;
    case 331u: goto L_08905784;
    case 332u: goto L_08905790;
    case 333u: goto L_089057B8;
    case 334u: goto L_089057D0;
    case 335u: goto L_089057EC;
    case 336u: goto L_08905804;
    case 337u: goto L_08905824;
    case 338u: goto L_0890584C;
    case 339u: goto L_08905860;
    case 340u: goto L_0890587C;
    case 341u: goto L_08905890;
    case 342u: goto L_08905898;
    case 343u: goto L_089058A4;
    case 344u: goto L_089058AC;
    case 345u: goto L_089058F0;
    case 346u: goto L_0890590C;
    case 347u: goto L_08905928;
    case 348u: goto L_0890593C;
    case 349u: goto L_08905964;
    case 350u: goto L_08905990;
    case 351u: goto L_0890599C;
    case 352u: goto L_089059BC;
    case 353u: goto L_089059E4;
    case 354u: goto L_089059FC;
    case 355u: goto L_08905A0C;
    case 356u: goto L_08905A28;
    case 357u: goto L_08905A30;
    case 358u: goto L_08905A44;
    case 359u: goto L_08905A60;
    case 360u: goto L_08905A68;
    case 361u: goto L_08905A8C;
    case 362u: goto L_08905AA0;
    case 363u: goto L_08905AB0;
    case 364u: goto L_08905AC8;
    case 365u: goto L_08905AE4;
    case 366u: goto L_08905AFC;
    case 367u: goto L_08905B14;
    case 368u: goto L_08905B2C;
    case 369u: goto L_08905B34;
    case 370u: goto L_08905B68;
    case 371u: goto L_08905B7C;
    case 372u: goto L_08905B98;
    case 373u: goto L_08905BA0;
    case 374u: goto L_08905BA8;
    case 375u: goto L_08905BB8;
    case 376u: goto L_08905BC0;
    case 377u: goto L_08905BC8;
    case 378u: goto L_08905BDC;
    case 379u: goto L_08905BF0;
    case 380u: goto L_08905C04;
    case 381u: goto L_08905C18;
    case 382u: goto L_08905C2C;
    case 383u: goto L_08905C3C;
    case 384u: goto L_08905C4C;
    case 385u: goto L_08905C70;
    case 386u: goto L_08905C98;
    case 387u: goto L_08905CC0;
    case 388u: goto L_08905CE4;
    case 389u: goto L_08905CEC;
    case 390u: goto L_08905D48;
    case 391u: goto L_08905D50;
    case 392u: goto L_08905D6C;
    case 393u: goto L_08905D74;
    case 394u: goto L_08905D90;
    case 395u: goto L_08905D98;
    case 396u: goto L_08905DAC;
    case 397u: goto L_08905DB8;
    case 398u: goto L_08905E50;
    case 399u: goto L_08905E94;
    case 400u: goto L_08905EB8;
    case 401u: goto L_08905EC0;
    case 402u: goto L_08905EC8;
    case 403u: goto L_08905EDC;
    case 404u: goto L_08905EE4;
    case 405u: goto L_08905EEC;
    case 406u: goto L_08905F04;
    case 407u: goto L_08905F10;
    case 408u: goto L_08905F90;
    case 409u: goto L_08905F98;
    case 410u: goto L_08905FA0;
    case 411u: goto L_08905FA8;
    case 412u: goto L_08905FB8;
    case 413u: goto L_08905FC0;
    case 414u: goto L_08905FD4;
    case 415u: goto L_08905FE4;
    case 416u: goto L_08905FEC;
    case 417u: goto L_08906014;
    case 418u: goto L_08906028;
    case 419u: goto L_08906044;
    case 420u: goto L_08906054;
    case 421u: goto L_0890605C;
    case 422u: goto L_08906064;
    case 423u: goto L_08906070;
    case 424u: goto L_0890607C;
    case 425u: goto L_08906084;
    case 426u: goto L_08906098;
    case 427u: goto L_089060A4;
    case 428u: goto L_089060AC;
    case 429u: goto L_089060B0;
    case 430u: goto L_089060BC;
    case 431u: goto L_089060CC;
    case 432u: goto L_089060D8;
    case 433u: goto L_089060E0;
    case 434u: goto L_089060E8;
    case 435u: goto L_089060FC;
    case 436u: goto L_08906108;
    case 437u: goto L_0890611C;
    case 438u: goto L_08906128;
    case 439u: goto L_08906134;
    case 440u: goto L_08906140;
    case 441u: goto L_08906148;
    case 442u: goto L_08906154;
    case 443u: goto L_08906164;
    case 444u: goto L_08906170;
    case 445u: goto L_0890617C;
    case 446u: goto L_0890618C;
    case 447u: goto L_08906198;
    case 448u: goto L_089061B4;
    case 449u: goto L_089061BC;
    case 450u: goto L_089061D4;
    case 451u: goto L_089061E0;
    case 452u: goto L_089061E8;
    case 453u: goto L_089061F8;
    case 454u: goto L_08906210;
    case 455u: goto L_0890621C;
    case 456u: goto L_08906224;
    case 457u: goto L_0890622C;
    case 458u: goto L_08906234;
    case 459u: goto L_08906238;
    case 460u: goto L_08906240;
    case 461u: goto L_08906250;
    case 462u: goto L_0890625C;
    case 463u: goto L_08906264;
    case 464u: goto L_08906268;
    case 465u: goto L_08906270;
    case 466u: goto L_0890627C;
    case 467u: goto L_08906288;
    case 468u: goto L_08906298;
    case 469u: goto L_089062A4;
    case 470u: goto L_089062AC;
    case 471u: goto L_089062B0;
    case 472u: goto L_089062B8;
    case 473u: goto L_089062C4;
    case 474u: goto L_089062CC;
    case 475u: goto L_089062EC;
    case 476u: goto L_089062FC;
    case 477u: goto L_08906308;
    case 478u: goto L_0890631C;
    case 479u: goto L_08906328;
    case 480u: goto L_08906338;
    case 481u: goto L_08906344;
    case 482u: goto L_0890635C;
    case 483u: goto L_08906364;
    case 484u: goto L_08906370;
    case 485u: goto L_08906390;
    case 486u: goto L_0890639C;
    case 487u: goto L_089063B4;
    case 488u: goto L_089063C4;
    case 489u: goto L_089063D0;
    case 490u: goto L_089063DC;
    case 491u: goto L_089063F0;
    case 492u: goto L_089063F8;
    case 493u: goto L_0890640C;
    case 494u: goto L_08906414;
    case 495u: goto L_0890641C;
    case 496u: goto L_08906428;
    case 497u: goto L_08906444;
    case 498u: goto L_08906450;
    case 499u: goto L_0890645C;
    case 500u: goto L_08906470;
    case 501u: goto L_08906484;
    case 502u: goto L_089064AC;
    case 503u: goto L_089064B4;
    case 504u: goto L_089064C0;
    case 505u: goto L_089064CC;
    case 506u: goto L_089064E0;
    case 507u: goto L_089064E8;
    case 508u: goto L_089064EC;
    case 509u: goto L_08906504;
    case 510u: goto L_08906510;
    case 511u: goto L_0890652C;
    case 512u: goto L_08906534;
    case 513u: goto L_08906550;
    case 514u: goto L_08906558;
    case 515u: goto L_08906588;
    case 516u: goto L_08906598;
    case 517u: goto L_089065A0;
    case 518u: goto L_089065A8;
    case 519u: goto L_089065B4;
    case 520u: goto L_089065D0;
    case 521u: goto L_089065DC;
    case 522u: goto L_089065E4;
    case 523u: goto L_089065EC;
    case 524u: goto L_08906600;
    case 525u: goto L_08906608;
    case 526u: goto L_08906610;
    case 527u: goto L_08906618;
    case 528u: goto L_08906620;
    case 529u: goto L_0890662C;
    case 530u: goto L_08906638;
    case 531u: goto L_08906670;
    case 532u: goto L_08906690;
    case 533u: goto L_089066AC;
    case 534u: goto L_089066B4;
    case 535u: goto L_089066C0;
    case 536u: goto L_089066C8;
    case 537u: goto L_089066DC;
    case 538u: goto L_089066E0;
    case 539u: goto L_08906704;
    case 540u: goto L_0890672C;
    case 541u: goto L_08906744;
    case 542u: goto L_0890674C;
    case 543u: goto L_08906750;
    case 544u: goto L_0890675C;
    case 545u: goto L_08906780;
    case 546u: goto L_08906788;
    case 547u: goto L_08906790;
    case 548u: goto L_08906798;
    case 549u: goto L_089067A8;
    case 550u: goto L_089067B0;
    case 551u: goto L_089067C8;
    case 552u: goto L_089067D0;
    case 553u: goto L_089067D8;
    case 554u: goto L_089067E8;
    case 555u: goto L_089067FC;
    case 556u: goto L_0890680C;
    case 557u: goto L_08906820;
    case 558u: goto L_0890682C;
    case 559u: goto L_08906830;
    case 560u: goto L_0890683C;
    case 561u: goto L_08906858;
    case 562u: goto L_08906874;
    case 563u: goto L_08906880;
    case 564u: goto L_08906888;
    case 565u: goto L_08906894;
    case 566u: goto L_0890689C;
    case 567u: goto L_089068A4;
    case 568u: goto L_089068AC;
    case 569u: goto L_089068B4;
    case 570u: goto L_089068B8;
    case 571u: goto L_089068C8;
    case 572u: goto L_0890693C;
    case 573u: goto L_08906944;
    case 574u: goto L_0890694C;
    case 575u: goto L_08906970;
    case 576u: goto L_08906980;
    case 577u: goto L_08906988;
    case 578u: goto L_0890698C;
    case 579u: goto L_089069AC;
    case 580u: goto L_08906A1C;
    case 581u: goto L_08906A5C;
    case 582u: goto L_08906A64;
    case 583u: goto L_08906A70;
    case 584u: goto L_08906A78;
    case 585u: goto L_08906AB8;
    case 586u: goto L_08906AC0;
    case 587u: goto L_08906AD0;
    case 588u: goto L_08906AD8;
    case 589u: goto L_08906ADC;
    case 590u: goto L_08906AF4;
    case 591u: goto L_08906B24;
    case 592u: goto L_08906B9C;
    case 593u: goto L_08906BA4;
    case 594u: goto L_08906BAC;
    case 595u: goto L_08906BF0;
    case 596u: goto L_08906C00;
    case 597u: goto L_08906C08;
    case 598u: goto L_08906C4C;
    case 599u: goto L_08906C5C;
    case 600u: goto L_08906C68;
    case 601u: goto L_08906C8C;
    case 602u: goto L_08906C94;
    case 603u: goto L_08906CA8;
    case 604u: goto L_08906CBC;
    case 605u: goto L_08906CD8;
    case 606u: goto L_08906D08;
    case 607u: goto L_08906D18;
    case 608u: goto L_08906D20;
    case 609u: goto L_08906D28;
    case 610u: goto L_08906D2C;
    case 611u: goto L_08906D50;
    case 612u: goto L_08906D5C;
    case 613u: goto L_08906D70;
    case 614u: goto L_08906D74;
    case 615u: goto L_08906D94;
    case 616u: goto L_08906DA4;
    case 617u: goto L_08906DBC;
    case 618u: goto L_08906DC4;
    case 619u: goto L_08906DD8;
    case 620u: goto L_08906DE4;
    case 621u: goto L_08906DF4;
    case 622u: goto L_08906E04;
    case 623u: goto L_08906E0C;
    case 624u: goto L_08906E24;
    case 625u: goto L_08906E2C;
    case 626u: goto L_08906E30;
    case 627u: goto L_08906E38;
    case 628u: goto L_08906E48;
    case 629u: goto L_08906E50;
    case 630u: goto L_08906E54;
    case 631u: goto L_08906E5C;
    case 632u: goto L_08906E6C;
    case 633u: goto L_08906E74;
    case 634u: goto L_08906E7C;
    case 635u: goto L_08906E84;
    case 636u: goto L_08906E8C;
    case 637u: goto L_08906E9C;
    case 638u: goto L_08906EA8;
    case 639u: goto L_08906EB4;
    case 640u: goto L_08906EBC;
    case 641u: goto L_08906EC4;
    case 642u: goto L_08906ECC;
    case 643u: goto L_08906ED0;
    case 644u: goto L_08906ED8;
    case 645u: goto L_08906EE8;
    case 646u: goto L_08906EF0;
    case 647u: goto L_08906EF8;
    case 648u: goto L_08906F00;
    case 649u: goto L_08906F08;
    case 650u: goto L_08906F10;
    case 651u: goto L_08906F18;
    case 652u: goto L_08906F20;
    case 653u: goto L_08906F28;
    case 654u: goto L_08906F2C;
    case 655u: goto L_08906F34;
    case 656u: goto L_08906F44;
    case 657u: goto L_08906F4C;
    case 658u: goto L_08906F54;
    case 659u: goto L_08906F5C;
    case 660u: goto L_08906F64;
    case 661u: goto L_08906F6C;
    case 662u: goto L_08906F74;
    case 663u: goto L_08906F78;
    case 664u: goto L_08906F80;
    case 665u: goto L_08906F90;
    case 666u: goto L_08906F9C;
    case 667u: goto L_08906FA0;
    case 668u: goto L_08906FA8;
    case 669u: goto L_08906FB8;
    case 670u: goto L_08906FC0;
    case 671u: goto L_08906FC8;
    case 672u: goto L_08906FD0;
    case 673u: goto L_08906FD8;
    case 674u: goto L_08906FE0;
    case 675u: goto L_08906FE8;
    case 676u: goto L_08906FF0;
    case 677u: goto L_08906FFC;
    case 678u: goto L_08907004;
    case 679u: goto L_0890700C;
    case 680u: goto L_08907014;
    case 681u: goto L_08907018;
    case 682u: goto L_08907020;
    case 683u: goto L_0890702C;
    case 684u: goto L_0890703C;
    case 685u: goto L_0890704C;
    case 686u: goto L_08907054;
    case 687u: goto L_0890705C;
    case 688u: goto L_08907068;
    case 689u: goto L_08907088;
    case 690u: goto L_08907090;
    case 691u: goto L_089070C0;
    case 692u: goto L_089070D0;
    case 693u: goto L_089070DC;
    case 694u: goto L_089070EC;
    case 695u: goto L_089070F4;
    case 696u: goto L_08907114;
    case 697u: goto L_0890711C;
    case 698u: goto L_08907124;
    case 699u: goto L_0890712C;
    case 700u: goto L_08907134;
    case 701u: goto L_0890713C;
    case 702u: goto L_08907160;
    case 703u: goto L_08907194;
    case 704u: goto L_089071A0;
    case 705u: goto L_089071B0;
    case 706u: goto L_089071BC;
    case 707u: goto L_089071CC;
    case 708u: goto L_089071D8;
    case 709u: goto L_089071E4;
    case 710u: goto L_089071EC;
    case 711u: goto L_089071F8;
    case 712u: goto L_08907200;
    case 713u: goto L_08907208;
    case 714u: goto L_08907210;
    case 715u: goto L_08907214;
    case 716u: goto L_08907228;
    case 717u: goto L_08907238;
    case 718u: goto L_08907250;
    case 719u: goto L_089072A4;
    case 720u: goto L_089072B0;
    case 721u: goto L_089072B8;
    case 722u: goto L_089072C8;
    case 723u: goto L_089072D0;
    case 724u: goto L_089072D8;
    case 725u: goto L_089072E4;
    case 726u: goto L_089072F8;
    case 727u: goto L_0890730C;
    case 728u: goto L_0890733C;
    case 729u: goto L_08907344;
    case 730u: goto L_08907350;
    case 731u: goto L_08907360;
    case 732u: goto L_08907394;
    case 733u: goto L_08907398;
    case 734u: goto L_089073A4;
    case 735u: goto L_089073B0;
    case 736u: goto L_089073B8;
    case 737u: goto L_089073C0;
    case 738u: goto L_089073C4;
    case 739u: goto L_089073D4;
    case 740u: goto L_089073DC;
    case 741u: goto L_089073E0;
    case 742u: goto L_089073F0;
    case 743u: goto L_089073F8;
    case 744u: goto L_08907400;
    case 745u: goto L_08907410;
    case 746u: goto L_0890741C;
    case 747u: goto L_08907430;
    case 748u: goto L_08907438;
    case 749u: goto L_0890743C;
    case 750u: goto L_08907468;
    case 751u: goto L_0890747C;
    case 752u: goto L_08907484;
    case 753u: goto L_0890748C;
    case 754u: goto L_089074A8;
    case 755u: goto L_089074B0;
    case 756u: goto L_089074B8;
    case 757u: goto L_089074D0;
    case 758u: goto L_089074D8;
    case 759u: goto L_089074E0;
    case 760u: goto L_089074E8;
    case 761u: goto L_089074F0;
    case 762u: goto L_08907504;
    case 763u: goto L_0890750C;
    case 764u: goto L_08907514;
    case 765u: goto L_08907524;
    case 766u: goto L_0890752C;
    case 767u: goto L_08907538;
    case 768u: goto L_08907548;
    case 769u: goto L_08907550;
    case 770u: goto L_08907558;
    case 771u: goto L_08907564;
    case 772u: goto L_0890759C;
    case 773u: goto L_08907660;
    case 774u: goto L_0890767C;
    case 775u: goto L_089076B8;
    case 776u: goto L_08907774;
    case 777u: goto L_08907780;
    case 778u: goto L_08907788;
    case 779u: goto L_089077FC;
    case 780u: goto L_08907814;
    case 781u: goto L_0890781C;
    case 782u: goto L_08907830;
    case 783u: goto L_08907868;
    case 784u: goto L_0890787C;
    case 785u: goto L_0890789C;
    case 786u: goto L_089078A4;
    case 787u: goto L_089078AC;
    case 788u: goto L_089078BC;
    case 789u: goto L_089078C4;
    case 790u: goto L_089078CC;
    case 791u: goto L_089078D4;
    case 792u: goto L_089078DC;
    case 793u: goto L_089078E4;
    case 794u: goto L_089078EC;
    case 795u: goto L_089078F4;
    case 796u: goto L_089078FC;
    case 797u: goto L_08907904;
    case 798u: goto L_08907910;
    case 799u: goto L_08907918;
    case 800u: goto L_08907920;
    case 801u: goto L_08907928;
    case 802u: goto L_08907934;
    case 803u: goto L_0890793C;
    case 804u: goto L_08907944;
    case 805u: goto L_0890794C;
    case 806u: goto L_08907954;
    case 807u: goto L_0890795C;
    case 808u: goto L_08907964;
    case 809u: goto L_08907978;
    case 810u: goto L_08907980;
    case 811u: goto L_08907990;
    case 812u: goto L_089079B0;
    case 813u: goto L_089079CC;
    case 814u: goto L_089079E4;
    case 815u: goto L_089079F0;
    case 816u: goto L_089079FC;
    case 817u: goto L_08907A04;
    case 818u: goto L_08907A0C;
    case 819u: goto L_08907A14;
    case 820u: goto L_08907A20;
    case 821u: goto L_08907A2C;
    case 822u: goto L_08907A40;
    case 823u: goto L_08907A44;
    case 824u: goto L_08907A54;
    case 825u: goto L_08907A68;
    case 826u: goto L_08907A70;
    case 827u: goto L_08907A78;
    case 828u: goto L_08907A80;
    case 829u: goto L_08907A88;
    case 830u: goto L_08907A98;
    case 831u: goto L_08907AA4;
    case 832u: goto L_08907AAC;
    case 833u: goto L_08907AB4;
    case 834u: goto L_08907ABC;
    case 835u: goto L_08907AC4;
    case 836u: goto L_08907ACC;
    case 837u: goto L_08907AD8;
    case 838u: goto L_08907ADC;
    case 839u: goto L_08907AEC;
    case 840u: goto L_08907B00;
    case 841u: goto L_08907B08;
    case 842u: goto L_08907B10;
    case 843u: goto L_08907B30;
    case 844u: goto L_08907B44;
    case 845u: goto L_08907B54;
    case 846u: goto L_08907B5C;
    case 847u: goto L_08907B8C;
    case 848u: goto L_08907B94;
    case 849u: goto L_08907B9C;
    case 850u: goto L_08907BA8;
    case 851u: goto L_08907BB4;
    case 852u: goto L_08907BD0;
    case 853u: goto L_08907BD8;
    case 854u: goto L_08907BE8;
    case 855u: goto L_08907BF8;
    case 856u: goto L_08907BFC;
    case 857u: goto L_08907C04;
    case 858u: goto L_08907C0C;
    case 859u: goto L_08907C24;
    case 860u: goto L_08907C28;
    case 861u: goto L_08907C2C;
    case 862u: goto L_08907C5C;
    case 863u: goto L_08907C64;
    case 864u: goto L_08907C6C;
    case 865u: goto L_08907C74;
    case 866u: goto L_08907C90;
    case 867u: goto L_08907C98;
    case 868u: goto L_08907CA4;
    case 869u: goto L_08907CAC;
    case 870u: goto L_08907CB4;
    case 871u: goto L_08907CBC;
    case 872u: goto L_08907CC4;
    case 873u: goto L_08907CCC;
    case 874u: goto L_08907CF4;
    case 875u: goto L_08907CFC;
    case 876u: goto L_08907D04;
    case 877u: goto L_08907D0C;
    case 878u: goto L_08907D14;
    case 879u: goto L_08907D24;
    case 880u: goto L_08907D30;
    case 881u: goto L_08907D40;
    case 882u: goto L_08907D48;
    case 883u: goto L_08907D5C;
    case 884u: goto L_08907D64;
    case 885u: goto L_08907D78;
    case 886u: goto L_08907D80;
    case 887u: goto L_08907D88;
    case 888u: goto L_08907D8C;
    case 889u: goto L_08907D94;
    case 890u: goto L_08907DB8;
    case 891u: goto L_08907DD8;
    case 892u: goto L_08907DE0;
    case 893u: goto L_08907DEC;
    case 894u: goto L_08907DF4;
    case 895u: goto L_08907DFC;
    case 896u: goto L_08907E10;
    case 897u: goto L_08907E38;
    case 898u: goto L_08907E60;
    case 899u: goto L_08907E70;
    case 900u: goto L_08907E78;
    case 901u: goto L_08907E80;
    case 902u: goto L_08907E90;
    case 903u: goto L_08907E9C;
    case 904u: goto L_08907EA8;
    case 905u: goto L_08907EB0;
    case 906u: goto L_08907EB8;
    case 907u: goto L_08907EC8;
    case 908u: goto L_08907ED0;
    case 909u: goto L_08907EDC;
    case 910u: goto L_08907EE8;
    case 911u: goto L_08907EF8;
    case 912u: goto L_08907F0C;
    case 913u: goto L_08907F24;
    case 914u: goto L_08907F30;
    case 915u: goto L_08907F38;
    case 916u: goto L_08907F40;
    case 917u: goto L_08907F48;
    case 918u: goto L_08907F5C;
    case 919u: goto L_08907F64;
    case 920u: goto L_08907F7C;
    case 921u: goto L_08907F80;
    case 922u: goto L_08907F9C;
    case 923u: goto L_08907FC0;
    case 924u: goto L_08907FCC;
    case 925u: goto L_08907FD4;
    case 926u: goto L_08907FE8;
    case 927u: goto L_08907FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08904000:
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904128;
      }
      goto L_08904018;
    }
L_08904018:
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08904038;
      }
      goto L_08904024;
    }
L_08904024:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08904048;
      }
      goto L_08904038;
    }
L_08904038:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08904048;
L_08904048:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08904070;
      }
      goto L_08904050;
    }
L_08904050:
    ctx.gpr[31] = (0x08904058u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08904058u) goto L_08904058;
    return;
L_08904058:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904070;
      }
      goto L_08904064;
    }
L_08904064:
    ctx.gpr[31] = (0x0890406Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x0890406Cu) goto L_0890406C;
    return;
L_0890406C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08904070;
L_08904070:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0890409Cu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089047B0;
L_0890409C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[22];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089040C8;
      }
      goto L_089040AC;
    }
L_089040AC:
    ctx.gpr[20] = (ctx.gpr[23] - ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089040C0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x089040C0u) goto L_089040C0;
    return;
L_089040C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_089040C8;
      }
      goto L_089040C8;
    }
L_089040C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089040DC;
      }
      goto L_089040D4;
    }
L_089040D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089040F8;
      }
      goto L_089040DC;
    }
L_089040DC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x089040F4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x089040F4u) goto L_089040F4;
    return;
L_089040F4:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
    goto L_089040F8;
L_089040F8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904114;
      }
      goto L_0890410C;
    }
L_0890410C:
    ctx.gpr[31] = (0x08904114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08904114u) goto L_08904114;
    return;
L_08904114:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0890417C;
      }
      goto L_08904128;
    }
L_08904128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08904140;
      }
      goto L_08904138;
    }
L_08904138:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0890415C;
      }
      goto L_08904140;
    }
L_08904140:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08904154u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08904154u) goto L_08904154;
    return;
L_08904154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_0890415C;
L_0890415C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_0890417C;
L_0890417C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_089041AC:
    ctx.gpr[2] = (2192u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16812));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089041B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089041C8u);
    // nop
    goto L_089041AC;
L_089041C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089041D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x089041F4u);
    ctx.gpr[18] = (0u | 0u);
    goto L_089041AC;
L_089041F4:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[18] = (0u | 1u);
        goto L_0890423C;
    }
    goto L_089041FC;
L_089041FC:
    ctx.gpr[31] = (0x08904204u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem) && ctx.pc == 0x08904204u) goto L_08904204;
    return;
L_08904204:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_0890422C;
    }
    goto L_0890420C;
L_0890420C:
    ctx.gpr[31] = (0x08904214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x08980688u>(ctx, &aot_mem) && ctx.pc == 0x08904214u) goto L_08904214;
    return;
L_08904214:
    ctx.gpr[4] = (ctx.gpr[2] ^ ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08904230;
      }
      goto L_08904228;
    }
L_08904228:
    ctx.gpr[17] = (0u | 1u);
    goto L_0890422C;
L_0890422C:
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
    goto L_08904230;
L_08904230:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890423C;
      }
      goto L_08904238;
    }
L_08904238:
    ctx.gpr[18] = (0u | 1u);
    goto L_0890423C;
L_0890423C:
    ctx.gpr[2] = (ctx.gpr[18] & 255u);
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
L_08904258:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08904270u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 472u, 0x08AC59D4u>(ctx, &aot_mem) && ctx.pc == 0x08904270u) goto L_08904270;
    return;
L_08904270:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22976));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20584));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(188));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08904294u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08904294u) goto L_08904294;
    return;
L_08904294:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(200));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x089042A4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x089042A4u) goto L_089042A4;
    return;
L_089042A4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089042BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0890435C;
      }
      goto L_089042DC;
    }
L_089042DC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22976));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(200));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(188));
      if (branch_taken) {
          goto L_089042FC;
      }
      goto L_089042F8;
    }
L_089042F8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(184), 0u);
    goto L_089042FC;
L_089042FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0890431C;
      }
      goto L_08904304;
    }
L_08904304:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
      if (branch_taken) {
          goto L_0890431C;
      }
      goto L_0890430C;
    }
L_0890430C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890431C;
      }
      goto L_08904314;
    }
L_08904314:
    ctx.gpr[31] = (0x0890431Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0890431Cu) goto L_0890431C;
    return;
L_0890431C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08904340;
      }
      goto L_08904324;
    }
L_08904324:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
      if (branch_taken) {
          goto L_0890433C;
      }
      goto L_0890432C;
    }
L_0890432C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_08904340;
    }
    goto L_08904334;
L_08904334:
    ctx.gpr[31] = (0x0890433Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0890433Cu) goto L_0890433C;
    return;
L_0890433C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08904340;
L_08904340:
    ctx.gpr[31] = (0x08904348u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 486u, 0x08AC5AE8u>(ctx, &aot_mem) && ctx.pc == 0x08904348u) goto L_08904348;
    return;
L_08904348:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890435C;
      }
      goto L_08904354;
    }
L_08904354:
    ctx.gpr[31] = (0x0890435Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x0890435Cu) goto L_0890435C;
    return;
L_0890435C:
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
L_08904374:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890437C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890439Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 507u, 0x08AC5C90u>(ctx, &aot_mem) && ctx.pc == 0x0890439Cu) goto L_0890439C;
    return;
L_0890439C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089043ACu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089043ACu) goto L_089043AC;
    return;
L_089043AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[31] = (0x089043F0u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089043F0u) goto L_089043F0;
    return;
L_089043F0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (0x08904408u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 121u, 0x08AF51FCu>(ctx, &aot_mem) && ctx.pc == 0x08904408u) goto L_08904408;
    return;
L_08904408:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890441C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08904434u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 511u, 0x08AC5CC8u>(ctx, &aot_mem) && ctx.pc == 0x08904434u) goto L_08904434;
    return;
L_08904434:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08904444u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08904444u) goto L_08904444;
    return;
L_08904444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[31] = (0x08904488u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08904488u) goto L_08904488;
    return;
L_08904488:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (0x089044A0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 121u, 0x08AF51FCu>(ctx, &aot_mem) && ctx.pc == 0x089044A0u) goto L_089044A0;
    return;
L_089044A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089044B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089044BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089044C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x089044F4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 605u, 0x08AC646Cu>(ctx, &aot_mem) && ctx.pc == 0x089044F4u) goto L_089044F4;
    return;
L_089044F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904534;
      }
      goto L_089044FC;
    }
L_089044FC:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 158u);
    ctx.gpr[31] = (0x0890450Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x0890450Cu) goto L_0890450C;
    return;
L_0890450C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08904518u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x08904518u) goto L_08904518;
    return;
L_08904518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(188));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(200));
      if (branch_taken) {
          goto L_0890453C;
      }
      goto L_0890452C;
    }
L_0890452C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904544;
      }
      goto L_08904534;
    }
L_08904534:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08904738;
      }
      goto L_0890453C;
    }
L_0890453C:
    ctx.gpr[31] = (0x08904544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08904544u) goto L_08904544;
    return;
L_08904544:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20584));
        goto L_0890455C;
    }
    goto L_08904554;
L_08904554:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0890455C;
      }
      goto L_0890455C;
    }
L_0890455C:
    ctx.gpr[31] = (0x08904564u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08904564u) goto L_08904564;
    return;
L_08904564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.gpr[20] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[20] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
        goto L_089045E4;
    }
    goto L_08904584;
L_08904584:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089045A4;
      }
      goto L_0890458C;
    }
L_0890458C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0890459Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0890459Cu) goto L_0890459C;
    return;
L_0890459C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    goto L_089045A4;
L_089045A4:
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08904624;
      }
      goto L_089045B4;
    }
L_089045B4:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089045D4;
      }
      goto L_089045C4;
    }
L_089045C4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089045D0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x089045D0u) goto L_089045D0;
    return;
L_089045D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    goto L_089045D4;
L_089045D4:
    ctx.gpr[5] = (ctx.gpr[18] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08904624;
      }
      goto L_089045E4;
    }
L_089045E4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[6]);
        goto L_0890460C;
    }
    goto L_089045EC;
L_089045EC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089045FCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089045FCu) goto L_089045FC;
    return;
L_089045FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[6]);
    goto L_0890460C;
L_0890460C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(13));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08904624u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 715u, 0x08903F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08904624u) goto L_08904624;
    return;
L_08904624:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 159u);
    ctx.gpr[31] = (0x08904634u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08904634u) goto L_08904634;
    return;
L_08904634:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08904640u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x08904640u) goto L_08904640;
    return;
L_08904640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08904654;
      }
      goto L_0890464C;
    }
L_0890464C:
    ctx.gpr[31] = (0x08904654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08904654u) goto L_08904654;
    return;
L_08904654:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20584));
        goto L_0890466C;
    }
    goto L_08904664;
L_08904664:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0890466C;
      }
      goto L_0890466C;
    }
L_0890466C:
    ctx.gpr[31] = (0x08904674u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08904674u) goto L_08904674;
    return;
L_08904674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(200)));
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[2]);
    ctx.gpr[19] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[19] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
        goto L_089046F4;
    }
    goto L_08904694;
L_08904694:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089046B4;
      }
      goto L_0890469C;
    }
L_0890469C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089046ACu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089046ACu) goto L_089046AC;
    return;
L_089046AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(200)));
    goto L_089046B4;
L_089046B4:
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08904734;
      }
      goto L_089046C4;
    }
L_089046C4:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089046E4;
      }
      goto L_089046D4;
    }
L_089046D4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089046E0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x089046E0u) goto L_089046E0;
    return;
L_089046E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    goto L_089046E4;
L_089046E4:
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08904734;
      }
      goto L_089046F4;
    }
L_089046F4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[6]);
        goto L_0890471C;
    }
    goto L_089046FC;
L_089046FC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0890470Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0890470Cu) goto L_0890470C;
    return;
L_0890470C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(200)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[6]);
    goto L_0890471C;
L_0890471C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(15));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08904734u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 715u, 0x08903F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08904734u) goto L_08904734;
    return;
L_08904734:
    ctx.gpr[2] = (0u | 1u);
    goto L_08904738;
L_08904738:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904760:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904768:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890477Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 640u, 0x08AAEFC8u>(ctx, &aot_mem) && ctx.pc == 0x0890477Cu) goto L_0890477C;
    return;
L_0890477C:
    ctx.gpr[31] = (0x08904784u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem) && ctx.pc == 0x08904784u) goto L_08904784;
    return;
L_08904784:
    ctx.gpr[31] = (0x0890478Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 632u, 0x08AAEF5Cu>(ctx, &aot_mem) && ctx.pc == 0x0890478Cu) goto L_0890478C;
    return;
L_0890478C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (0x08904798u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08904798u) goto L_08904798;
    return;
L_08904798:
    ctx.gpr[31] = (0x089047A0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 642u, 0x08AAEFE8u>(ctx, &aot_mem) && ctx.pc == 0x089047A0u) goto L_089047A0;
    return;
L_089047A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089047B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089047C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-32), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-20), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-96), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-128), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08904818u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08904818u) goto L_08904818;
    return;
L_08904818:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890482C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6512)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-20352));
      if (branch_taken) {
          goto L_08904858;
      }
      goto L_08904848;
    }
L_08904848:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6512), ctx.gpr[4]);
    ctx.gpr[31] = (0x08904858u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089047C4;
L_08904858:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890486C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089048BC;
      }
      goto L_0890488C;
    }
L_0890488C:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08904898u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 53u, 0x08B246F0u>(ctx, &aot_mem) && ctx.pc == 0x08904898u) goto L_08904898;
    return;
L_08904898:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089048A8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08904A3C;
L_089048A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089048B4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089048D4;
L_089048B4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890488C;
      }
      goto L_089048BC;
    }
L_089048BC:
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
L_089048D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(104));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08904904u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08904904u) goto L_08904904;
    return;
L_08904904:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08904938;
      }
      goto L_08904924;
    }
L_08904924:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904938;
      }
      goto L_08904934;
    }
L_08904934:
    ctx.gpr[5] = (0u < ctx.gpr[16] ? 1u : 0u);
    goto L_08904938;
L_08904938:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904964;
      }
      goto L_08904940;
    }
L_08904940:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(18)));
    ctx.gpr[5] = (0u | 20u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08904A28;
      }
      goto L_08904964;
    }
L_08904964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08904988;
      }
      goto L_08904974;
    }
L_08904974:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904988;
      }
      goto L_08904984;
    }
L_08904984:
    ctx.gpr[5] = (0u < ctx.gpr[16] ? 1u : 0u);
    goto L_08904988;
L_08904988:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089049B8;
      }
      goto L_08904990;
    }
L_08904990:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 5u));
    ctx.gpr[5] = (ctx.gpr[5] >> 27u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 5u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08904A28;
      }
      goto L_089049B8;
    }
L_089049B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089049DC;
      }
      goto L_089049C8;
    }
L_089049C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089049DC;
      }
      goto L_089049D8;
    }
L_089049D8:
    ctx.gpr[5] = (0u < ctx.gpr[16] ? 1u : 0u);
    goto L_089049DC;
L_089049DC:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_08904A0C;
    }
    goto L_089049E4;
L_089049E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 7u));
    ctx.gpr[5] = (ctx.gpr[5] >> 25u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 7u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08904A28;
      }
      goto L_08904A0C;
    }
L_08904A0C:
    ctx.gpr[5] = (0u | 96u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08904A28;
L_08904A28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904A3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08904A58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 56u, 0x08B24720u>(ctx, &aot_mem) && ctx.pc == 0x08904A58u) goto L_08904A58;
    return;
L_08904A58:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08904A64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 53u, 0x08B246F0u>(ctx, &aot_mem) && ctx.pc == 0x08904A64u) goto L_08904A64;
    return;
L_08904A64:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08904A74;
      }
      goto L_08904A6C;
    }
L_08904A6C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08904A74;
L_08904A74:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904A84;
      }
      goto L_08904A7C;
    }
L_08904A7C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08904A84;
L_08904A84:
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904AA4:
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08904B18;
      }
      goto L_08904AB4;
    }
L_08904AB4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904B04;
      }
      goto L_08904AC0;
    }
L_08904AC0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904AE8;
      }
      goto L_08904ACC;
    }
L_08904ACC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08904B20;
      }
      goto L_08904AD4;
    }
L_08904AD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_08904B34;
      }
      goto L_08904AE8;
    }
L_08904AE8:
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-192));
      if (branch_taken) {
          goto L_08904B34;
      }
      goto L_08904B04;
    }
L_08904B04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-384));
      if (branch_taken) {
          goto L_08904B34;
      }
      goto L_08904B18;
    }
L_08904B18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08904B34;
      }
      goto L_08904B20;
    }
L_08904B20:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08904B34;
L_08904B34:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904B3C:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08904B5C;
      }
      goto L_08904B54;
    }
L_08904B54:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08904B5C;
      }
      goto L_08904B5C;
    }
L_08904B5C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904B64:
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
L_08904B8C:
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
L_08904BA8:
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
L_08904BC0:
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
L_08904BD8:
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
L_08904BF4:
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
L_08904C10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[14];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904C30:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904C40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904C6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08904CA0;
      }
      goto L_08904C84;
    }
L_08904C84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[2] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08904CA4;
      }
      goto L_08904C9C;
    }
L_08904C9C:
    ctx.gpr[6] = (0u | 1u);
    goto L_08904CA0;
L_08904CA0:
    ctx.gpr[2] = (ctx.gpr[6] & 255u);
    goto L_08904CA4;
L_08904CA4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904CAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08904CCC;
      }
      goto L_08904CC4;
    }
L_08904CC4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08904CCC;
      }
      goto L_08904CCC;
    }
L_08904CCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904CD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08904CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08904CE4u) goto L_08904CE4;
    return;
L_08904CE4:
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904CF4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904CFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    ctx.gpr[5] = (0u | 32u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[23] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08904E34;
      }
      goto L_08904D70;
    }
L_08904D70:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    ctx.gpr[4] = (48460u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 200u);
    goto L_08904D90;
L_08904D90:
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
    ctx.gpr[31] = (0x08904DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08904DA0u) goto L_08904DA0;
    return;
L_08904DA0:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08904DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08904DC0u) goto L_08904DC0;
    return;
L_08904DC0:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
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
    ctx.gpr[31] = (0x08904DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08904DF4u) goto L_08904DF4;
    return;
L_08904DF4:
    ctx.gpr[11] = (ctx.gpr[2] & 65535u);
    ctx.gpr[11] = (ctx.gpr[11] & 1u);
    ctx.gpr[4] = (0u | 38u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08904E24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x08904E24u) goto L_08904E24;
    return;
L_08904E24:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904D90;
      }
      goto L_08904E34;
    }
L_08904E34:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904E70:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904E84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(311)));
    ctx.gpr[7] = (15820u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(34) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08904FBC;
      }
      goto L_08904EEC;
    }
L_08904EEC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-13040)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904F04:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08904FB4;
      }
      goto L_08904F14;
    }
L_08904F14:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08904F24;
L_08904F24:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08904F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08904F34u) goto L_08904F34;
    return;
L_08904F34:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08904F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08904F54u) goto L_08904F54;
    return;
L_08904F54:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (0u | 51u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08904FA4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x08904FA4u) goto L_08904FA4;
    return;
L_08904FA4:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904F24;
      }
      goto L_08904FB4;
    }
L_08904FB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904FBC;
      }
      goto L_08904FBC;
    }
L_08904FBC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904FF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08905018u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem) && ctx.pc == 0x08905018u) goto L_08905018;
    return;
L_08905018:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(700)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08905034u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem) && ctx.pc == 0x08905034u) goto L_08905034;
    return;
L_08905034:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08905040u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem) && ctx.pc == 0x08905040u) goto L_08905040;
    return;
L_08905040:
    ctx.gpr[7] = (ctx.gpr[16] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08905058u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 239u, 0x088619ACu>(ctx, &aot_mem) && ctx.pc == 0x08905058u) goto L_08905058;
    return;
L_08905058:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08905074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08905090u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem) && ctx.pc == 0x08905090u) goto L_08905090;
    return;
L_08905090:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089050A0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem) && ctx.pc == 0x089050A0u) goto L_089050A0;
    return;
L_089050A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089050ACu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem) && ctx.pc == 0x089050ACu) goto L_089050AC;
    return;
L_089050AC:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089050C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[4] & ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089050D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089050FC;
      }
      goto L_089050E0;
    }
L_089050E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089050FC;
      }
      goto L_089050F8;
    }
L_089050F8:
    ctx.gpr[5] = (0u | 1u);
    goto L_089050FC;
L_089050FC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905104:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890510C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08905140;
      }
      goto L_08905128;
    }
L_08905128:
    ctx.gpr[8] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08905140u);
    ctx.gpr[7] = (0u | 161u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x08905140u) goto L_08905140;
    return;
L_08905140:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890514C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1676)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 48u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0890518C;
      }
      goto L_08905170;
    }
L_08905170:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890517Cu);
    ctx.gpr[5] = (0u | 330u);
    goto L_08907F9C;
L_0890517C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1676)));
    ctx.gpr[31] = (0x08905188u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem) && ctx.pc == 0x08905188u) goto L_08905188;
    return;
L_08905188:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1676), ctx.gpr[16]);
    goto L_0890518C;
L_0890518C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1736), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089051A4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089051AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089051C4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08905244;
L_089051C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089051E4;
      }
      goto L_089051CC;
    }
L_089051CC:
    ctx.gpr[31] = (0x089051D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x089051D4u) goto L_089051D4;
    return;
L_089051D4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
        goto L_089051EC;
    }
    goto L_089051DC;
L_089051DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089051F4;
      }
      goto L_089051E4;
    }
L_089051E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08905230;
      }
      goto L_089051EC;
    }
L_089051EC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905208;
      }
      goto L_089051F4;
    }
L_089051F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08905228;
      }
      goto L_08905200;
    }
L_08905200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905218;
      }
      goto L_08905208;
    }
L_08905208:
    ctx.gpr[31] = (0x08905210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 1019u, 0x08ACF8F4u>(ctx, &aot_mem) && ctx.pc == 0x08905210u) goto L_08905210;
    return;
L_08905210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905230;
      }
      goto L_08905218;
    }
L_08905218:
    ctx.gpr[31] = (0x08905220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08905220u) goto L_08905220;
    return;
L_08905220:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890522C;
      }
      goto L_08905228;
    }
L_08905228:
    ctx.gpr[17] = (0u | 1u);
    goto L_0890522C;
L_0890522C:
    ctx.gpr[2] = (ctx.gpr[17] & 255u);
    goto L_08905230;
L_08905230:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905244:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890525C;
      }
      goto L_08905254;
    }
L_08905254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890527C;
      }
      goto L_0890525C;
    }
L_0890525C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08905268u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem) && ctx.pc == 0x08905268u) goto L_08905268;
    return;
L_08905268:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 8u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 71 ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[4]);
    goto L_0890527C;
L_0890527C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905288:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089052C0;
      }
      goto L_089052B8;
    }
L_089052B8:
    ctx.gpr[31] = (0x089052C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x089052C0u) goto L_089052C0;
    return;
L_089052C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[31] = (0x089052CCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 681u, 0x0893EC8Cu>(ctx, &aot_mem) && ctx.pc == 0x089052CCu) goto L_089052CC;
    return;
L_089052CC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089052D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem) && ctx.pc == 0x089052D8u) goto L_089052D8;
    return;
L_089052D8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (50298u << 16u);
      if (branch_taken) {
          goto L_08905354;
      }
      goto L_089052E4;
    }
L_089052E4:
    ctx.gpr[18] = (0u | 40u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (1u << 16u);
    goto L_089052F0;
L_089052F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08905304;
      }
      goto L_089052FC;
    }
L_089052FC:
    ctx.gpr[31] = (0x08905304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08905304u) goto L_08905304;
    return;
L_08905304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(316)));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905348;
      }
      goto L_08905330;
    }
L_08905330:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905348;
      }
      goto L_08905344;
    }
L_08905344:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08905348;
L_08905348:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089052F0;
      }
      goto L_08905354;
    }
L_08905354:
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
L_08905378:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905380:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2240), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905388:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2240)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905390:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089053D0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_08906DE4;
L_089053D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089053EC;
      }
      goto L_089053D8;
    }
L_089053D8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089053F4;
      }
      goto L_089053E4;
    }
L_089053E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
      if (branch_taken) {
          goto L_08905404;
      }
      goto L_089053EC;
    }
L_089053EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089055FC;
      }
      goto L_089053F4;
    }
L_089053F4:
    ctx.gpr[31] = (0x089053FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x089053FCu) goto L_089053FC;
    return;
L_089053FC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08905404;
L_08905404:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08905418;
    }
    goto L_0890540C;
L_0890540C:
    ctx.gpr[31] = (0x08905414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08905414u) goto L_08905414;
    return;
L_08905414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08905418;
L_08905418:
    ctx.gpr[31] = (0x08905420u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 680u, 0x0893EC70u>(ctx, &aot_mem) && ctx.pc == 0x08905420u) goto L_08905420;
    return;
L_08905420:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0890542Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 681u, 0x0893EC8Cu>(ctx, &aot_mem) && ctx.pc == 0x0890542Cu) goto L_0890542C;
    return;
L_0890542C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08905438u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem) && ctx.pc == 0x08905438u) goto L_08905438;
    return;
L_08905438:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[30] = (0u | 40u);
      if (branch_taken) {
          goto L_089054B0;
      }
      goto L_08905444;
    }
L_08905444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[23] = (1u << 16u);
    goto L_0890544C;
L_0890544C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08905460;
      }
      goto L_08905454;
    }
L_08905454:
    ctx.gpr[31] = (0x0890545Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0890545Cu) goto L_0890545C;
    return;
L_0890545C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08905460;
L_08905460:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(316)));
    ctx.gpr[5] = (ctx.gpr[21] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089054A4;
      }
      goto L_08905488;
    }
L_08905488:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089054A4;
      }
      goto L_0890549C;
    }
L_0890549C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089054B0;
      }
      goto L_089054A4;
    }
L_089054A4:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890544C;
      }
      goto L_089054B0;
    }
L_089054B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089054DC;
      }
      goto L_089054C4;
    }
L_089054C4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089054DC;
      }
      goto L_089054CC;
    }
L_089054CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089054DC;
L_089054DC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089054FC;
      }
      goto L_089054E4;
    }
L_089054E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089055FC;
      }
      goto L_089054FC;
    }
L_089054FC:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 31u));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    goto L_08905504;
L_08905504:
    ctx.gpr[31] = (0x0890550Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0890550Cu) goto L_0890550C;
    return;
L_0890550C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08905520u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08905520u) goto L_08905520;
    return;
L_08905520:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08905548;
      }
      goto L_0890553C;
    }
L_0890553C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08905504;
      }
      goto L_08905548;
    }
L_08905548:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (16448u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08905564u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x08905564u) goto L_08905564;
    return;
L_08905564:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2193u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890557Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13204));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0890557Cu) goto L_0890557C;
    return;
L_0890557C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089055F0;
      }
      goto L_08905594;
    }
L_08905594:
    ctx.gpr[31] = (0x0890559Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0890559Cu) goto L_0890559C;
    return;
L_0890559C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20320)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089055B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089055B0u) goto L_089055B0;
    return;
L_089055B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20308)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20312)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[6] = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2240), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089055FC;
      }
      goto L_089055F0;
    }
L_089055F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2240), ctx.gpr[4]);
    goto L_089055FC;
L_089055FC:
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
L_0890562C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08905650u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 731u, 0x0890F28Cu>(ctx, &aot_mem) && ctx.pc == 0x08905650u) goto L_08905650;
    return;
L_08905650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(472)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1793));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 1280u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905684:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 44u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089056C4;
      }
      goto L_089056B0;
    }
L_089056B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089056BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0890562C;
L_089056BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890572C;
      }
      goto L_089056C4;
    }
L_089056C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089056D0u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 731u, 0x0890F28Cu>(ctx, &aot_mem) && ctx.pc == 0x089056D0u) goto L_089056D0;
    return;
L_089056D0:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (17530u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 60u);
    ctx.gpr[31] = (0x089056F8u);
    ctx.gpr[7] = (0u | 260u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x089056F8u) goto L_089056F8;
    return;
L_089056F8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2192u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08905710u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22060));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08905710u) goto L_08905710;
    return;
L_08905710:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20384)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1793));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 1024u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    goto L_0890572C;
L_0890572C:
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
L_08905744:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 44u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08905784;
      }
      goto L_08905770;
    }
L_08905770:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890577Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0890562C;
L_0890577C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089057EC;
      }
      goto L_08905784;
    }
L_08905784:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08905790u);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 731u, 0x0890F28Cu>(ctx, &aot_mem) && ctx.pc == 0x08905790u) goto L_08905790;
    return;
L_08905790:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (17530u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 60u);
    ctx.gpr[31] = (0x089057B8u);
    ctx.gpr[7] = (0u | 259u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x089057B8u) goto L_089057B8;
    return;
L_089057B8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2192u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089057D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22148));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x089057D0u) goto L_089057D0;
    return;
L_089057D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20384)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1793));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 768u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    goto L_089057EC;
L_089057EC:
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
L_08905804:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905824:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 44u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08905898;
      }
      goto L_0890584C;
    }
L_0890584C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(472)));
    ctx.gpr[5] = (0u | 256u);
    ctx.gpr[6] = (ctx.gpr[4] & 1792u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1793));
      if (branch_taken) {
          goto L_089058AC;
      }
      goto L_08905860;
    }
L_08905860:
    ctx.gpr[8] = (16672u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 60u);
    ctx.gpr[31] = (0x0890587Cu);
    ctx.gpr[7] = (0u | 261u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0890587Cu) goto L_0890587C;
    return;
L_0890587C:
    ctx.gpr[5] = (2192u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08905890u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22060));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08905890u) goto L_08905890;
    return;
L_08905890:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905928;
      }
      goto L_08905898;
    }
L_08905898:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089058A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890562C;
L_089058A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905928;
      }
      goto L_089058AC;
    }
L_089058AC:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (17530u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 60u);
    ctx.gpr[31] = (0x089058F0u);
    ctx.gpr[7] = (0u | 258u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x089058F0u) goto L_089058F0;
    return;
L_089058F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20384)));
    ctx.gpr[5] = (2192u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890590Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22340));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0890590Cu) goto L_0890590C;
    return;
L_0890590C:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08905928u);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08905928u) goto L_08905928;
    return;
L_08905928:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890593C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905964:
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
L_08905990:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890599C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089059BC:
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
L_089059E4:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089059FC:
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
L_08905A0C:
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
L_08905A28:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905A30:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
L_08905A44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905A60:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905A68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
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
    ctx.gpr[31] = (0x08905A8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x08905A8Cu) goto L_08905A8C;
    return;
L_08905A8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08905AA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08905AA0u) goto L_08905AA0;
    return;
L_08905AA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905AB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905AC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905AE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905AFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905B14:
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
L_08905B2C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905B34:
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
          goto L_08905B7C;
      }
      goto L_08905B68;
    }
L_08905B68:
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08905B98;
      }
      goto L_08905B7C;
    }
L_08905B7C:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[2] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    goto L_08905B98;
L_08905B98:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905BA0:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905BA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905BB8:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905BC0:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[2] = (ctx.gpr[4] ^ 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905BDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[2] = (ctx.gpr[4] ^ 6u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[2] = (ctx.gpr[4] ^ 8u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905C04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[2] = (ctx.gpr[4] ^ 14u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905C18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[2] = (ctx.gpr[4] & ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (ctx.gpr[4] & 496u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] >> 4u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905C3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (ctx.gpr[4] & 512u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905C4C:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 12u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905C70:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (65535u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32767));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 15u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905C98:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (65534u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 17u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905CC0:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905CE4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905CEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
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
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905D48:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (0u | 216u);
        goto L_08905D6C;
    }
    goto L_08905D6C;
L_08905D6C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905D74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (0u | 217u);
        goto L_08905D90;
    }
    goto L_08905D90;
L_08905D90:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905D98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08905DACu);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08905DACu) goto L_08905DAC;
    return;
L_08905DAC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905DB8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3073));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-12289));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905E50:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
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
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
L_08905E94:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
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
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905EB8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905EC0:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(310), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905EC8:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(306), static_cast<std::uint16_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(336), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905EDC:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905EE4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905EEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08905F04u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x08905F04u) goto L_08905F04;
    return;
L_08905F04:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905F10:
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
L_08905F90:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905F98:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905FA0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(474)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905FA8:
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905FB8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905FC0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (~(ctx.gpr[5] | 0u));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[4] & 512u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905FE4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2276)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905FEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089062CC;
      }
      goto L_08906014;
    }
L_08906014:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23096));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x08906028u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 258u, 0x088E29A8u>(ctx, &aot_mem) && ctx.pc == 0x08906028u) goto L_08906028;
    return;
L_08906028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08906044u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08906044u) goto L_08906044;
    return;
L_08906044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    ctx.gpr[18] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(2016));
      if (branch_taken) {
          goto L_0890605C;
      }
      goto L_08906054;
    }
L_08906054:
    ctx.gpr[31] = (0x0890605Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(448));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x0890605Cu) goto L_0890605C;
    return;
L_0890605C:
    ctx.gpr[31] = (0x08906064u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 117u, 0x089086DCu>(ctx, &aot_mem) && ctx.pc == 0x08906064u) goto L_08906064;
    return;
L_08906064:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08906070u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08906070u) goto L_08906070;
    return;
L_08906070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906098;
      }
      goto L_0890607C;
    }
L_0890607C:
    ctx.gpr[31] = (0x08906084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x08906084u) goto L_08906084;
    return;
L_08906084:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08906098u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 746u, 0x08A02EC8u>(ctx, &aot_mem) && ctx.pc == 0x08906098u) goto L_08906098;
    return;
L_08906098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
        goto L_089060B0;
    }
    goto L_089060A4;
L_089060A4:
    ctx.gpr[31] = (0x089060ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089060ACu) goto L_089060AC;
    return;
L_089060AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    goto L_089060B0;
L_089060B0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[31] = (0x089060BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem) && ctx.pc == 0x089060BCu) goto L_089060BC;
    return;
L_089060BC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x089060CCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 422u, 0x0880DD60u>(ctx, &aot_mem) && ctx.pc == 0x089060CCu) goto L_089060CC;
    return;
L_089060CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089060E0;
      }
      goto L_089060D8;
    }
L_089060D8:
    ctx.gpr[31] = (0x089060E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem) && ctx.pc == 0x089060E0u) goto L_089060E0;
    return;
L_089060E0:
    ctx.gpr[31] = (0x089060E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 79u, 0x0890849Cu>(ctx, &aot_mem) && ctx.pc == 0x089060E8u) goto L_089060E8;
    return;
L_089060E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906108;
      }
      goto L_089060FC;
    }
L_089060FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8872)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8872), ctx.gpr[4]);
    goto L_08906108;
L_08906108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906128;
      }
      goto L_0890611C;
    }
L_0890611C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11816)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11816), ctx.gpr[4]);
    goto L_08906128;
L_08906128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[31] = (0x08906134u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 238u, 0x089C8D68u>(ctx, &aot_mem) && ctx.pc == 0x08906134u) goto L_08906134;
    return;
L_08906134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906148;
      }
      goto L_08906140;
    }
L_08906140:
    ctx.gpr[31] = (0x08906148u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1136));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08906148u) goto L_08906148;
    return;
L_08906148:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08906154u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 75u, 0x08910498u>(ctx, &aot_mem) && ctx.pc == 0x08906154u) goto L_08906154;
    return;
L_08906154:
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08906164u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 499u, 0x08A05F3Cu>(ctx, &aot_mem) && ctx.pc == 0x08906164u) goto L_08906164;
    return;
L_08906164:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08906170u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 614u, 0x08A066D4u>(ctx, &aot_mem) && ctx.pc == 0x08906170u) goto L_08906170;
    return;
L_08906170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089061D4;
      }
      goto L_0890617C;
    }
L_0890617C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0890618Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 786u, 0x08863EF0u>(ctx, &aot_mem) && ctx.pc == 0x0890618Cu) goto L_0890618C;
    return;
L_0890618C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08906198u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem) && ctx.pc == 0x08906198u) goto L_08906198;
    return;
L_08906198:
    ctx.gpr[19] = (2239u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(21784));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089061B4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 279u, 0x08861CF0u>(ctx, &aot_mem) && ctx.pc == 0x089061B4u) goto L_089061B4;
    return;
L_089061B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089061D4;
      }
      goto L_089061BC;
    }
L_089061BC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089061D4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x0886565Cu>(ctx, &aot_mem) && ctx.pc == 0x089061D4u) goto L_089061D4;
    return;
L_089061D4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2268));
    ctx.gpr[31] = (0x089061E0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 832u, 0x08887A90u>(ctx, &aot_mem) && ctx.pc == 0x089061E0u) goto L_089061E0;
    return;
L_089061E0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1168));
      if (branch_taken) {
          goto L_08906238;
      }
      goto L_089061E8;
    }
L_089061E8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32440));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2052), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08906234;
      }
      goto L_089061F8;
    }
L_089061F8:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19080));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2052), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2040));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08906234;
      }
      goto L_08906210;
    }
L_08906210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2040)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08906234;
      }
      goto L_0890621C;
    }
L_0890621C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1168));
        goto L_08906238;
    }
    goto L_08906224;
L_08906224:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1168));
        goto L_08906238;
    }
    goto L_0890622C;
L_0890622C:
    ctx.gpr[31] = (0x08906234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08906234u) goto L_08906234;
    return;
L_08906234:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1168));
    goto L_08906238;
L_08906238:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(864));
      if (branch_taken) {
          goto L_08906268;
      }
      goto L_08906240;
    }
L_08906240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(864));
      if (branch_taken) {
          goto L_08906268;
      }
      goto L_08906250;
    }
L_08906250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1232)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(864));
        goto L_08906268;
    }
    goto L_0890625C;
L_0890625C:
    ctx.gpr[31] = (0x08906264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08906264u) goto L_08906264;
    return;
L_08906264:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(864));
    goto L_08906268;
L_08906268:
    ctx.gpr[31] = (0x08906270u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 558u, 0x08A9F8BCu>(ctx, &aot_mem) && ctx.pc == 0x08906270u) goto L_08906270;
    return;
L_08906270:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(496));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089062B0;
      }
      goto L_0890627C;
    }
L_0890627C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(512));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089062B0;
      }
      goto L_08906288;
    }
L_08906288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089062B0;
      }
      goto L_08906298;
    }
L_08906298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(576)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_089062B0;
    }
    goto L_089062A4;
L_089062A4:
    ctx.gpr[31] = (0x089062ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x089062ACu) goto L_089062AC;
    return;
L_089062AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089062B0;
L_089062B0:
    ctx.gpr[31] = (0x089062B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 501u, 0x08A66220u>(ctx, &aot_mem) && ctx.pc == 0x089062B8u) goto L_089062B8;
    return;
L_089062B8:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089062CC;
      }
      goto L_089062C4;
    }
L_089062C4:
    ctx.gpr[31] = (0x089062CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08906308;
L_089062CC:
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
L_089062EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089062FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 427u, 0x08B6A78Cu>(ctx, &aot_mem) && ctx.pc == 0x089062FCu) goto L_089062FC;
    return;
L_089062FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906308:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890631Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 435u, 0x08B6A848u>(ctx, &aot_mem) && ctx.pc == 0x0890631Cu) goto L_0890631C;
    return;
L_0890631C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906328:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08906338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 1147u, 0x08ACFFD0u>(ctx, &aot_mem) && ctx.pc == 0x08906338u) goto L_08906338;
    return;
L_08906338:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906344:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890635Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 1055u, 0x08ACFA70u>(ctx, &aot_mem) && ctx.pc == 0x0890635Cu) goto L_0890635C;
    return;
L_0890635C:
    ctx.gpr[31] = (0x08906364u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 171u, 0x0886D308u>(ctx, &aot_mem) && ctx.pc == 0x08906364u) goto L_08906364;
    return;
L_08906364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08906370u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(700));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 140u, 0x0886CFF8u>(ctx, &aot_mem) && ctx.pc == 0x08906370u) goto L_08906370;
    return;
L_08906370:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24056)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0890639C;
      }
      goto L_08906390;
    }
L_08906390:
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_0890639C;
L_0890639C:
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089063DC;
      }
      goto L_089063B4;
    }
L_089063B4:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089063D0;
      }
      goto L_089063C4;
    }
L_089063C4:
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089063D0;
L_089063D0:
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089063DC;
L_089063DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(776), ctx.gpr[5]);
    ctx.gpr[31] = (0x089063F0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_08906484;
L_089063F0:
    ctx.gpr[31] = (0x089063F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 362u, 0x0890D7C0u>(ctx, &aot_mem) && ctx.pc == 0x089063F8u) goto L_089063F8;
    return;
L_089063F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890640Cu);
    ctx.gpr[7] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x0890640Cu) goto L_0890640C;
    return;
L_0890640C:
    ctx.gpr[31] = (0x08906414u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 416u, 0x089098ECu>(ctx, &aot_mem) && ctx.pc == 0x08906414u) goto L_08906414;
    return;
L_08906414:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906428;
      }
      goto L_0890641C;
    }
L_0890641C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(860), ctx.gpr[4]);
    goto L_08906428;
L_08906428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(792));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906450;
      }
      goto L_08906444;
    }
L_08906444:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08906450u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 653u, 0x0890384Cu>(ctx, &aot_mem) && ctx.pc == 0x08906450u) goto L_08906450;
    return;
L_08906450:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1276));
    ctx.gpr[31] = (0x0890645Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 611u, 0x089034E8u>(ctx, &aot_mem) && ctx.pc == 0x0890645Cu) goto L_0890645C;
    return;
L_0890645C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2272), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2273), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08906470u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 73u, 0x08AD06ACu>(ctx, &aot_mem) && ctx.pc == 0x08906470u) goto L_08906470;
    return;
L_08906470:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906484:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089064ACu);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089064ACu) goto L_089064AC;
    return;
L_089064AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089064EC;
      }
      goto L_089064B4;
    }
L_089064B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1364)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089064EC;
      }
      goto L_089064C0;
    }
L_089064C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27440)));
    ctx.gpr[31] = (0x089064CCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 400u, 0x088716C0u>(ctx, &aot_mem) && ctx.pc == 0x089064CCu) goto L_089064CC;
    return;
L_089064CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089064E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27440)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 400u, 0x088716C0u>(ctx, &aot_mem) && ctx.pc == 0x089064E0u) goto L_089064E0;
    return;
L_089064E0:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089064EC;
      }
      goto L_089064E8;
    }
L_089064E8:
    ctx.gpr[18] = (0u | 1u);
    goto L_089064EC;
L_089064EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7588)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1364), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08906510;
      }
      goto L_08906504;
    }
L_08906504:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(2016));
    ctx.gpr[31] = (0x08906510u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 455u, 0x08AD99CCu>(ctx, &aot_mem) && ctx.pc == 0x08906510u) goto L_08906510;
    return;
L_08906510:
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
L_0890652C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2076)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906534:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1396));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906550:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906558:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[7] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089065A0;
      }
      goto L_08906588;
    }
L_08906588:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[6] = (0u | 2u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
        goto L_089065A8;
    }
    goto L_08906598;
L_08906598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089065B4;
      }
      goto L_089065A0;
    }
L_089065A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089066E0;
      }
      goto L_089065A8;
    }
L_089065A8:
    ctx.gpr[5] = (ctx.gpr[5] & 32u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906618;
      }
      goto L_089065B4;
    }
L_089065B4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089065D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem) && ctx.pc == 0x089065D0u) goto L_089065D0;
    return;
L_089065D0:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906610;
      }
      goto L_089065DC;
    }
L_089065DC:
    ctx.gpr[31] = (0x089065E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089065E4u) goto L_089065E4;
    return;
L_089065E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906608;
      }
      goto L_089065EC;
    }
L_089065EC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (17505u << 16u);
      if (branch_taken) {
          goto L_08906620;
      }
      goto L_08906600;
    }
L_08906600:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089066DC;
      }
      goto L_08906608;
    }
L_08906608:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089066E0;
      }
      goto L_08906610;
    }
L_08906610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089066E0;
      }
      goto L_08906618;
    }
L_08906618:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089066E0;
      }
      goto L_08906620;
    }
L_08906620:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    goto L_0890662C;
L_0890662C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1784)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089066C8;
      }
      goto L_08906638;
    }
L_08906638:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089066C8;
      }
      goto L_08906670;
    }
L_08906670:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089066C8;
      }
      goto L_08906690;
    }
L_08906690:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089066ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 378u, 0x08A420BCu>(ctx, &aot_mem) && ctx.pc == 0x089066ACu) goto L_089066AC;
    return;
L_089066AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089066C8;
      }
      goto L_089066B4;
    }
L_089066B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089066C8;
      }
      goto L_089066C0;
    }
L_089066C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089066E0;
      }
      goto L_089066C8;
    }
L_089066C8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0890662C;
      }
      goto L_089066DC;
    }
L_089066DC:
    ctx.gpr[2] = (0u | 1u);
    goto L_089066E0;
L_089066E0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
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
L_08906704:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890672Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x0890672Cu) goto L_0890672C;
    return;
L_0890672C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890674C;
      }
      goto L_08906744;
    }
L_08906744:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08906750;
      }
      goto L_0890674C;
    }
L_0890674C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08906750;
L_08906750:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890675C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08906780u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08906780u) goto L_08906780;
    return;
L_08906780:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[24] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089067D0;
      }
      goto L_08906788;
    }
L_08906788:
    ctx.gpr[31] = (0x08906790u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08906790u) goto L_08906790;
    return;
L_08906790:
    ctx.gpr[31] = (0x08906798u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 114u, 0x0898C4ECu>(ctx, &aot_mem) && ctx.pc == 0x08906798u) goto L_08906798;
    return;
L_08906798:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089067A8u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x089067A8u) goto L_089067A8;
    return;
L_089067A8:
    ctx.gpr[31] = (0x089067B0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 124u, 0x0898C578u>(ctx, &aot_mem) && ctx.pc == 0x089067B0u) goto L_089067B0;
    return;
L_089067B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089067D8;
      }
      goto L_089067C8;
    }
L_089067C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08906820;
      }
      goto L_089067D0;
    }
L_089067D0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_0890683C;
      }
      goto L_089067D8;
    }
L_089067D8:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089067FC;
      }
      goto L_089067E8;
    }
L_089067E8:
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08906830;
      }
      goto L_089067FC;
    }
L_089067FC:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08906830;
      }
      goto L_0890680C;
    }
L_0890680C:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08906830;
      }
      goto L_08906820;
    }
L_08906820:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x0890682Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x0890682Cu) goto L_0890682C;
    return;
L_0890682C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3224), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08906830;
L_08906830:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3224)));
    ctx.gpr[31] = (0x0890683Cu);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0890683Cu) goto L_0890683C;
    return;
L_0890683C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906858:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08906874u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem) && ctx.pc == 0x08906874u) goto L_08906874;
    return;
L_08906874:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 8u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 70 ? 1u : 0u);
      if (branch_taken) {
          goto L_089068AC;
      }
      goto L_08906880;
    }
L_08906880:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089068AC;
      }
      goto L_08906888;
    }
L_08906888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089068A4;
      }
      goto L_08906894;
    }
L_08906894:
    ctx.gpr[31] = (0x0890689Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0890689Cu) goto L_0890689C;
    return;
L_0890689C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089068B4;
      }
      goto L_089068A4;
    }
L_089068A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089068B8;
      }
      goto L_089068AC;
    }
L_089068AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089068B8;
      }
      goto L_089068B4;
    }
L_089068B4:
    ctx.gpr[2] = (0u | 0u);
    goto L_089068B8;
L_089068B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089068C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0890694C;
      }
      goto L_0890693C;
    }
L_0890693C:
    ctx.gpr[31] = (0x08906944u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 629u, 0x0891283Cu>(ctx, &aot_mem) && ctx.pc == 0x08906944u) goto L_08906944;
    return;
L_08906944:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906988;
      }
      goto L_0890694C;
    }
L_0890694C:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17608u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08906988;
      }
      goto L_08906970;
    }
L_08906970:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08906980u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_089069AC;
L_08906980:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890698C;
      }
      goto L_08906988;
    }
L_08906988:
    ctx.gpr[2] = (0u | 0u);
    goto L_0890698C;
L_0890698C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089069AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08906A78;
      }
      goto L_08906A1C;
    }
L_08906A1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08906A5Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem) && ctx.pc == 0x08906A5Cu) goto L_08906A5C;
    return;
L_08906A5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906AD8;
      }
      goto L_08906A64;
    }
L_08906A64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08906AD8;
      }
      goto L_08906A70;
    }
L_08906A70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08906ADC;
      }
      goto L_08906A78;
    }
L_08906A78:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08906AB8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem) && ctx.pc == 0x08906AB8u) goto L_08906AB8;
    return;
L_08906AB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906AD8;
      }
      goto L_08906AC0;
    }
L_08906AC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906AD8;
      }
      goto L_08906AD0;
    }
L_08906AD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08906ADC;
      }
      goto L_08906AD8;
    }
L_08906AD8:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08906ADC;
L_08906ADC:
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
L_08906AF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08906CBC;
      }
      goto L_08906B24;
    }
L_08906B24:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (ctx.gpr[19] << 2u);
    ctx.gpr[8] = (ctx.gpr[17] + ctx.gpr[8]);
    ctx.gpr[2] = (ctx.gpr[5] << 2u);
    ctx.gpr[2] = (ctx.gpr[17] + ctx.gpr[2]);
    goto L_08906B9C;
L_08906B9C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    goto L_08906BA4;
L_08906BA4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906C00;
      }
      goto L_08906BAC;
    }
L_08906BAC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08906C00;
      }
      goto L_08906BF0;
    }
L_08906BF0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08906BA4;
      }
      goto L_08906C00;
    }
L_08906C00:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906C5C;
      }
      goto L_08906C08;
    }
L_08906C08:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08906C5C;
      }
      goto L_08906C4C;
    }
L_08906C4C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08906C00;
      }
      goto L_08906C5C;
    }
L_08906C5C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906C8C;
      }
      goto L_08906C68;
    }
L_08906C68:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    goto L_08906C8C;
L_08906C8C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906B9C;
      }
      goto L_08906C94;
    }
L_08906C94:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08906CA8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08906AF4;
L_08906CA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08906CBCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08906AF4;
L_08906CBC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906CD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08906D20;
      }
      goto L_08906D08;
    }
L_08906D08:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[22])) && ctx.fpr[13] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08906D20;
      }
      goto L_08906D18;
    }
L_08906D18:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08906D2C;
      }
      goto L_08906D20;
    }
L_08906D20:
    ctx.gpr[31] = (0x08906D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08906D28u) goto L_08906D28;
    return;
L_08906D28:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08906D2C;
L_08906D2C:
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (16201u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16329u << 16u);
      if (branch_taken) {
          goto L_08906D74;
      }
      goto L_08906D50;
    }
L_08906D50:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08906D5C;
L_08906D5C:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08906D5C;
      }
      goto L_08906D70;
    }
L_08906D70:
    ctx.gpr[4] = (16329u << 16u);
    goto L_08906D74;
L_08906D74:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906DA4;
      }
      goto L_08906D94;
    }
L_08906D94:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906D94;
      }
      goto L_08906DA4;
    }
L_08906DA4:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906DBC:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2256)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906DC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08906DD8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08906CD8;
L_08906DD8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906DE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 41 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906E24;
      }
      goto L_08906DF4;
    }
L_08906DF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    ctx.gpr[6] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 8192u);
      if (branch_taken) {
          goto L_08906E24;
      }
      goto L_08906E04;
    }
L_08906E04:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906E24;
      }
      goto L_08906E0C;
    }
L_08906E0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08906E2C;
      }
      goto L_08906E24;
    }
L_08906E24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08906E30;
      }
      goto L_08906E2C;
    }
L_08906E2C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08906E30;
L_08906E30:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906E50;
      }
      goto L_08906E48;
    }
L_08906E48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08906E54;
      }
      goto L_08906E50;
    }
L_08906E50:
    ctx.gpr[2] = (0u | 1u);
    goto L_08906E54;
L_08906E54:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906E5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_08906E9C;
      }
      goto L_08906E6C;
    }
L_08906E6C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 16u);
      if (branch_taken) {
          goto L_08906E84;
      }
      goto L_08906E74;
    }
L_08906E74:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08906ECC;
      }
      goto L_08906E7C;
    }
L_08906E7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08906ED0;
      }
      goto L_08906E84;
    }
L_08906E84:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08906E7C;
      }
      goto L_08906E8C;
    }
L_08906E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08906ED0;
      }
      goto L_08906E9C;
    }
L_08906E9C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 37 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 55u);
      if (branch_taken) {
          goto L_08906EC4;
      }
      goto L_08906EA8;
    }
L_08906EA8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 26 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 33 ? 1u : 0u);
      if (branch_taken) {
          goto L_08906ECC;
      }
      goto L_08906EB4;
    }
L_08906EB4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906E7C;
      }
      goto L_08906EBC;
    }
L_08906EBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08906ECC;
      }
      goto L_08906EC4;
    }
L_08906EC4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906E7C;
      }
      goto L_08906ECC;
    }
L_08906ECC:
    ctx.gpr[2] = (0u | 1u);
    goto L_08906ED0;
L_08906ED0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906ED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 41 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 22u);
      if (branch_taken) {
          goto L_08906F20;
      }
      goto L_08906EE8;
    }
L_08906EE8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_08906F20;
      }
      goto L_08906EF0;
    }
L_08906EF0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 17u);
      if (branch_taken) {
          goto L_08906F20;
      }
      goto L_08906EF8;
    }
L_08906EF8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 31u);
      if (branch_taken) {
          goto L_08906F20;
      }
      goto L_08906F00;
    }
L_08906F00:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_08906F20;
      }
      goto L_08906F08;
    }
L_08906F08:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08906F20;
      }
      goto L_08906F10;
    }
L_08906F10:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 39u);
      if (branch_taken) {
          goto L_08906F20;
      }
      goto L_08906F18;
    }
L_08906F18:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906F28;
      }
      goto L_08906F20;
    }
L_08906F20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08906F2C;
      }
      goto L_08906F28;
    }
L_08906F28:
    ctx.gpr[2] = (0u | 1u);
    goto L_08906F2C;
L_08906F2C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_08906F6C;
      }
      goto L_08906F44;
    }
L_08906F44:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 65u);
      if (branch_taken) {
          goto L_08906F6C;
      }
      goto L_08906F4C;
    }
L_08906F4C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 61u);
      if (branch_taken) {
          goto L_08906F6C;
      }
      goto L_08906F54;
    }
L_08906F54:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 59u);
      if (branch_taken) {
          goto L_08906F6C;
      }
      goto L_08906F5C;
    }
L_08906F5C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 62u);
      if (branch_taken) {
          goto L_08906F6C;
      }
      goto L_08906F64;
    }
L_08906F64:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906F74;
      }
      goto L_08906F6C;
    }
L_08906F6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08906F78;
      }
      goto L_08906F74;
    }
L_08906F74:
    ctx.gpr[2] = (0u | 1u);
    goto L_08906F78;
L_08906F78:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906F80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08906F9C;
      }
      goto L_08906F90;
    }
L_08906F90:
    ctx.gpr[6] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08906FA0;
      }
      goto L_08906F9C;
    }
L_08906F9C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08906FA0;
L_08906FA0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906FA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_0890700C;
      }
      goto L_08906FB8;
    }
L_08906FB8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_0890700C;
      }
      goto L_08906FC0;
    }
L_08906FC0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890700C;
      }
      goto L_08906FC8;
    }
L_08906FC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 22u);
      if (branch_taken) {
          goto L_0890700C;
      }
      goto L_08906FD0;
    }
L_08906FD0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_0890700C;
      }
      goto L_08906FD8;
    }
L_08906FD8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 17u);
      if (branch_taken) {
          goto L_0890700C;
      }
      goto L_08906FE0;
    }
L_08906FE0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (0u | 43u);
      if (branch_taken) {
          goto L_0890700C;
      }
      goto L_08906FE8;
    }
L_08906FE8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08906FFC;
      }
      goto L_08906FF0;
    }
L_08906FF0:
    ctx.gpr[6] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08907004;
      }
      goto L_08906FFC;
    }
L_08906FFC:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08907004;
L_08907004:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907014;
      }
      goto L_0890700C;
    }
L_0890700C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08907018;
      }
      goto L_08907014;
    }
L_08907014:
    ctx.gpr[2] = (0u | 0u);
    goto L_08907018;
L_08907018:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907020:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907054;
      }
      goto L_0890702C;
    }
L_0890702C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(852)));
    ctx.gpr[8] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08907054;
      }
      goto L_0890703C;
    }
L_0890703C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[8] = (0u | 21u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
        goto L_0890705C;
    }
    goto L_0890704C;
L_0890704C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907068;
      }
      goto L_08907054;
    }
L_08907054:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907114;
      }
      goto L_0890705C;
    }
L_0890705C:
    ctx.gpr[8] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    ctx.gpr[4] = (15841u << 16u);
      if (branch_taken) {
          goto L_08907090;
      }
      goto L_08907068;
    }
L_08907068:
    ctx.gpr[4] = (ctx.gpr[7] ^ 20u);
    ctx.gpr[7] = (ctx.gpr[7] ^ 5u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089070C0;
      }
      goto L_08907088;
    }
L_08907088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907114;
      }
      goto L_08907090;
    }
L_08907090:
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08907114;
      }
      goto L_089070C0;
    }
L_089070C0:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13256));
    goto L_089070D0;
L_089070D0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_089070F4;
    }
    goto L_089070DC;
L_089070DC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089070D0;
      }
      goto L_089070EC;
    }
L_089070EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907114;
      }
      goto L_089070F4;
    }
L_089070F4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08907114;
      }
      goto L_08907114;
    }
L_08907114:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890711C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2244)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907124:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2196)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890712C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907134:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890713C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08907194;
      }
      goto L_08907160;
    }
L_08907160:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (65528u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08907194;
L_08907194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089072B8;
      }
      goto L_089071A0;
    }
L_089071A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(564)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089072B8;
      }
      goto L_089071B0;
    }
L_089071B0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089072B8;
      }
      goto L_089071BC;
    }
L_089071BC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089071EC;
      }
      goto L_089071CC;
    }
L_089071CC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907214;
      }
      goto L_089071D8;
    }
L_089071D8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907210;
      }
      goto L_089071E4;
    }
L_089071E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08907214;
      }
      goto L_089071EC;
    }
L_089071EC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_08907208;
      }
      goto L_089071F8;
    }
L_089071F8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907214;
      }
      goto L_08907200;
    }
L_08907200:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08907214;
      }
      goto L_08907208;
    }
L_08907208:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08907214;
      }
      goto L_08907210;
    }
L_08907210:
    ctx.gpr[4] = (0u | 8u);
    goto L_08907214;
L_08907214:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(564)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089072B8;
      }
      goto L_08907228;
    }
L_08907228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089072B8;
      }
      goto L_08907238;
    }
L_08907238:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08907250u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x08907250u) goto L_08907250;
    return;
L_08907250:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089072B8;
      }
      goto L_089072A4;
    }
L_089072A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089072B0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089072B0u) goto L_089072B0;
    return;
L_089072B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089072F8;
      }
      goto L_089072B8;
    }
L_089072B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089072E4;
      }
      goto L_089072C8;
    }
L_089072C8:
    ctx.gpr[31] = (0x089072D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089072D0u) goto L_089072D0;
    return;
L_089072D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089072E4;
      }
      goto L_089072D8;
    }
L_089072D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089072E4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089072E4u) goto L_089072E4;
    return;
L_089072E4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1940), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089072F8;
L_089072F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890730C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1728)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1940), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907344;
      }
      goto L_0890733C;
    }
L_0890733C:
    ctx.gpr[31] = (0x08907344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08907344u) goto L_08907344;
    return;
L_08907344:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[2] = (ctx.gpr[4] & 256u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907360:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08907398;
      }
      goto L_08907394;
    }
L_08907394:
    ctx.gpr[17] = (0u | 1u);
    goto L_08907398;
L_08907398:
    ctx.gpr[7] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089073B0;
      }
      goto L_089073A4;
    }
L_089073A4:
    ctx.gpr[7] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_089073B8;
      }
      goto L_089073B0;
    }
L_089073B0:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    goto L_089073B8;
L_089073B8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089073C4;
      }
      goto L_089073C0;
    }
L_089073C0:
    ctx.gpr[17] = (0u | 1u);
    goto L_089073C4;
L_089073C4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089073D4u);
    ctx.gpr[6] = (0u | 152u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x089073D4u) goto L_089073D4;
    return;
L_089073D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089073E0;
      }
      goto L_089073DC;
    }
L_089073DC:
    ctx.gpr[17] = (0u | 1u);
    goto L_089073E0;
L_089073E0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089073F0u);
    ctx.gpr[6] = (0u | 142u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x089073F0u) goto L_089073F0;
    return;
L_089073F0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08907410;
      }
      goto L_089073F8;
    }
L_089073F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890743C;
      }
      goto L_08907400;
    }
L_08907400:
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0890743C;
      }
      goto L_08907410;
    }
L_08907410:
    ctx.gpr[5] = (16512u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08907438;
      }
      goto L_0890741C;
    }
L_0890741C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08907430u);
    ctx.gpr[7] = (0u | 142u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x08907430u) goto L_08907430;
    return;
L_08907430:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890743C;
      }
      goto L_08907438;
    }
L_08907438:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890743C;
L_0890743C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (0u | 46u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08907468u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem) && ctx.pc == 0x08907468u) goto L_08907468;
    return;
L_08907468:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890747C:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2260)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907484:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2192)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890748C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089074E0;
      }
      goto L_089074A8;
    }
L_089074A8:
    ctx.gpr[31] = (0x089074B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 648u, 0x08912938u>(ctx, &aot_mem) && ctx.pc == 0x089074B0u) goto L_089074B0;
    return;
L_089074B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089074D8;
      }
      goto L_089074B8;
    }
L_089074B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 51 ? 1u : 0u);
      if (branch_taken) {
          goto L_089074E8;
      }
      goto L_089074D0;
    }
L_089074D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089074F0;
      }
      goto L_089074D8;
    }
L_089074D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907868;
      }
      goto L_089074E0;
    }
L_089074E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907868;
      }
      goto L_089074E8;
    }
L_089074E8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890750C;
      }
      goto L_089074F0;
    }
L_089074F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907514;
      }
      goto L_08907504;
    }
L_08907504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907868;
      }
      goto L_0890750C;
    }
L_0890750C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907868;
      }
      goto L_08907514;
    }
L_08907514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907868;
      }
      goto L_08907524;
    }
L_08907524:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907868;
      }
      goto L_0890752C;
    }
L_0890752C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907868;
      }
      goto L_08907538;
    }
L_08907538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907868;
      }
      goto L_08907548;
    }
L_08907548:
    ctx.gpr[31] = (0x08907550u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x08907550u) goto L_08907550;
    return;
L_08907550:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08907868;
      }
      goto L_08907558;
    }
L_08907558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08907868;
      }
      goto L_08907564;
    }
L_08907564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24276)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907868;
      }
      goto L_0890759C;
    }
L_0890759C:
    ctx.fpr[17] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[4] = (15502u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64012u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (16288u << 16u);
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0890767C;
      }
      goto L_08907660;
    }
L_08907660:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_089076B8;
      }
      goto L_0890767C;
    }
L_0890767C:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_089076B8;
L_089076B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = ctx.fpr[19] - ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = ctx.fpr[17] + ctx.fpr[18];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08907868;
      }
      goto L_08907774;
    }
L_08907774:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08907780u);
    ctx.gpr[6] = (0u | 0u);
    goto L_089068C8;
L_08907780:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907868;
      }
      goto L_08907788;
    }
L_08907788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (16320u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] >> 22u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1000u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[6] = (16201u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[6] = (ctx.gpr[6] & 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08907868;
      }
      goto L_089077FC;
    }
L_089077FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08907814u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x08907814u) goto L_08907814;
    return;
L_08907814:
    ctx.gpr[31] = (0x0890781Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0890781Cu) goto L_0890781C;
    return;
L_0890781C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20292)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20296)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08907830u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08907830u) goto L_08907830;
    return;
L_08907830:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20284)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20288)));
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
    ctx.gpr[31] = (0x08907868u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x08907868u) goto L_08907868;
    return;
L_08907868:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890787C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890789Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 886u, 0x0890FF5Cu>(ctx, &aot_mem) && ctx.pc == 0x0890789Cu) goto L_0890789C;
    return;
L_0890789C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089078BC;
      }
      goto L_089078A4;
    }
L_089078A4:
    ctx.gpr[31] = (0x089078ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 886u, 0x0890FF5Cu>(ctx, &aot_mem) && ctx.pc == 0x089078ACu) goto L_089078AC;
    return;
L_089078AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907918;
      }
      goto L_089078BC;
    }
L_089078BC:
    ctx.gpr[31] = (0x089078C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 133u, 0x089107ECu>(ctx, &aot_mem) && ctx.pc == 0x089078C4u) goto L_089078C4;
    return;
L_089078C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089078F4;
      }
      goto L_089078CC;
    }
L_089078CC:
    ctx.gpr[31] = (0x089078D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 152u, 0x089108E8u>(ctx, &aot_mem) && ctx.pc == 0x089078D4u) goto L_089078D4;
    return;
L_089078D4:
    ctx.gpr[31] = (0x089078DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 145u, 0x08910870u>(ctx, &aot_mem) && ctx.pc == 0x089078DCu) goto L_089078DC;
    return;
L_089078DC:
    ctx.gpr[31] = (0x089078E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 461u, 0x08916ABCu>(ctx, &aot_mem) && ctx.pc == 0x089078E4u) goto L_089078E4;
    return;
L_089078E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890793C;
      }
      goto L_089078EC;
    }
L_089078EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089079B0;
      }
      goto L_089078F4;
    }
L_089078F4:
    ctx.gpr[31] = (0x089078FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x089078FCu) goto L_089078FC;
    return;
L_089078FC:
    ctx.gpr[31] = (0x08907904u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem) && ctx.pc == 0x08907904u) goto L_08907904;
    return;
L_08907904:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08907910u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 885u, 0x0890FF54u>(ctx, &aot_mem) && ctx.pc == 0x08907910u) goto L_08907910;
    return;
L_08907910:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089079B0;
      }
      goto L_08907918;
    }
L_08907918:
    ctx.gpr[31] = (0x08907920u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08907920u) goto L_08907920;
    return;
L_08907920:
    ctx.gpr[31] = (0x08907928u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem) && ctx.pc == 0x08907928u) goto L_08907928;
    return;
L_08907928:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08907934u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 885u, 0x0890FF54u>(ctx, &aot_mem) && ctx.pc == 0x08907934u) goto L_08907934;
    return;
L_08907934:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089079B0;
      }
      goto L_0890793C;
    }
L_0890793C:
    ctx.gpr[31] = (0x08907944u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 133u, 0x089107ECu>(ctx, &aot_mem) && ctx.pc == 0x08907944u) goto L_08907944;
    return;
L_08907944:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089079B0;
      }
      goto L_0890794C;
    }
L_0890794C:
    ctx.gpr[31] = (0x08907954u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08907954u) goto L_08907954;
    return;
L_08907954:
    ctx.gpr[31] = (0x0890795Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem) && ctx.pc == 0x0890795Cu) goto L_0890795C;
    return;
L_0890795C:
    ctx.gpr[31] = (0x08907964u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 886u, 0x0890FF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08907964u) goto L_08907964;
    return;
L_08907964:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08907978u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem) && ctx.pc == 0x08907978u) goto L_08907978;
    return;
L_08907978:
    ctx.gpr[31] = (0x08907980u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 129u, 0x089107C4u>(ctx, &aot_mem) && ctx.pc == 0x08907980u) goto L_08907980;
    return;
L_08907980:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x08907990u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem) && ctx.pc == 0x08907990u) goto L_08907990;
    return;
L_08907990:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1136)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089079B0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 152u, 0x0891CA20u>(ctx, &aot_mem) && ctx.pc == 0x089079B0u) goto L_089079B0;
    return;
L_089079B0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_089079CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1900)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08907A44;
      }
      goto L_089079E4;
    }
L_089079E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089079F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 69u, 0x08910440u>(ctx, &aot_mem) && ctx.pc == 0x089079F0u) goto L_089079F0;
    return;
L_089079F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(692), 0u);
    ctx.gpr[31] = (0x089079FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 31u, 0x0891826Cu>(ctx, &aot_mem) && ctx.pc == 0x089079FCu) goto L_089079FC;
    return;
L_089079FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1900), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08907A40;
      }
      goto L_08907A04;
    }
L_08907A04:
    ctx.gpr[31] = (0x08907A0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x08907A0Cu) goto L_08907A0C;
    return;
L_08907A0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907A2C;
      }
      goto L_08907A14;
    }
L_08907A14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(692)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907A2C;
      }
      goto L_08907A20;
    }
L_08907A20:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1900), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1904), 0u);
      if (branch_taken) {
          goto L_08907A44;
      }
      goto L_08907A2C;
    }
L_08907A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1908)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1904), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08907A44;
      }
      goto L_08907A40;
    }
L_08907A40:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1904), 0u);
    goto L_08907A44;
L_08907A44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907A54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08907A68u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x08907A68u) goto L_08907A68;
    return;
L_08907A68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907A98;
      }
      goto L_08907A70;
    }
L_08907A70:
    ctx.gpr[31] = (0x08907A78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x08907A78u) goto L_08907A78;
    return;
L_08907A78:
    ctx.gpr[31] = (0x08907A80u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 1019u, 0x08ACF8F4u>(ctx, &aot_mem) && ctx.pc == 0x08907A80u) goto L_08907A80;
    return;
L_08907A80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907A98;
      }
      goto L_08907A88;
    }
L_08907A88:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1900), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08907A98u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 69u, 0x08910440u>(ctx, &aot_mem) && ctx.pc == 0x08907A98u) goto L_08907A98;
    return;
L_08907A98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(692)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907ABC;
      }
      goto L_08907AA4;
    }
L_08907AA4:
    ctx.gpr[31] = (0x08907AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 1019u, 0x08ACF8F4u>(ctx, &aot_mem) && ctx.pc == 0x08907AACu) goto L_08907AAC;
    return;
L_08907AAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907ABC;
      }
      goto L_08907AB4;
    }
L_08907AB4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1900), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(692), 0u);
    goto L_08907ABC;
L_08907ABC:
    ctx.gpr[31] = (0x08907AC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x08907AC4u) goto L_08907AC4;
    return;
L_08907AC4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907ADC;
      }
      goto L_08907ACC;
    }
L_08907ACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(692)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907ADC;
      }
      goto L_08907AD8;
    }
L_08907AD8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1900), 0u);
    goto L_08907ADC;
L_08907ADC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907AEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08907B00u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08906DE4;
L_08907B00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907B10;
      }
      goto L_08907B08;
    }
L_08907B08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907B44;
      }
      goto L_08907B10;
    }
L_08907B10:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08907B30u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x08907B30u) goto L_08907B30;
    return;
L_08907B30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08907B44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08907B44u) goto L_08907B44;
    return;
L_08907B44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907B54:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907B5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08907B94;
      }
      goto L_08907B8C;
    }
L_08907B8C:
    ctx.gpr[31] = (0x08907B94u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2076));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08907B94u) goto L_08907B94;
    return;
L_08907B94:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2076), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08907BA8;
      }
      goto L_08907B9C;
    }
L_08907B9C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2076));
    ctx.gpr[31] = (0x08907BA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08907BA8u) goto L_08907BA8;
    return;
L_08907BA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2237u << 16u);
      if (branch_taken) {
          goto L_08907D94;
      }
      goto L_08907BB4;
    }
L_08907BB4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08907C04;
      }
      goto L_08907BD0;
    }
L_08907BD0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_08907BD8;
L_08907BD8:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
        goto L_08907BF8;
    }
    goto L_08907BE8;
L_08907BE8:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08907BFC;
      }
      goto L_08907BF8;
    }
L_08907BF8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08907BFC;
L_08907BFC:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_08907BD8;
    }
    goto L_08907C04;
L_08907C04:
    if (ctx.gpr[6] == ctx.gpr[5]) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08907C28;
    }
    goto L_08907C0C;
L_08907C0C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
        goto L_08907C2C;
    }
    goto L_08907C24;
L_08907C24:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08907C28;
L_08907C28:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_08907C2C;
L_08907C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
        goto L_08907C64;
    }
    goto L_08907C5C;
L_08907C5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08907C64;
      }
      goto L_08907C64;
    }
L_08907C64:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907CA4;
      }
      goto L_08907C6C;
    }
L_08907C6C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907C98;
      }
      goto L_08907C74;
    }
L_08907C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 14u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907CAC;
      }
      goto L_08907C90;
    }
L_08907C90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907D94;
      }
      goto L_08907C98;
    }
L_08907C98:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1928), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08907D94;
      }
      goto L_08907CA4;
    }
L_08907CA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907D94;
      }
      goto L_08907CAC;
    }
L_08907CAC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08907CB4;
L_08907CB4:
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
        goto L_08907CCC;
    }
    goto L_08907CBC;
L_08907CBC:
    ctx.gpr[31] = (0x08907CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08907CC4u) goto L_08907CC4;
    return;
L_08907CC4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    goto L_08907CCC;
L_08907CCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907D94;
      }
      goto L_08907CF4;
    }
L_08907CF4:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08907D0C;
      }
      goto L_08907CFC;
    }
L_08907CFC:
    ctx.gpr[31] = (0x08907D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08907D04u) goto L_08907D04;
    return;
L_08907D04:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
    goto L_08907D0C;
L_08907D0C:
    ctx.gpr[31] = (0x08907D14u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 561u, 0x08A53098u>(ctx, &aot_mem) && ctx.pc == 0x08907D14u) goto L_08907D14;
    return;
L_08907D14:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08907D24u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem) && ctx.pc == 0x08907D24u) goto L_08907D24;
    return;
L_08907D24:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907D5C;
      }
      goto L_08907D30;
    }
L_08907D30:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08907D40u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08907D40u) goto L_08907D40;
    return;
L_08907D40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907D5C;
      }
      goto L_08907D48;
    }
L_08907D48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08907D64;
      }
      goto L_08907D5C;
    }
L_08907D5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
      if (branch_taken) {
          goto L_08907D8C;
      }
      goto L_08907D64;
    }
L_08907D64:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08907D78u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08907D78u) goto L_08907D78;
    return;
L_08907D78:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08907D88;
      }
      goto L_08907D80;
    }
L_08907D80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1928), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08907D88;
L_08907D88:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08907D8C;
L_08907D8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08907CB4;
      }
      goto L_08907D94;
    }
L_08907D94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907DB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08907DE0;
      }
      goto L_08907DD8;
    }
L_08907DD8:
    ctx.gpr[31] = (0x08907DE0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2080));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08907DE0u) goto L_08907DE0;
    return;
L_08907DE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2080), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08907DFC;
      }
      goto L_08907DEC;
    }
L_08907DEC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907DFC;
      }
      goto L_08907DF4;
    }
L_08907DF4:
    ctx.gpr[31] = (0x08907DFCu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2080));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08907DFCu) goto L_08907DFC;
    return;
L_08907DFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907E10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907E38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08907E78;
      }
      goto L_08907E60;
    }
L_08907E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08907E80;
      }
      goto L_08907E70;
    }
L_08907E70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907E90;
      }
      goto L_08907E78;
    }
L_08907E78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907F80;
      }
      goto L_08907E80;
    }
L_08907E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08907E90;
L_08907E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08907EA8;
      }
      goto L_08907E9C;
    }
L_08907E9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08907EA8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08907F9C;
L_08907EA8:
    ctx.gpr[31] = (0x08907EB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x08907EB0u) goto L_08907EB0;
    return;
L_08907EB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907ED0;
      }
      goto L_08907EB8;
    }
L_08907EB8:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20280));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08907EC8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08907EC8u) goto L_08907EC8;
    return;
L_08907EC8:
    ctx.gpr[31] = (0x08907ED0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08907ED0u) goto L_08907ED0;
    return;
L_08907ED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907F0C;
      }
      goto L_08907EDC;
    }
L_08907EDC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13184));
    goto L_08907EE8;
L_08907EE8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08907EF8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08907E10;
L_08907EF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08907EE8;
      }
      goto L_08907F0C;
    }
L_08907F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08907F24u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08907F24u) goto L_08907F24;
    return;
L_08907F24:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(772), ctx.gpr[2]);
    ctx.gpr[31] = (0x08907F30u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 458u, 0x088DF74Cu>(ctx, &aot_mem) && ctx.pc == 0x08907F30u) goto L_08907F30;
    return;
L_08907F30:
    ctx.gpr[31] = (0x08907F38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08907F38u) goto L_08907F38;
    return;
L_08907F38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 362u);
      if (branch_taken) {
          goto L_08907F80;
      }
      goto L_08907F40;
    }
L_08907F40:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08907F80;
      }
      goto L_08907F48;
    }
L_08907F48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (0u | 366u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08907F64;
      }
      goto L_08907F5C;
    }
L_08907F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1464)));
    goto L_08907F64;
L_08907F64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08907F7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08907F7Cu) goto L_08907F7C;
    return;
L_08907F7C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3240), ctx.gpr[2]);
    goto L_08907F80;
L_08907F80:
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
L_08907F9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 6u, 0x08908028u>(ctx, &aot_mem); return;
      }
      goto L_08907FC0;
    }
L_08907FC0:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 1u, 0x08908000u>(ctx, &aot_mem); return;
      }
      goto L_08907FCC;
    }
L_08907FCC:
    ctx.gpr[31] = (0x08907FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 180u, 0x08945288u>(ctx, &aot_mem) && ctx.pc == 0x08907FD4u) goto L_08907FD4;
    return;
L_08907FD4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08907FF8;
      }
      goto L_08907FE8;
    }
L_08907FE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08907FF8;
L_08907FF8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 6u, 0x08908028u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 1u, 0x08908000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0064(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0064_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_64(Runtime &runtime) {
    runtime.register_generated_unit(64u, 0x08904000u, 16384u, &recomp_unit_0064, &recomp_unit_0064_entry);
    runtime.register_function(0x08904000u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904018u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904024u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904038u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904048u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904050u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904058u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904064u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890406Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904070u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890409Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089040ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089040C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089040C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089040D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089040DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089040F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089040F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890410Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904114u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904128u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904138u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904140u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904154u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890415Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890417Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089041ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089041B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089041C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089041D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089041F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089041FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904204u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890420Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904214u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904228u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890422Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904230u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904238u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890423Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904258u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904270u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904294u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904304u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890430Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904314u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890431Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904324u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890432Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904334u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890433Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904340u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904348u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904354u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890435Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904374u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890437Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904384u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890439Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904408u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890441Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904434u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904444u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904488u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089044A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089044B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089044BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089044C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089044F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089044FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890450Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904518u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890452Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904534u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890453Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904544u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904554u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890455Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904564u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904584u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890458Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890459Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890460Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904624u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904634u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904640u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890464Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904654u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904664u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890466Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904674u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904694u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890469Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089046ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089046B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089046C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089046D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089046E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089046E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089046F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089046FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890470Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890471Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904734u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904738u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904760u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904768u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890477Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904784u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890478Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904798u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089047A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089047B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089047C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904818u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890482Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904848u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904858u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890486Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890488Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904898u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089048A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089048B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089048BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089048D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904904u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904924u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904934u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904938u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904940u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904964u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904974u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904984u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904988u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904990u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089049B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089049C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089049D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089049DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089049E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A28u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A3Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A58u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A7Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A84u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AC0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904ACCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AD4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AE8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B04u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B3Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B54u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B8Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BC0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C40u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C84u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CCCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CD4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D90u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DC0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E84u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904EECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F04u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F14u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F54u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FF0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905018u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905034u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905040u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905058u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905074u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905090u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905104u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890510Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905128u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905140u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890514Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905170u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890517Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905188u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890518Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905200u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905208u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905210u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905218u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905220u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905228u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890522Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905230u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905244u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905254u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890525Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905268u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890527Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905288u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905304u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905330u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905344u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905348u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905354u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905378u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905380u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905388u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905390u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905404u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890540Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905414u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905418u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905420u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890542Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905438u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905444u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890544Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905454u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890545Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905460u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905488u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890549Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905504u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890550Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905520u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890553Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905548u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905564u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890557Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905594u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890559Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089055B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089055F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089055FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890562Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905650u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905684u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089056B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089056BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089056C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089056D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089056F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905710u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890572Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905744u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905770u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890577Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905784u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905790u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089057B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089057D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089057ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905804u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905824u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890584Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905860u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890587Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905890u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905898u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089058A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089058ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089058F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890590Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905928u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890593Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905964u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905990u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890599Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089059BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089059E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089059FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A28u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A44u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A60u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A68u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A8Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905AA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905AB0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905AC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905AE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905AFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B14u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B2Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B68u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B7Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905BA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905BA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905BB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905BC0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905BC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905BDCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905BF0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C04u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C2Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C3Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C4Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905CC0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905CE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905CECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D90u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E94u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EC0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EDCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F04u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F90u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FC0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FD4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906014u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906028u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906044u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906054u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890605Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906064u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906070u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890607Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906084u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906098u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089060A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089060ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089060B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089060BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089060CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089060D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089060E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089060E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089060FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906108u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890611Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906128u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906134u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906140u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906148u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906154u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906164u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906170u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890617Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890618Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906198u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089061B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089061BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089061D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089061E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089061E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089061F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906210u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890621Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906224u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890622Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906234u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906238u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906240u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906250u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890625Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906264u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906268u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906270u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890627Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906288u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906298u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906308u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890631Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906328u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906338u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906344u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890635Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906364u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906370u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906390u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890639Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089063B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089063C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089063D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089063DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089063F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089063F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890640Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906414u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890641Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906428u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906444u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906450u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890645Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906470u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906484u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906504u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906510u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890652Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906534u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906550u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906558u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906588u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906598u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089065A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089065A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089065B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089065D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089065DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089065E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089065ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906600u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906608u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906610u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906618u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906620u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890662Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906638u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906670u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906690u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089066ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089066B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089066C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089066C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089066DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089066E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906704u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890672Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906744u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890674Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906750u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890675Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906780u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906788u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906790u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906798u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890680Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906820u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890682Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906830u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890683Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906858u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906874u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906880u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906888u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906894u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890689Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089068A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089068ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089068B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089068B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089068C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890693Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906944u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890694Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906970u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906980u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906988u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890698Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089069ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A1Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A78u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906AB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906AC0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906AD0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906AD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906ADCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906AF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906B24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906B9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906BA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906BACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906BF0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C00u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C08u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C4Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C68u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C8Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C94u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906CA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906CBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906CD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D08u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D28u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D2Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D94u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906DA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906DBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906DC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906DD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906DE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906DF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E04u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E2Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E38u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E54u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E7Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E84u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E8Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906EA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906EB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906EBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906EC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906ECCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906ED0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906ED8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906EE8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906EF0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906EF8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F00u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F08u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F28u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F2Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F44u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F4Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F54u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F78u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F80u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F90u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FC0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FD0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FE8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FF0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907004u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890700Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907014u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907018u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907020u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890702Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890703Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890704Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907054u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890705Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907068u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907088u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907090u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089070C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089070D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089070DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089070ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089070F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907114u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890711Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907124u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890712Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907134u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890713Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907160u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907194u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907200u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907208u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907210u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907214u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907228u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907238u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907250u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089072A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089072B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089072B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089072C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089072D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089072D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089072E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089072F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890730Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890733Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907344u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907350u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907360u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907394u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907398u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907400u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907410u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890741Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907430u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907438u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890743Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907468u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890747Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907484u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890748Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907504u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890750Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907514u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907524u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890752Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907538u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907548u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907550u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907558u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907564u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890759Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907660u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890767Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089076B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907774u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907780u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907788u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089077FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907814u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890781Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907830u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907868u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890787Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890789Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907904u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907910u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907918u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907920u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907928u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907934u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890793Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907944u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890794Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907954u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890795Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907964u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907978u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907980u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907990u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089079B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089079CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089079E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089079F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089079FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A04u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A14u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A2Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A40u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A44u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A54u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A68u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A78u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A80u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A88u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907AA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907AACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907AB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907ABCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907AC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907ACCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907AD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907ADCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907AECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B00u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B08u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B44u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B54u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B8Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B94u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907BA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907BB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907BD0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907BD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907BE8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907BF8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907BFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C04u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C28u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C2Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C90u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CCCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D04u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D14u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D40u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D78u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D80u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D88u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D8Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D94u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907DB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907DD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907DE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907DECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907DF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907DFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E38u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E60u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E78u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E80u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E90u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EB0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907ED0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EDCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EE8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EF8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F38u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F40u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F7Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F80u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907FC0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907FCCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907FD4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907FE8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907FF8u, &recomp_unit_0064, "recomp_unit_0064");
}
} // namespace psprecomp
