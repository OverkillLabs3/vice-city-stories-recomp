#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0174[4096] = {
    1, 2, 0, 0, 0, 3, 4, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24,
    25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 29, 30, 0, 0, 0, 0, 31, 0, 0,
    32, 0, 33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 41, 0, 0, 42,
    0, 43, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 47, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 0, 56, 0, 0, 57, 0, 58, 59, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 68, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 73, 0, 0, 0,
    0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 84, 85, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88,
    0, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 93, 0, 0, 0, 0, 94, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    97, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 102, 103, 0, 104, 0, 0, 105, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 109, 110, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    119, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    129, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140,
    0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 143, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 148, 0, 149,
    150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0,
    0, 162, 0, 163, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0,
    181, 0, 182, 0, 183, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196,
    0, 0, 0, 197, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0,
    0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0,
    0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234,
    0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0,
    0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0,
    0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0,
    0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262,
    0, 263, 0, 0, 0, 264, 0, 265, 0, 0, 266, 0, 267, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 272,
    0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275,
    0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0,
    0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 286, 0, 287, 0, 0, 288, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0,
    0, 0, 291, 0, 0, 0, 292, 0, 293, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 298, 0, 299, 0,
    300, 0, 301, 0, 0, 0, 0, 302, 0, 303, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 307, 0, 308, 0, 0, 309, 0, 0, 0,
    0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 313, 0, 0, 314, 0, 0, 0, 315, 0, 316, 0, 0, 317, 0, 318,
    0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 323, 0, 0, 0, 0, 324, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 327,
    0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 333, 0, 0,
    0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0,
    0, 0, 348, 0, 0, 0, 349, 0, 350, 0, 351, 0, 352, 0, 353, 0, 354, 0, 355, 0, 0, 356, 0, 357, 0, 0, 0, 358, 359, 0, 0, 0,
    360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0,
    0, 0, 371, 372, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0,
    0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0,
    385, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0,
    391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 398,
    0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 405, 0, 0, 406,
    0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0,
    0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 420, 0, 0, 421, 422, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0,
    0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0,
    0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0,
    0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 440,
    0, 441, 0, 0, 442, 0, 443, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 448, 0, 0,
    0, 0, 0, 0, 0, 0, 449, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 459,
    0, 460, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0,
    0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 473,
    0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0,
    0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0,
    0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0,
    494, 0, 0, 0, 495, 0, 496, 0, 0, 497, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501,
    0, 0, 0, 0, 0, 502, 0, 0, 503, 0, 504, 0, 505, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 507, 0, 508, 509, 0, 0, 0, 0,
    510, 0, 0, 0, 511, 0, 512, 0, 513, 514, 515, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0,
    0, 0, 518, 0, 0, 0, 519, 0, 520, 0, 521, 0, 522, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 525, 0,
    0, 526, 0, 0, 0, 527, 0, 528, 0, 0, 529, 0, 530, 0, 0, 531, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 534,
    0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 539, 0, 0, 0, 0, 0,
    0, 0, 540, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0, 547,
    0, 0, 0, 548, 0, 0, 0, 549, 0, 550, 0, 551, 0, 552, 0, 0, 553, 0, 0, 554, 555, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0,
    0, 0, 0, 557, 0, 0, 0, 558, 0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 562,
    0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 0, 568, 0, 0, 0, 569, 0,
    0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 575, 0, 576, 0,
    577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 582, 0, 583, 0, 584, 0, 0, 585, 586,
    0, 587, 0, 0, 588, 0, 589, 0, 590, 0, 591, 0, 592, 0, 593, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0,
    0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 601, 0, 0, 602, 0, 603, 0, 0, 0, 0, 0, 604, 605, 0, 0, 0, 0, 0, 0, 606, 0, 0,
    0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 609, 0, 610, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 613, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0, 617, 0, 0, 0, 0, 618, 0, 619,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 622, 0, 0, 0, 0, 0, 623,
    0, 0, 0, 624, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 628, 0, 629, 0, 0, 0, 0, 0,
    0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 632, 0, 0, 633, 634, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 640, 0, 641, 0, 0, 642, 0, 643, 0, 0, 644,
    645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647, 648, 0, 0, 0, 649, 0, 650, 0, 0, 651, 0, 652, 0, 0, 653, 654, 0, 0, 0, 0,
    0, 655, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 658, 0, 659, 0, 660, 0, 661, 0, 662, 0, 663, 0,
    0, 0, 664, 0, 665, 0, 0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0,
    0, 670, 0, 0, 0, 671, 0, 672, 0, 673, 0, 0, 0, 674, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 677, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 0,
    0, 687, 0, 688, 0, 0, 689, 0, 0, 690, 0, 691, 0, 692, 0, 0, 693, 0, 694, 0, 0, 0, 0, 0, 695, 0, 696, 0, 0, 0, 697, 0,
    0, 0, 698, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 704, 0,
    0, 0, 705, 0, 0, 706, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 711, 0, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0,
    0, 716, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 0, 0, 721, 0,
    0, 0, 0, 722, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 724, 0, 0, 0, 0, 0, 725, 726, 0, 0, 0, 727, 0, 0, 728, 0, 0, 729, 0, 730, 0, 731, 0, 0, 0, 0, 732, 0, 0, 733,
    734, 0, 735, 0, 736, 0, 0, 737, 0, 0, 0, 738, 0, 739, 0, 740, 0, 0, 0, 741, 0, 0, 0, 742, 0, 743, 0, 0, 0, 0, 0, 0,
    0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0,
    0, 0, 747, 0, 0, 748, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 752,
    0, 0, 0, 0, 0, 753, 0, 754, 0, 755, 0, 756, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0,
    0, 0, 759, 0, 0, 0, 0, 760, 0, 761, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 765, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 768, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 770, 0, 771, 0, 0, 772, 0, 0, 773, 0, 774, 0, 0, 0,
    775, 0, 0, 0, 0, 0, 776, 0, 0, 777, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 780, 781, 0, 0, 0, 782, 0, 0, 783, 0, 784, 0, 0, 0, 0, 0, 0, 785, 0, 786, 0, 787, 0, 788, 0, 789, 0,
    0, 0, 790, 0, 0, 0, 0, 0, 0, 791, 0, 792, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 796, 0, 0, 797, 0, 0, 0, 0, 0, 0,
    0, 798, 0, 799, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0,
    801, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 803, 0, 0, 0, 0, 804, 0, 805, 0, 0, 806, 0, 0, 0, 0, 807, 0, 0, 0, 808, 0,
    0, 809, 0, 810, 0, 0, 811, 0, 0, 812, 0, 813, 0, 0, 0, 814, 0, 0, 815, 0, 0, 0, 816, 0, 0, 817, 0, 818, 0, 0, 819, 0,
    0, 820, 0, 0, 0, 821, 0, 822, 0, 0, 0, 0, 823, 0, 0, 824, 0, 0, 0, 825, 0, 0, 0, 0, 826, 0, 0, 827, 0, 828, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 830, 0, 831, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0,
    833, 0, 0, 0, 0, 834, 0, 0, 835, 0, 0, 836, 0, 837, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 839, 0, 0, 0, 840, 0, 0, 841,
    0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 843, 0, 844, 0, 845, 0, 0, 0, 0, 0, 0, 846, 0, 0, 0, 847, 0,
    0, 0, 0, 0, 0, 848, 0, 849, 850, 0, 0, 851, 0, 0, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 0, 853, 0, 0, 0, 854,
};
void recomp_unit_0174_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08ABC000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0174[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08ABC000;
    case 2u: goto L_08ABC004;
    case 3u: goto L_08ABC014;
    case 4u: goto L_08ABC018;
    case 5u: goto L_08ABC02C;
    case 6u: goto L_08ABC034;
    case 7u: goto L_08ABC03C;
    case 8u: goto L_08ABC050;
    case 9u: goto L_08ABC064;
    case 10u: goto L_08ABC06C;
    case 11u: goto L_08ABC090;
    case 12u: goto L_08ABC09C;
    case 13u: goto L_08ABC0B0;
    case 14u: goto L_08ABC0C0;
    case 15u: goto L_08ABC0C8;
    case 16u: goto L_08ABC0D0;
    case 17u: goto L_08ABC100;
    case 18u: goto L_08ABC104;
    case 19u: goto L_08ABC118;
    case 20u: goto L_08ABC130;
    case 21u: goto L_08ABC138;
    case 22u: goto L_08ABC140;
    case 23u: goto L_08ABC174;
    case 24u: goto L_08ABC17C;
    case 25u: goto L_08ABC180;
    case 26u: goto L_08ABC194;
    case 27u: goto L_08ABC1C8;
    case 28u: goto L_08ABC1D4;
    case 29u: goto L_08ABC1DC;
    case 30u: goto L_08ABC1E0;
    case 31u: goto L_08ABC1F4;
    case 32u: goto L_08ABC200;
    case 33u: goto L_08ABC208;
    case 34u: goto L_08ABC210;
    case 35u: goto L_08ABC228;
    case 36u: goto L_08ABC234;
    case 37u: goto L_08ABC240;
    case 38u: goto L_08ABC24C;
    case 39u: goto L_08ABC25C;
    case 40u: goto L_08ABC264;
    case 41u: goto L_08ABC270;
    case 42u: goto L_08ABC27C;
    case 43u: goto L_08ABC284;
    case 44u: goto L_08ABC28C;
    case 45u: goto L_08ABC298;
    case 46u: goto L_08ABC2A4;
    case 47u: goto L_08ABC2B0;
    case 48u: goto L_08ABC2B4;
    case 49u: goto L_08ABC2C0;
    case 50u: goto L_08ABC2E8;
    case 51u: goto L_08ABC30C;
    case 52u: goto L_08ABC318;
    case 53u: goto L_08ABC320;
    case 54u: goto L_08ABC328;
    case 55u: goto L_08ABC330;
    case 56u: goto L_08ABC33C;
    case 57u: goto L_08ABC348;
    case 58u: goto L_08ABC350;
    case 59u: goto L_08ABC354;
    case 60u: goto L_08ABC35C;
    case 61u: goto L_08ABC364;
    case 62u: goto L_08ABC380;
    case 63u: goto L_08ABC3A8;
    case 64u: goto L_08ABC3D4;
    case 65u: goto L_08ABC3FC;
    case 66u: goto L_08ABC454;
    case 67u: goto L_08ABC45C;
    case 68u: goto L_08ABC484;
    case 69u: goto L_08ABC488;
    case 70u: goto L_08ABC4C4;
    case 71u: goto L_08ABC4DC;
    case 72u: goto L_08ABC4E8;
    case 73u: goto L_08ABC4F0;
    case 74u: goto L_08ABC50C;
    case 75u: goto L_08ABC514;
    case 76u: goto L_08ABC528;
    case 77u: goto L_08ABC530;
    case 78u: goto L_08ABC540;
    case 79u: goto L_08ABC554;
    case 80u: goto L_08ABC568;
    case 81u: goto L_08ABC570;
    case 82u: goto L_08ABC590;
    case 83u: goto L_08ABC59C;
    case 84u: goto L_08ABC5B4;
    case 85u: goto L_08ABC5B8;
    case 86u: goto L_08ABC5C0;
    case 87u: goto L_08ABC5D0;
    case 88u: goto L_08ABC5FC;
    case 89u: goto L_08ABC608;
    case 90u: goto L_08ABC614;
    case 91u: goto L_08ABC624;
    case 92u: goto L_08ABC62C;
    case 93u: goto L_08ABC638;
    case 94u: goto L_08ABC64C;
    case 95u: goto L_08ABC650;
    case 96u: goto L_08ABC668;
    case 97u: goto L_08ABC680;
    case 98u: goto L_08ABC68C;
    case 99u: goto L_08ABC694;
    case 100u: goto L_08ABC6B4;
    case 101u: goto L_08ABC6C0;
    case 102u: goto L_08ABC6D8;
    case 103u: goto L_08ABC6DC;
    case 104u: goto L_08ABC6E4;
    case 105u: goto L_08ABC6F0;
    case 106u: goto L_08ABC6F8;
    case 107u: goto L_08ABC718;
    case 108u: goto L_08ABC724;
    case 109u: goto L_08ABC73C;
    case 110u: goto L_08ABC740;
    case 111u: goto L_08ABC744;
    case 112u: goto L_08ABC74C;
    case 113u: goto L_08ABC77C;
    case 114u: goto L_08ABC7A0;
    case 115u: goto L_08ABC7B8;
    case 116u: goto L_08ABC7C8;
    case 117u: goto L_08ABC7D4;
    case 118u: goto L_08ABC7F8;
    case 119u: goto L_08ABC800;
    case 120u: goto L_08ABC818;
    case 121u: goto L_08ABC824;
    case 122u: goto L_08ABC85C;
    case 123u: goto L_08ABC870;
    case 124u: goto L_08ABC888;
    case 125u: goto L_08ABC89C;
    case 126u: goto L_08ABC8A4;
    case 127u: goto L_08ABC8B4;
    case 128u: goto L_08ABC8EC;
    case 129u: goto L_08ABC900;
    case 130u: goto L_08ABC910;
    case 131u: goto L_08ABC91C;
    case 132u: goto L_08ABC95C;
    case 133u: goto L_08ABC968;
    case 134u: goto L_08ABC9A4;
    case 135u: goto L_08ABC9AC;
    case 136u: goto L_08ABC9B4;
    case 137u: goto L_08ABC9BC;
    case 138u: goto L_08ABC9D0;
    case 139u: goto L_08ABC9F4;
    case 140u: goto L_08ABC9FC;
    case 141u: goto L_08ABCA04;
    case 142u: goto L_08ABCA34;
    case 143u: goto L_08ABCA38;
    case 144u: goto L_08ABCA44;
    case 145u: goto L_08ABCA54;
    case 146u: goto L_08ABCA60;
    case 147u: goto L_08ABCA68;
    case 148u: goto L_08ABCA74;
    case 149u: goto L_08ABCA7C;
    case 150u: goto L_08ABCA80;
    case 151u: goto L_08ABCAA0;
    case 152u: goto L_08ABCAAC;
    case 153u: goto L_08ABCAB4;
    case 154u: goto L_08ABCAD8;
    case 155u: goto L_08ABCB28;
    case 156u: goto L_08ABCB2C;
    case 157u: goto L_08ABCB38;
    case 158u: goto L_08ABCB48;
    case 159u: goto L_08ABCB5C;
    case 160u: goto L_08ABCB6C;
    case 161u: goto L_08ABCB74;
    case 162u: goto L_08ABCB84;
    case 163u: goto L_08ABCB8C;
    case 164u: goto L_08ABCB9C;
    case 165u: goto L_08ABCBA4;
    case 166u: goto L_08ABCBAC;
    case 167u: goto L_08ABCBBC;
    case 168u: goto L_08ABCBC4;
    case 169u: goto L_08ABCBF4;
    case 170u: goto L_08ABCC20;
    case 171u: goto L_08ABCC38;
    case 172u: goto L_08ABCC54;
    case 173u: goto L_08ABCC5C;
    case 174u: goto L_08ABCC64;
    case 175u: goto L_08ABCC80;
    case 176u: goto L_08ABCC8C;
    case 177u: goto L_08ABCCA8;
    case 178u: goto L_08ABCCB8;
    case 179u: goto L_08ABCCCC;
    case 180u: goto L_08ABCCF4;
    case 181u: goto L_08ABCD00;
    case 182u: goto L_08ABCD08;
    case 183u: goto L_08ABCD10;
    case 184u: goto L_08ABCD1C;
    case 185u: goto L_08ABCD28;
    case 186u: goto L_08ABCD30;
    case 187u: goto L_08ABCD40;
    case 188u: goto L_08ABCD5C;
    case 189u: goto L_08ABCD80;
    case 190u: goto L_08ABCD8C;
    case 191u: goto L_08ABCDA4;
    case 192u: goto L_08ABCDAC;
    case 193u: goto L_08ABCDB4;
    case 194u: goto L_08ABCDC0;
    case 195u: goto L_08ABCDDC;
    case 196u: goto L_08ABCDFC;
    case 197u: goto L_08ABCE0C;
    case 198u: goto L_08ABCE14;
    case 199u: goto L_08ABCE20;
    case 200u: goto L_08ABCE28;
    case 201u: goto L_08ABCE48;
    case 202u: goto L_08ABCE58;
    case 203u: goto L_08ABCE64;
    case 204u: goto L_08ABCE90;
    case 205u: goto L_08ABCEA4;
    case 206u: goto L_08ABCEB4;
    case 207u: goto L_08ABCED0;
    case 208u: goto L_08ABCEF4;
    case 209u: goto L_08ABCEFC;
    case 210u: goto L_08ABCF34;
    case 211u: goto L_08ABCF60;
    case 212u: goto L_08ABCF7C;
    case 213u: goto L_08ABCFAC;
    case 214u: goto L_08ABCFB8;
    case 215u: goto L_08ABCFD8;
    case 216u: goto L_08ABCFE4;
    case 217u: goto L_08ABD00C;
    case 218u: goto L_08ABD018;
    case 219u: goto L_08ABD028;
    case 220u: goto L_08ABD068;
    case 221u: goto L_08ABD08C;
    case 222u: goto L_08ABD094;
    case 223u: goto L_08ABD0BC;
    case 224u: goto L_08ABD0D4;
    case 225u: goto L_08ABD0E0;
    case 226u: goto L_08ABD0F8;
    case 227u: goto L_08ABD108;
    case 228u: goto L_08ABD11C;
    case 229u: goto L_08ABD12C;
    case 230u: goto L_08ABD138;
    case 231u: goto L_08ABD144;
    case 232u: goto L_08ABD15C;
    case 233u: goto L_08ABD16C;
    case 234u: goto L_08ABD17C;
    case 235u: goto L_08ABD184;
    case 236u: goto L_08ABD198;
    case 237u: goto L_08ABD1C4;
    case 238u: goto L_08ABD1DC;
    case 239u: goto L_08ABD1F8;
    case 240u: goto L_08ABD21C;
    case 241u: goto L_08ABD230;
    case 242u: goto L_08ABD248;
    case 243u: goto L_08ABD258;
    case 244u: goto L_08ABD268;
    case 245u: goto L_08ABD288;
    case 246u: goto L_08ABD290;
    case 247u: goto L_08ABD2A4;
    case 248u: goto L_08ABD2AC;
    case 249u: goto L_08ABD2E8;
    case 250u: goto L_08ABD2F4;
    case 251u: goto L_08ABD30C;
    case 252u: goto L_08ABD314;
    case 253u: goto L_08ABD32C;
    case 254u: goto L_08ABD350;
    case 255u: goto L_08ABD35C;
    case 256u: goto L_08ABD370;
    case 257u: goto L_08ABD384;
    case 258u: goto L_08ABD3B4;
    case 259u: goto L_08ABD3C4;
    case 260u: goto L_08ABD3D4;
    case 261u: goto L_08ABD3E4;
    case 262u: goto L_08ABD3FC;
    case 263u: goto L_08ABD404;
    case 264u: goto L_08ABD414;
    case 265u: goto L_08ABD41C;
    case 266u: goto L_08ABD428;
    case 267u: goto L_08ABD430;
    case 268u: goto L_08ABD434;
    case 269u: goto L_08ABD44C;
    case 270u: goto L_08ABD464;
    case 271u: goto L_08ABD474;
    case 272u: goto L_08ABD47C;
    case 273u: goto L_08ABD4A0;
    case 274u: goto L_08ABD4C0;
    case 275u: goto L_08ABD4FC;
    case 276u: goto L_08ABD518;
    case 277u: goto L_08ABD524;
    case 278u: goto L_08ABD530;
    case 279u: goto L_08ABD544;
    case 280u: goto L_08ABD558;
    case 281u: goto L_08ABD574;
    case 282u: goto L_08ABD584;
    case 283u: goto L_08ABD594;
    case 284u: goto L_08ABD5A4;
    case 285u: goto L_08ABD5B4;
    case 286u: goto L_08ABD5BC;
    case 287u: goto L_08ABD5C4;
    case 288u: goto L_08ABD5D0;
    case 289u: goto L_08ABD5D4;
    case 290u: goto L_08ABD5E8;
    case 291u: goto L_08ABD608;
    case 292u: goto L_08ABD618;
    case 293u: goto L_08ABD620;
    case 294u: goto L_08ABD630;
    case 295u: goto L_08ABD63C;
    case 296u: goto L_08ABD658;
    case 297u: goto L_08ABD668;
    case 298u: goto L_08ABD670;
    case 299u: goto L_08ABD678;
    case 300u: goto L_08ABD680;
    case 301u: goto L_08ABD688;
    case 302u: goto L_08ABD69C;
    case 303u: goto L_08ABD6A4;
    case 304u: goto L_08ABD6AC;
    case 305u: goto L_08ABD6C0;
    case 306u: goto L_08ABD6D4;
    case 307u: goto L_08ABD6DC;
    case 308u: goto L_08ABD6E4;
    case 309u: goto L_08ABD6F0;
    case 310u: goto L_08ABD704;
    case 311u: goto L_08ABD730;
    case 312u: goto L_08ABD73C;
    case 313u: goto L_08ABD744;
    case 314u: goto L_08ABD750;
    case 315u: goto L_08ABD760;
    case 316u: goto L_08ABD768;
    case 317u: goto L_08ABD774;
    case 318u: goto L_08ABD77C;
    case 319u: goto L_08ABD784;
    case 320u: goto L_08ABD790;
    case 321u: goto L_08ABD7A8;
    case 322u: goto L_08ABD7B0;
    case 323u: goto L_08ABD7BC;
    case 324u: goto L_08ABD7D0;
    case 325u: goto L_08ABD7D8;
    case 326u: goto L_08ABD7E4;
    case 327u: goto L_08ABD7FC;
    case 328u: goto L_08ABD804;
    case 329u: goto L_08ABD810;
    case 330u: goto L_08ABD828;
    case 331u: goto L_08ABD858;
    case 332u: goto L_08ABD864;
    case 333u: goto L_08ABD874;
    case 334u: goto L_08ABD888;
    case 335u: goto L_08ABD8A0;
    case 336u: goto L_08ABD8AC;
    case 337u: goto L_08ABD8D8;
    case 338u: goto L_08ABD8E8;
    case 339u: goto L_08ABD920;
    case 340u: goto L_08ABD94C;
    case 341u: goto L_08ABD974;
    case 342u: goto L_08ABD99C;
    case 343u: goto L_08ABD9A4;
    case 344u: goto L_08ABD9B0;
    case 345u: goto L_08ABD9BC;
    case 346u: goto L_08ABD9D4;
    case 347u: goto L_08ABD9EC;
    case 348u: goto L_08ABDA08;
    case 349u: goto L_08ABDA18;
    case 350u: goto L_08ABDA20;
    case 351u: goto L_08ABDA28;
    case 352u: goto L_08ABDA30;
    case 353u: goto L_08ABDA38;
    case 354u: goto L_08ABDA40;
    case 355u: goto L_08ABDA48;
    case 356u: goto L_08ABDA54;
    case 357u: goto L_08ABDA5C;
    case 358u: goto L_08ABDA6C;
    case 359u: goto L_08ABDA70;
    case 360u: goto L_08ABDA80;
    case 361u: goto L_08ABDA94;
    case 362u: goto L_08ABDAB0;
    case 363u: goto L_08ABDAC0;
    case 364u: goto L_08ABDAC8;
    case 365u: goto L_08ABDAD0;
    case 366u: goto L_08ABDAD8;
    case 367u: goto L_08ABDAE0;
    case 368u: goto L_08ABDAE8;
    case 369u: goto L_08ABDAF0;
    case 370u: goto L_08ABDAF8;
    case 371u: goto L_08ABDB08;
    case 372u: goto L_08ABDB0C;
    case 373u: goto L_08ABDB1C;
    case 374u: goto L_08ABDB30;
    case 375u: goto L_08ABDB4C;
    case 376u: goto L_08ABDB60;
    case 377u: goto L_08ABDB78;
    case 378u: goto L_08ABDB8C;
    case 379u: goto L_08ABDBA0;
    case 380u: goto L_08ABDBAC;
    case 381u: goto L_08ABDBB8;
    case 382u: goto L_08ABDBC4;
    case 383u: goto L_08ABDBD0;
    case 384u: goto L_08ABDBE8;
    case 385u: goto L_08ABDC00;
    case 386u: goto L_08ABDC08;
    case 387u: goto L_08ABDC24;
    case 388u: goto L_08ABDC3C;
    case 389u: goto L_08ABDC58;
    case 390u: goto L_08ABDC74;
    case 391u: goto L_08ABDC80;
    case 392u: goto L_08ABDC90;
    case 393u: goto L_08ABDCB4;
    case 394u: goto L_08ABDCC4;
    case 395u: goto L_08ABDCCC;
    case 396u: goto L_08ABDCD8;
    case 397u: goto L_08ABDCE4;
    case 398u: goto L_08ABDCFC;
    case 399u: goto L_08ABDD0C;
    case 400u: goto L_08ABDD18;
    case 401u: goto L_08ABDD2C;
    case 402u: goto L_08ABDD50;
    case 403u: goto L_08ABDD5C;
    case 404u: goto L_08ABDD68;
    case 405u: goto L_08ABDD70;
    case 406u: goto L_08ABDD7C;
    case 407u: goto L_08ABDD84;
    case 408u: goto L_08ABDD90;
    case 409u: goto L_08ABDD9C;
    case 410u: goto L_08ABDDA8;
    case 411u: goto L_08ABDDB4;
    case 412u: goto L_08ABDDC0;
    case 413u: goto L_08ABDDCC;
    case 414u: goto L_08ABDDD8;
    case 415u: goto L_08ABDDEC;
    case 416u: goto L_08ABDE10;
    case 417u: goto L_08ABDE28;
    case 418u: goto L_08ABDE38;
    case 419u: goto L_08ABDE44;
    case 420u: goto L_08ABDE54;
    case 421u: goto L_08ABDE60;
    case 422u: goto L_08ABDE64;
    case 423u: goto L_08ABDE94;
    case 424u: goto L_08ABDEA0;
    case 425u: goto L_08ABDEB0;
    case 426u: goto L_08ABDECC;
    case 427u: goto L_08ABDEF8;
    case 428u: goto L_08ABDF10;
    case 429u: goto L_08ABDF34;
    case 430u: goto L_08ABDF40;
    case 431u: goto L_08ABDF64;
    case 432u: goto L_08ABDF88;
    case 433u: goto L_08ABDF94;
    case 434u: goto L_08ABDFCC;
    case 435u: goto L_08ABDFF8;
    case 436u: goto L_08ABE004;
    case 437u: goto L_08ABE028;
    case 438u: goto L_08ABE034;
    case 439u: goto L_08ABE070;
    case 440u: goto L_08ABE07C;
    case 441u: goto L_08ABE084;
    case 442u: goto L_08ABE090;
    case 443u: goto L_08ABE098;
    case 444u: goto L_08ABE0A4;
    case 445u: goto L_08ABE0B4;
    case 446u: goto L_08ABE0D8;
    case 447u: goto L_08ABE0E4;
    case 448u: goto L_08ABE0F4;
    case 449u: goto L_08ABE118;
    case 450u: goto L_08ABE124;
    case 451u: goto L_08ABE134;
    case 452u: goto L_08ABE158;
    case 453u: goto L_08ABE164;
    case 454u: goto L_08ABE1B8;
    case 455u: goto L_08ABE1C4;
    case 456u: goto L_08ABE1D0;
    case 457u: goto L_08ABE1DC;
    case 458u: goto L_08ABE1F4;
    case 459u: goto L_08ABE1FC;
    case 460u: goto L_08ABE204;
    case 461u: goto L_08ABE210;
    case 462u: goto L_08ABE220;
    case 463u: goto L_08ABE230;
    case 464u: goto L_08ABE23C;
    case 465u: goto L_08ABE254;
    case 466u: goto L_08ABE278;
    case 467u: goto L_08ABE290;
    case 468u: goto L_08ABE29C;
    case 469u: goto L_08ABE2B4;
    case 470u: goto L_08ABE2C0;
    case 471u: goto L_08ABE2D8;
    case 472u: goto L_08ABE2E4;
    case 473u: goto L_08ABE2FC;
    case 474u: goto L_08ABE308;
    case 475u: goto L_08ABE320;
    case 476u: goto L_08ABE32C;
    case 477u: goto L_08ABE348;
    case 478u: goto L_08ABE354;
    case 479u: goto L_08ABE364;
    case 480u: goto L_08ABE378;
    case 481u: goto L_08ABE38C;
    case 482u: goto L_08ABE398;
    case 483u: goto L_08ABE3B0;
    case 484u: goto L_08ABE3BC;
    case 485u: goto L_08ABE3E4;
    case 486u: goto L_08ABE418;
    case 487u: goto L_08ABE454;
    case 488u: goto L_08ABE464;
    case 489u: goto L_08ABE484;
    case 490u: goto L_08ABE494;
    case 491u: goto L_08ABE4B4;
    case 492u: goto L_08ABE4C0;
    case 493u: goto L_08ABE4E4;
    case 494u: goto L_08ABE500;
    case 495u: goto L_08ABE510;
    case 496u: goto L_08ABE518;
    case 497u: goto L_08ABE524;
    case 498u: goto L_08ABE530;
    case 499u: goto L_08ABE544;
    case 500u: goto L_08ABE564;
    case 501u: goto L_08ABE57C;
    case 502u: goto L_08ABE594;
    case 503u: goto L_08ABE5A0;
    case 504u: goto L_08ABE5A8;
    case 505u: goto L_08ABE5B0;
    case 506u: goto L_08ABE5D0;
    case 507u: goto L_08ABE5E0;
    case 508u: goto L_08ABE5E8;
    case 509u: goto L_08ABE5EC;
    case 510u: goto L_08ABE600;
    case 511u: goto L_08ABE610;
    case 512u: goto L_08ABE618;
    case 513u: goto L_08ABE620;
    case 514u: goto L_08ABE624;
    case 515u: goto L_08ABE628;
    case 516u: goto L_08ABE63C;
    case 517u: goto L_08ABE664;
    case 518u: goto L_08ABE688;
    case 519u: goto L_08ABE698;
    case 520u: goto L_08ABE6A0;
    case 521u: goto L_08ABE6A8;
    case 522u: goto L_08ABE6B0;
    case 523u: goto L_08ABE6BC;
    case 524u: goto L_08ABE6F0;
    case 525u: goto L_08ABE6F8;
    case 526u: goto L_08ABE704;
    case 527u: goto L_08ABE714;
    case 528u: goto L_08ABE71C;
    case 529u: goto L_08ABE728;
    case 530u: goto L_08ABE730;
    case 531u: goto L_08ABE73C;
    case 532u: goto L_08ABE744;
    case 533u: goto L_08ABE760;
    case 534u: goto L_08ABE77C;
    case 535u: goto L_08ABE794;
    case 536u: goto L_08ABE7A4;
    case 537u: goto L_08ABE7BC;
    case 538u: goto L_08ABE7DC;
    case 539u: goto L_08ABE7E8;
    case 540u: goto L_08ABE808;
    case 541u: goto L_08ABE814;
    case 542u: goto L_08ABE824;
    case 543u: goto L_08ABE83C;
    case 544u: goto L_08ABE848;
    case 545u: goto L_08ABE85C;
    case 546u: goto L_08ABE874;
    case 547u: goto L_08ABE87C;
    case 548u: goto L_08ABE88C;
    case 549u: goto L_08ABE89C;
    case 550u: goto L_08ABE8A4;
    case 551u: goto L_08ABE8AC;
    case 552u: goto L_08ABE8B4;
    case 553u: goto L_08ABE8C0;
    case 554u: goto L_08ABE8CC;
    case 555u: goto L_08ABE8D0;
    case 556u: goto L_08ABE8F4;
    case 557u: goto L_08ABE90C;
    case 558u: goto L_08ABE91C;
    case 559u: goto L_08ABE924;
    case 560u: goto L_08ABE92C;
    case 561u: goto L_08ABE958;
    case 562u: goto L_08ABE97C;
    case 563u: goto L_08ABE988;
    case 564u: goto L_08ABE99C;
    case 565u: goto L_08ABE9B0;
    case 566u: goto L_08ABE9C0;
    case 567u: goto L_08ABE9D4;
    case 568u: goto L_08ABE9E8;
    case 569u: goto L_08ABE9F8;
    case 570u: goto L_08ABEA08;
    case 571u: goto L_08ABEA10;
    case 572u: goto L_08ABEA3C;
    case 573u: goto L_08ABEA48;
    case 574u: goto L_08ABEA60;
    case 575u: goto L_08ABEA70;
    case 576u: goto L_08ABEA78;
    case 577u: goto L_08ABEA80;
    case 578u: goto L_08ABEA98;
    case 579u: goto L_08ABEAB0;
    case 580u: goto L_08ABEAC4;
    case 581u: goto L_08ABEACC;
    case 582u: goto L_08ABEADC;
    case 583u: goto L_08ABEAE4;
    case 584u: goto L_08ABEAEC;
    case 585u: goto L_08ABEAF8;
    case 586u: goto L_08ABEAFC;
    case 587u: goto L_08ABEB04;
    case 588u: goto L_08ABEB10;
    case 589u: goto L_08ABEB18;
    case 590u: goto L_08ABEB20;
    case 591u: goto L_08ABEB28;
    case 592u: goto L_08ABEB30;
    case 593u: goto L_08ABEB38;
    case 594u: goto L_08ABEB44;
    case 595u: goto L_08ABEB54;
    case 596u: goto L_08ABEBCC;
    case 597u: goto L_08ABEBD4;
    case 598u: goto L_08ABEBF0;
    case 599u: goto L_08ABEC0C;
    case 600u: goto L_08ABEC20;
    case 601u: goto L_08ABEC28;
    case 602u: goto L_08ABEC34;
    case 603u: goto L_08ABEC3C;
    case 604u: goto L_08ABEC54;
    case 605u: goto L_08ABEC58;
    case 606u: goto L_08ABEC74;
    case 607u: goto L_08ABEC84;
    case 608u: goto L_08ABECD4;
    case 609u: goto L_08ABED04;
    case 610u: goto L_08ABED0C;
    case 611u: goto L_08ABED18;
    case 612u: goto L_08ABED3C;
    case 613u: goto L_08ABED84;
    case 614u: goto L_08ABED98;
    case 615u: goto L_08ABEDBC;
    case 616u: goto L_08ABEDD8;
    case 617u: goto L_08ABEDE0;
    case 618u: goto L_08ABEDF4;
    case 619u: goto L_08ABEDFC;
    case 620u: goto L_08ABEE2C;
    case 621u: goto L_08ABEE58;
    case 622u: goto L_08ABEE64;
    case 623u: goto L_08ABEE7C;
    case 624u: goto L_08ABEE8C;
    case 625u: goto L_08ABEEA0;
    case 626u: goto L_08ABEEBC;
    case 627u: goto L_08ABEED0;
    case 628u: goto L_08ABEEE0;
    case 629u: goto L_08ABEEE8;
    case 630u: goto L_08ABEF0C;
    case 631u: goto L_08ABEF28;
    case 632u: goto L_08ABEF3C;
    case 633u: goto L_08ABEF48;
    case 634u: goto L_08ABEF4C;
    case 635u: goto L_08ABEF54;
    case 636u: goto L_08ABEF7C;
    case 637u: goto L_08ABEFA4;
    case 638u: goto L_08ABEFB8;
    case 639u: goto L_08ABEFC0;
    case 640u: goto L_08ABEFD4;
    case 641u: goto L_08ABEFDC;
    case 642u: goto L_08ABEFE8;
    case 643u: goto L_08ABEFF0;
    case 644u: goto L_08ABEFFC;
    case 645u: goto L_08ABF000;
    case 646u: goto L_08ABF018;
    case 647u: goto L_08ABF02C;
    case 648u: goto L_08ABF030;
    case 649u: goto L_08ABF040;
    case 650u: goto L_08ABF048;
    case 651u: goto L_08ABF054;
    case 652u: goto L_08ABF05C;
    case 653u: goto L_08ABF068;
    case 654u: goto L_08ABF06C;
    case 655u: goto L_08ABF084;
    case 656u: goto L_08ABF098;
    case 657u: goto L_08ABF0B8;
    case 658u: goto L_08ABF0D0;
    case 659u: goto L_08ABF0D8;
    case 660u: goto L_08ABF0E0;
    case 661u: goto L_08ABF0E8;
    case 662u: goto L_08ABF0F0;
    case 663u: goto L_08ABF0F8;
    case 664u: goto L_08ABF108;
    case 665u: goto L_08ABF110;
    case 666u: goto L_08ABF12C;
    case 667u: goto L_08ABF138;
    case 668u: goto L_08ABF150;
    case 669u: goto L_08ABF16C;
    case 670u: goto L_08ABF184;
    case 671u: goto L_08ABF194;
    case 672u: goto L_08ABF19C;
    case 673u: goto L_08ABF1A4;
    case 674u: goto L_08ABF1B4;
    case 675u: goto L_08ABF1C8;
    case 676u: goto L_08ABF1EC;
    case 677u: goto L_08ABF1F8;
    case 678u: goto L_08ABF224;
    case 679u: goto L_08ABF22C;
    case 680u: goto L_08ABF260;
    case 681u: goto L_08ABF268;
    case 682u: goto L_08ABF2A4;
    case 683u: goto L_08ABF2BC;
    case 684u: goto L_08ABF2CC;
    case 685u: goto L_08ABF2D8;
    case 686u: goto L_08ABF2F0;
    case 687u: goto L_08ABF304;
    case 688u: goto L_08ABF30C;
    case 689u: goto L_08ABF318;
    case 690u: goto L_08ABF324;
    case 691u: goto L_08ABF32C;
    case 692u: goto L_08ABF334;
    case 693u: goto L_08ABF340;
    case 694u: goto L_08ABF348;
    case 695u: goto L_08ABF360;
    case 696u: goto L_08ABF368;
    case 697u: goto L_08ABF378;
    case 698u: goto L_08ABF388;
    case 699u: goto L_08ABF394;
    case 700u: goto L_08ABF3A4;
    case 701u: goto L_08ABF3BC;
    case 702u: goto L_08ABF3E0;
    case 703u: goto L_08ABF3EC;
    case 704u: goto L_08ABF3F8;
    case 705u: goto L_08ABF408;
    case 706u: goto L_08ABF414;
    case 707u: goto L_08ABF42C;
    case 708u: goto L_08ABF444;
    case 709u: goto L_08ABF454;
    case 710u: goto L_08ABF46C;
    case 711u: goto L_08ABF494;
    case 712u: goto L_08ABF4A4;
    case 713u: goto L_08ABF4AC;
    case 714u: goto L_08ABF4DC;
    case 715u: goto L_08ABF4EC;
    case 716u: goto L_08ABF504;
    case 717u: goto L_08ABF524;
    case 718u: goto L_08ABF534;
    case 719u: goto L_08ABF550;
    case 720u: goto L_08ABF560;
    case 721u: goto L_08ABF578;
    case 722u: goto L_08ABF58C;
    case 723u: goto L_08ABF5A4;
    case 724u: goto L_08ABF608;
    case 725u: goto L_08ABF620;
    case 726u: goto L_08ABF624;
    case 727u: goto L_08ABF634;
    case 728u: goto L_08ABF640;
    case 729u: goto L_08ABF64C;
    case 730u: goto L_08ABF654;
    case 731u: goto L_08ABF65C;
    case 732u: goto L_08ABF670;
    case 733u: goto L_08ABF67C;
    case 734u: goto L_08ABF680;
    case 735u: goto L_08ABF688;
    case 736u: goto L_08ABF690;
    case 737u: goto L_08ABF69C;
    case 738u: goto L_08ABF6AC;
    case 739u: goto L_08ABF6B4;
    case 740u: goto L_08ABF6BC;
    case 741u: goto L_08ABF6CC;
    case 742u: goto L_08ABF6DC;
    case 743u: goto L_08ABF6E4;
    case 744u: goto L_08ABF708;
    case 745u: goto L_08ABF754;
    case 746u: goto L_08ABF778;
    case 747u: goto L_08ABF788;
    case 748u: goto L_08ABF794;
    case 749u: goto L_08ABF7B0;
    case 750u: goto L_08ABF7D0;
    case 751u: goto L_08ABF7E0;
    case 752u: goto L_08ABF7FC;
    case 753u: goto L_08ABF814;
    case 754u: goto L_08ABF81C;
    case 755u: goto L_08ABF824;
    case 756u: goto L_08ABF82C;
    case 757u: goto L_08ABF844;
    case 758u: goto L_08ABF868;
    case 759u: goto L_08ABF888;
    case 760u: goto L_08ABF89C;
    case 761u: goto L_08ABF8A4;
    case 762u: goto L_08ABF8B4;
    case 763u: goto L_08ABF8E0;
    case 764u: goto L_08ABF924;
    case 765u: goto L_08ABF92C;
    case 766u: goto L_08ABF940;
    case 767u: goto L_08ABF968;
    case 768u: goto L_08ABF970;
    case 769u: goto L_08ABF9BC;
    case 770u: goto L_08ABF9C8;
    case 771u: goto L_08ABF9D0;
    case 772u: goto L_08ABF9DC;
    case 773u: goto L_08ABF9E8;
    case 774u: goto L_08ABF9F0;
    case 775u: goto L_08ABFA00;
    case 776u: goto L_08ABFA18;
    case 777u: goto L_08ABFA24;
    case 778u: goto L_08ABFA30;
    case 779u: goto L_08ABFA50;
    case 780u: goto L_08ABFA94;
    case 781u: goto L_08ABFA98;
    case 782u: goto L_08ABFAA8;
    case 783u: goto L_08ABFAB4;
    case 784u: goto L_08ABFABC;
    case 785u: goto L_08ABFAD8;
    case 786u: goto L_08ABFAE0;
    case 787u: goto L_08ABFAE8;
    case 788u: goto L_08ABFAF0;
    case 789u: goto L_08ABFAF8;
    case 790u: goto L_08ABFB08;
    case 791u: goto L_08ABFB24;
    case 792u: goto L_08ABFB2C;
    case 793u: goto L_08ABFB34;
    case 794u: goto L_08ABFB7C;
    case 795u: goto L_08ABFBC0;
    case 796u: goto L_08ABFBD8;
    case 797u: goto L_08ABFBE4;
    case 798u: goto L_08ABFC04;
    case 799u: goto L_08ABFC0C;
    case 800u: goto L_08ABFC64;
    case 801u: goto L_08ABFC80;
    case 802u: goto L_08ABFC98;
    case 803u: goto L_08ABFCAC;
    case 804u: goto L_08ABFCC0;
    case 805u: goto L_08ABFCC8;
    case 806u: goto L_08ABFCD4;
    case 807u: goto L_08ABFCE8;
    case 808u: goto L_08ABFCF8;
    case 809u: goto L_08ABFD04;
    case 810u: goto L_08ABFD0C;
    case 811u: goto L_08ABFD18;
    case 812u: goto L_08ABFD24;
    case 813u: goto L_08ABFD2C;
    case 814u: goto L_08ABFD3C;
    case 815u: goto L_08ABFD48;
    case 816u: goto L_08ABFD58;
    case 817u: goto L_08ABFD64;
    case 818u: goto L_08ABFD6C;
    case 819u: goto L_08ABFD78;
    case 820u: goto L_08ABFD84;
    case 821u: goto L_08ABFD94;
    case 822u: goto L_08ABFD9C;
    case 823u: goto L_08ABFDB0;
    case 824u: goto L_08ABFDBC;
    case 825u: goto L_08ABFDCC;
    case 826u: goto L_08ABFDE0;
    case 827u: goto L_08ABFDEC;
    case 828u: goto L_08ABFDF4;
    case 829u: goto L_08ABFE34;
    case 830u: goto L_08ABFE4C;
    case 831u: goto L_08ABFE54;
    case 832u: goto L_08ABFE74;
    case 833u: goto L_08ABFE80;
    case 834u: goto L_08ABFE94;
    case 835u: goto L_08ABFEA0;
    case 836u: goto L_08ABFEAC;
    case 837u: goto L_08ABFEB4;
    case 838u: goto L_08ABFEBC;
    case 839u: goto L_08ABFEE0;
    case 840u: goto L_08ABFEF0;
    case 841u: goto L_08ABFEFC;
    case 842u: goto L_08ABFF10;
    case 843u: goto L_08ABFF3C;
    case 844u: goto L_08ABFF44;
    case 845u: goto L_08ABFF4C;
    case 846u: goto L_08ABFF68;
    case 847u: goto L_08ABFF78;
    case 848u: goto L_08ABFF94;
    case 849u: goto L_08ABFF9C;
    case 850u: goto L_08ABFFA0;
    case 851u: goto L_08ABFFAC;
    case 852u: goto L_08ABFFD4;
    case 853u: goto L_08ABFFEC;
    case 854u: goto L_08ABFFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08ABC000:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08ABC004;
L_08ABC004:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(527));
    ctx.gpr[31] = (0x08ABC014u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08ABC014u) goto L_08ABC014;
    return;
L_08ABC014:
    ctx.gpr[4] = (0u | 0u);
    goto L_08ABC018;
L_08ABC018:
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(527))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 91 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABC03C;
      }
      goto L_08ABC02C;
    }
L_08ABC02C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC03C;
      }
      goto L_08ABC034;
    }
L_08ABC034:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(527), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08ABC03C;
L_08ABC03C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC018;
      }
      goto L_08ABC050;
    }
L_08ABC050:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABC064:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABC06C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08ABC090u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABC090u) goto L_08ABC090;
    return;
L_08ABC090:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8022))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ABC0C8;
      }
      goto L_08ABC09C;
    }
L_08ABC09C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (0u | 65533u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC0C0;
      }
      goto L_08ABC0B0;
    }
L_08ABC0B0:
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABC0C8;
      }
      goto L_08ABC0C0;
    }
L_08ABC0C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABC180;
      }
      goto L_08ABC0C8;
    }
L_08ABC0C8:
    ctx.gpr[31] = (0x08ABC0D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 163u, 0x08A114E4u>(ctx, &aot_mem) && ctx.pc == 0x08ABC0D0u) goto L_08ABC0D0;
    return;
L_08ABC0D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28496));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[16] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    // nop
      if (branch_taken) {
          goto L_08ABC104;
      }
      goto L_08ABC100;
    }
L_08ABC100:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8016)));
    goto L_08ABC104;
L_08ABC104:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29152)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABC118u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 363u, 0x088713F4u>(ctx, &aot_mem) && ctx.pc == 0x08ABC118u) goto L_08ABC118;
    return;
L_08ABC118:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08ABC130u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 361u, 0x088713D0u>(ctx, &aot_mem) && ctx.pc == 0x08ABC130u) goto L_08ABC130;
    return;
L_08ABC130:
    ctx.gpr[31] = (0x08ABC138u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8004)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 611u, 0x08863470u>(ctx, &aot_mem) && ctx.pc == 0x08ABC138u) goto L_08ABC138;
    return;
L_08ABC138:
    ctx.gpr[31] = (0x08ABC140u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 165u, 0x08A11504u>(ctx, &aot_mem) && ctx.pc == 0x08ABC140u) goto L_08ABC140;
    return;
L_08ABC140:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(522), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8012))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8024), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8014))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[31] = (0x08ABC174u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABC174u) goto L_08ABC174;
    return;
L_08ABC174:
    ctx.gpr[31] = (0x08ABC17Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 375u, 0x088624A4u>(ctx, &aot_mem) && ctx.pc == 0x08ABC17Cu) goto L_08ABC17C;
    return;
L_08ABC17C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ABC180;
L_08ABC180:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABC194:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABC1C8u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABC1C8u) goto L_08ABC1C8;
    return;
L_08ABC1C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08ABC1DC;
    }
    goto L_08ABC1D4;
L_08ABC1D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABC1E0;
      }
      goto L_08ABC1DC;
    }
L_08ABC1DC:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08ABC1E0;
L_08ABC1E0:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABC228;
      }
      goto L_08ABC1F4;
    }
L_08ABC1F4:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 91 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABC210;
      }
      goto L_08ABC200;
    }
L_08ABC200:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC210;
      }
      goto L_08ABC208;
    }
L_08ABC208:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08ABC210;
L_08ABC210:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC1F4;
      }
      goto L_08ABC228;
    }
L_08ABC228:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(527));
    ctx.gpr[31] = (0x08ABC234u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x08ABC234u) goto L_08ABC234;
    return;
L_08ABC234:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7956)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (2236u << 16u);
      if (branch_taken) {
          goto L_08ABC2C0;
      }
      goto L_08ABC240;
    }
L_08ABC240:
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(7956));
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(7960));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32304));
    goto L_08ABC24C;
L_08ABC24C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(527));
    ctx.gpr[31] = (0x08ABC25Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x08ABC25Cu) goto L_08ABC25C;
    return;
L_08ABC25C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC2B4;
      }
      goto L_08ABC264;
    }
L_08ABC264:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(535)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC298;
      }
      goto L_08ABC270;
    }
L_08ABC270:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8024), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08ABC27Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 125u, 0x08A1CC44u>(ctx, &aot_mem) && ctx.pc == 0x08ABC27Cu) goto L_08ABC27C;
    return;
L_08ABC27C:
    ctx.gpr[31] = (0x08ABC284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08ABC284u) goto L_08ABC284;
    return;
L_08ABC284:
    ctx.gpr[31] = (0x08ABC28Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem) && ctx.pc == 0x08ABC28Cu) goto L_08ABC28C;
    return;
L_08ABC28C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ABC298u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 8u, 0x08964108u>(ctx, &aot_mem) && ctx.pc == 0x08ABC298u) goto L_08ABC298;
    return;
L_08ABC298:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABC2A4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 409u, 0x088626C0u>(ctx, &aot_mem) && ctx.pc == 0x08ABC2A4u) goto L_08ABC2A4;
    return;
L_08ABC2A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABC2B0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 415u, 0x088626F8u>(ctx, &aot_mem) && ctx.pc == 0x08ABC2B0u) goto L_08ABC2B0;
    return;
L_08ABC2B0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(520), static_cast<std::uint8_t>(0u));
    goto L_08ABC2B4;
L_08ABC2B4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC24C;
      }
      goto L_08ABC2C0;
    }
L_08ABC2C0:
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
L_08ABC2E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABC30Cu);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABC30Cu) goto L_08ABC30C;
    return;
L_08ABC30C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_08ABC320;
      }
      goto L_08ABC318;
    }
L_08ABC318:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABC328;
      }
      goto L_08ABC320;
    }
L_08ABC320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_08ABC328;
L_08ABC328:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08ABC35C;
      }
      goto L_08ABC330;
    }
L_08ABC330:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08ABC33Cu);
    ctx.gpr[4] = (0u | 2452u);
    goto L_08ABE278;
L_08ABC33C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC354;
      }
      goto L_08ABC348;
    }
L_08ABC348:
    ctx.gpr[31] = (0x08ABC350u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABC350u) goto L_08ABC350;
    return;
L_08ABC350:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08ABC354;
L_08ABC354:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ABC35C;
L_08ABC35C:
    ctx.gpr[31] = (0x08ABC364u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 492u, 0x089F6818u>(ctx, &aot_mem) && ctx.pc == 0x08ABC364u) goto L_08ABC364;
    return;
L_08ABC364:
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
L_08ABC380:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 891u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ABC3D4;
      }
      goto L_08ABC3A8;
    }
L_08ABC3A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(516));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABC3FC;
      }
      goto L_08ABC3D4;
    }
L_08ABC3D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(516));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08ABC3FC;
L_08ABC3FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ABC454u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABC454u) goto L_08ABC454;
    return;
L_08ABC454:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
        goto L_08ABC488;
    }
    goto L_08ABC45C;
L_08ABC45C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[7] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(84));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ABC484u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABC484u) goto L_08ABC484;
    return;
L_08ABC484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    goto L_08ABC488;
L_08ABC488:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(516)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(508), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ABC4DC;
      }
      goto L_08ABC4C4;
    }
L_08ABC4C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABC4E8;
      }
      goto L_08ABC4DC;
    }
L_08ABC4DC:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08ABC4E8;
L_08ABC4E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABC4F0;
      }
      goto L_08ABC4F0;
    }
L_08ABC4F0:
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
L_08ABC50C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABC514:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(521)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC530;
      }
      goto L_08ABC528;
    }
L_08ABC528:
    ctx.gpr[31] = (0x08ABC530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 575u, 0x0886309Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABC530u) goto L_08ABC530;
    return;
L_08ABC530:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABC540:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(521)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC5C0;
      }
      goto L_08ABC554;
    }
L_08ABC554:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    ctx.gpr[6] = (0u < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABC570;
      }
      goto L_08ABC568;
    }
L_08ABC568:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08ABC5B8;
      }
      goto L_08ABC570;
    }
L_08ABC570:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(518));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(521)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABC59C;
      }
      goto L_08ABC590;
    }
L_08ABC590:
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ABC5B8;
      }
      goto L_08ABC59C;
    }
L_08ABC59C:
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC5B8;
      }
      goto L_08ABC5B4;
    }
L_08ABC5B4:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08ABC5B8;
L_08ABC5B8:
    ctx.gpr[31] = (0x08ABC5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 575u, 0x0886309Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABC5C0u) goto L_08ABC5C0;
    return;
L_08ABC5C0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABC5D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7956)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08ABC614;
      }
      goto L_08ABC5FC;
    }
L_08ABC5FC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(535)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ABC62C;
      }
      goto L_08ABC608;
    }
L_08ABC608:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC5FC;
      }
      goto L_08ABC614;
    }
L_08ABC614:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABC624u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08ABC624u) goto L_08ABC624;
    return;
L_08ABC624:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABC650;
      }
      goto L_08ABC62C;
    }
L_08ABC62C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(527));
    ctx.gpr[31] = (0x08ABC638u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 436u, 0x08862920u>(ctx, &aot_mem) && ctx.pc == 0x08ABC638u) goto L_08ABC638;
    return;
L_08ABC638:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABC64Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08ABC64Cu) goto L_08ABC64C;
    return;
L_08ABC64C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ABC650;
L_08ABC650:
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
L_08ABC668:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7952)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(535)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
      if (branch_taken) {
          goto L_08ABC6E4;
      }
      goto L_08ABC680;
    }
L_08ABC680:
    ctx.gpr[6] = (ctx.gpr[6] ^ 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABC694;
      }
      goto L_08ABC68C;
    }
L_08ABC68C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08ABC6DC;
      }
      goto L_08ABC694;
    }
L_08ABC694:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(518));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABC6C0;
      }
      goto L_08ABC6B4;
    }
L_08ABC6B4:
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ABC6DC;
      }
      goto L_08ABC6C0;
    }
L_08ABC6C0:
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC6DC;
      }
      goto L_08ABC6D8;
    }
L_08ABC6D8:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08ABC6DC;
L_08ABC6DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABC744;
      }
      goto L_08ABC6E4;
    }
L_08ABC6E4:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABC6F8;
      }
      goto L_08ABC6F0;
    }
L_08ABC6F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ABC740;
      }
      goto L_08ABC6F8;
    }
L_08ABC6F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(518));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABC724;
      }
      goto L_08ABC718;
    }
L_08ABC718:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ABC740;
      }
      goto L_08ABC724;
    }
L_08ABC724:
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC740;
      }
      goto L_08ABC73C;
    }
L_08ABC73C:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08ABC740;
L_08ABC740:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ABC744;
L_08ABC744:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABC74C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08ABC800;
      }
      goto L_08ABC77C;
    }
L_08ABC77C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-4));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 63u);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ABC800;
      }
      goto L_08ABC7A0;
    }
L_08ABC7A0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] >> 24u);
    ctx.gpr[7] = (ctx.gpr[9] >> 15u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] & 511u);
      if (branch_taken) {
          goto L_08ABC800;
      }
      goto L_08ABC7B8;
    }
L_08ABC7B8:
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC800;
      }
      goto L_08ABC7C8;
    }
L_08ABC7C8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC7F8;
      }
      goto L_08ABC7D4;
    }
L_08ABC7D4:
    ctx.gpr[5] = (ctx.gpr[6] << 15u);
    ctx.gpr[4] = (65280u << 16u);
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32767));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[4] = (ctx.gpr[9] & ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08ABC7F8;
L_08ABC7F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC818;
      }
      goto L_08ABC800;
    }
L_08ABC800:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08ABC818u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08ABDFCC;
L_08ABC818:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABC824:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABC85Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2));
    goto L_08ABE004;
L_08ABC85C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08ABC870u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08ABCCCC;
L_08ABC870:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABC888:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABC89Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08ABDFCC;
L_08ABC89C:
    ctx.gpr[31] = (0x08ABC8A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ABC824;
L_08ABC8A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABC8B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] << 2u);
    ctx.gpr[17] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABC8ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 922u, 0x08B576D8u>(ctx, &aot_mem) && ctx.pc == 0x08ABC8ECu) goto L_08ABC8EC;
    return;
L_08ABC8EC:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08ABC91C;
    }
    goto L_08ABC900;
L_08ABC900:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08ABC910u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12224));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem) && ctx.pc == 0x08ABC910u) goto L_08ABC910;
    return;
L_08ABC910:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08ABC91C;
L_08ABC91C:
    ctx.gpr[6] = (65280u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(63));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
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
L_08ABC95C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABC968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] >> 6u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABC9AC;
      }
      goto L_08ABC9A4;
    }
L_08ABC9A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC9B4;
      }
      goto L_08ABC9AC;
    }
L_08ABC9AC:
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08ABC9B4;
L_08ABC9B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABC9BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABC9FC;
      }
      goto L_08ABC9D0;
    }
L_08ABC9D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1032));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABC9FC;
      }
      goto L_08ABC9F4;
    }
L_08ABC9F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08ABC9FC;
      }
      goto L_08ABC9FC;
    }
L_08ABC9FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABCA04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ABCA7C;
      }
      goto L_08ABCA34;
    }
L_08ABCA34:
    ctx.gpr[19] = (0u | 24u);
    goto L_08ABCA38;
L_08ABCA38:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABCA44u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08ABC9BC;
L_08ABCA44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[4] >> 6u);
      if (branch_taken) {
          goto L_08ABCA60;
      }
      goto L_08ABCA54;
    }
L_08ABCA54:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08ABCA68;
      }
      goto L_08ABCA60;
    }
L_08ABCA60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ABCA80;
      }
      goto L_08ABCA68;
    }
L_08ABCA68:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABCA74u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08ABC968;
L_08ABCA74:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ABCA38;
      }
      goto L_08ABCA7C;
    }
L_08ABCA7C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ABCA80;
L_08ABCA80:
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
L_08ABCAA0:
    ctx.gpr[7] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ABCAB4;
      }
      goto L_08ABCAAC;
    }
L_08ABCAAC:
    ctx.gpr[5] = (ctx.gpr[6] >> 15u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    goto L_08ABCAB4;
L_08ABCAB4:
    ctx.gpr[7] = (256u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[7] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABCAD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
    ctx.gpr[23] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[22] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08ABCBC4;
      }
      goto L_08ABCB28;
    }
L_08ABCB28:
    ctx.gpr[19] = (0u | 24u);
    goto L_08ABCB2C;
L_08ABCB2C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABCB38u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABC968;
L_08ABCB38:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABCB48u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABC9BC;
L_08ABCB48:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] & 63u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08ABCB74;
      }
      goto L_08ABCB5C;
    }
L_08ABCB5C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ABCB6Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    goto L_08ABC8B4;
L_08ABCB6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCBBC;
      }
      goto L_08ABCB74;
    }
L_08ABCB74:
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCBA4;
      }
      goto L_08ABCB84;
    }
L_08ABCB84:
    ctx.gpr[31] = (0x08ABCB8Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08ABCAA0;
L_08ABCB8C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABCB9Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABC8B4;
L_08ABCB9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCBBC;
      }
      goto L_08ABCBA4;
    }
L_08ABCBA4:
    ctx.gpr[31] = (0x08ABCBACu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08ABCAA0;
L_08ABCBAC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ABCBBCu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_08ABC8B4;
L_08ABCBBC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[20];
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08ABCB2C;
      }
      goto L_08ABCBC4;
    }
L_08ABCBC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABCBF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[6] = (ctx.gpr[10] | 0u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABCC20u);
    ctx.gpr[9] = (0u | 255u);
    goto L_08ABCAD8;
L_08ABCC20:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABCC38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ABCC64;
      }
      goto L_08ABCC54;
    }
L_08ABCC54:
    ctx.gpr[31] = (0x08ABCC5Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08ABCC8C;
L_08ABCC5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCC80;
      }
      goto L_08ABCC64;
    }
L_08ABCC64:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[10] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[31] = (0x08ABCC80u);
    ctx.gpr[9] = (0u | 255u);
    goto L_08ABCAD8;
L_08ABCC80:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABCC8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABCCA8u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_08ABC95C;
L_08ABCCA8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ABCCB8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08ABCCCC;
L_08ABCCB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABCCCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ABCD08;
      }
      goto L_08ABCCF4;
    }
L_08ABCCF4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08ABCD10;
      }
      goto L_08ABCD00;
    }
L_08ABCD00:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08ABCD40;
      }
      goto L_08ABCD08;
    }
L_08ABCD08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCD40;
      }
      goto L_08ABCD10;
    }
L_08ABCD10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABCD1Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08ABC968;
L_08ABCD1C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08ABCD30;
      }
      goto L_08ABCD28;
    }
L_08ABCD28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ABCD10;
      }
      goto L_08ABCD30;
    }
L_08ABCD30:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABCD40u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08ABC8B4;
L_08ABCD40:
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
L_08ABCD5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(71)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCDB4;
      }
      goto L_08ABCD80;
    }
L_08ABCD80:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCDAC;
      }
      goto L_08ABCD8C;
    }
L_08ABCD8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08ABCDA4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12252));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem) && ctx.pc == 0x08ABCDA4u) goto L_08ABCDA4;
    return;
L_08ABCDA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08ABCDAC;
L_08ABCDAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08ABCDB4;
L_08ABCDB4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABCDC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABCDDCu);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08ABCD5C;
L_08ABCDDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
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
L_08ABCDFC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABCE20;
      }
      goto L_08ABCE0C;
    }
L_08ABCE0C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABCE20;
      }
      goto L_08ABCE14;
    }
L_08ABCE14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08ABCE20;
L_08ABCE20:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABCE28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ABCE58;
      }
      goto L_08ABCE48;
    }
L_08ABCE48:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08ABCE58u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08ABCDFC;
L_08ABCE58:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABCE64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABCE90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 6u, 0x08A9402Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABCE90u) goto L_08ABCE90;
    return;
L_08ABCE90:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ABCEB4;
      }
      goto L_08ABCEA4;
    }
L_08ABCEA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ABCF60;
      }
      goto L_08ABCEB4;
    }
L_08ABCEB4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
        goto L_08ABCEFC;
    }
    goto L_08ABCED0;
L_08ABCED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (4u << 16u);
    ctx.gpr[9] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (0u | 8u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08ABCEF4u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(12288));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 139u, 0x08A9D300u>(ctx, &aot_mem) && ctx.pc == 0x08ABCEF4u) goto L_08ABCEF4;
    return;
L_08ABCEF4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08ABCEFC;
L_08ABCEFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08ABCF34u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 17u, 0x08A940D4u>(ctx, &aot_mem) && ctx.pc == 0x08ABCF34u) goto L_08ABCF34;
    return;
L_08ABCF34:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ABCF60;
      }
      goto L_08ABCF60;
    }
L_08ABCF60:
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
L_08ABCF7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08ABCFACu);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_08ABCE64;
L_08ABCFAC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABCFB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08ABCFD8u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_08ABCE64;
L_08ABCFD8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABCFE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x08ABD00Cu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08ABCE64;
L_08ABD00C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD018:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08ABD08C;
      }
      goto L_08ABD028;
    }
L_08ABD028:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-32705));
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[10] << 6u);
    ctx.gpr[9] = (ctx.gpr[9] & 32704u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_08ABD08C;
      }
      goto L_08ABD068;
    }
L_08ABD068:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] >> 24u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08ABD08C;
L_08ABD08C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD094:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ABD184;
      }
      goto L_08ABD0BC;
    }
L_08ABD0BC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12360)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD0D4:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABD184;
      }
      goto L_08ABD0E0;
    }
L_08ABD0E0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ABD0F8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08ABDFCC;
L_08ABD0F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABD184;
      }
      goto L_08ABD108;
    }
L_08ABD108:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08ABD11Cu);
    ctx.gpr[6] = (0u | 0u);
    goto L_08ABE004;
L_08ABD11C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABD184;
      }
      goto L_08ABD12C;
    }
L_08ABD12C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08ABD138u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ABCDFC;
L_08ABD138:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08ABD144u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ABCDFC;
L_08ABD144:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x08ABD15Cu);
    ctx.gpr[6] = (0u | 0u);
    goto L_08ABDFCC;
L_08ABD15C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABD184;
      }
      goto L_08ABD16C;
    }
L_08ABD16C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ABD17Cu);
    ctx.gpr[6] = (0u | 1u);
    goto L_08ABD018;
L_08ABD17C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD184;
      }
      goto L_08ABD184;
    }
L_08ABD184:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD198:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABD1C4u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    goto L_08ABC95C;
L_08ABD1C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABD1DCu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08ABDFCC;
L_08ABD1DC:
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
L_08ABD1F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABD21Cu);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08ABD094;
L_08ABD21C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ABD314;
      }
      goto L_08ABD230;
    }
L_08ABD230:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12392)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD248:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ABD258u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08ABC74C;
L_08ABD258:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABD314;
      }
      goto L_08ABD268;
    }
L_08ABD268:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ABD288u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08ABDFCC;
L_08ABD288:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD258;
      }
      goto L_08ABD290;
    }
L_08ABD290:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08ABD2A4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08ABE004;
L_08ABD2A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD258;
      }
      goto L_08ABD2AC;
    }
L_08ABD2AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[16] << 24u);
    ctx.gpr[6] = (65280u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ABD258;
      }
      goto L_08ABD2E8;
    }
L_08ABD2E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ABD30C;
      }
      goto L_08ABD2F4;
    }
L_08ABD2F4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ABD30Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08ABDFCC;
L_08ABD30C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD258;
      }
      goto L_08ABD314;
    }
L_08ABD314:
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
L_08ABD32C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 11u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ABD370;
      }
      goto L_08ABD350;
    }
L_08ABD350:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABD35Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08ABCDC0;
L_08ABD35C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08ABD370u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD1F8;
L_08ABD370:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABD3B4u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08ABD1F8;
L_08ABD3B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08ABD3D4;
      }
      goto L_08ABD3C4;
    }
L_08ABD3C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08ABD3D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08ABCCCC;
L_08ABD3D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ABD4C0;
      }
      goto L_08ABD3E4;
    }
L_08ABD3E4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABD3FCu);
    ctx.gpr[6] = (0u | 1u);
    goto L_08ABCA04;
L_08ABD3FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD41C;
      }
      goto L_08ABD404;
    }
L_08ABD404:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABD414u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08ABCA04;
L_08ABD414:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD474;
      }
      goto L_08ABD41C;
    }
L_08ABD41C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ABD434;
      }
      goto L_08ABD428;
    }
L_08ABD428:
    ctx.gpr[31] = (0x08ABD430u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08ABC824;
L_08ABD430:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08ABD434;
L_08ABD434:
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ABD44Cu);
    ctx.gpr[7] = (0u | 1u);
    goto L_08ABD198;
L_08ABD44C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ABD464u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08ABD198;
L_08ABD464:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABD474u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08ABCC8C;
L_08ABD474:
    ctx.gpr[31] = (0x08ABD47Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08ABC95C;
L_08ABD47C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ABD4A0u);
    ctx.gpr[10] = (ctx.gpr[20] | 0u);
    goto L_08ABCAD8;
L_08ABD4A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[31] = (0x08ABD4C0u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    goto L_08ABCAD8;
L_08ABD4C0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
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
L_08ABD4FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABD518u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08ABD094;
L_08ABD518:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABD524u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABCE28;
L_08ABD524:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABD530u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08ABCDC0;
L_08ABD530:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08ABD544u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD384;
L_08ABD544:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD558:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABD574u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08ABD094;
L_08ABD574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ABD5C4;
      }
      goto L_08ABD584;
    }
L_08ABD584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08ABD5BC;
      }
      goto L_08ABD594;
    }
L_08ABD594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD5C4;
      }
      goto L_08ABD5A4;
    }
L_08ABD5A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ABD5B4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08ABD384;
L_08ABD5B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08ABD5D4;
      }
      goto L_08ABD5BC;
    }
L_08ABD5BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD5D4;
      }
      goto L_08ABD5C4;
    }
L_08ABD5C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABD5D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD4FC;
L_08ABD5D0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08ABD5D4;
L_08ABD5D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD5E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ABD620;
      }
      goto L_08ABD608;
    }
L_08ABD608:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08ABD618u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08ABD558;
L_08ABD618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD630;
      }
      goto L_08ABD620;
    }
L_08ABD620:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08ABD630u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08ABD094;
L_08ABD630:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD63C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABD658u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08ABD5E8;
L_08ABD658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08ABD678;
      }
      goto L_08ABD668;
    }
L_08ABD668:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ABD6E4;
      }
      goto L_08ABD670;
    }
L_08ABD670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD688;
      }
      goto L_08ABD678;
    }
L_08ABD678:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ABD6C0;
      }
      goto L_08ABD680;
    }
L_08ABD680:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD6E4;
      }
      goto L_08ABD688;
    }
L_08ABD688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(250));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 512 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD6A4;
      }
      goto L_08ABD69C;
    }
L_08ABD69C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD6E4;
      }
      goto L_08ABD6A4;
    }
L_08ABD6A4:
    ctx.gpr[31] = (0x08ABD6ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ABCFE4;
L_08ABD6AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(250));
      if (branch_taken) {
          goto L_08ABD6F0;
      }
      goto L_08ABD6C0;
    }
L_08ABD6C0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(250));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 512 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD6DC;
      }
      goto L_08ABD6D4;
    }
L_08ABD6D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD6E4;
      }
      goto L_08ABD6DC;
    }
L_08ABD6DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD6F0;
      }
      goto L_08ABD6E4;
    }
L_08ABD6E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABD6F0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD558;
L_08ABD6F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD704:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ABD768;
      }
      goto L_08ABD730;
    }
L_08ABD730:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABD804;
      }
      goto L_08ABD73C;
    }
L_08ABD73C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD784;
      }
      goto L_08ABD744;
    }
L_08ABD744:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABD750u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABCE28;
L_08ABD750:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABD760u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD384;
L_08ABD760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD810;
      }
      goto L_08ABD768;
    }
L_08ABD768:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABD7B0;
      }
      goto L_08ABD774;
    }
L_08ABD774:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD7D8;
      }
      goto L_08ABD77C;
    }
L_08ABD77C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD804;
      }
      goto L_08ABD784;
    }
L_08ABD784:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABD790u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD558;
L_08ABD790:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ABD7A8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08ABDFCC;
L_08ABD7A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD804;
      }
      goto L_08ABD7B0;
    }
L_08ABD7B0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABD7BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD558;
L_08ABD7BC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x08ABD7D0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08ABE004;
L_08ABD7D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD804;
      }
      goto L_08ABD7D8;
    }
L_08ABD7D8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABD7E4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD63C;
L_08ABD7E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x08ABD7FCu);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    goto L_08ABDFCC;
L_08ABD7FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD804;
      }
      goto L_08ABD804;
    }
L_08ABD804:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABD810u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABCE28;
L_08ABD810:
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
L_08ABD828:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABD858u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08ABD558;
L_08ABD858:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABD864u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABCE28;
L_08ABD864:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABD874u);
    ctx.gpr[5] = (0u | 2u);
    goto L_08ABCDC0;
L_08ABD874:
    ctx.gpr[20] = (0u | 11u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABD888u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08ABD63C;
L_08ABD888:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08ABD8A0u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    goto L_08ABDFCC;
L_08ABD8A0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABD8ACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08ABCE28;
L_08ABD8AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
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
L_08ABD8D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABD8E8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08ABC9BC;
L_08ABD8E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 24u);
    ctx.gpr[6] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABD920:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[8] = (0u | 10u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ABD9A4;
      }
      goto L_08ABD94C;
    }
L_08ABD94C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[6] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ABD9A4;
      }
      goto L_08ABD974;
    }
L_08ABD974:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] & 511u);
    ctx.gpr[8] = (ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[31] = (0x08ABD99Cu);
    ctx.gpr[6] = (0u | 255u);
    goto L_08ABC888;
L_08ABD99C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABD9D4;
      }
      goto L_08ABD9A4;
    }
L_08ABD9A4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABD9B0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08ABD32C;
L_08ABD9B0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABD9BCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08ABCE28;
L_08ABD9BC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08ABD9D4u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08ABC888;
L_08ABD9D4:
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
L_08ABD9EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABDA08u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08ABD094;
L_08ABDA08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08ABDA48;
      }
      goto L_08ABDA18;
    }
L_08ABDA18:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08ABDA30;
      }
      goto L_08ABDA20;
    }
L_08ABDA20:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08ABDA38;
      }
      goto L_08ABDA28;
    }
L_08ABDA28:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ABDA5C;
      }
      goto L_08ABDA30;
    }
L_08ABDA30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ABDA70;
      }
      goto L_08ABDA38;
    }
L_08ABDA38:
    ctx.gpr[31] = (0x08ABDA40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ABC824;
L_08ABDA40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ABDA70;
      }
      goto L_08ABDA48;
    }
L_08ABDA48:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABDA54u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD8D8;
L_08ABDA54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08ABDA70;
      }
      goto L_08ABDA5C;
    }
L_08ABDA5C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ABDA6Cu);
    ctx.gpr[6] = (0u | 0u);
    goto L_08ABD920;
L_08ABDA6C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08ABDA70;
L_08ABDA70:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08ABDA80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ABCCCC;
L_08ABDA80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABDA94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABDAB0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08ABD094;
L_08ABDAB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08ABDAF0;
      }
      goto L_08ABDAC0;
    }
L_08ABDAC0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08ABDAD8;
      }
      goto L_08ABDAC8;
    }
L_08ABDAC8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08ABDAE0;
      }
      goto L_08ABDAD0;
    }
L_08ABDAD0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ABDAF8;
      }
      goto L_08ABDAD8;
    }
L_08ABDAD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ABDB0C;
      }
      goto L_08ABDAE0;
    }
L_08ABDAE0:
    ctx.gpr[31] = (0x08ABDAE8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ABC824;
L_08ABDAE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ABDB0C;
      }
      goto L_08ABDAF0;
    }
L_08ABDAF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08ABDB0C;
      }
      goto L_08ABDAF8;
    }
L_08ABDAF8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ABDB08u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08ABD920;
L_08ABDB08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08ABDB0C;
L_08ABDB0C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08ABDB1Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ABCCCC;
L_08ABDB1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABDB30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABDB4Cu);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08ABD094;
L_08ABDB4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABDC00;
      }
      goto L_08ABDB60;
    }
L_08ABDB60:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12440)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABDB78:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ABDC08;
      }
      goto L_08ABDB8C;
    }
L_08ABDB8C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ABDC08;
      }
      goto L_08ABDBA0;
    }
L_08ABDBA0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABDBACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD8D8;
L_08ABDBAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ABDC08;
      }
      goto L_08ABDBB8;
    }
L_08ABDBB8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABDBC4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD32C;
L_08ABDBC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABDBD0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABCE28;
L_08ABDBD0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ABDBE8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08ABDFCC;
L_08ABDBE8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ABDC08;
      }
      goto L_08ABDC00;
    }
L_08ABDC00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08ABDC08;
L_08ABDC08:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABDC24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABDC3Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08ABD63C;
L_08ABDC3C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABDC58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ABDD0C;
      }
      goto L_08ABDC74;
    }
L_08ABDC74:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABDC80u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD5E8;
L_08ABDC80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ABDCCC;
      }
      goto L_08ABDC90;
    }
L_08ABDC90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ABDCCC;
      }
      goto L_08ABDCB4;
    }
L_08ABDCB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABDCC4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    goto L_08ABCFB8;
L_08ABDCC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABDD18;
      }
      goto L_08ABDCCC;
    }
L_08ABDCCC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABDCD8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD558;
L_08ABDCD8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABDCE4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABCE28;
L_08ABDCE4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ABDCFCu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08ABDFCC;
L_08ABDCFC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABDD18;
      }
      goto L_08ABDD0C;
    }
L_08ABDD0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABDD18u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABDB30;
L_08ABDD18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABDD2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ABDD70;
      }
      goto L_08ABDD50;
    }
L_08ABDD50:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ABDDCC;
      }
      goto L_08ABDD5C;
    }
L_08ABDD5C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABDD68u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD4FC;
L_08ABDD68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABDDD8;
      }
      goto L_08ABDD70;
    }
L_08ABDD70:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABDDA8;
      }
      goto L_08ABDD7C;
    }
L_08ABDD7C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABDDCC;
      }
      goto L_08ABDD84;
    }
L_08ABDD84:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABDD90u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABDA94;
L_08ABDD90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08ABDD9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ABCC8C;
L_08ABDD9C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABDDD8;
      }
      goto L_08ABDDA8;
    }
L_08ABDDA8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABDDB4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD9EC;
L_08ABDDB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08ABDDC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ABCC8C;
L_08ABDDC0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABDDD8;
      }
      goto L_08ABDDCC;
    }
L_08ABDDCC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABDDD8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD63C;
L_08ABDDD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABDDEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < 5 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08ABDE38;
      }
      goto L_08ABDE10;
    }
L_08ABDE10:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08ABDE28u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08ABDFCC;
L_08ABDE28:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABDEA0;
      }
      goto L_08ABDE38;
    }
L_08ABDE38:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_08ABDE54;
      }
      goto L_08ABDE44;
    }
L_08ABDE44:
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08ABDE64;
      }
      goto L_08ABDE54;
    }
L_08ABDE54:
    ctx.gpr[9] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08ABDE64;
      }
      goto L_08ABDE60;
    }
L_08ABDE60:
    ctx.gpr[8] = (0u | 0u);
    goto L_08ABDE64;
L_08ABDE64:
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12312));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24)));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08ABDE94u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    goto L_08ABC888;
L_08ABDE94:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08ABDEA0;
L_08ABDEA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABDEB0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABDECC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABDEF8u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08ABCBF4;
L_08ABDEF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ABDF40;
      }
      goto L_08ABDF10;
    }
L_08ABDF10:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[9] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(44));
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-3));
    ctx.gpr[31] = (0x08ABDF34u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(12336));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 139u, 0x08A9D300u>(ctx, &aot_mem) && ctx.pc == 0x08ABDF34u) goto L_08ABDF34;
    return;
L_08ABDF34:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08ABDF40;
L_08ABDF40:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08ABDF94;
      }
      goto L_08ABDF64;
    }
L_08ABDF64:
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[9] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-3));
    ctx.gpr[31] = (0x08ABDF88u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(12336));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 139u, 0x08A9D300u>(ctx, &aot_mem) && ctx.pc == 0x08ABDF88u) goto L_08ABDF88;
    return;
L_08ABDF88:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08ABDF94;
L_08ABDF94:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
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
L_08ABDFCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] << 15u);
    ctx.gpr[8] = (ctx.gpr[8] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABDFF8u);
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[5]);
    goto L_08ABDECC;
L_08ABDFF8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE004:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 6u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABE028u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    goto L_08ABDECC;
L_08ABE028:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE034:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ABE084;
      }
      goto L_08ABE070;
    }
L_08ABE070:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ABE118;
      }
      goto L_08ABE07C;
    }
L_08ABE07C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE204;
      }
      goto L_08ABE084;
    }
L_08ABE084:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABE0D8;
      }
      goto L_08ABE090;
    }
L_08ABE090:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE204;
      }
      goto L_08ABE098;
    }
L_08ABE098:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABE0A4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD094;
L_08ABE0A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08ABE0B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08ABCCCC;
L_08ABE0B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABE254;
      }
      goto L_08ABE0D8;
    }
L_08ABE0D8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABE0E4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD094;
L_08ABE0E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08ABE0F4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08ABCCCC;
L_08ABE0F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABE254;
      }
      goto L_08ABE118;
    }
L_08ABE118:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABE124u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD5E8;
L_08ABE124:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[4] = (0u | 19u);
      if (branch_taken) {
          goto L_08ABE1B8;
      }
      goto L_08ABE134;
    }
L_08ABE134:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 63u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ABE1B8;
      }
      goto L_08ABE158;
    }
L_08ABE158:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABE164u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08ABCE28;
L_08ABE164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (65280u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32767));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[7] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 15u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABE1FC;
      }
      goto L_08ABE1B8;
    }
L_08ABE1B8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABE1C4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD4FC;
L_08ABE1C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABE1D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABCE28;
L_08ABE1D0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABE1DCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08ABCE28;
L_08ABE1DC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[31] = (0x08ABE1F4u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08ABDFCC;
L_08ABE1F4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_08ABE1FC;
L_08ABE1FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE254;
      }
      goto L_08ABE204;
    }
L_08ABE204:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABE210u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08ABD63C;
L_08ABE210:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABE220u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABD63C;
L_08ABE220:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABE230u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABCE28;
L_08ABE230:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABE23Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08ABCE28;
L_08ABE23C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ABE254u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    goto L_08ABDDEC;
L_08ABE254:
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
L_08ABE278:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABE290u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    goto L_08ABE57C;
L_08ABE290:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE29C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABE2B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    goto L_08ABE57C;
L_08ABE2B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE2C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABE2D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    goto L_08ABE8F4;
L_08ABE2D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE2E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABE2FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    goto L_08ABE8F4;
L_08ABE2FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE308:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABE320u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    goto L_08ABE57C;
L_08ABE320:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE32C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[31] = (0x08ABE348u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08ABE308;
L_08ABE348:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ABE364;
      }
      goto L_08ABE354;
    }
L_08ABE354:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ABE364u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABE364u) goto L_08ABE364;
    return;
L_08ABE364:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE378:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABE38Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08ABE32C;
L_08ABE38C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE398:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABE3B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    goto L_08ABE8F4;
L_08ABE3B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE3BC:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3256));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE3E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABE418u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABF578;
L_08ABE418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] - ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[5] = (ctx.gpr[17] >> 10u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(292), ctx.gpr[17]);
    ctx.gpr[31] = (0x08ABE454u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    goto L_08ABF1F8;
L_08ABE454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 264u);
    ctx.gpr[31] = (0x08ABE464u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(296), ctx.gpr[2]);
    goto L_08ABF1F8;
L_08ABE464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    goto L_08ABE484;
L_08ABE484:
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08ABE4B4;
      }
      goto L_08ABE494;
    }
L_08ABE494:
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[7]);
    ctx.gpr[2] = (ctx.gpr[8] >> 2u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[12]);
    ctx.gpr[2] = (ctx.gpr[2] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABE500;
      }
      goto L_08ABE4B4;
    }
L_08ABE4B4:
    ctx.gpr[8] = (ctx.gpr[9] < static_cast<std::uint32_t>(65) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(15));
      if (branch_taken) {
          goto L_08ABE4E4;
      }
      goto L_08ABE4C0;
    }
L_08ABE4C0:
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(7));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[8] >> 3u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[12]);
    ctx.gpr[2] = (ctx.gpr[2] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABE500;
      }
      goto L_08ABE4E4;
    }
L_08ABE4E4:
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[8] >> 4u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(5));
    ctx.gpr[12] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[12]);
    ctx.gpr[2] = (ctx.gpr[2] << 2u);
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
    goto L_08ABE500;
L_08ABE500:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ABE524;
      }
      goto L_08ABE510;
    }
L_08ABE510:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE524;
      }
      goto L_08ABE518;
    }
L_08ABE518:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    goto L_08ABE524;
L_08ABE524:
    ctx.gpr[2] = (ctx.gpr[9] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE484;
      }
      goto L_08ABE530;
    }
L_08ABE530:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08ABE544u);
    ctx.gpr[5] = (ctx.gpr[5] & 1023u);
    goto L_08ABF1F8;
L_08ABE544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
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
L_08ABE564:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE57C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ABE5A8;
      }
      goto L_08ABE594;
    }
L_08ABE594:
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08ABE5B0;
      }
      goto L_08ABE5A0;
    }
L_08ABE5A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE618;
      }
      goto L_08ABE5A8;
    }
L_08ABE5A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABE628;
      }
      goto L_08ABE5B0;
    }
L_08ABE5B0:
    ctx.gpr[4] = (ctx.gpr[4] >> 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08ABE5E0;
      }
      goto L_08ABE5D0;
    }
L_08ABE5D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ABE5EC;
      }
      goto L_08ABE5E0;
    }
L_08ABE5E0:
    ctx.gpr[31] = (0x08ABE5E8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 466u, 0x08AA7154u>(ctx, &aot_mem) && ctx.pc == 0x08ABE5E8u) goto L_08ABE5E8;
    return;
L_08ABE5E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08ABE5EC;
L_08ABE5EC:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE610;
      }
      goto L_08ABE600;
    }
L_08ABE600:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ABE610u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABE610u) goto L_08ABE610;
    return;
L_08ABE610:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE624;
      }
      goto L_08ABE618;
    }
L_08ABE618:
    ctx.gpr[31] = (0x08ABE620u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ABF3BC;
L_08ABE620:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08ABE624;
L_08ABE624:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08ABE628;
L_08ABE628:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE63C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (~(ctx.gpr[8] | 0u));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[7] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE6A8;
      }
      goto L_08ABE664;
    }
L_08ABE664:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (ctx.gpr[5] >> 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ABE698;
      }
      goto L_08ABE688;
    }
L_08ABE688:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABE6A0;
      }
      goto L_08ABE698;
    }
L_08ABE698:
    ctx.gpr[31] = (0x08ABE6A0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 466u, 0x08AA7154u>(ctx, &aot_mem) && ctx.pc == 0x08ABE6A0u) goto L_08ABE6A0;
    return;
L_08ABE6A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE6B0;
      }
      goto L_08ABE6A8;
    }
L_08ABE6A8:
    ctx.gpr[31] = (0x08ABE6B0u);
    // nop
    goto L_08ABF46C;
L_08ABE6B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE6BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[7] & 255u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ABE730;
      }
      goto L_08ABE6F0;
    }
L_08ABE6F0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE71C;
      }
      goto L_08ABE6F8;
    }
L_08ABE6F8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABE704u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABEF54;
L_08ABE704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ABE744;
      }
      goto L_08ABE714;
    }
L_08ABE714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE874;
      }
      goto L_08ABE71C;
    }
L_08ABE71C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABE728u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABE8F4;
L_08ABE728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABE8D0;
      }
      goto L_08ABE730;
    }
L_08ABE730:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABE73Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08ABE57C;
L_08ABE73C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE8D0;
      }
      goto L_08ABE744;
    }
L_08ABE744:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE7A4;
      }
      goto L_08ABE760;
    }
L_08ABE760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE7A4;
      }
      goto L_08ABE77C;
    }
L_08ABE77C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[31] = (0x08ABE794u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    goto L_08ABFC0C;
L_08ABE794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08ABE7A4;
L_08ABE7A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE874;
      }
      goto L_08ABE7BC;
    }
L_08ABE7BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ABE7DCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08ABFA50;
L_08ABE7DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE808;
      }
      goto L_08ABE7E8;
    }
L_08ABE7E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[19]);
    ctx.gpr[31] = (0x08ABE808u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABE808u) goto L_08ABE808;
    return;
L_08ABE808:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ABE814u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08ABFC04;
L_08ABE814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08ABE824u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    goto L_08ABFC04;
L_08ABE824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[18]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ABE85C;
      }
      goto L_08ABE83C;
    }
L_08ABE83C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE85C;
      }
      goto L_08ABE848;
    }
L_08ABE848:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08ABE85Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABE85Cu) goto L_08ABE85C;
    return;
L_08ABE85C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABE8D0;
      }
      goto L_08ABE874;
    }
L_08ABE874:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE8A4;
      }
      goto L_08ABE87C;
    }
L_08ABE87C:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABE88Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08ABE57C;
L_08ABE88C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ABE8AC;
      }
      goto L_08ABE89C;
    }
L_08ABE89C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ABE8B4;
      }
      goto L_08ABE8A4;
    }
L_08ABE8A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ABE8D0;
      }
      goto L_08ABE8AC;
    }
L_08ABE8AC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08ABE8B4;
L_08ABE8B4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ABE8C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08ABE8C0u) goto L_08ABE8C0;
    return;
L_08ABE8C0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABE8CCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABE8F4;
L_08ABE8CC:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08ABE8D0;
L_08ABE8D0:
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
L_08ABE8F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ABE924;
      }
      goto L_08ABE90C;
    }
L_08ABE90C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
        goto L_08ABE92C;
    }
    goto L_08ABE91C;
L_08ABE91C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE958;
      }
      goto L_08ABE924;
    }
L_08ABE924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABE97C;
      }
      goto L_08ABE92C;
    }
L_08ABE92C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(296)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] >> 10u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABE97C;
      }
      goto L_08ABE958;
    }
L_08ABE958:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[31] = (0x08ABE97Cu);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    goto L_08ABF8B4;
L_08ABE97C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABE988:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_08ABE9D4;
      }
      goto L_08ABE99C;
    }
L_08ABE99C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08ABE9C0;
      }
      goto L_08ABE9B0;
    }
L_08ABE9B0:
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABEA08;
      }
      goto L_08ABE9C0;
    }
L_08ABE9C0:
    ctx.gpr[6] = (61440u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABEA08;
      }
      goto L_08ABE9D4;
    }
L_08ABE9D4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08ABE9F8;
      }
      goto L_08ABE9E8;
    }
L_08ABE9E8:
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABEA08;
      }
      goto L_08ABE9F8;
    }
L_08ABE9F8:
    ctx.gpr[6] = (61440u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08ABEA08;
L_08ABEA08:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABEA10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7584), 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABEB28;
      }
      goto L_08ABEA3C;
    }
L_08ABEA3C:
    ctx.gpr[14] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (32768u << 16u);
    ctx.gpr[15] = (4096u << 16u);
    goto L_08ABEA48;
L_08ABEA48:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[11] & ctx.gpr[10]);
    ctx.gpr[11] = (0u < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEB18;
      }
      goto L_08ABEA60;
    }
L_08ABEA60:
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_08ABEA70;
L_08ABEA70:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEAE4;
      }
      goto L_08ABEA78;
    }
L_08ABEA78:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08ABEAE4;
      }
      goto L_08ABEA80;
    }
L_08ABEA80:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.gpr[24] = (ctx.gpr[13] & ctx.gpr[10]);
    ctx.gpr[24] = (0u < ctx.gpr[24] ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[24] & 255u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEAB0;
      }
      goto L_08ABEA98;
    }
L_08ABEA98:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[13] - ctx.gpr[14]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[12]);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[13]);
      if (branch_taken) {
          goto L_08ABEADC;
      }
      goto L_08ABEAB0;
    }
L_08ABEAB0:
    ctx.gpr[13] = (ctx.gpr[13] & ctx.gpr[15]);
    ctx.gpr[13] = (0u < ctx.gpr[13] ? 1u : 0u);
    ctx.gpr[13] = (ctx.gpr[13] & 255u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEACC;
      }
      goto L_08ABEAC4;
    }
L_08ABEAC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEAE4;
      }
      goto L_08ABEACC;
    }
L_08ABEACC:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (ctx.gpr[13] - ctx.gpr[14]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[24]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[13]);
    goto L_08ABEADC;
L_08ABEADC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEA70;
      }
      goto L_08ABEAE4;
    }
L_08ABEAE4:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEB04;
      }
      goto L_08ABEAEC;
    }
L_08ABEAEC:
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEAFC;
      }
      goto L_08ABEAF8;
    }
L_08ABEAF8:
    ctx.gpr[6] = (ctx.gpr[11] | 0u);
    goto L_08ABEAFC;
L_08ABEAFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_08ABEB20;
      }
      goto L_08ABEB04;
    }
L_08ABEB04:
    ctx.gpr[11] = (ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEB18;
      }
      goto L_08ABEB10;
    }
L_08ABEB10:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08ABEB18;
L_08ABEB18:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    goto L_08ABEB20;
L_08ABEB20:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08ABEA48;
      }
      goto L_08ABEB28;
    }
L_08ABEB28:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ABEB44;
      }
      goto L_08ABEB30;
    }
L_08ABEB30:
    ctx.gpr[31] = (0x08ABEB38u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08ABEB54;
L_08ABEB38:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEB44;
      }
      goto L_08ABEB44;
    }
L_08ABEB44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABEB54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[23] = (57344u << 16u);
    ctx.gpr[22] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (16384u << 16u);
    ctx.gpr[30] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    goto L_08ABEBCC;
L_08ABEBCC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEDF4;
      }
      goto L_08ABEBD4;
    }
L_08ABEBD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEDF4;
      }
      goto L_08ABEBF0;
    }
L_08ABEBF0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[17] - ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEC28;
      }
      goto L_08ABEC0C;
    }
L_08ABEC0C:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEC34;
      }
      goto L_08ABEC20;
    }
L_08ABEC20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEC58;
      }
      goto L_08ABEC28;
    }
L_08ABEC28:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ABEDFC;
      }
      goto L_08ABEC34;
    }
L_08ABEC34:
    ctx.gpr[31] = (0x08ABEC3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ABFC0C;
L_08ABEC3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEC34;
      }
      goto L_08ABEC54;
    }
L_08ABEC54:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08ABEC58;
L_08ABEC58:
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABED0C;
      }
      goto L_08ABEC74;
    }
L_08ABEC74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7584)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08ABED0C;
      }
      goto L_08ABEC84;
    }
L_08ABEC84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[5] - ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7584), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    ctx.gpr[31] = (0x08ABECD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ABFD6C;
L_08ABECD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (28672u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08ABED18;
    }
    goto L_08ABED04;
L_08ABED04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ABED3C;
      }
      goto L_08ABED0C;
    }
L_08ABED0C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ABEDFC;
      }
      goto L_08ABED18;
    }
L_08ABED18:
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08ABED3C;
L_08ABED3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08ABED98;
      }
      goto L_08ABED84;
    }
L_08ABED84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[17]);
    goto L_08ABED98;
L_08ABED98:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08ABEDBCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08ABEDBCu) goto L_08ABEDBC;
    return;
L_08ABEDBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ABEDD8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08ABFA50;
L_08ABEDD8:
    ctx.gpr[31] = (0x08ABEDE0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08ABEFD4;
L_08ABEDE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABEBCC;
      }
      goto L_08ABEDF4;
    }
L_08ABEDF4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    ctx.gpr[2] = (0u | 0u);
    goto L_08ABEDFC;
L_08ABEDFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABEE2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7584), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ABEEA0;
      }
      goto L_08ABEE58;
    }
L_08ABEE58:
    ctx.gpr[17] = (32768u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (32768u << 16u);
    goto L_08ABEE64;
L_08ABEE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEE8C;
      }
      goto L_08ABEE7C;
    }
L_08ABEE7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ABEE8Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08ABEB54;
L_08ABEE8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ABEE64;
      }
      goto L_08ABEEA0;
    }
L_08ABEEA0:
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
L_08ABEEBC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEEE0;
      }
      goto L_08ABEED0;
    }
L_08ABEED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEEE8;
      }
      goto L_08ABEEE0;
    }
L_08ABEEE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABEF4C;
      }
      goto L_08ABEEE8;
    }
L_08ABEEE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7584)));
    ctx.gpr[9] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(26160));
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08ABEF48;
      }
      goto L_08ABEF0C;
    }
L_08ABEF0C:
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[10] = (ctx.gpr[10] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABEF3C;
      }
      goto L_08ABEF28;
    }
L_08ABEF28:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABEF4C;
      }
      goto L_08ABEF3C;
    }
L_08ABEF3C:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08ABEF0C;
      }
      goto L_08ABEF48;
    }
L_08ABEF48:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ABEF4C;
L_08ABEF4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABEF54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ABEFA4;
      }
      goto L_08ABEF7C;
    }
L_08ABEF7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] >> 10u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ABEFC0;
      }
      goto L_08ABEFA4;
    }
L_08ABEFA4:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08ABEFB8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ABFC04;
L_08ABEFB8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[16]);
    goto L_08ABEFC0;
L_08ABEFC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABEFD4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABEFDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABEFF0;
      }
      goto L_08ABEFE8;
    }
L_08ABEFE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ABF040;
      }
      goto L_08ABEFF0;
    }
L_08ABEFF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[7] = (32768u << 16u);
      if (branch_taken) {
          goto L_08ABF040;
      }
      goto L_08ABEFFC;
    }
L_08ABEFFC:
    ctx.gpr[6] = (4096u << 16u);
    goto L_08ABF000;
L_08ABF000:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[8] & ctx.gpr[7]);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF030;
      }
      goto L_08ABF018;
    }
L_08ABF018:
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[6]);
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF030;
      }
      goto L_08ABF02C;
    }
L_08ABF02C:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08ABF030;
L_08ABF030:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ABF000;
      }
      goto L_08ABF040;
    }
L_08ABF040:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF048:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF05C;
      }
      goto L_08ABF054;
    }
L_08ABF054:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF108;
      }
      goto L_08ABF05C;
    }
L_08ABF05C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[7] = (32768u << 16u);
      if (branch_taken) {
          goto L_08ABF108;
      }
      goto L_08ABF068;
    }
L_08ABF068:
    ctx.gpr[6] = (4096u << 16u);
    goto L_08ABF06C;
L_08ABF06C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[8] & ctx.gpr[7]);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF0F8;
      }
      goto L_08ABF084;
    }
L_08ABF084:
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[6]);
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF0F8;
      }
      goto L_08ABF098;
    }
L_08ABF098:
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (ctx.gpr[8] << 24u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-109));
    ctx.gpr[9] = (ctx.gpr[8] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF0F8;
      }
      goto L_08ABF0B8;
    }
L_08ABF0B8:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[8]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12704)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF0D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF0F8;
      }
      goto L_08ABF0D8;
    }
L_08ABF0D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF0F8;
      }
      goto L_08ABF0E0;
    }
L_08ABF0E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF0F8;
      }
      goto L_08ABF0E8;
    }
L_08ABF0E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF0F8;
      }
      goto L_08ABF0F0;
    }
L_08ABF0F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF0F8;
      }
      goto L_08ABF0F8;
    }
L_08ABF0F8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ABF06C;
      }
      goto L_08ABF108;
    }
L_08ABF108:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF110:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1023));
    ctx.gpr[5] = (ctx.gpr[5] >> 10u);
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08ABF150;
      }
      goto L_08ABF12C;
    }
L_08ABF12C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF150;
      }
      goto L_08ABF138;
    }
L_08ABF138:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] >> 10u);
      if (branch_taken) {
          goto L_08ABF1B4;
      }
      goto L_08ABF150;
    }
L_08ABF150:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(292)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF19C;
      }
      goto L_08ABF16C;
    }
L_08ABF16C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[31] = (0x08ABF184u);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    goto L_08ABF1F8;
L_08ABF184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08ABF1A4;
      }
      goto L_08ABF194;
    }
L_08ABF194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABF1EC;
      }
      goto L_08ABF19C;
    }
L_08ABF19C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABF1EC;
      }
      goto L_08ABF1A4;
    }
L_08ABF1A4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[7] >> 10u);
    goto L_08ABF1B4;
L_08ABF1B4:
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ABF1EC;
      }
      goto L_08ABF1C8;
    }
L_08ABF1C8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(296)));
    ctx.gpr[10] = (ctx.gpr[5] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ABF1C8;
      }
      goto L_08ABF1EC;
    }
L_08ABF1EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF1F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (4096u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[8] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_08ABF22C;
    }
    goto L_08ABF224;
L_08ABF224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABF260;
      }
      goto L_08ABF22C;
    }
L_08ABF22C:
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (8192u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    goto L_08ABF260;
L_08ABF260:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF268:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (ctx.gpr[5] >> 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1024));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1023));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF2CC;
      }
      goto L_08ABF2A4;
    }
L_08ABF2A4:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08ABF2BCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08ABF110;
L_08ABF2BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08ABF2CCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 463u, 0x08AA70F8u>(ctx, &aot_mem) && ctx.pc == 0x08ABF2CCu) goto L_08ABF2CC;
    return;
L_08ABF2CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF2D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF2F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABF318;
      }
      goto L_08ABF304;
    }
L_08ABF304:
    ctx.gpr[31] = (0x08ABF30Cu);
    // nop
    goto L_08ABF6BC;
L_08ABF30C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[4]);
    goto L_08ABF318;
L_08ABF318:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF324:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF334;
      }
      goto L_08ABF32C;
    }
L_08ABF32C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ABF340;
      }
      goto L_08ABF334;
    }
L_08ABF334:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3256));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08ABF340;
L_08ABF340:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF348:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABF360u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ABFF10;
L_08ABF360:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08ABF368;
L_08ABF368:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ABF394;
      }
      goto L_08ABF378;
    }
L_08ABF378:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF394;
      }
      goto L_08ABF388;
    }
L_08ABF388:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF388;
      }
      goto L_08ABF394;
    }
L_08ABF394:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ABF368;
      }
      goto L_08ABF3A4;
    }
L_08ABF3A4:
    rt.unsupported(0x08ABF3A4u, 0x0000000Du, "special? not lowered yet"); return;
L_08ABF3BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ABF444;
      }
      goto L_08ABF3E0;
    }
L_08ABF3E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08ABF3ECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABF608;
L_08ABF3EC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF444;
      }
      goto L_08ABF3F8;
    }
L_08ABF3F8:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABF408u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABF6E4;
L_08ABF408:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ABF42C;
      }
      goto L_08ABF414;
    }
L_08ABF414:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ABF42Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABF42Cu) goto L_08ABF42C;
    return;
L_08ABF42C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABF454;
      }
      goto L_08ABF444;
    }
L_08ABF444:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ABF454u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ABF454u) goto L_08ABF454;
    return;
L_08ABF454:
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
L_08ABF46C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ABF550;
      }
      goto L_08ABF494;
    }
L_08ABF494:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08ABF4A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_08ABF608;
L_08ABF4A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF550;
      }
      goto L_08ABF4AC;
    }
L_08ABF4AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF4EC;
      }
      goto L_08ABF4DC;
    }
L_08ABF4DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    goto L_08ABF4EC;
L_08ABF4EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABF504u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08ABF7B0;
L_08ABF504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF534;
      }
      goto L_08ABF524;
    }
L_08ABF524:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08ABF534;
L_08ABF534:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABF560;
      }
      goto L_08ABF550;
    }
L_08ABF550:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ABF560u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ABF560u) goto L_08ABF560;
    return;
L_08ABF560:
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
L_08ABF578:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] & 63u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[8]);
        goto L_08ABF5A4;
    }
    goto L_08ABF58C;
L_08ABF58C:
    ctx.gpr[9] = (0u | 64u);
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[8]);
    goto L_08ABF5A4;
L_08ABF5A4:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] & 63u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF608:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (0u | 20u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF624;
      }
      goto L_08ABF620;
    }
L_08ABF620:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_08ABF624;
L_08ABF624:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] & 63u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF640;
      }
      goto L_08ABF634;
    }
L_08ABF634:
    ctx.gpr[8] = (0u | 64u);
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_08ABF640;
L_08ABF640:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08ABF64C;
L_08ABF64C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[8] = (ctx.gpr[4] < static_cast<std::uint32_t>(15) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABF65C;
      }
      goto L_08ABF654;
    }
L_08ABF654:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF6B4;
      }
      goto L_08ABF65C;
    }
L_08ABF65C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF690;
      }
      goto L_08ABF670;
    }
L_08ABF670:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF688;
      }
      goto L_08ABF67C;
    }
L_08ABF67C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08ABF680;
L_08ABF680:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF64C;
      }
      goto L_08ABF688;
    }
L_08ABF688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF6B4;
      }
      goto L_08ABF690;
    }
L_08ABF690:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF6AC;
      }
      goto L_08ABF69C;
    }
L_08ABF69C:
    ctx.gpr[2] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABF680;
      }
      goto L_08ABF6AC;
    }
L_08ABF6AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ABF6B4;
      }
      goto L_08ABF6B4;
    }
L_08ABF6B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF6BC:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF6DC;
      }
      goto L_08ABF6CC;
    }
L_08ABF6CC:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF6CC;
      }
      goto L_08ABF6DC;
    }
L_08ABF6DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF6E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABF708u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_08ABFD6C;
L_08ABF708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (28672u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (57344u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF778;
      }
      goto L_08ABF754;
    }
L_08ABF754:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (49152u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08ABF778;
L_08ABF778:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABF788u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08ABFA50;
L_08ABF788:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABF794u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08ABFC04;
L_08ABF794:
    ctx.gpr[2] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
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
L_08ABF7B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF81C;
      }
      goto L_08ABF7D0;
    }
L_08ABF7D0:
    ctx.gpr[8] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[8] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF82C;
      }
      goto L_08ABF7E0;
    }
L_08ABF7E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ABF7FCu);
    ctx.gpr[5] = (ctx.gpr[8] - ctx.gpr[5]);
    goto L_08ABFA50;
L_08ABF7FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08ABF814u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08ABF6E4;
L_08ABF814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF8A4;
      }
      goto L_08ABF81C;
    }
L_08ABF81C:
    ctx.gpr[31] = (0x08ABF824u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08ABF6E4;
L_08ABF824:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF8A4;
      }
      goto L_08ABF82C;
    }
L_08ABF82C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ABF844u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08ABFC04;
L_08ABF844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ABF868u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08ABFC04;
L_08ABF868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08ABF888u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ABFA50;
L_08ABF888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08ABF89Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08ABF6E4;
L_08ABF89C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF8A4;
      }
      goto L_08ABF8A4;
    }
L_08ABF8A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABF8B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABF8E0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08ABFC04;
L_08ABF8E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (61440u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[18] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (8192u << 16u);
      if (branch_taken) {
          goto L_08ABF940;
      }
      goto L_08ABF924;
    }
L_08ABF924:
    ctx.gpr[31] = (0x08ABF92Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ABFC0C;
L_08ABF92C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ABF968;
      }
      goto L_08ABF940;
    }
L_08ABF940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08ABF968;
L_08ABF968:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF9F0;
      }
      goto L_08ABF970;
    }
L_08ABF970:
    ctx.gpr[18] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[17] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABF9C8;
      }
      goto L_08ABF9BC;
    }
L_08ABF9BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08ABF9C8;
L_08ABF9C8:
    ctx.gpr[31] = (0x08ABF9D0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08ABFD6C;
L_08ABF9D0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABF9DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABFCD4;
L_08ABF9DC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABF9E8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08ABFC04;
L_08ABF9E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABFA30;
      }
      goto L_08ABF9F0;
    }
L_08ABF9F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABFA18;
      }
      goto L_08ABFA00;
    }
L_08ABFA00:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08ABFA18;
L_08ABFA18:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABFA24u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ABFCD4;
L_08ABFA24:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ABFA30u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08ABFC04;
L_08ABFA30:
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
L_08ABFA50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[17] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08ABFA98;
      }
      goto L_08ABFA94;
    }
L_08ABFA94:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    goto L_08ABFA98;
L_08ABFA98:
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[6] & 63u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABFAB4;
      }
      goto L_08ABFAA8;
    }
L_08ABFAA8:
    ctx.gpr[7] = (0u | 64u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[6]);
    goto L_08ABFAB4;
L_08ABFAB4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ABFAE0;
      }
      goto L_08ABFABC;
    }
L_08ABFABC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (16384u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[20]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABFAE8;
      }
      goto L_08ABFAD8;
    }
L_08ABFAD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABFAF8;
      }
      goto L_08ABFAE0;
    }
L_08ABFAE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABFBE4;
      }
      goto L_08ABFAE8;
    }
L_08ABFAE8:
    ctx.gpr[31] = (0x08ABFAF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ABFC0C;
L_08ABFAF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[19]);
    goto L_08ABFAF8;
L_08ABFAF8:
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABFBE4;
      }
      goto L_08ABFB08;
    }
L_08ABFB08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[19]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08ABFB34;
    }
    goto L_08ABFB24;
L_08ABFB24:
    ctx.gpr[31] = (0x08ABFB2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ABFD6C;
L_08ABFB2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08ABFB34;
L_08ABFB34:
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[4] | ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[6] & ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (8192u << 16u);
        goto L_08ABFB7C;
    }
    goto L_08ABFB7C;
L_08ABFB7C:
    ctx.gpr[6] = (ctx.gpr[17] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ABFBC0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08ABFCD4;
L_08ABFBC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABFBE4;
      }
      goto L_08ABFBD8;
    }
L_08ABFBD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ABFBE4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08ABFCD4;
L_08ABFBE4:
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
L_08ABFC04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABFC0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[5]);
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABFC80;
      }
      goto L_08ABFC64;
    }
L_08ABFC64:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (49152u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[8]);
    goto L_08ABFC80;
L_08ABFC80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ABFCAC;
      }
      goto L_08ABFC98;
    }
L_08ABFC98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABFCC0;
      }
      goto L_08ABFCAC;
    }
L_08ABFCAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (57344u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08ABFCC0;
L_08ABFCC0:
    ctx.gpr[31] = (0x08ABFCC8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08ABFD6C;
L_08ABFCC8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABFCD4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABFCF8;
      }
      goto L_08ABFCE8;
    }
L_08ABFCE8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABFD04;
      }
      goto L_08ABFCF8;
    }
L_08ABFCF8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABFD64;
      }
      goto L_08ABFD04;
    }
L_08ABFD04:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABFD3C;
      }
      goto L_08ABFD0C;
    }
L_08ABFD0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABFD2C;
      }
      goto L_08ABFD18;
    }
L_08ABFD18:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    goto L_08ABFD24;
L_08ABFD24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABFD04;
      }
      goto L_08ABFD2C;
    }
L_08ABFD2C:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ABFD64;
      }
      goto L_08ABFD3C;
    }
L_08ABFD3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABFD58;
      }
      goto L_08ABFD48;
    }
L_08ABFD48:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABFD24;
      }
      goto L_08ABFD58;
    }
L_08ABFD58:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    goto L_08ABFD64;
L_08ABFD64:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABFD6C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ABFD94;
      }
      goto L_08ABFD78;
    }
L_08ABFD78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08ABFE4C;
      }
      goto L_08ABFD84;
    }
L_08ABFD84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ABFE4C;
      }
      goto L_08ABFD94;
    }
L_08ABFD94:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABFDB0;
      }
      goto L_08ABFD9C;
    }
L_08ABFD9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABFE4C;
      }
      goto L_08ABFDB0;
    }
L_08ABFDB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABFE34;
      }
      goto L_08ABFDBC;
    }
L_08ABFDBC:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABFDE0;
      }
      goto L_08ABFDCC;
    }
L_08ABFDCC:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABFDCC;
      }
      goto L_08ABFDE0;
    }
L_08ABFDE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ABFDF4;
      }
      goto L_08ABFDEC;
    }
L_08ABFDEC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    goto L_08ABFDF4;
L_08ABFDF4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08ABFE4C;
      }
      goto L_08ABFE34;
    }
L_08ABFE34:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08ABFE4C;
L_08ABFE4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABFE54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABFE74u);
    ctx.gpr[7] = (8u << 16u);
    goto L_08ABE3E4;
L_08ABFE74:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABFE80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABFE94u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08ABE3BC;
L_08ABFE94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABFEAC;
      }
      goto L_08ABFEA0;
    }
L_08ABFEA0:
    ctx.gpr[4] = (193u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30720));
      if (branch_taken) {
          goto L_08ABFEBC;
      }
      goto L_08ABFEAC;
    }
L_08ABFEAC:
    ctx.gpr[31] = (0x08ABFEB4u);
    // nop
    ctx.pc = 0x08B73564u;
    return;
L_08ABFEB4:
    ctx.gpr[4] = (83u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    goto L_08ABFEBC;
L_08ABFEBC:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08ABFEE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12488));
    ctx.pc = 0x08B73534u;
    return;
L_08ABFEE0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08ABFEF0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B7342Cu;
    return;
L_08ABFEF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08ABFEFCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08ABFE54;
L_08ABFEFC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABFF10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-4128));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4096), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4120), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ABFF44;
      }
      goto L_08ABFF3C;
    }
L_08ABFF3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 34u, 0x08AC01F4u>(ctx, &aot_mem); return;
      }
      goto L_08ABFF44;
    }
L_08ABFF44:
    ctx.gpr[31] = (0x08ABFF4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ABEFD4;
L_08ABFF4C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 18u, 0x08AC00E4u>(ctx, &aot_mem); return;
      }
      goto L_08ABFF68;
    }
L_08ABFF68:
    ctx.gpr[13] = (ctx.gpr[29] + static_cast<std::uint32_t>(4095));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (32768u << 16u);
    ctx.gpr[12] = (4096u << 16u);
    goto L_08ABFF78;
L_08ABFF78:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[8] & ctx.gpr[9]);
    ctx.gpr[10] = (0u < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[3] = (ctx.gpr[11] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABFF9C;
      }
      goto L_08ABFF94;
    }
L_08ABFF94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ABFFA0;
      }
      goto L_08ABFF9C;
    }
L_08ABFF9C:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[3]);
    goto L_08ABFFA0;
L_08ABFFA0:
    ctx.gpr[14] = (ctx.gpr[10] | 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[10] = (0u | 46u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 11u, 0x08AC0074u>(ctx, &aot_mem); return;
      }
      goto L_08ABFFAC;
    }
L_08ABFFAC:
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    ctx.gpr[14] = (ctx.gpr[8] & ctx.gpr[12]);
    ctx.gpr[8] = (ctx.gpr[10] << 24u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-109));
    ctx.gpr[10] = (0u < ctx.gpr[14] ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[8] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 10u, 0x08AC0064u>(ctx, &aot_mem); return;
      }
      goto L_08ABFFD4;
    }
L_08ABFFD4:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[8]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12752)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABFFEC:
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (0u | 65u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[10] = (0u | 97u);
        goto L_08ABFFFC;
    }
    goto L_08ABFFFC;
L_08ABFFFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 11u, 0x08AC0074u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 2u, 0x08AC0004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0174(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0174_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_174(Runtime &runtime) {
    runtime.register_generated_unit(174u, 0x08ABC000u, 16384u, &recomp_unit_0174, &recomp_unit_0174_entry);
    runtime.register_function(0x08ABC000u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC004u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC014u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC018u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC02Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC034u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC03Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC050u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC064u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC06Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC090u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC09Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC0B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC0C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC0C8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC0D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC100u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC104u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC118u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC130u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC138u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC140u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC174u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC17Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC180u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC194u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC1C8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC1D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC1DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC1E0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC1F4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC200u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC208u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC210u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC228u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC234u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC240u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC24Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC25Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC264u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC270u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC27Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC284u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC28Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC298u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC2A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC2B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC2B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC2C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC2E8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC30Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC318u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC320u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC328u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC330u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC33Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC348u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC350u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC354u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC35Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC364u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC380u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC3A8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC3D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC3FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC454u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC45Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC484u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC488u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC4C4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC4DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC4E8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC4F0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC50Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC514u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC528u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC530u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC540u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC554u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC568u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC570u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC590u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC59Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC5B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC5B8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC5C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC5D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC5FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC608u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC614u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC624u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC62Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC638u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC64Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC650u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC668u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC680u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC68Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC694u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC6B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC6C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC6D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC6DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC6E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC6F0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC6F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC718u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC724u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC73Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC740u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC744u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC74Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC77Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC7A0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC7B8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC7C8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC7D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC7F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC800u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC818u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC824u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC85Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC870u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC888u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC89Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC8A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC8B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC8ECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC900u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC910u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC91Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC95Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC968u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC9A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC9ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC9B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC9BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC9D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC9F4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABC9FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA04u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA34u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA38u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA44u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA54u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA60u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA68u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA74u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA7Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCA80u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCAA0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCAACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCAB4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCAD8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB28u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB2Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB38u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB48u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB5Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB6Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB74u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB84u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB8Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCB9Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCBA4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCBACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCBBCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCBC4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCBF4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCC20u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCC38u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCC54u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCC5Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCC64u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCC80u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCC8Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCCA8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCCB8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCCCCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCCF4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD00u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD08u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD10u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD1Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD28u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD30u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD40u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD5Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD80u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCD8Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCDA4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCDACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCDB4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCDC0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCDDCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCDFCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCE0Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCE14u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCE20u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCE28u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCE48u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCE58u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCE64u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCE90u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCEA4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCEB4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCED0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCEF4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCEFCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCF34u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCF60u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCF7Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCFACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCFB8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCFD8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABCFE4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD00Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD018u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD028u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD068u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD08Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD094u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD0BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD0D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD0E0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD0F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD108u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD11Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD12Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD138u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD144u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD15Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD16Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD17Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD184u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD198u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD1C4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD1DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD1F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD21Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD230u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD248u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD258u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD268u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD288u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD290u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD2A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD2ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD2E8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD2F4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD30Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD314u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD32Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD350u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD35Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD370u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD384u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD3B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD3C4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD3D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD3E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD3FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD404u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD414u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD41Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD428u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD430u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD434u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD44Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD464u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD474u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD47Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD4A0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD4C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD4FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD518u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD524u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD530u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD544u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD558u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD574u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD584u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD594u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD5A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD5B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD5BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD5C4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD5D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD5D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD5E8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD608u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD618u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD620u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD630u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD63Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD658u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD668u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD670u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD678u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD680u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD688u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD69Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD6A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD6ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD6C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD6D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD6DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD6E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD6F0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD704u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD730u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD73Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD744u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD750u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD760u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD768u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD774u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD77Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD784u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD790u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD7A8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD7B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD7BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD7D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD7D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD7E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD7FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD804u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD810u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD828u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD858u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD864u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD874u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD888u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD8A0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD8ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD8D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD8E8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD920u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD94Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD974u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD99Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD9A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD9B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD9BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD9D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABD9ECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA08u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA18u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA20u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA28u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA30u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA38u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA40u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA48u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA54u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA5Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA6Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA70u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA80u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDA94u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDAB0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDAC0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDAC8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDAD0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDAD8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDAE0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDAE8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDAF0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDAF8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDB08u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDB0Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDB1Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDB30u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDB4Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDB60u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDB78u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDB8Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDBA0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDBACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDBB8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDBC4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDBD0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDBE8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDC00u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDC08u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDC24u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDC3Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDC58u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDC74u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDC80u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDC90u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDCB4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDCC4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDCCCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDCD8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDCE4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDCFCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDD0Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDD18u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDD2Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDD50u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDD5Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDD68u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDD70u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDD7Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDD84u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDD90u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDD9Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDDA8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDDB4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDDC0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDDCCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDDD8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDDECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDE10u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDE28u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDE38u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDE44u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDE54u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDE60u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDE64u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDE94u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDEA0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDEB0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDECCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDEF8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDF10u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDF34u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDF40u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDF64u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDF88u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDF94u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDFCCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABDFF8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE004u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE028u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE034u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE070u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE07Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE084u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE090u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE098u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE0A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE0B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE0D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE0E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE0F4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE118u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE124u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE134u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE158u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE164u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE1B8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE1C4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE1D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE1DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE1F4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE1FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE204u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE210u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE220u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE230u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE23Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE254u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE278u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE290u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE29Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE2B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE2C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE2D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE2E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE2FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE308u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE320u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE32Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE348u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE354u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE364u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE378u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE38Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE398u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE3B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE3BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE3E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE418u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE454u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE464u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE484u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE494u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE4B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE4C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE4E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE500u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE510u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE518u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE524u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE530u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE544u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE564u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE57Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE594u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE5A0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE5A8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE5B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE5D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE5E0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE5E8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE5ECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE600u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE610u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE618u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE620u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE624u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE628u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE63Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE664u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE688u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE698u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE6A0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE6A8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE6B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE6BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE6F0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE6F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE704u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE714u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE71Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE728u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE730u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE73Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE744u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE760u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE77Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE794u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE7A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE7BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE7DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE7E8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE808u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE814u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE824u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE83Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE848u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE85Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE874u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE87Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE88Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE89Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE8A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE8ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE8B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE8C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE8CCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE8D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE8F4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE90Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE91Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE924u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE92Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE958u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE97Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE988u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE99Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE9B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE9C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE9D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE9E8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABE9F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEA08u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEA10u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEA3Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEA48u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEA60u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEA70u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEA78u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEA80u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEA98u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEAB0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEAC4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEACCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEADCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEAE4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEAECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEAF8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEAFCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEB04u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEB10u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEB18u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEB20u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEB28u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEB30u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEB38u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEB44u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEB54u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEBCCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEBD4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEBF0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC0Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC20u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC28u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC34u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC3Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC54u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC58u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC74u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEC84u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABECD4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABED04u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABED0Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABED18u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABED3Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABED84u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABED98u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEDBCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEDD8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEDE0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEDF4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEDFCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEE2Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEE58u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEE64u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEE7Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEE8Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEEA0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEEBCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEED0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEEE0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEEE8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEF0Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEF28u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEF3Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEF48u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEF4Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEF54u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEF7Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEFA4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEFB8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEFC0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEFD4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEFDCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEFE8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEFF0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABEFFCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF000u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF018u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF02Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF030u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF040u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF048u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF054u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF05Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF068u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF06Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF084u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF098u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF0B8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF0D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF0D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF0E0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF0E8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF0F0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF0F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF108u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF110u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF12Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF138u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF150u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF16Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF184u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF194u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF19Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF1A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF1B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF1C8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF1ECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF1F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF224u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF22Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF260u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF268u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF2A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF2BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF2CCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF2D8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF2F0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF304u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF30Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF318u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF324u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF32Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF334u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF340u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF348u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF360u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF368u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF378u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF388u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF394u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF3A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF3BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF3E0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF3ECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF3F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF408u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF414u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF42Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF444u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF454u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF46Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF494u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF4A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF4ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF4DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF4ECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF504u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF524u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF534u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF550u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF560u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF578u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF58Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF5A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF608u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF620u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF624u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF634u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF640u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF64Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF654u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF65Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF670u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF67Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF680u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF688u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF690u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF69Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF6ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF6B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF6BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF6CCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF6DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF6E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF708u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF754u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF778u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF788u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF794u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF7B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF7D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF7E0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF7FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF814u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF81Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF824u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF82Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF844u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF868u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF888u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF89Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF8A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF8B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF8E0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF924u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF92Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF940u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF968u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF970u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF9BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF9C8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF9D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF9DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF9E8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABF9F0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFA00u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFA18u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFA24u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFA30u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFA50u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFA94u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFA98u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFAA8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFAB4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFABCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFAD8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFAE0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFAE8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFAF0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFAF8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFB08u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFB24u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFB2Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFB34u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFB7Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFBC0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFBD8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFBE4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFC04u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFC0Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFC64u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFC80u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFC98u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFCACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFCC0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFCC8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFCD4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFCE8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFCF8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD04u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD0Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD18u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD24u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD2Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD3Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD48u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD58u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD64u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD6Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD78u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD84u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD94u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFD9Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFDB0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFDBCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFDCCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFDE0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFDECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFDF4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFE34u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFE4Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFE54u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFE74u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFE80u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFE94u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFEA0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFEACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFEB4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFEBCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFEE0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFEF0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFEFCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFF10u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFF3Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFF44u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFF4Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFF68u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFF78u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFF94u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFF9Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFFA0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFFACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFFD4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFFECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x08ABFFFCu, &recomp_unit_0174, "recomp_unit_0174");
}
} // namespace psprecomp
