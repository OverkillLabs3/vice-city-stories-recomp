#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0197[4096] = {
    1, 0, 0, 0, 2, 0, 3, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 21, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25,
    0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 33,
    0, 34, 0, 0, 35, 0, 36, 0, 0, 37, 0, 38, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42,
    0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0,
    0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 57, 0, 58, 0, 0, 59, 60, 0,
    0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 68,
    0, 69, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 77, 0, 78, 0, 0, 0, 79, 0, 80, 0, 0, 81, 0, 0, 82, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 91, 0, 92, 93, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 0, 99, 0, 100, 0, 0, 101, 0, 102, 0, 103, 0, 104,
    0, 0, 105, 0, 106, 0, 107, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 122, 0, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133,
    0, 0, 134, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 153, 0, 154, 0, 0, 155, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 163,
    0, 0, 164, 165, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 170, 0, 0, 171, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 176, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 186, 187, 0, 0, 0,
    188, 0, 0, 0, 189, 190, 0, 191, 0, 192, 0, 0, 0, 0, 0, 193, 194, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197,
    0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 201, 0, 202, 0, 203, 0, 0, 204, 0, 205, 206, 0, 0, 0, 0, 0, 0, 207, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 210, 0, 211, 0, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 0, 216, 0, 217, 0,
    0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 0, 222, 0, 223, 0, 0, 224, 225, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 232,
    0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 243, 0, 0, 0, 244, 0,
    0, 0, 0, 245, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 250, 0, 251, 0, 0, 252, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 261, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 264, 0, 265, 0, 0, 0, 266, 0, 0, 267,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 270, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 0, 275, 0,
    276, 0, 277, 0, 0, 278, 0, 0, 279, 0, 280, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0,
    0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0,
    0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 294, 295, 0, 0, 0, 0, 296, 297, 0, 298, 0,
    0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 315, 0,
    316, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 322, 0, 323, 0, 0, 0, 324,
    0, 0, 325, 0, 0, 326, 0, 0, 327, 0, 328, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 334, 0, 335, 0, 0, 0,
    0, 336, 0, 0, 0, 0, 337, 0, 0, 338, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343,
    0, 0, 344, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0,
    351, 0, 0, 0, 0, 352, 0, 353, 0, 354, 0, 355, 0, 356, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0,
    360, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 364, 0, 365, 0, 366, 0, 0, 367, 0, 368, 0, 0, 0, 369, 0, 370,
    0, 371, 0, 372, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 381, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0,
    388, 0, 389, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 392, 393, 0, 394, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397,
    0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0,
    0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0,
    0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412,
    0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 417, 0, 418, 0, 0, 0, 0,
    419, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 426, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0,
    430, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0,
    0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 446, 447, 0, 0, 0, 0, 0, 448, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 451, 0, 452, 0, 0, 453, 0, 0, 0, 0, 454, 0, 455, 0, 0, 456, 0, 0,
    0, 0, 0, 457, 0, 0, 0, 458, 0, 459, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463,
    0, 464, 0, 465, 0, 0, 466, 0, 0, 0, 0, 467, 0, 468, 469, 0, 0, 470, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0,
    0, 0, 486, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 493,
    0, 494, 0, 495, 0, 496, 0, 0, 497, 0, 0, 498, 0, 499, 0, 500, 0, 501, 0, 502, 0, 0, 503, 0, 0, 504, 0, 505, 0, 0, 0, 0,
    506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0,
    0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0,
    513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0,
    0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0,
    0, 0, 0, 527, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 534, 0, 535, 0, 0, 536, 0,
    537, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542,
    0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 547, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 550,
    0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 561, 0, 0, 562, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 565, 0, 566, 567, 0, 0, 0, 568, 0, 0, 569, 0, 570, 0, 0, 571, 0,
    572, 573, 0, 0, 0, 574, 0, 0, 575, 0, 576, 0, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 580, 0, 581, 0,
    0, 0, 0, 0, 0, 582, 0, 0, 583, 0, 584, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 588,
    0, 0, 0, 0, 589, 0, 0, 590, 0, 0, 591, 0, 0, 592, 0, 593, 594, 0, 0, 0, 595, 0, 0, 596, 0, 597, 0, 0, 598, 0, 599, 600,
    0, 0, 0, 601, 0, 0, 602, 0, 603, 0, 0, 0, 604, 0, 605, 0, 606, 0, 607, 0, 0, 0, 0, 608, 0, 0, 609, 0, 610, 611, 0, 0,
    0, 612, 0, 0, 613, 0, 614, 0, 0, 615, 0, 616, 617, 0, 0, 0, 618, 0, 0, 619, 0, 620, 0, 0, 0, 0, 621, 0, 0, 622, 0, 623,
    624, 0, 0, 0, 625, 0, 0, 626, 0, 627, 0, 0, 628, 0, 629, 630, 0, 0, 0, 631, 0, 0, 632, 0, 633, 0, 0, 0, 0, 634, 0, 635,
    0, 0, 0, 636, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 639, 0, 0, 0, 640, 0, 641, 0, 0, 0, 0, 0, 0, 642,
    0, 0, 0, 0, 643, 0, 644, 0, 645, 0, 646, 0, 0, 0, 647, 0, 648, 0, 0, 0, 0, 0, 0, 649, 0, 0, 650, 0, 651, 0, 0, 0,
    652, 0, 653, 0, 0, 654, 0, 655, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 658, 0, 0, 0, 659, 0, 0,
    0, 660, 0, 0, 0, 0, 661, 0, 662, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667,
    0, 0, 668, 0, 669, 670, 0, 0, 0, 671, 0, 0, 672, 0, 673, 0, 0, 674, 0, 675, 676, 0, 0, 0, 677, 0, 0, 678, 0, 679, 0, 0,
    0, 680, 0, 0, 0, 681, 0, 682, 0, 683, 0, 0, 684, 0, 0, 685, 0, 686, 687, 0, 0, 0, 688, 0, 0, 689, 0, 690, 0, 0, 691, 0,
    692, 693, 0, 0, 0, 694, 0, 0, 695, 0, 696, 0, 0, 0, 697, 0, 698, 0, 0, 699, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 701, 0, 702, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 0, 705, 0, 706, 0, 0, 0, 0, 707, 0, 708, 0, 0, 709, 0, 0,
    0, 0, 710, 0, 711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 713, 0, 0, 714, 0, 715, 716, 0, 0, 0, 717, 0, 0, 718, 0, 719, 0, 0,
    720, 0, 721, 722, 0, 0, 0, 723, 0, 0, 724, 0, 725, 0, 0, 0, 726, 0, 0, 727, 0, 0, 0, 728, 0, 729, 0, 730, 0, 0, 0, 731,
    0, 0, 732, 0, 733, 734, 0, 0, 0, 735, 0, 0, 736, 0, 737, 0, 0, 738, 0, 739, 740, 0, 0, 0, 741, 0, 0, 742, 0, 743, 0, 0,
    0, 744, 0, 745, 0, 0, 0, 0, 746, 0, 747, 0, 748, 0, 0, 749, 0, 0, 750, 0, 751, 0, 752, 0, 0, 753, 0, 754, 0, 0, 755, 0,
    756, 0, 757, 0, 0, 758, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 762,
    0, 0, 763, 0, 0, 0, 764, 0, 765, 0, 0, 0, 0, 766, 0, 0, 0, 0, 767, 0, 768, 0, 769, 770, 0, 0, 771, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 773, 0, 0, 774, 0, 0, 775, 0, 776, 0, 0, 777,
    0, 0, 0, 778, 0, 779, 0, 0, 0, 780, 0, 0, 0, 781, 0, 782, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 784, 0, 0, 785, 0, 786, 0, 787, 0, 0, 0, 788, 0, 789, 0, 0, 790, 0, 0, 791, 0, 792, 0, 793, 0, 0,
    0, 794, 0, 0, 795, 0, 796, 0, 797, 0, 0, 0, 798, 0, 799, 0, 0, 0, 800, 0, 0, 801, 0, 0, 802, 0, 803, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 805, 0, 806, 807, 0, 0, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 809, 0, 810, 0, 811, 0, 812, 0, 813, 0, 814, 815, 0, 0, 816, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0,
    0, 0, 0, 818, 0, 819, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 823, 0, 0, 824, 0, 0,
    0, 0, 0, 0, 825, 0, 0, 826, 0, 0, 0, 0, 0, 0, 827, 0, 0, 828, 0, 0, 0, 0, 0, 0, 829, 0, 0, 830, 0, 0, 0, 0,
    0, 0, 831, 0, 0, 832, 0, 0, 0, 0, 0, 0, 833, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 835, 0, 0, 836, 0, 0, 0, 0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 839, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 845,
    0, 0, 0, 846, 0, 0, 0, 0, 0, 0, 0, 847, 0, 0, 848, 0, 0, 0, 849, 0, 0, 850, 0, 0, 0, 0, 0, 0, 0, 0, 0, 851,
    0, 852, 0, 853, 0, 854, 0, 855, 0, 856, 0, 857, 0, 858, 0, 859, 0, 0, 0, 0, 860, 861, 862, 0, 863, 864, 865, 0, 866, 867, 868, 0,
    869, 870, 0, 0, 0, 0, 0, 0, 0, 0, 871, 0, 0, 0, 0, 0, 0, 872, 0, 0, 0, 0, 873, 0, 0, 874, 0, 0, 875, 0, 876, 0,
    0, 0, 0, 877, 0, 878, 0, 0, 0, 0, 0, 0, 0, 0, 879, 0, 0, 880, 0, 881, 882, 0, 0, 0, 883, 0, 0, 0, 884, 0, 0, 0,
    0, 0, 0, 885, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 887, 0, 0, 888, 0, 0, 889, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 890, 0, 0, 0, 891, 0, 0, 0, 0, 892, 0, 0, 0, 0, 893, 0, 0, 894, 0, 0, 0, 0, 0, 0, 895, 0, 0, 0, 0,
    0, 896, 0, 0, 897, 0, 898, 899, 0, 0, 0, 0, 0, 0, 0, 900, 0, 0, 0, 0, 0, 0, 0, 0, 901, 0, 0, 0, 0, 0, 0, 0,
    902, 0, 0, 0, 903, 0, 0, 904, 0, 905, 906, 0, 0, 907, 0, 0, 0, 0, 0, 0, 908, 0, 0, 909, 0, 0, 910, 911, 0, 0, 0, 912,
};
void recomp_unit_0197_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B18000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0197[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B18000;
    case 2u: goto L_08B18010;
    case 3u: goto L_08B18018;
    case 4u: goto L_08B1801C;
    case 5u: goto L_08B18034;
    case 6u: goto L_08B18058;
    case 7u: goto L_08B18060;
    case 8u: goto L_08B1806C;
    case 9u: goto L_08B18088;
    case 10u: goto L_08B1809C;
    case 11u: goto L_08B180A8;
    case 12u: goto L_08B180B0;
    case 13u: goto L_08B180BC;
    case 14u: goto L_08B180C4;
    case 15u: goto L_08B180CC;
    case 16u: goto L_08B180E0;
    case 17u: goto L_08B18110;
    case 18u: goto L_08B1811C;
    case 19u: goto L_08B1812C;
    case 20u: goto L_08B1813C;
    case 21u: goto L_08B18140;
    case 22u: goto L_08B1814C;
    case 23u: goto L_08B1815C;
    case 24u: goto L_08B1816C;
    case 25u: goto L_08B1817C;
    case 26u: goto L_08B18188;
    case 27u: goto L_08B18198;
    case 28u: goto L_08B181A8;
    case 29u: goto L_08B181BC;
    case 30u: goto L_08B181C8;
    case 31u: goto L_08B181D8;
    case 32u: goto L_08B181E8;
    case 33u: goto L_08B181FC;
    case 34u: goto L_08B18204;
    case 35u: goto L_08B18210;
    case 36u: goto L_08B18218;
    case 37u: goto L_08B18224;
    case 38u: goto L_08B1822C;
    case 39u: goto L_08B18230;
    case 40u: goto L_08B1824C;
    case 41u: goto L_08B18268;
    case 42u: goto L_08B1827C;
    case 43u: goto L_08B18288;
    case 44u: goto L_08B18294;
    case 45u: goto L_08B182A0;
    case 46u: goto L_08B182B0;
    case 47u: goto L_08B182BC;
    case 48u: goto L_08B182CC;
    case 49u: goto L_08B182D8;
    case 50u: goto L_08B182E8;
    case 51u: goto L_08B182F4;
    case 52u: goto L_08B18314;
    case 53u: goto L_08B18330;
    case 54u: goto L_08B1833C;
    case 55u: goto L_08B18348;
    case 56u: goto L_08B18358;
    case 57u: goto L_08B18360;
    case 58u: goto L_08B18368;
    case 59u: goto L_08B18374;
    case 60u: goto L_08B18378;
    case 61u: goto L_08B1838C;
    case 62u: goto L_08B183A4;
    case 63u: goto L_08B183B4;
    case 64u: goto L_08B183C8;
    case 65u: goto L_08B183D0;
    case 66u: goto L_08B183DC;
    case 67u: goto L_08B183F0;
    case 68u: goto L_08B183FC;
    case 69u: goto L_08B18404;
    case 70u: goto L_08B18408;
    case 71u: goto L_08B18418;
    case 72u: goto L_08B18438;
    case 73u: goto L_08B18444;
    case 74u: goto L_08B18450;
    case 75u: goto L_08B18468;
    case 76u: goto L_08B18488;
    case 77u: goto L_08B18498;
    case 78u: goto L_08B184A0;
    case 79u: goto L_08B184B0;
    case 80u: goto L_08B184B8;
    case 81u: goto L_08B184C4;
    case 82u: goto L_08B184D0;
    case 83u: goto L_08B184D4;
    case 84u: goto L_08B184EC;
    case 85u: goto L_08B18504;
    case 86u: goto L_08B18514;
    case 87u: goto L_08B18528;
    case 88u: goto L_08B18530;
    case 89u: goto L_08B1853C;
    case 90u: goto L_08B18550;
    case 91u: goto L_08B1855C;
    case 92u: goto L_08B18564;
    case 93u: goto L_08B18568;
    case 94u: goto L_08B18578;
    case 95u: goto L_08B1859C;
    case 96u: goto L_08B185A8;
    case 97u: goto L_08B185BC;
    case 98u: goto L_08B185C4;
    case 99u: goto L_08B185D0;
    case 100u: goto L_08B185D8;
    case 101u: goto L_08B185E4;
    case 102u: goto L_08B185EC;
    case 103u: goto L_08B185F4;
    case 104u: goto L_08B185FC;
    case 105u: goto L_08B18608;
    case 106u: goto L_08B18610;
    case 107u: goto L_08B18618;
    case 108u: goto L_08B18624;
    case 109u: goto L_08B18630;
    case 110u: goto L_08B18638;
    case 111u: goto L_08B18654;
    case 112u: goto L_08B18658;
    case 113u: goto L_08B18674;
    case 114u: goto L_08B18690;
    case 115u: goto L_08B1869C;
    case 116u: goto L_08B186A8;
    case 117u: goto L_08B186B0;
    case 118u: goto L_08B186C8;
    case 119u: goto L_08B186CC;
    case 120u: goto L_08B186E0;
    case 121u: goto L_08B18700;
    case 122u: goto L_08B1870C;
    case 123u: goto L_08B18718;
    case 124u: goto L_08B18720;
    case 125u: goto L_08B1872C;
    case 126u: goto L_08B18734;
    case 127u: goto L_08B18754;
    case 128u: goto L_08B18774;
    case 129u: goto L_08B18794;
    case 130u: goto L_08B187B4;
    case 131u: goto L_08B187BC;
    case 132u: goto L_08B187DC;
    case 133u: goto L_08B187FC;
    case 134u: goto L_08B18808;
    case 135u: goto L_08B1880C;
    case 136u: goto L_08B18824;
    case 137u: goto L_08B18844;
    case 138u: goto L_08B1884C;
    case 139u: goto L_08B18858;
    case 140u: goto L_08B1886C;
    case 141u: goto L_08B18884;
    case 142u: goto L_08B1889C;
    case 143u: goto L_08B188A8;
    case 144u: goto L_08B188B0;
    case 145u: goto L_08B188C4;
    case 146u: goto L_08B188D4;
    case 147u: goto L_08B188E0;
    case 148u: goto L_08B188F0;
    case 149u: goto L_08B18900;
    case 150u: goto L_08B1891C;
    case 151u: goto L_08B1892C;
    case 152u: goto L_08B1894C;
    case 153u: goto L_08B18988;
    case 154u: goto L_08B18990;
    case 155u: goto L_08B1899C;
    case 156u: goto L_08B189A0;
    case 157u: goto L_08B189AC;
    case 158u: goto L_08B189B8;
    case 159u: goto L_08B189C4;
    case 160u: goto L_08B189D4;
    case 161u: goto L_08B189E4;
    case 162u: goto L_08B189F4;
    case 163u: goto L_08B189FC;
    case 164u: goto L_08B18A08;
    case 165u: goto L_08B18A0C;
    case 166u: goto L_08B18A14;
    case 167u: goto L_08B18A20;
    case 168u: goto L_08B18A30;
    case 169u: goto L_08B18A3C;
    case 170u: goto L_08B18A44;
    case 171u: goto L_08B18A50;
    case 172u: goto L_08B18A54;
    case 173u: goto L_08B18A70;
    case 174u: goto L_08B18AAC;
    case 175u: goto L_08B18AB4;
    case 176u: goto L_08B18AC0;
    case 177u: goto L_08B18AC4;
    case 178u: goto L_08B18AD0;
    case 179u: goto L_08B18AE0;
    case 180u: goto L_08B18B00;
    case 181u: goto L_08B18B24;
    case 182u: goto L_08B18B30;
    case 183u: goto L_08B18B38;
    case 184u: goto L_08B18B5C;
    case 185u: goto L_08B18B64;
    case 186u: goto L_08B18B6C;
    case 187u: goto L_08B18B70;
    case 188u: goto L_08B18B80;
    case 189u: goto L_08B18B90;
    case 190u: goto L_08B18B94;
    case 191u: goto L_08B18B9C;
    case 192u: goto L_08B18BA4;
    case 193u: goto L_08B18BBC;
    case 194u: goto L_08B18BC0;
    case 195u: goto L_08B18BC4;
    case 196u: goto L_08B18BF4;
    case 197u: goto L_08B18BFC;
    case 198u: goto L_08B18C08;
    case 199u: goto L_08B18C1C;
    case 200u: goto L_08B18C2C;
    case 201u: goto L_08B18C34;
    case 202u: goto L_08B18C3C;
    case 203u: goto L_08B18C44;
    case 204u: goto L_08B18C50;
    case 205u: goto L_08B18C58;
    case 206u: goto L_08B18C5C;
    case 207u: goto L_08B18C78;
    case 208u: goto L_08B18CA0;
    case 209u: goto L_08B18CA8;
    case 210u: goto L_08B18CB4;
    case 211u: goto L_08B18CBC;
    case 212u: goto L_08B18CC8;
    case 213u: goto L_08B18CD0;
    case 214u: goto L_08B18CDC;
    case 215u: goto L_08B18CE4;
    case 216u: goto L_08B18CF0;
    case 217u: goto L_08B18CF8;
    case 218u: goto L_08B18D04;
    case 219u: goto L_08B18D3C;
    case 220u: goto L_08B18D44;
    case 221u: goto L_08B18D4C;
    case 222u: goto L_08B18D60;
    case 223u: goto L_08B18D68;
    case 224u: goto L_08B18D74;
    case 225u: goto L_08B18D78;
    case 226u: goto L_08B18D90;
    case 227u: goto L_08B18DA0;
    case 228u: goto L_08B18DAC;
    case 229u: goto L_08B18DBC;
    case 230u: goto L_08B18DD8;
    case 231u: goto L_08B18DE4;
    case 232u: goto L_08B18DFC;
    case 233u: goto L_08B18E14;
    case 234u: goto L_08B18E34;
    case 235u: goto L_08B18E4C;
    case 236u: goto L_08B18E80;
    case 237u: goto L_08B18E8C;
    case 238u: goto L_08B18E94;
    case 239u: goto L_08B18EAC;
    case 240u: goto L_08B18ECC;
    case 241u: goto L_08B18ED8;
    case 242u: goto L_08B18EE0;
    case 243u: goto L_08B18EE8;
    case 244u: goto L_08B18EF8;
    case 245u: goto L_08B18F0C;
    case 246u: goto L_08B18F10;
    case 247u: goto L_08B18F24;
    case 248u: goto L_08B18F54;
    case 249u: goto L_08B18F60;
    case 250u: goto L_08B18F8C;
    case 251u: goto L_08B18F94;
    case 252u: goto L_08B18FA0;
    case 253u: goto L_08B18FB0;
    case 254u: goto L_08B18FBC;
    case 255u: goto L_08B18FCC;
    case 256u: goto L_08B18FD4;
    case 257u: goto L_08B18FE4;
    case 258u: goto L_08B18FF0;
    case 259u: goto L_08B19018;
    case 260u: goto L_08B19020;
    case 261u: goto L_08B1902C;
    case 262u: goto L_08B1903C;
    case 263u: goto L_08B19048;
    case 264u: goto L_08B19058;
    case 265u: goto L_08B19060;
    case 266u: goto L_08B19070;
    case 267u: goto L_08B1907C;
    case 268u: goto L_08B190A4;
    case 269u: goto L_08B190AC;
    case 270u: goto L_08B190B8;
    case 271u: goto L_08B190C8;
    case 272u: goto L_08B190D4;
    case 273u: goto L_08B190E4;
    case 274u: goto L_08B190EC;
    case 275u: goto L_08B190F8;
    case 276u: goto L_08B19100;
    case 277u: goto L_08B19108;
    case 278u: goto L_08B19114;
    case 279u: goto L_08B19120;
    case 280u: goto L_08B19128;
    case 281u: goto L_08B19130;
    case 282u: goto L_08B1913C;
    case 283u: goto L_08B19158;
    case 284u: goto L_08B19178;
    case 285u: goto L_08B19188;
    case 286u: goto L_08B1919C;
    case 287u: goto L_08B191B0;
    case 288u: goto L_08B191BC;
    case 289u: goto L_08B191F8;
    case 290u: goto L_08B1920C;
    case 291u: goto L_08B19224;
    case 292u: goto L_08B1923C;
    case 293u: goto L_08B1924C;
    case 294u: goto L_08B19254;
    case 295u: goto L_08B19258;
    case 296u: goto L_08B1926C;
    case 297u: goto L_08B19270;
    case 298u: goto L_08B19278;
    case 299u: goto L_08B19288;
    case 300u: goto L_08B19298;
    case 301u: goto L_08B192B4;
    case 302u: goto L_08B192BC;
    case 303u: goto L_08B192CC;
    case 304u: goto L_08B19334;
    case 305u: goto L_08B19350;
    case 306u: goto L_08B19358;
    case 307u: goto L_08B19370;
    case 308u: goto L_08B19384;
    case 309u: goto L_08B193A4;
    case 310u: goto L_08B193B0;
    case 311u: goto L_08B193B4;
    case 312u: goto L_08B193D0;
    case 313u: goto L_08B193E0;
    case 314u: goto L_08B193F0;
    case 315u: goto L_08B193F8;
    case 316u: goto L_08B19400;
    case 317u: goto L_08B19408;
    case 318u: goto L_08B1941C;
    case 319u: goto L_08B19430;
    case 320u: goto L_08B19444;
    case 321u: goto L_08B19458;
    case 322u: goto L_08B19464;
    case 323u: goto L_08B1946C;
    case 324u: goto L_08B1947C;
    case 325u: goto L_08B19488;
    case 326u: goto L_08B19494;
    case 327u: goto L_08B194A0;
    case 328u: goto L_08B194A8;
    case 329u: goto L_08B194B0;
    case 330u: goto L_08B194BC;
    case 331u: goto L_08B194C8;
    case 332u: goto L_08B194D4;
    case 333u: goto L_08B194E0;
    case 334u: goto L_08B194E8;
    case 335u: goto L_08B194F0;
    case 336u: goto L_08B19504;
    case 337u: goto L_08B19518;
    case 338u: goto L_08B19524;
    case 339u: goto L_08B1952C;
    case 340u: goto L_08B19540;
    case 341u: goto L_08B19554;
    case 342u: goto L_08B19568;
    case 343u: goto L_08B1957C;
    case 344u: goto L_08B19588;
    case 345u: goto L_08B19590;
    case 346u: goto L_08B195A4;
    case 347u: goto L_08B195B8;
    case 348u: goto L_08B195C4;
    case 349u: goto L_08B195F0;
    case 350u: goto L_08B195F8;
    case 351u: goto L_08B19600;
    case 352u: goto L_08B19614;
    case 353u: goto L_08B1961C;
    case 354u: goto L_08B19624;
    case 355u: goto L_08B1962C;
    case 356u: goto L_08B19634;
    case 357u: goto L_08B19648;
    case 358u: goto L_08B19650;
    case 359u: goto L_08B19668;
    case 360u: goto L_08B19680;
    case 361u: goto L_08B19688;
    case 362u: goto L_08B196A0;
    case 363u: goto L_08B196B8;
    case 364u: goto L_08B196C0;
    case 365u: goto L_08B196C8;
    case 366u: goto L_08B196D0;
    case 367u: goto L_08B196DC;
    case 368u: goto L_08B196E4;
    case 369u: goto L_08B196F4;
    case 370u: goto L_08B196FC;
    case 371u: goto L_08B19704;
    case 372u: goto L_08B1970C;
    case 373u: goto L_08B19718;
    case 374u: goto L_08B19728;
    case 375u: goto L_08B1973C;
    case 376u: goto L_08B1974C;
    case 377u: goto L_08B19754;
    case 378u: goto L_08B19768;
    case 379u: goto L_08B197A0;
    case 380u: goto L_08B197B0;
    case 381u: goto L_08B197B8;
    case 382u: goto L_08B197BC;
    case 383u: goto L_08B197D4;
    case 384u: goto L_08B19834;
    case 385u: goto L_08B19850;
    case 386u: goto L_08B1986C;
    case 387u: goto L_08B19878;
    case 388u: goto L_08B19880;
    case 389u: goto L_08B19888;
    case 390u: goto L_08B19890;
    case 391u: goto L_08B198A4;
    case 392u: goto L_08B198B4;
    case 393u: goto L_08B198B8;
    case 394u: goto L_08B198C0;
    case 395u: goto L_08B198C8;
    case 396u: goto L_08B198DC;
    case 397u: goto L_08B198FC;
    case 398u: goto L_08B1990C;
    case 399u: goto L_08B1991C;
    case 400u: goto L_08B19938;
    case 401u: goto L_08B19974;
    case 402u: goto L_08B19984;
    case 403u: goto L_08B19998;
    case 404u: goto L_08B199B8;
    case 405u: goto L_08B199C0;
    case 406u: goto L_08B199C8;
    case 407u: goto L_08B199F0;
    case 408u: goto L_08B19A04;
    case 409u: goto L_08B19A14;
    case 410u: goto L_08B19A24;
    case 411u: goto L_08B19A60;
    case 412u: goto L_08B19A7C;
    case 413u: goto L_08B19A98;
    case 414u: goto L_08B19AB4;
    case 415u: goto L_08B19ACC;
    case 416u: goto L_08B19AD8;
    case 417u: goto L_08B19AE4;
    case 418u: goto L_08B19AEC;
    case 419u: goto L_08B19B00;
    case 420u: goto L_08B19B18;
    case 421u: goto L_08B19B24;
    case 422u: goto L_08B19B34;
    case 423u: goto L_08B19B40;
    case 424u: goto L_08B19B64;
    case 425u: goto L_08B19B70;
    case 426u: goto L_08B19B78;
    case 427u: goto L_08B19BD0;
    case 428u: goto L_08B19BE8;
    case 429u: goto L_08B19BF4;
    case 430u: goto L_08B19C00;
    case 431u: goto L_08B19C08;
    case 432u: goto L_08B19C20;
    case 433u: goto L_08B19C40;
    case 434u: goto L_08B19C48;
    case 435u: goto L_08B19C58;
    case 436u: goto L_08B19C64;
    case 437u: goto L_08B19C90;
    case 438u: goto L_08B19CAC;
    case 439u: goto L_08B19CBC;
    case 440u: goto L_08B19CE8;
    case 441u: goto L_08B19D08;
    case 442u: goto L_08B19D1C;
    case 443u: goto L_08B19D28;
    case 444u: goto L_08B19D40;
    case 445u: goto L_08B19D50;
    case 446u: goto L_08B19D58;
    case 447u: goto L_08B19D5C;
    case 448u: goto L_08B19D74;
    case 449u: goto L_08B19DA0;
    case 450u: goto L_08B19DB0;
    case 451u: goto L_08B19DB8;
    case 452u: goto L_08B19DC0;
    case 453u: goto L_08B19DCC;
    case 454u: goto L_08B19DE0;
    case 455u: goto L_08B19DE8;
    case 456u: goto L_08B19DF4;
    case 457u: goto L_08B19E0C;
    case 458u: goto L_08B19E1C;
    case 459u: goto L_08B19E24;
    case 460u: goto L_08B19E28;
    case 461u: goto L_08B19E40;
    case 462u: goto L_08B19E6C;
    case 463u: goto L_08B19E7C;
    case 464u: goto L_08B19E84;
    case 465u: goto L_08B19E8C;
    case 466u: goto L_08B19E98;
    case 467u: goto L_08B19EAC;
    case 468u: goto L_08B19EB4;
    case 469u: goto L_08B19EB8;
    case 470u: goto L_08B19EC4;
    case 471u: goto L_08B19ED0;
    case 472u: goto L_08B19ED8;
    case 473u: goto L_08B19F00;
    case 474u: goto L_08B19F20;
    case 475u: goto L_08B19F30;
    case 476u: goto L_08B19F40;
    case 477u: goto L_08B19F50;
    case 478u: goto L_08B19F60;
    case 479u: goto L_08B19F88;
    case 480u: goto L_08B19F98;
    case 481u: goto L_08B19FA8;
    case 482u: goto L_08B19FB8;
    case 483u: goto L_08B19FC8;
    case 484u: goto L_08B19FDC;
    case 485u: goto L_08B19FF4;
    case 486u: goto L_08B1A008;
    case 487u: goto L_08B1A014;
    case 488u: goto L_08B1A028;
    case 489u: goto L_08B1A038;
    case 490u: goto L_08B1A040;
    case 491u: goto L_08B1A048;
    case 492u: goto L_08B1A070;
    case 493u: goto L_08B1A07C;
    case 494u: goto L_08B1A084;
    case 495u: goto L_08B1A08C;
    case 496u: goto L_08B1A094;
    case 497u: goto L_08B1A0A0;
    case 498u: goto L_08B1A0AC;
    case 499u: goto L_08B1A0B4;
    case 500u: goto L_08B1A0BC;
    case 501u: goto L_08B1A0C4;
    case 502u: goto L_08B1A0CC;
    case 503u: goto L_08B1A0D8;
    case 504u: goto L_08B1A0E4;
    case 505u: goto L_08B1A0EC;
    case 506u: goto L_08B1A100;
    case 507u: goto L_08B1A128;
    case 508u: goto L_08B1A130;
    case 509u: goto L_08B1A178;
    case 510u: goto L_08B1A184;
    case 511u: goto L_08B1A1D8;
    case 512u: goto L_08B1A1EC;
    case 513u: goto L_08B1A200;
    case 514u: goto L_08B1A214;
    case 515u: goto L_08B1A228;
    case 516u: goto L_08B1A264;
    case 517u: goto L_08B1A274;
    case 518u: goto L_08B1A288;
    case 519u: goto L_08B1A29C;
    case 520u: goto L_08B1A2B0;
    case 521u: goto L_08B1A2C4;
    case 522u: goto L_08B1A308;
    case 523u: goto L_08B1A320;
    case 524u: goto L_08B1A46C;
    case 525u: goto L_08B1A4F0;
    case 526u: goto L_08B1A4F8;
    case 527u: goto L_08B1A50C;
    case 528u: goto L_08B1A518;
    case 529u: goto L_08B1A530;
    case 530u: goto L_08B1A54C;
    case 531u: goto L_08B1A580;
    case 532u: goto L_08B1A5D4;
    case 533u: goto L_08B1A5DC;
    case 534u: goto L_08B1A5E4;
    case 535u: goto L_08B1A5EC;
    case 536u: goto L_08B1A5F8;
    case 537u: goto L_08B1A600;
    case 538u: goto L_08B1A608;
    case 539u: goto L_08B1A62C;
    case 540u: goto L_08B1A634;
    case 541u: goto L_08B1A664;
    case 542u: goto L_08B1A67C;
    case 543u: goto L_08B1A68C;
    case 544u: goto L_08B1A6A4;
    case 545u: goto L_08B1A6B8;
    case 546u: goto L_08B1A6D0;
    case 547u: goto L_08B1A704;
    case 548u: goto L_08B1A720;
    case 549u: goto L_08B1A774;
    case 550u: goto L_08B1A77C;
    case 551u: goto L_08B1A790;
    case 552u: goto L_08B1A7AC;
    case 553u: goto L_08B1A7BC;
    case 554u: goto L_08B1A7D4;
    case 555u: goto L_08B1A7E8;
    case 556u: goto L_08B1A81C;
    case 557u: goto L_08B1A838;
    case 558u: goto L_08B1A890;
    case 559u: goto L_08B1A92C;
    case 560u: goto L_08B1A948;
    case 561u: goto L_08B1A984;
    case 562u: goto L_08B1A990;
    case 563u: goto L_08B1A99C;
    case 564u: goto L_08B1A9B0;
    case 565u: goto L_08B1A9BC;
    case 566u: goto L_08B1A9C4;
    case 567u: goto L_08B1A9C8;
    case 568u: goto L_08B1A9D8;
    case 569u: goto L_08B1A9E4;
    case 570u: goto L_08B1A9EC;
    case 571u: goto L_08B1A9F8;
    case 572u: goto L_08B1AA00;
    case 573u: goto L_08B1AA04;
    case 574u: goto L_08B1AA14;
    case 575u: goto L_08B1AA20;
    case 576u: goto L_08B1AA28;
    case 577u: goto L_08B1AA38;
    case 578u: goto L_08B1AA50;
    case 579u: goto L_08B1AA60;
    case 580u: goto L_08B1AA70;
    case 581u: goto L_08B1AA78;
    case 582u: goto L_08B1AA94;
    case 583u: goto L_08B1AAA0;
    case 584u: goto L_08B1AAA8;
    case 585u: goto L_08B1AAB8;
    case 586u: goto L_08B1AAC0;
    case 587u: goto L_08B1AAE0;
    case 588u: goto L_08B1AAFC;
    case 589u: goto L_08B1AB10;
    case 590u: goto L_08B1AB1C;
    case 591u: goto L_08B1AB28;
    case 592u: goto L_08B1AB34;
    case 593u: goto L_08B1AB3C;
    case 594u: goto L_08B1AB40;
    case 595u: goto L_08B1AB50;
    case 596u: goto L_08B1AB5C;
    case 597u: goto L_08B1AB64;
    case 598u: goto L_08B1AB70;
    case 599u: goto L_08B1AB78;
    case 600u: goto L_08B1AB7C;
    case 601u: goto L_08B1AB8C;
    case 602u: goto L_08B1AB98;
    case 603u: goto L_08B1ABA0;
    case 604u: goto L_08B1ABB0;
    case 605u: goto L_08B1ABB8;
    case 606u: goto L_08B1ABC0;
    case 607u: goto L_08B1ABC8;
    case 608u: goto L_08B1ABDC;
    case 609u: goto L_08B1ABE8;
    case 610u: goto L_08B1ABF0;
    case 611u: goto L_08B1ABF4;
    case 612u: goto L_08B1AC04;
    case 613u: goto L_08B1AC10;
    case 614u: goto L_08B1AC18;
    case 615u: goto L_08B1AC24;
    case 616u: goto L_08B1AC2C;
    case 617u: goto L_08B1AC30;
    case 618u: goto L_08B1AC40;
    case 619u: goto L_08B1AC4C;
    case 620u: goto L_08B1AC54;
    case 621u: goto L_08B1AC68;
    case 622u: goto L_08B1AC74;
    case 623u: goto L_08B1AC7C;
    case 624u: goto L_08B1AC80;
    case 625u: goto L_08B1AC90;
    case 626u: goto L_08B1AC9C;
    case 627u: goto L_08B1ACA4;
    case 628u: goto L_08B1ACB0;
    case 629u: goto L_08B1ACB8;
    case 630u: goto L_08B1ACBC;
    case 631u: goto L_08B1ACCC;
    case 632u: goto L_08B1ACD8;
    case 633u: goto L_08B1ACE0;
    case 634u: goto L_08B1ACF4;
    case 635u: goto L_08B1ACFC;
    case 636u: goto L_08B1AD0C;
    case 637u: goto L_08B1AD18;
    case 638u: goto L_08B1AD30;
    case 639u: goto L_08B1AD48;
    case 640u: goto L_08B1AD58;
    case 641u: goto L_08B1AD60;
    case 642u: goto L_08B1AD7C;
    case 643u: goto L_08B1AD90;
    case 644u: goto L_08B1AD98;
    case 645u: goto L_08B1ADA0;
    case 646u: goto L_08B1ADA8;
    case 647u: goto L_08B1ADB8;
    case 648u: goto L_08B1ADC0;
    case 649u: goto L_08B1ADDC;
    case 650u: goto L_08B1ADE8;
    case 651u: goto L_08B1ADF0;
    case 652u: goto L_08B1AE00;
    case 653u: goto L_08B1AE08;
    case 654u: goto L_08B1AE14;
    case 655u: goto L_08B1AE1C;
    case 656u: goto L_08B1AE28;
    case 657u: goto L_08B1AE5C;
    case 658u: goto L_08B1AE64;
    case 659u: goto L_08B1AE74;
    case 660u: goto L_08B1AE84;
    case 661u: goto L_08B1AE98;
    case 662u: goto L_08B1AEA0;
    case 663u: goto L_08B1AEB4;
    case 664u: goto L_08B1AEBC;
    case 665u: goto L_08B1AED4;
    case 666u: goto L_08B1AEEC;
    case 667u: goto L_08B1AEFC;
    case 668u: goto L_08B1AF08;
    case 669u: goto L_08B1AF10;
    case 670u: goto L_08B1AF14;
    case 671u: goto L_08B1AF24;
    case 672u: goto L_08B1AF30;
    case 673u: goto L_08B1AF38;
    case 674u: goto L_08B1AF44;
    case 675u: goto L_08B1AF4C;
    case 676u: goto L_08B1AF50;
    case 677u: goto L_08B1AF60;
    case 678u: goto L_08B1AF6C;
    case 679u: goto L_08B1AF74;
    case 680u: goto L_08B1AF84;
    case 681u: goto L_08B1AF94;
    case 682u: goto L_08B1AF9C;
    case 683u: goto L_08B1AFA4;
    case 684u: goto L_08B1AFB0;
    case 685u: goto L_08B1AFBC;
    case 686u: goto L_08B1AFC4;
    case 687u: goto L_08B1AFC8;
    case 688u: goto L_08B1AFD8;
    case 689u: goto L_08B1AFE4;
    case 690u: goto L_08B1AFEC;
    case 691u: goto L_08B1AFF8;
    case 692u: goto L_08B1B000;
    case 693u: goto L_08B1B004;
    case 694u: goto L_08B1B014;
    case 695u: goto L_08B1B020;
    case 696u: goto L_08B1B028;
    case 697u: goto L_08B1B038;
    case 698u: goto L_08B1B040;
    case 699u: goto L_08B1B04C;
    case 700u: goto L_08B1B054;
    case 701u: goto L_08B1B088;
    case 702u: goto L_08B1B090;
    case 703u: goto L_08B1B0A0;
    case 704u: goto L_08B1B0B0;
    case 705u: goto L_08B1B0C4;
    case 706u: goto L_08B1B0CC;
    case 707u: goto L_08B1B0E0;
    case 708u: goto L_08B1B0E8;
    case 709u: goto L_08B1B0F4;
    case 710u: goto L_08B1B108;
    case 711u: goto L_08B1B110;
    case 712u: goto L_08B1B124;
    case 713u: goto L_08B1B138;
    case 714u: goto L_08B1B144;
    case 715u: goto L_08B1B14C;
    case 716u: goto L_08B1B150;
    case 717u: goto L_08B1B160;
    case 718u: goto L_08B1B16C;
    case 719u: goto L_08B1B174;
    case 720u: goto L_08B1B180;
    case 721u: goto L_08B1B188;
    case 722u: goto L_08B1B18C;
    case 723u: goto L_08B1B19C;
    case 724u: goto L_08B1B1A8;
    case 725u: goto L_08B1B1B0;
    case 726u: goto L_08B1B1C0;
    case 727u: goto L_08B1B1CC;
    case 728u: goto L_08B1B1DC;
    case 729u: goto L_08B1B1E4;
    case 730u: goto L_08B1B1EC;
    case 731u: goto L_08B1B1FC;
    case 732u: goto L_08B1B208;
    case 733u: goto L_08B1B210;
    case 734u: goto L_08B1B214;
    case 735u: goto L_08B1B224;
    case 736u: goto L_08B1B230;
    case 737u: goto L_08B1B238;
    case 738u: goto L_08B1B244;
    case 739u: goto L_08B1B24C;
    case 740u: goto L_08B1B250;
    case 741u: goto L_08B1B260;
    case 742u: goto L_08B1B26C;
    case 743u: goto L_08B1B274;
    case 744u: goto L_08B1B284;
    case 745u: goto L_08B1B28C;
    case 746u: goto L_08B1B2A0;
    case 747u: goto L_08B1B2A8;
    case 748u: goto L_08B1B2B0;
    case 749u: goto L_08B1B2BC;
    case 750u: goto L_08B1B2C8;
    case 751u: goto L_08B1B2D0;
    case 752u: goto L_08B1B2D8;
    case 753u: goto L_08B1B2E4;
    case 754u: goto L_08B1B2EC;
    case 755u: goto L_08B1B2F8;
    case 756u: goto L_08B1B300;
    case 757u: goto L_08B1B308;
    case 758u: goto L_08B1B314;
    case 759u: goto L_08B1B328;
    case 760u: goto L_08B1B348;
    case 761u: goto L_08B1B36C;
    case 762u: goto L_08B1B37C;
    case 763u: goto L_08B1B388;
    case 764u: goto L_08B1B398;
    case 765u: goto L_08B1B3A0;
    case 766u: goto L_08B1B3B4;
    case 767u: goto L_08B1B3C8;
    case 768u: goto L_08B1B3D0;
    case 769u: goto L_08B1B3D8;
    case 770u: goto L_08B1B3DC;
    case 771u: goto L_08B1B3E8;
    case 772u: goto L_08B1B444;
    case 773u: goto L_08B1B450;
    case 774u: goto L_08B1B45C;
    case 775u: goto L_08B1B468;
    case 776u: goto L_08B1B470;
    case 777u: goto L_08B1B47C;
    case 778u: goto L_08B1B48C;
    case 779u: goto L_08B1B494;
    case 780u: goto L_08B1B4A4;
    case 781u: goto L_08B1B4B4;
    case 782u: goto L_08B1B4BC;
    case 783u: goto L_08B1B4DC;
    case 784u: goto L_08B1B518;
    case 785u: goto L_08B1B524;
    case 786u: goto L_08B1B52C;
    case 787u: goto L_08B1B534;
    case 788u: goto L_08B1B544;
    case 789u: goto L_08B1B54C;
    case 790u: goto L_08B1B558;
    case 791u: goto L_08B1B564;
    case 792u: goto L_08B1B56C;
    case 793u: goto L_08B1B574;
    case 794u: goto L_08B1B584;
    case 795u: goto L_08B1B590;
    case 796u: goto L_08B1B598;
    case 797u: goto L_08B1B5A0;
    case 798u: goto L_08B1B5B0;
    case 799u: goto L_08B1B5B8;
    case 800u: goto L_08B1B5C8;
    case 801u: goto L_08B1B5D4;
    case 802u: goto L_08B1B5E0;
    case 803u: goto L_08B1B5E8;
    case 804u: goto L_08B1B620;
    case 805u: goto L_08B1B628;
    case 806u: goto L_08B1B630;
    case 807u: goto L_08B1B634;
    case 808u: goto L_08B1B654;
    case 809u: goto L_08B1B698;
    case 810u: goto L_08B1B6A0;
    case 811u: goto L_08B1B6A8;
    case 812u: goto L_08B1B6B0;
    case 813u: goto L_08B1B6B8;
    case 814u: goto L_08B1B6C0;
    case 815u: goto L_08B1B6C4;
    case 816u: goto L_08B1B6D0;
    case 817u: goto L_08B1B6E8;
    case 818u: goto L_08B1B70C;
    case 819u: goto L_08B1B714;
    case 820u: goto L_08B1B728;
    case 821u: goto L_08B1B76C;
    case 822u: goto L_08B1B8CC;
    case 823u: goto L_08B1B8E8;
    case 824u: goto L_08B1B8F4;
    case 825u: goto L_08B1B910;
    case 826u: goto L_08B1B91C;
    case 827u: goto L_08B1B938;
    case 828u: goto L_08B1B944;
    case 829u: goto L_08B1B960;
    case 830u: goto L_08B1B96C;
    case 831u: goto L_08B1B988;
    case 832u: goto L_08B1B994;
    case 833u: goto L_08B1B9B0;
    case 834u: goto L_08B1B9BC;
    case 835u: goto L_08B1BA14;
    case 836u: goto L_08B1BA20;
    case 837u: goto L_08B1BA3C;
    case 838u: goto L_08B1BB04;
    case 839u: goto L_08B1BB34;
    case 840u: goto L_08B1BB48;
    case 841u: goto L_08B1BB68;
    case 842u: goto L_08B1BB94;
    case 843u: goto L_08B1BBC4;
    case 844u: goto L_08B1BBF0;
    case 845u: goto L_08B1BBFC;
    case 846u: goto L_08B1BC0C;
    case 847u: goto L_08B1BC2C;
    case 848u: goto L_08B1BC38;
    case 849u: goto L_08B1BC48;
    case 850u: goto L_08B1BC54;
    case 851u: goto L_08B1BC7C;
    case 852u: goto L_08B1BC84;
    case 853u: goto L_08B1BC8C;
    case 854u: goto L_08B1BC94;
    case 855u: goto L_08B1BC9C;
    case 856u: goto L_08B1BCA4;
    case 857u: goto L_08B1BCAC;
    case 858u: goto L_08B1BCB4;
    case 859u: goto L_08B1BCBC;
    case 860u: goto L_08B1BCD0;
    case 861u: goto L_08B1BCD4;
    case 862u: goto L_08B1BCD8;
    case 863u: goto L_08B1BCE0;
    case 864u: goto L_08B1BCE4;
    case 865u: goto L_08B1BCE8;
    case 866u: goto L_08B1BCF0;
    case 867u: goto L_08B1BCF4;
    case 868u: goto L_08B1BCF8;
    case 869u: goto L_08B1BD00;
    case 870u: goto L_08B1BD04;
    case 871u: goto L_08B1BD28;
    case 872u: goto L_08B1BD44;
    case 873u: goto L_08B1BD58;
    case 874u: goto L_08B1BD64;
    case 875u: goto L_08B1BD70;
    case 876u: goto L_08B1BD78;
    case 877u: goto L_08B1BD8C;
    case 878u: goto L_08B1BD94;
    case 879u: goto L_08B1BDB8;
    case 880u: goto L_08B1BDC4;
    case 881u: goto L_08B1BDCC;
    case 882u: goto L_08B1BDD0;
    case 883u: goto L_08B1BDE0;
    case 884u: goto L_08B1BDF0;
    case 885u: goto L_08B1BE0C;
    case 886u: goto L_08B1BE18;
    case 887u: goto L_08B1BE44;
    case 888u: goto L_08B1BE50;
    case 889u: goto L_08B1BE5C;
    case 890u: goto L_08B1BE8C;
    case 891u: goto L_08B1BE9C;
    case 892u: goto L_08B1BEB0;
    case 893u: goto L_08B1BEC4;
    case 894u: goto L_08B1BED0;
    case 895u: goto L_08B1BEEC;
    case 896u: goto L_08B1BF04;
    case 897u: goto L_08B1BF10;
    case 898u: goto L_08B1BF18;
    case 899u: goto L_08B1BF1C;
    case 900u: goto L_08B1BF3C;
    case 901u: goto L_08B1BF60;
    case 902u: goto L_08B1BF80;
    case 903u: goto L_08B1BF90;
    case 904u: goto L_08B1BF9C;
    case 905u: goto L_08B1BFA4;
    case 906u: goto L_08B1BFA8;
    case 907u: goto L_08B1BFB4;
    case 908u: goto L_08B1BFD0;
    case 909u: goto L_08B1BFDC;
    case 910u: goto L_08B1BFE8;
    case 911u: goto L_08B1BFEC;
    case 912u: goto L_08B1BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B18000:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08B18010u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B18010u) goto L_08B18010;
    return;
L_08B18010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B1801C;
      }
      goto L_08B18018;
    }
L_08B18018:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B1801C;
L_08B1801C:
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
L_08B18034:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B18058u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 274u, 0x08B15604u>(ctx, &aot_mem) && ctx.pc == 0x08B18058u) goto L_08B18058;
    return;
L_08B18058:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1822C;
      }
      goto L_08B18060;
    }
L_08B18060:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1806Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 276u, 0x08B15624u>(ctx, &aot_mem) && ctx.pc == 0x08B1806Cu) goto L_08B1806C;
    return;
L_08B1806C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B18088u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B18088u) goto L_08B18088;
    return;
L_08B18088:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B1809Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1809Cu) goto L_08B1809C;
    return;
L_08B1809C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B180C4;
      }
      goto L_08B180A8;
    }
L_08B180A8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B180C4;
      }
      goto L_08B180B0;
    }
L_08B180B0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B180E0;
      }
      goto L_08B180BC;
    }
L_08B180BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B180CC;
      }
      goto L_08B180C4;
    }
L_08B180C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B18230;
      }
      goto L_08B180CC;
    }
L_08B180CC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B18110;
      }
      goto L_08B180E0;
    }
L_08B180E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08B18140;
      }
      goto L_08B18110;
    }
L_08B18110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08B1813C;
    }
    goto L_08B1811C;
L_08B1811C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B1812Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B1812Cu) goto L_08B1812C;
    return;
L_08B1812C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08B1813C;
L_08B1813C:
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    goto L_08B18140;
L_08B18140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_08B1816C;
    }
    goto L_08B1814C;
L_08B1814C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x08B1815Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B1815Cu) goto L_08B1815C;
    return;
L_08B1815C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_08B1816C;
L_08B1816C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(178)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B18204;
      }
      goto L_08B1817C;
    }
L_08B1817C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_08B181A8;
    }
    goto L_08B18188;
L_08B18188:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    ctx.gpr[31] = (0x08B18198u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B18198u) goto L_08B18198;
    return;
L_08B18198:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_08B181A8;
L_08B181A8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B18204;
      }
      goto L_08B181BC;
    }
L_08B181BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_08B181E8;
    }
    goto L_08B181C8;
L_08B181C8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(19));
    ctx.gpr[31] = (0x08B181D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B181D8u) goto L_08B181D8;
    return;
L_08B181D8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_08B181E8;
L_08B181E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B18204;
      }
      goto L_08B181FC;
    }
L_08B181FC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B18218;
      }
      goto L_08B18204;
    }
L_08B18204:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18210u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B18210u) goto L_08B18210;
    return;
L_08B18210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B18224;
      }
      goto L_08B18218;
    }
L_08B18218:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18224u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B18224u) goto L_08B18224;
    return;
L_08B18224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B18230;
      }
      goto L_08B1822C;
    }
L_08B1822C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B18230;
L_08B18230:
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
L_08B1824C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B18268u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B18268u) goto L_08B18268;
    return;
L_08B18268:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[16] = (0u < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08B1827Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B1827Cu) goto L_08B1827C;
    return;
L_08B1827C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(38))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 2u);
        goto L_08B18288;
    }
    goto L_08B18288;
L_08B18288:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08B18294u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B18294u) goto L_08B18294;
    return;
L_08B18294:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(40))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (0u | 4u);
        goto L_08B182A0;
    }
    goto L_08B182A0;
L_08B182A0:
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08B182B0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B182B0u) goto L_08B182B0;
    return;
L_08B182B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(42))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (0u | 8u);
        goto L_08B182BC;
    }
    goto L_08B182BC;
L_08B182BC:
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08B182CCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B182CCu) goto L_08B182CC;
    return;
L_08B182CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(34))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 16u);
        goto L_08B182D8;
    }
    goto L_08B182D8;
L_08B182D8:
    ctx.gpr[16] = (ctx.gpr[18] + ctx.gpr[16]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08B182E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B182E8u) goto L_08B182E8;
    return;
L_08B182E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(36))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (0u | 32u);
        goto L_08B182F4;
    }
    goto L_08B182F4;
L_08B182F4:
    ctx.gpr[2] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[18]);
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
L_08B18314:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B18330u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10002));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 397u, 0x08806C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B18330u) goto L_08B18330;
    return;
L_08B18330:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B1833Cu);
    // nop
    goto L_08B1824C;
L_08B1833C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B18360;
      }
      goto L_08B18348;
    }
L_08B18348:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18358u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B18358u) goto L_08B18358;
    return;
L_08B18358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B18378;
      }
      goto L_08B18360;
    }
L_08B18360:
    ctx.gpr[31] = (0x08B18368u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 452u, 0x088070BCu>(ctx, &aot_mem) && ctx.pc == 0x08B18368u) goto L_08B18368;
    return;
L_08B18368:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18374u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10002));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 320u, 0x088067C4u>(ctx, &aot_mem) && ctx.pc == 0x08B18374u) goto L_08B18374;
    return;
L_08B18374:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B18378;
L_08B18378:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1838C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B183A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 276u, 0x08B15624u>(ctx, &aot_mem) && ctx.pc == 0x08B183A4u) goto L_08B183A4;
    return;
L_08B183A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B183C8;
      }
      goto L_08B183B4;
    }
L_08B183B4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B18404;
      }
      goto L_08B183C8;
    }
L_08B183C8:
    ctx.gpr[31] = (0x08B183D0u);
    // nop
    goto L_08B1824C;
L_08B183D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B183DCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 452u, 0x088070BCu>(ctx, &aot_mem) && ctx.pc == 0x08B183DCu) goto L_08B183DC;
    return;
L_08B183DC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31980));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B183F0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem) && ctx.pc == 0x08B183F0u) goto L_08B183F0;
    return;
L_08B183F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B183FCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 607u, 0x08872848u>(ctx, &aot_mem) && ctx.pc == 0x08B183FCu) goto L_08B183FC;
    return;
L_08B183FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B18408;
      }
      goto L_08B18404;
    }
L_08B18404:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B18408;
L_08B18408:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B18418:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B18438u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10002));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 397u, 0x08806C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B18438u) goto L_08B18438;
    return;
L_08B18438:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B18444u);
    // nop
    goto L_08B1824C;
L_08B18444:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B184A0;
      }
      goto L_08B18450;
    }
L_08B18450:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B18468u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08B18468u) goto L_08B18468;
    return;
L_08B18468:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B184B8;
      }
      goto L_08B18488;
    }
L_08B18488:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18498u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B18498u) goto L_08B18498;
    return;
L_08B18498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B184D4;
      }
      goto L_08B184A0;
    }
L_08B184A0:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B184B0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B184B0u) goto L_08B184B0;
    return;
L_08B184B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B184D4;
      }
      goto L_08B184B8;
    }
L_08B184B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B184C4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 452u, 0x088070BCu>(ctx, &aot_mem) && ctx.pc == 0x08B184C4u) goto L_08B184C4;
    return;
L_08B184C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B184D0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10002));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 320u, 0x088067C4u>(ctx, &aot_mem) && ctx.pc == 0x08B184D0u) goto L_08B184D0;
    return;
L_08B184D0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B184D4;
L_08B184D4:
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
L_08B184EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B18504u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 276u, 0x08B15624u>(ctx, &aot_mem) && ctx.pc == 0x08B18504u) goto L_08B18504;
    return;
L_08B18504:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B18528;
      }
      goto L_08B18514;
    }
L_08B18514:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B18564;
      }
      goto L_08B18528;
    }
L_08B18528:
    ctx.gpr[31] = (0x08B18530u);
    // nop
    goto L_08B1824C;
L_08B18530:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1853Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 452u, 0x088070BCu>(ctx, &aot_mem) && ctx.pc == 0x08B1853Cu) goto L_08B1853C;
    return;
L_08B1853C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31720));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18550u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem) && ctx.pc == 0x08B18550u) goto L_08B18550;
    return;
L_08B18550:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1855Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 607u, 0x08872848u>(ctx, &aot_mem) && ctx.pc == 0x08B1855Cu) goto L_08B1855C;
    return;
L_08B1855C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B18568;
      }
      goto L_08B18564;
    }
L_08B18564:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B18568;
L_08B18568:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B18578:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B1859Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B1859Cu) goto L_08B1859C;
    return;
L_08B1859C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08B185C4;
      }
      goto L_08B185A8;
    }
L_08B185A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(852)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08B185D8;
      }
      goto L_08B185BC;
    }
L_08B185BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B18618;
      }
      goto L_08B185C4;
    }
L_08B185C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B185D0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B185D0u) goto L_08B185D0;
    return;
L_08B185D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B18658;
      }
      goto L_08B185D8;
    }
L_08B185D8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1752), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B185E4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 576u, 0x088327B0u>(ctx, &aot_mem) && ctx.pc == 0x08B185E4u) goto L_08B185E4;
    return;
L_08B185E4:
    ctx.gpr[31] = (0x08B185ECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 711u, 0x088331D0u>(ctx, &aot_mem) && ctx.pc == 0x08B185ECu) goto L_08B185EC;
    return;
L_08B185EC:
    ctx.gpr[31] = (0x08B185F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 681u, 0x08832FA8u>(ctx, &aot_mem) && ctx.pc == 0x08B185F4u) goto L_08B185F4;
    return;
L_08B185F4:
    ctx.gpr[31] = (0x08B185FCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 696u, 0x088330BCu>(ctx, &aot_mem) && ctx.pc == 0x08B185FCu) goto L_08B185FC;
    return;
L_08B185FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B18608u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 260u, 0x08B15544u>(ctx, &aot_mem) && ctx.pc == 0x08B18608u) goto L_08B18608;
    return;
L_08B18608:
    ctx.gpr[31] = (0x08B18610u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 704u, 0x089F79E8u>(ctx, &aot_mem) && ctx.pc == 0x08B18610u) goto L_08B18610;
    return;
L_08B18610:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B18638;
      }
      goto L_08B18618;
    }
L_08B18618:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B18624u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 311u, 0x08A5959Cu>(ctx, &aot_mem) && ctx.pc == 0x08B18624u) goto L_08B18624;
    return;
L_08B18624:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B18630u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 260u, 0x08B15544u>(ctx, &aot_mem) && ctx.pc == 0x08B18630u) goto L_08B18630;
    return;
L_08B18630:
    ctx.gpr[31] = (0x08B18638u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 178u, 0x08AA5240u>(ctx, &aot_mem) && ctx.pc == 0x08B18638u) goto L_08B18638;
    return;
L_08B18638:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(680), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18654u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B18654u) goto L_08B18654;
    return;
L_08B18654:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08B18658;
L_08B18658:
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
L_08B18674:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B18690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B18690u) goto L_08B18690;
    return;
L_08B18690:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B186B0;
      }
      goto L_08B1869C;
    }
L_08B1869C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B186A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B186A8u) goto L_08B186A8;
    return;
L_08B186A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B186CC;
      }
      goto L_08B186B0;
    }
L_08B186B0:
    ctx.gpr[5] = (17273u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B186C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B186C8u) goto L_08B186C8;
    return;
L_08B186C8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08B186CC;
L_08B186CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B186E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B18700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B18700u) goto L_08B18700;
    return;
L_08B18700:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B18720;
      }
      goto L_08B1870C;
    }
L_08B1870C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B18734;
      }
      goto L_08B18718;
    }
L_08B18718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B187BC;
      }
      goto L_08B18720;
    }
L_08B18720:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1872Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B1872Cu) goto L_08B1872C;
    return;
L_08B1872C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B1880C;
      }
      goto L_08B18734;
    }
L_08B18734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(344));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 13u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B18754u);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B18754u) goto L_08B18754;
    return;
L_08B18754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(344));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 15u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B18774u);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B18774u) goto L_08B18774;
    return;
L_08B18774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(344));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 14u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B18794u);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B18794u) goto L_08B18794;
    return;
L_08B18794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(344));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 16u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B187B4u);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B187B4u) goto L_08B187B4;
    return;
L_08B187B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B187FC;
      }
      goto L_08B187BC;
    }
L_08B187BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(344));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 13u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B187DCu);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B187DCu) goto L_08B187DC;
    return;
L_08B187DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(344));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 15u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B187FCu);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B187FCu) goto L_08B187FC;
    return;
L_08B187FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18808u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B18808u) goto L_08B18808;
    return;
L_08B18808:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08B1880C;
L_08B1880C:
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
L_08B18824:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x08B18844u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 16u, 0x08ADC120u>(ctx, &aot_mem) && ctx.pc == 0x08B18844u) goto L_08B18844;
    return;
L_08B18844:
    ctx.gpr[31] = (0x08B1884Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 378u, 0x08B15E50u>(ctx, &aot_mem) && ctx.pc == 0x08B1884Cu) goto L_08B1884C;
    return;
L_08B1884C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18858u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B18858u) goto L_08B18858;
    return;
L_08B18858:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1886C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B18884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B18884u) goto L_08B18884;
    return;
L_08B18884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3252)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08B188A8;
      }
      goto L_08B1889C;
    }
L_08B1889C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08B188A8;
L_08B188A8:
    ctx.gpr[31] = (0x08B188B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B188B0u) goto L_08B188B0;
    return;
L_08B188B0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B188C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B188D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B188D4u) goto L_08B188D4;
    return;
L_08B188D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B188E0u);
    ctx.gpr[5] = (0u | 30000u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 726u, 0x089477FCu>(ctx, &aot_mem) && ctx.pc == 0x08B188E0u) goto L_08B188E0;
    return;
L_08B188E0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B188F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B18900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B18900u) goto L_08B18900;
    return;
L_08B18900:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1891C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B1892Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B1892Cu) goto L_08B1892C;
    return;
L_08B1892C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(340)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1894C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18988u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 274u, 0x08B15604u>(ctx, &aot_mem) && ctx.pc == 0x08B18988u) goto L_08B18988;
    return;
L_08B18988:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B189A0;
      }
      goto L_08B18990;
    }
L_08B18990:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1899Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 276u, 0x08B15624u>(ctx, &aot_mem) && ctx.pc == 0x08B1899Cu) goto L_08B1899C;
    return;
L_08B1899C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08B189A0;
L_08B189A0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B189ACu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 16u, 0x08ADC120u>(ctx, &aot_mem) && ctx.pc == 0x08B189ACu) goto L_08B189AC;
    return;
L_08B189AC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B18A44;
      }
      goto L_08B189B8;
    }
L_08B189B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_08B189E4;
    }
    goto L_08B189C4;
L_08B189C4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B189D4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B189D4u) goto L_08B189D4;
    return;
L_08B189D4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_08B189E4;
L_08B189E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B189FC;
      }
      goto L_08B189F4;
    }
L_08B189F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08B18A0C;
      }
      goto L_08B189FC;
    }
L_08B189FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08B18A08u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B18A08u) goto L_08B18A08;
    return;
L_08B18A08:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08B18A0C;
L_08B18A0C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B18A44;
      }
      goto L_08B18A14;
    }
L_08B18A14:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B18A44;
      }
      goto L_08B18A20;
    }
L_08B18A20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B18A44;
      }
      goto L_08B18A30;
    }
L_08B18A30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18A3Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B18A3Cu) goto L_08B18A3C;
    return;
L_08B18A3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B18A54;
      }
      goto L_08B18A44;
    }
L_08B18A44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18A50u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B18A50u) goto L_08B18A50;
    return;
L_08B18A50:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08B18A54;
L_08B18A54:
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
L_08B18A70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (2237u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18AACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 274u, 0x08B15604u>(ctx, &aot_mem) && ctx.pc == 0x08B18AACu) goto L_08B18AAC;
    return;
L_08B18AAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B18AC4;
      }
      goto L_08B18AB4;
    }
L_08B18AB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18AC0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 276u, 0x08B15624u>(ctx, &aot_mem) && ctx.pc == 0x08B18AC0u) goto L_08B18AC0;
    return;
L_08B18AC0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08B18AC4;
L_08B18AC4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B18AD0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 396u, 0x08ADD774u>(ctx, &aot_mem) && ctx.pc == 0x08B18AD0u) goto L_08B18AD0;
    return;
L_08B18AD0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08B18AE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B18AE0u) goto L_08B18AE0;
    return;
L_08B18AE0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08B18B00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B18B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B18B24u) goto L_08B18B24;
    return;
L_08B18B24:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B18B30u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B18B30u) goto L_08B18B30;
    return;
L_08B18B30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B18B64;
      }
      goto L_08B18B38;
    }
L_08B18B38:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
        goto L_08B18B6C;
    }
    goto L_08B18B5C;
L_08B18B5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B18B9C;
      }
      goto L_08B18B64;
    }
L_08B18B64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B18C5C;
      }
      goto L_08B18B6C;
    }
L_08B18B6C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08B18B70;
L_08B18B70:
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08B18B90;
    }
    goto L_08B18B80;
L_08B18B80:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B18B94;
      }
      goto L_08B18B90;
    }
L_08B18B90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08B18B94;
L_08B18B94:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08B18B70;
    }
    goto L_08B18B9C;
L_08B18B9C:
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08B18BC0;
    }
    goto L_08B18BA4;
L_08B18BA4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[17] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
        goto L_08B18BC4;
    }
    goto L_08B18BBC;
L_08B18BBC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08B18BC0;
L_08B18BC0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08B18BC4;
L_08B18BC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
        goto L_08B18BFC;
    }
    goto L_08B18BF4;
L_08B18BF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B18BFC;
      }
      goto L_08B18BFC;
    }
L_08B18BFC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B18C34;
      }
      goto L_08B18C08;
    }
L_08B18C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08B18C1Cu);
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 666u, 0x08A7FAA4u>(ctx, &aot_mem) && ctx.pc == 0x08B18C1Cu) goto L_08B18C1C;
    return;
L_08B18C1C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B18C2Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B18C2Cu) goto L_08B18C2C;
    return;
L_08B18C2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B18C3C;
      }
      goto L_08B18C34;
    }
L_08B18C34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B18C3C;
      }
      goto L_08B18C3C;
    }
L_08B18C3C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B18C58;
      }
      goto L_08B18C44;
    }
L_08B18C44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18C50u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 225u, 0x08B10EBCu>(ctx, &aot_mem) && ctx.pc == 0x08B18C50u) goto L_08B18C50;
    return;
L_08B18C50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B18C5C;
      }
      goto L_08B18C58;
    }
L_08B18C58:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B18C5C;
L_08B18C5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B18C78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08B18CA0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 274u, 0x08B15604u>(ctx, &aot_mem) && ctx.pc == 0x08B18CA0u) goto L_08B18CA0;
    return;
L_08B18CA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B18CBC;
      }
      goto L_08B18CA8;
    }
L_08B18CA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18CB4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 276u, 0x08B15624u>(ctx, &aot_mem) && ctx.pc == 0x08B18CB4u) goto L_08B18CB4;
    return;
L_08B18CB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B18CE4;
      }
      goto L_08B18CBC;
    }
L_08B18CBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18CC8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x08B18CC8u) goto L_08B18CC8;
    return;
L_08B18CC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B18CE4;
      }
      goto L_08B18CD0;
    }
L_08B18CD0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18CDCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08B18CDCu) goto L_08B18CDC;
    return;
L_08B18CDC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08B18CE4;
L_08B18CE4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18CF0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x08B18CF0u) goto L_08B18CF0;
    return;
L_08B18CF0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B18D44;
      }
      goto L_08B18CF8;
    }
L_08B18CF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18D04u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08B18D04u) goto L_08B18D04;
    return;
L_08B18D04:
    ctx.gpr[5] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7788)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B18D4C;
      }
      goto L_08B18D3C;
    }
L_08B18D3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B18D68;
      }
      goto L_08B18D44;
    }
L_08B18D44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B18D78;
      }
      goto L_08B18D4C;
    }
L_08B18D4C:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B18D60u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 176u, 0x08825204u>(ctx, &aot_mem) && ctx.pc == 0x08B18D60u) goto L_08B18D60;
    return;
L_08B18D60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B18D74;
      }
      goto L_08B18D68;
    }
L_08B18D68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18D74u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x08B18D74u) goto L_08B18D74;
    return;
L_08B18D74:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B18D78;
L_08B18D78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B18D90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B18DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B18DA0u) goto L_08B18DA0;
    return;
L_08B18DA0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B18DACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 16u, 0x08948114u>(ctx, &aot_mem) && ctx.pc == 0x08B18DACu) goto L_08B18DAC;
    return;
L_08B18DAC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B18DBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B18DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B18DD8u) goto L_08B18DD8;
    return;
L_08B18DD8:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08B18DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B18DE4u) goto L_08B18DE4;
    return;
L_08B18DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 68u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x08B18DFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B18DFCu) goto L_08B18DFC;
    return;
L_08B18DFC:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B18E14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08B18E34u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08B18E34u) goto L_08B18E34;
    return;
L_08B18E34:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08B18E4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 167u, 0x08ADC88Cu>(ctx, &aot_mem) && ctx.pc == 0x08B18E4Cu) goto L_08B18E4C;
    return;
L_08B18E4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08B18E8C;
      }
      goto L_08B18E80;
    }
L_08B18E80:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08B18E8C;
L_08B18E8C:
    ctx.gpr[31] = (0x08B18E94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B18E94u) goto L_08B18E94;
    return;
L_08B18E94:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B18EAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08B18ECCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 276u, 0x08B15624u>(ctx, &aot_mem) && ctx.pc == 0x08B18ECCu) goto L_08B18ECC;
    return;
L_08B18ECC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B18ED8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x08B18ED8u) goto L_08B18ED8;
    return;
L_08B18ED8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B18F0C;
      }
      goto L_08B18EE0;
    }
L_08B18EE0:
    ctx.gpr[31] = (0x08B18EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B18EE8u) goto L_08B18EE8;
    return;
L_08B18EE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B18EF8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08B18EF8u) goto L_08B18EF8;
    return;
L_08B18EF8:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3336), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B18F10;
      }
      goto L_08B18F0C;
    }
L_08B18F0C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B18F10;
L_08B18F10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B18F24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10548))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08B18F54u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B18F54u) goto L_08B18F54;
    return;
L_08B18F54:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B18F8C;
      }
      goto L_08B18F60;
    }
L_08B18F60:
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29116));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08B18F8C;
L_08B18F8C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B18FA0;
      }
      goto L_08B18F94;
    }
L_08B18F94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08B18FA0;
L_08B18FA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B18FB0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08B18FB0u) goto L_08B18FB0;
    return;
L_08B18FB0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B18FD4;
      }
      goto L_08B18FBC;
    }
L_08B18FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B18FD4;
      }
      goto L_08B18FCC;
    }
L_08B18FCC:
    ctx.gpr[31] = (0x08B18FD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B18FD4u) goto L_08B18FD4;
    return;
L_08B18FD4:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10549))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08B18FE4u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B18FE4u) goto L_08B18FE4;
    return;
L_08B18FE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08B19018;
      }
      goto L_08B18FF0;
    }
L_08B18FF0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29868));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08B19018;
L_08B19018:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B1902C;
      }
      goto L_08B19020;
    }
L_08B19020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08B1902C;
L_08B1902C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B1903Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08B1903Cu) goto L_08B1903C;
    return;
L_08B1903C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B19060;
      }
      goto L_08B19048;
    }
L_08B19048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B19060;
      }
      goto L_08B19058;
    }
L_08B19058:
    ctx.gpr[31] = (0x08B19060u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B19060u) goto L_08B19060;
    return;
L_08B19060:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10550))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08B19070u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B19070u) goto L_08B19070;
    return;
L_08B19070:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08B190A4;
      }
      goto L_08B1907C;
    }
L_08B1907C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30144));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08B190A4;
L_08B190A4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B190B8;
      }
      goto L_08B190AC;
    }
L_08B190AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08B190B8;
L_08B190B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B190C8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08B190C8u) goto L_08B190C8;
    return;
L_08B190C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B190EC;
      }
      goto L_08B190D4;
    }
L_08B190D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B190EC;
      }
      goto L_08B190E4;
    }
L_08B190E4:
    ctx.gpr[31] = (0x08B190ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B190ECu) goto L_08B190EC;
    return;
L_08B190EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08B19108;
      }
      goto L_08B190F8;
    }
L_08B190F8:
    ctx.gpr[31] = (0x08B19100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08B19100u) goto L_08B19100;
    return;
L_08B19100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[5] = (2232u << 16u);
    goto L_08B19108;
L_08B19108:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31828));
    ctx.gpr[31] = (0x08B19114u);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(2876));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 270u, 0x08885284u>(ctx, &aot_mem) && ctx.pc == 0x08B19114u) goto L_08B19114;
    return;
L_08B19114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B19130;
      }
      goto L_08B19120;
    }
L_08B19120:
    ctx.gpr[31] = (0x08B19128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08B19128u) goto L_08B19128;
    return;
L_08B19128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[5] = (2233u << 16u);
    goto L_08B19130;
L_08B19130:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32656));
    ctx.gpr[31] = (0x08B1913Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 266u, 0x08885220u>(ctx, &aot_mem) && ctx.pc == 0x08B1913Cu) goto L_08B1913C;
    return;
L_08B1913C:
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
L_08B19158:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B19178u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 276u, 0x08B15624u>(ctx, &aot_mem) && ctx.pc == 0x08B19178u) goto L_08B19178;
    return;
L_08B19178:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B1919C;
      }
      goto L_08B19188;
    }
L_08B19188:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B197B8;
      }
      goto L_08B1919C;
    }
L_08B1919C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B191B0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem) && ctx.pc == 0x08B191B0u) goto L_08B191B0;
    return;
L_08B191B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B191BCu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08B191BCu) goto L_08B191BC;
    return;
L_08B191BC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B19350;
      }
      goto L_08B191F8;
    }
L_08B191F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B19224;
      }
      goto L_08B1920C;
    }
L_08B1920C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(616))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B19350;
      }
      goto L_08B19224;
    }
L_08B19224:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B19258;
      }
      goto L_08B1923C;
    }
L_08B1923C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[31] = (0x08B1924Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1924Cu) goto L_08B1924C;
    return;
L_08B1924C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B19258;
      }
      goto L_08B19254;
    }
L_08B19254:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B19258;
L_08B19258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(620))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B19270;
      }
      goto L_08B1926C;
    }
L_08B1926C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B19270;
L_08B19270:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B192BC;
      }
      goto L_08B19278;
    }
L_08B19278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[31] = (0x08B19288u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B19288u) goto L_08B19288;
    return;
L_08B19288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B192B4;
      }
      goto L_08B19298;
    }
L_08B19298:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B192B4u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B192B4u) goto L_08B192B4;
    return;
L_08B192B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B19350;
      }
      goto L_08B192BC;
    }
L_08B192BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[31] = (0x08B192CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 72u, 0x08B00520u>(ctx, &aot_mem) && ctx.pc == 0x08B192CCu) goto L_08B192CC;
    return;
L_08B192CC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(615));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(616));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B19350;
      }
      goto L_08B19334;
    }
L_08B19334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    goto L_08B19350;
L_08B19350:
    ctx.gpr[31] = (0x08B19358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 327u, 0x088099B0u>(ctx, &aot_mem) && ctx.pc == 0x08B19358u) goto L_08B19358;
    return;
L_08B19358:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B19370u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(2856));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 518u, 0x088BA740u>(ctx, &aot_mem) && ctx.pc == 0x08B19370u) goto L_08B19370;
    return;
L_08B19370:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08B19384u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B19384u) goto L_08B19384;
    return;
L_08B19384:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B193B4;
      }
      goto L_08B193A4;
    }
L_08B193A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08B193B0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08B193B0u) goto L_08B193B0;
    return;
L_08B193B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B193B4;
L_08B193B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08B193D0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 61u, 0x08968320u>(ctx, &aot_mem) && ctx.pc == 0x08B193D0u) goto L_08B193D0;
    return;
L_08B193D0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08B193E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08B193E0u) goto L_08B193E0;
    return;
L_08B193E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08B1952C;
      }
      goto L_08B193F0;
    }
L_08B193F0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08B19408;
      }
      goto L_08B193F8;
    }
L_08B193F8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B1946C;
      }
      goto L_08B19400;
    }
L_08B19400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B19590;
      }
      goto L_08B19408;
    }
L_08B19408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[31] = (0x08B1941Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08B1941Cu) goto L_08B1941C;
    return;
L_08B1941C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x08B19430u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08B19430u) goto L_08B19430;
    return;
L_08B19430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08B19444u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08B19444u) goto L_08B19444;
    return;
L_08B19444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08B19458u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08B19458u) goto L_08B19458;
    return;
L_08B19458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B19464u);
    ctx.gpr[5] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem) && ctx.pc == 0x08B19464u) goto L_08B19464;
    return;
L_08B19464:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B195C4;
      }
      goto L_08B1946C;
    }
L_08B1946C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08B1947Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08B1947Cu) goto L_08B1947C;
    return;
L_08B1947C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08B194A8;
      }
      goto L_08B19488;
    }
L_08B19488:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08B19494u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem) && ctx.pc == 0x08B19494u) goto L_08B19494;
    return;
L_08B19494:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08B194A8;
      }
      goto L_08B194A0;
    }
L_08B194A0:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
    goto L_08B194A8;
L_08B194A8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B19524;
      }
      goto L_08B194B0;
    }
L_08B194B0:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08B194BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08B194BCu) goto L_08B194BC;
    return;
L_08B194BC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08B194E8;
      }
      goto L_08B194C8;
    }
L_08B194C8:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08B194D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem) && ctx.pc == 0x08B194D4u) goto L_08B194D4;
    return;
L_08B194D4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08B194E8;
      }
      goto L_08B194E0;
    }
L_08B194E0:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
    goto L_08B194E8;
L_08B194E8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B19524;
      }
      goto L_08B194F0;
    }
L_08B194F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[6] = (0u | 200u);
    ctx.gpr[31] = (0x08B19504u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08B19504u) goto L_08B19504;
    return;
L_08B19504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x08B19518u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08B19518u) goto L_08B19518;
    return;
L_08B19518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B19524u);
    ctx.gpr[5] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem) && ctx.pc == 0x08B19524u) goto L_08B19524;
    return;
L_08B19524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B195C4;
      }
      goto L_08B1952C;
    }
L_08B1952C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[6] = (0u | 250u);
    ctx.gpr[31] = (0x08B19540u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08B19540u) goto L_08B19540;
    return;
L_08B19540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x08B19554u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08B19554u) goto L_08B19554;
    return;
L_08B19554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x08B19568u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08B19568u) goto L_08B19568;
    return;
L_08B19568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x08B1957Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08B1957Cu) goto L_08B1957C;
    return;
L_08B1957C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B19588u);
    ctx.gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem) && ctx.pc == 0x08B19588u) goto L_08B19588;
    return;
L_08B19588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B195C4;
      }
      goto L_08B19590;
    }
L_08B19590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[6] = (0u | 34u);
    ctx.gpr[31] = (0x08B195A4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08B195A4u) goto L_08B195A4;
    return;
L_08B195A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x08B195B8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08B195B8u) goto L_08B195B8;
    return;
L_08B195B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B195C4u);
    ctx.gpr[5] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem) && ctx.pc == 0x08B195C4u) goto L_08B195C4;
    return;
L_08B195C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    ctx.gpr[6] = (65472u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1926), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08B195F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B195F0u) goto L_08B195F0;
    return;
L_08B195F0:
    ctx.gpr[31] = (0x08B195F8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 745u, 0x08947944u>(ctx, &aot_mem) && ctx.pc == 0x08B195F8u) goto L_08B195F8;
    return;
L_08B195F8:
    ctx.gpr[31] = (0x08B19600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B19600u) goto L_08B19600;
    return;
L_08B19600:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B196C8;
      }
      goto L_08B19614;
    }
L_08B19614:
    ctx.gpr[31] = (0x08B1961Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B1961Cu) goto L_08B1961C;
    return;
L_08B1961C:
    ctx.gpr[31] = (0x08B19624u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B19624u) goto L_08B19624;
    return;
L_08B19624:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B196C8;
      }
      goto L_08B1962C;
    }
L_08B1962C:
    ctx.gpr[31] = (0x08B19634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B19634u) goto L_08B19634;
    return;
L_08B19634:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B196B8;
      }
      goto L_08B19648;
    }
L_08B19648:
    ctx.gpr[31] = (0x08B19650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B19650u) goto L_08B19650;
    return;
L_08B19650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08B19668u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B19668u) goto L_08B19668;
    return;
L_08B19668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B196C8;
      }
      goto L_08B19680;
    }
L_08B19680:
    ctx.gpr[31] = (0x08B19688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B19688u) goto L_08B19688;
    return;
L_08B19688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08B196A0u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B196A0u) goto L_08B196A0;
    return;
L_08B196A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B196C8;
      }
      goto L_08B196B8;
    }
L_08B196B8:
    ctx.gpr[31] = (0x08B196C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B196C0u) goto L_08B196C0;
    return;
L_08B196C0:
    ctx.gpr[31] = (0x08B196C8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 301u, 0x08909180u>(ctx, &aot_mem) && ctx.pc == 0x08B196C8u) goto L_08B196C8;
    return;
L_08B196C8:
    ctx.gpr[31] = (0x08B196D0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B196D0u) goto L_08B196D0;
    return;
L_08B196D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B196DCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 941u, 0x0898BA34u>(ctx, &aot_mem) && ctx.pc == 0x08B196DCu) goto L_08B196DC;
    return;
L_08B196DC:
    ctx.gpr[31] = (0x08B196E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 163u, 0x08A114E4u>(ctx, &aot_mem) && ctx.pc == 0x08B196E4u) goto L_08B196E4;
    return;
L_08B196E4:
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B196F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 528u, 0x08A0611Cu>(ctx, &aot_mem) && ctx.pc == 0x08B196F4u) goto L_08B196F4;
    return;
L_08B196F4:
    ctx.gpr[31] = (0x08B196FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 844u, 0x0898B4F0u>(ctx, &aot_mem) && ctx.pc == 0x08B196FCu) goto L_08B196FC;
    return;
L_08B196FC:
    ctx.gpr[31] = (0x08B19704u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 495u, 0x08A05EFCu>(ctx, &aot_mem) && ctx.pc == 0x08B19704u) goto L_08B19704;
    return;
L_08B19704:
    ctx.gpr[31] = (0x08B1970Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 165u, 0x08A11504u>(ctx, &aot_mem) && ctx.pc == 0x08B1970Cu) goto L_08B1970C;
    return;
L_08B1970C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B19718u);
    ctx.gpr[5] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 528u, 0x08A0611Cu>(ctx, &aot_mem) && ctx.pc == 0x08B19718u) goto L_08B19718;
    return;
L_08B19718:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[31] = (0x08B19728u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 125u, 0x08A1CC44u>(ctx, &aot_mem) && ctx.pc == 0x08B19728u) goto L_08B19728;
    return;
L_08B19728:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B1973Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1973Cu) goto L_08B1973C;
    return;
L_08B1973C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1974Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem) && ctx.pc == 0x08B1974Cu) goto L_08B1974C;
    return;
L_08B1974C:
    ctx.gpr[31] = (0x08B19754u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 91u, 0x08A1C8D0u>(ctx, &aot_mem) && ctx.pc == 0x08B19754u) goto L_08B19754;
    return;
L_08B19754:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B19768u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem) && ctx.pc == 0x08B19768u) goto L_08B19768;
    return;
L_08B19768:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7789)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B197A0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 182u, 0x08825280u>(ctx, &aot_mem) && ctx.pc == 0x08B197A0u) goto L_08B197A0;
    return;
L_08B197A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B197B0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x08B197B0u) goto L_08B197B0;
    return;
L_08B197B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B197BC;
      }
      goto L_08B197B8;
    }
L_08B197B8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B197BC;
L_08B197BC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B197D4:
    ctx.gpr[4] = (0u | 41u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10548), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(3136));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10548)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30144));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 42u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10549), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(3152));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10549)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 43u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10550), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(3164));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10550)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B19834:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B19850:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B198C8;
      }
      goto L_08B1986C;
    }
L_08B1986C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B19880;
      }
      goto L_08B19878;
    }
L_08B19878:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08B19880;
L_08B19880:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B19890;
      }
      goto L_08B19888;
    }
L_08B19888:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08B19890;
L_08B19890:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B198B8;
    }
    goto L_08B198A4;
L_08B198A4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08B198B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08B198B4u) goto L_08B198B4;
    return;
L_08B198B4:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B198B8;
L_08B198B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B198C8;
      }
      goto L_08B198C0;
    }
L_08B198C0:
    ctx.gpr[31] = (0x08B198C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B198C8u) goto L_08B198C8;
    return;
L_08B198C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B198DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B1990C;
      }
      goto L_08B198FC;
    }
L_08B198FC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08B1990Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08B1990Cu) goto L_08B1990C;
    return;
L_08B1990C:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08B1991Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1991Cu) goto L_08B1991C;
    return;
L_08B1991C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B19938:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08B19998;
      }
      goto L_08B19974;
    }
L_08B19974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x08B19984u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B19984u) goto L_08B19984;
    return;
L_08B19984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08B19974;
      }
      goto L_08B19998;
    }
L_08B19998:
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
L_08B199B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B199C0:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1704)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B199C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B199F0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 92u, 0x08834A84u>(ctx, &aot_mem) && ctx.pc == 0x08B199F0u) goto L_08B199F0;
    return;
L_08B199F0:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31712));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B19A04u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1924));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 657u, 0x08AFEF20u>(ctx, &aot_mem) && ctx.pc == 0x08B19A04u) goto L_08B19A04;
    return;
L_08B19A04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B19A24;
      }
      goto L_08B19A14;
    }
L_08B19A14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B19A24;
L_08B19A24:
    ctx.gpr[5] = (0u | 61u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1924), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1920), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(852), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1952), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1956), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1960), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1964), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B19A60u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1920), ctx.gpr[5]);
    goto L_08B19B00;
L_08B19A60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1968))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1968), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08B19A7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B19F00;
L_08B19A7C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B19A98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B19AEC;
      }
      goto L_08B19AB4;
    }
L_08B19AB4:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31712));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1924));
    ctx.gpr[31] = (0x08B19ACCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 658u, 0x08AFEF48u>(ctx, &aot_mem) && ctx.pc == 0x08B19ACCu) goto L_08B19ACC;
    return;
L_08B19ACC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B19AD8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 297u, 0x08831598u>(ctx, &aot_mem) && ctx.pc == 0x08B19AD8u) goto L_08B19AD8;
    return;
L_08B19AD8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B19AEC;
      }
      goto L_08B19AE4;
    }
L_08B19AE4:
    ctx.gpr[31] = (0x08B19AECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 734u, 0x08AFF2E0u>(ctx, &aot_mem) && ctx.pc == 0x08B19AECu) goto L_08B19AEC;
    return;
L_08B19AEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B19B00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B19B18u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1952), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 352u, 0x08836628u>(ctx, &aot_mem) && ctx.pc == 0x08B19B18u) goto L_08B19B18;
    return;
L_08B19B18:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B19B24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B19B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 395u, 0x08831BF8u>(ctx, &aot_mem) && ctx.pc == 0x08B19B34u) goto L_08B19B34;
    return;
L_08B19B34:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B19B40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B19B64u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 197u, 0x0883CD44u>(ctx, &aot_mem) && ctx.pc == 0x08B19B64u) goto L_08B19B64;
    return;
L_08B19B64:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
    ctx.gpr[31] = (0x08B19B70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B19B70u) goto L_08B19B70;
    return;
L_08B19B70:
    ctx.gpr[31] = (0x08B19B78u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 52u, 0x0898C1C8u>(ctx, &aot_mem) && ctx.pc == 0x08B19B78u) goto L_08B19B78;
    return;
L_08B19B78:
    ctx.gpr[4] = (0u - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[13];
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1940), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08B19BD0;
    }
    goto L_08B19BD0;
L_08B19BD0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08B19BE8;
    }
    goto L_08B19BE8;
L_08B19BE8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1940), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08B19BF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B19BF4u) goto L_08B19BF4;
    return;
L_08B19BF4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B19C08;
      }
      goto L_08B19C00;
    }
L_08B19C00:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1940), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08B19C08;
L_08B19C08:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B19C20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 1024u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B19C48;
      }
      goto L_08B19C40;
    }
L_08B19C40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B19C58;
      }
      goto L_08B19C48;
    }
L_08B19C48:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1924));
    ctx.gpr[31] = (0x08B19C58u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 671u, 0x08A63FD4u>(ctx, &aot_mem) && ctx.pc == 0x08B19C58u) goto L_08B19C58;
    return;
L_08B19C58:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B19C64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B19C90u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 287u, 0x0883D320u>(ctx, &aot_mem) && ctx.pc == 0x08B19C90u) goto L_08B19C90;
    return;
L_08B19C90:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B19CBC;
      }
      goto L_08B19CAC;
    }
L_08B19CAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B19CBC;
L_08B19CBC:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B19CE8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 384u, 0x08AA1844u>(ctx, &aot_mem) && ctx.pc == 0x08B19CE8u) goto L_08B19CE8;
    return;
L_08B19CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1624)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1632)));
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
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08B19D08u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 515u, 0x08B01EA8u>(ctx, &aot_mem) && ctx.pc == 0x08B19D08u) goto L_08B19D08;
    return;
L_08B19D08:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B19D1Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 384u, 0x08AA1844u>(ctx, &aot_mem) && ctx.pc == 0x08B19D1Cu) goto L_08B19D1C;
    return;
L_08B19D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B19DE8;
      }
      goto L_08B19D28;
    }
L_08B19D28:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08B19D58;
      }
      goto L_08B19D40;
    }
L_08B19D40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B19D5C;
      }
      goto L_08B19D50;
    }
L_08B19D50:
    ctx.gpr[31] = (0x08B19D58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08B19D58u) goto L_08B19D58;
    return;
L_08B19D58:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    goto L_08B19D5C;
L_08B19D5C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B19D74u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x08B19D74u) goto L_08B19D74;
    return;
L_08B19D74:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1620)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B19DB0;
      }
      goto L_08B19DA0;
    }
L_08B19DA0:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B19DC0;
      }
      goto L_08B19DB0;
    }
L_08B19DB0:
    ctx.gpr[31] = (0x08B19DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08B19DB8u) goto L_08B19DB8;
    return;
L_08B19DB8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B19DC0;
      }
      goto L_08B19DC0;
    }
L_08B19DC0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B19DCCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 919u, 0x0885F9D8u>(ctx, &aot_mem) && ctx.pc == 0x08B19DCCu) goto L_08B19DCC;
    return;
L_08B19DCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08B19DE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08B19DE0u) goto L_08B19DE0;
    return;
L_08B19DE0:
    ctx.gpr[31] = (0x08B19DE8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x08B19DE8u) goto L_08B19DE8;
    return;
L_08B19DE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_08B19EB8;
    }
    goto L_08B19DF4;
L_08B19DF4:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08B19E24;
      }
      goto L_08B19E0C;
    }
L_08B19E0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B19E28;
      }
      goto L_08B19E1C;
    }
L_08B19E1C:
    ctx.gpr[31] = (0x08B19E24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08B19E24u) goto L_08B19E24;
    return;
L_08B19E24:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    goto L_08B19E28;
L_08B19E28:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B19E40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x08B19E40u) goto L_08B19E40;
    return;
L_08B19E40:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1628)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B19E7C;
      }
      goto L_08B19E6C;
    }
L_08B19E6C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B19E8C;
      }
      goto L_08B19E7C;
    }
L_08B19E7C:
    ctx.gpr[31] = (0x08B19E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08B19E84u) goto L_08B19E84;
    return;
L_08B19E84:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B19E8C;
      }
      goto L_08B19E8C;
    }
L_08B19E8C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08B19E98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 919u, 0x0885F9D8u>(ctx, &aot_mem) && ctx.pc == 0x08B19E98u) goto L_08B19E98;
    return;
L_08B19E98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08B19EACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08B19EACu) goto L_08B19EAC;
    return;
L_08B19EAC:
    ctx.gpr[31] = (0x08B19EB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x08B19EB4u) goto L_08B19EB4;
    return;
L_08B19EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_08B19EB8;
L_08B19EB8:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B19ED8;
      }
      goto L_08B19EC4;
    }
L_08B19EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B19ED8;
      }
      goto L_08B19ED0;
    }
L_08B19ED0:
    ctx.gpr[31] = (0x08B19ED8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08B19ED8u) goto L_08B19ED8;
    return;
L_08B19ED8:
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
L_08B19F00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(944));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B19F20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 366u, 0x08B0D814u>(ctx, &aot_mem) && ctx.pc == 0x08B19F20u) goto L_08B19F20;
    return;
L_08B19F20:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08B19F30u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 377u, 0x08B0D904u>(ctx, &aot_mem) && ctx.pc == 0x08B19F30u) goto L_08B19F30;
    return;
L_08B19F30:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08B19F40u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 377u, 0x08B0D904u>(ctx, &aot_mem) && ctx.pc == 0x08B19F40u) goto L_08B19F40;
    return;
L_08B19F40:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08B19F50u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 377u, 0x08B0D904u>(ctx, &aot_mem) && ctx.pc == 0x08B19F50u) goto L_08B19F50;
    return;
L_08B19F50:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08B19F60u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 377u, 0x08B0D904u>(ctx, &aot_mem) && ctx.pc == 0x08B19F60u) goto L_08B19F60;
    return;
L_08B19F60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2218u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B19F88u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9288));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem) && ctx.pc == 0x08B19F88u) goto L_08B19F88;
    return;
L_08B19F88:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08B19F98u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 375u, 0x08B0D8ECu>(ctx, &aot_mem) && ctx.pc == 0x08B19F98u) goto L_08B19F98;
    return;
L_08B19F98:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08B19FA8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 375u, 0x08B0D8ECu>(ctx, &aot_mem) && ctx.pc == 0x08B19FA8u) goto L_08B19FA8;
    return;
L_08B19FA8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08B19FB8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 375u, 0x08B0D8ECu>(ctx, &aot_mem) && ctx.pc == 0x08B19FB8u) goto L_08B19FB8;
    return;
L_08B19FB8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08B19FC8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 375u, 0x08B0D8ECu>(ctx, &aot_mem) && ctx.pc == 0x08B19FC8u) goto L_08B19FC8;
    return;
L_08B19FC8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B19FDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1316)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B1A008;
      }
      goto L_08B19FF4;
    }
L_08B19FF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08B1A008u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 310u, 0x088316CCu>(ctx, &aot_mem) && ctx.pc == 0x08B1A008u) goto L_08B1A008;
    return;
L_08B1A008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1A028;
      }
      goto L_08B1A014;
    }
L_08B1A014:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B1A028u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem) && ctx.pc == 0x08B1A028u) goto L_08B1A028;
    return;
L_08B1A028:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1A038:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1924)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1A040:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1920)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1A048:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
      if (branch_taken) {
          goto L_08B1A07C;
      }
      goto L_08B1A070;
    }
L_08B1A070:
    ctx.gpr[6] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B1A0B4;
      }
      goto L_08B1A07C;
    }
L_08B1A07C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_08B1A094;
    }
    goto L_08B1A084;
L_08B1A084:
    ctx.gpr[31] = (0x08B1A08Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1A08Cu) goto L_08B1A08C;
    return;
L_08B1A08C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08B1A094;
L_08B1A094:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1924)));
    ctx.gpr[31] = (0x08B1A0A0u);
    ctx.gpr[7] = (0u | 194u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B1A0A0u) goto L_08B1A0A0;
    return;
L_08B1A0A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1A0ACu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B1A0ACu) goto L_08B1A0AC;
    return;
L_08B1A0AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1A0E4;
      }
      goto L_08B1A0B4;
    }
L_08B1A0B4:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_08B1A0CC;
    }
    goto L_08B1A0BC;
L_08B1A0BC:
    ctx.gpr[31] = (0x08B1A0C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1A0C4u) goto L_08B1A0C4;
    return;
L_08B1A0C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08B1A0CC;
L_08B1A0CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1924)));
    ctx.gpr[31] = (0x08B1A0D8u);
    ctx.gpr[7] = (0u | 195u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B1A0D8u) goto L_08B1A0D8;
    return;
L_08B1A0D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1A0E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B1A0E4u) goto L_08B1A0E4;
    return;
L_08B1A0E4:
    ctx.gpr[31] = (0x08B1A0ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08B1A0ECu) goto L_08B1A0EC;
    return;
L_08B1A0EC:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1A100u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13856));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08B1A100u) goto L_08B1A100;
    return;
L_08B1A100:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(615))))));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1A128:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1A130:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B1A4F0;
      }
      goto L_08B1A178;
    }
L_08B1A178:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(3192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1A4F0;
      }
      goto L_08B1A184;
    }
L_08B1A184:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3180)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3184)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(10560));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1520)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[14])) && ctx.fpr[15] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B1A288;
      }
      goto L_08B1A1D8;
    }
L_08B1A1D8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[14])) && ctx.fpr[15] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1A288;
      }
      goto L_08B1A1EC;
    }
L_08B1A1EC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1524)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3176)));
      if (branch_taken) {
          goto L_08B1A214;
      }
      goto L_08B1A200;
    }
L_08B1A200:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1532)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1A274;
      }
      goto L_08B1A214;
    }
L_08B1A214:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1A274;
      }
      goto L_08B1A228;
    }
L_08B1A228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1920)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (15759u << 16u);
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
        goto L_08B1A264;
    }
    goto L_08B1A264;
L_08B1A264:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08B1A320;
      }
      goto L_08B1A274;
    }
L_08B1A274:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3176)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3188)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08B1A320;
      }
      goto L_08B1A288;
    }
L_08B1A288:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1556)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[14])) && ctx.fpr[15] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1A320;
      }
      goto L_08B1A29C;
    }
L_08B1A29C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1564)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[14])) && ctx.fpr[15] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1A320;
      }
      goto L_08B1A2B0;
    }
L_08B1A2B0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3176)));
      if (branch_taken) {
          goto L_08B1A320;
      }
      goto L_08B1A2C4;
    }
L_08B1A2C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1920)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[16];
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[17]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_08B1A308;
    }
    goto L_08B1A308;
L_08B1A308:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_08B1A320;
L_08B1A320:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[16];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[18];
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08B1A46Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x08B1A46Cu) goto L_08B1A46C;
    return;
L_08B1A46C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08B1A4F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x08B1A4F0u) goto L_08B1A4F0;
    return;
L_08B1A4F0:
    ctx.gpr[31] = (0x08B1A4F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 525u, 0x08837B78u>(ctx, &aot_mem) && ctx.pc == 0x08B1A4F8u) goto L_08B1A4F8;
    return;
L_08B1A4F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1A530;
      }
      goto L_08B1A50C;
    }
L_08B1A50C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1A530;
      }
      goto L_08B1A518;
    }
L_08B1A518:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 47u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B1A530u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 212u, 0x08B04D14u>(ctx, &aot_mem) && ctx.pc == 0x08B1A530u) goto L_08B1A530;
    return;
L_08B1A530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1A54C;
      }
      goto L_08B1A54C;
    }
L_08B1A54C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1A580:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(538))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(538), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(538))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(538), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B1A92C;
      }
      goto L_08B1A5D4;
    }
L_08B1A5D4:
    ctx.gpr[31] = (0x08B1A5DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1A5DCu) goto L_08B1A5DC;
    return;
L_08B1A5DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1A92C;
      }
      goto L_08B1A5E4;
    }
L_08B1A5E4:
    ctx.gpr[31] = (0x08B1A5ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 450u, 0x08A930F8u>(ctx, &aot_mem) && ctx.pc == 0x08B1A5ECu) goto L_08B1A5EC;
    return;
L_08B1A5EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B1A634;
      }
      goto L_08B1A5F8;
    }
L_08B1A5F8:
    ctx.gpr[31] = (0x08B1A600u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1A600u) goto L_08B1A600;
    return;
L_08B1A600:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1A634;
      }
      goto L_08B1A608;
    }
L_08B1A608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B1A62Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B1A62Cu) goto L_08B1A62C;
    return;
L_08B1A62C:
    ctx.gpr[31] = (0x08B1A634u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B1A634u) goto L_08B1A634;
    return;
L_08B1A634:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1A77C;
      }
      goto L_08B1A664;
    }
L_08B1A664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1920)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1A77C;
      }
      goto L_08B1A67C;
    }
L_08B1A67C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1884)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B1A6A4;
      }
      goto L_08B1A68C;
    }
L_08B1A68C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3196)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08B1A720;
      }
      goto L_08B1A6A4;
    }
L_08B1A6A4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(608)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1A720;
      }
      goto L_08B1A6B8;
    }
L_08B1A6B8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[6] = (ctx.gpr[6] & 32u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B1A720;
      }
      goto L_08B1A6D0;
    }
L_08B1A6D0:
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08B1A704;
    }
    goto L_08B1A704;
L_08B1A704:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1920)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08B1A720;
L_08B1A720:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
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
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08B1A774u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x08B1A774u) goto L_08B1A774;
    return;
L_08B1A774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1A890;
      }
      goto L_08B1A77C;
    }
L_08B1A77C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1A890;
      }
      goto L_08B1A790;
    }
L_08B1A790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1920)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1A890;
      }
      goto L_08B1A7AC;
    }
L_08B1A7AC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1884)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B1A7D4;
      }
      goto L_08B1A7BC;
    }
L_08B1A7BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3196)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08B1A838;
      }
      goto L_08B1A7D4;
    }
L_08B1A7D4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(608)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1A838;
      }
      goto L_08B1A7E8;
    }
L_08B1A7E8:
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08B1A81C;
    }
    goto L_08B1A81C;
L_08B1A81C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1920)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08B1A838;
L_08B1A838:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08B1A890u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x08B1A890u) goto L_08B1A890;
    return;
L_08B1A890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1920)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[6]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1932)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(480));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08B1A92Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B1A92Cu) goto L_08B1A92C;
    return;
L_08B1A92C:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1A948:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 496u);
    ctx.gpr[8] = (0u | 64u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B1ACFC;
      }
      goto L_08B1A984;
    }
L_08B1A984:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1AA50;
      }
      goto L_08B1A990;
    }
L_08B1A990:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(620))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B1AA50;
      }
      goto L_08B1A99C;
    }
L_08B1A99C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (2203u << 16u);
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-21176));
      if (branch_taken) {
          goto L_08B1A9EC;
      }
      goto L_08B1A9B0;
    }
L_08B1A9B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B1A9C8;
    }
    goto L_08B1A9BC;
L_08B1A9BC:
    ctx.gpr[31] = (0x08B1A9C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1A9C4u) goto L_08B1A9C4;
    return;
L_08B1A9C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B1A9C8;
L_08B1A9C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B1A9D8u);
    ctx.gpr[7] = (0u | 118u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B1A9D8u) goto L_08B1A9D8;
    return;
L_08B1A9D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1A9E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B1A9E4u) goto L_08B1A9E4;
    return;
L_08B1A9E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1AA20;
      }
      goto L_08B1A9EC;
    }
L_08B1A9EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B1AA04;
    }
    goto L_08B1A9F8;
L_08B1A9F8:
    ctx.gpr[31] = (0x08B1AA00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1AA00u) goto L_08B1AA00;
    return;
L_08B1AA00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B1AA04;
L_08B1AA04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B1AA14u);
    ctx.gpr[7] = (0u | 119u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B1AA14u) goto L_08B1AA14;
    return;
L_08B1AA14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1AA20u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B1AA20u) goto L_08B1AA20;
    return;
L_08B1AA20:
    ctx.gpr[31] = (0x08B1AA28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08B1AA28u) goto L_08B1AA28;
    return;
L_08B1AA28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B1AA38u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08B1AA38u) goto L_08B1AA38;
    return;
L_08B1AA38:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(615))))));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B1B284;
      }
      goto L_08B1AA50;
    }
L_08B1AA50:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B1AAC0;
      }
      goto L_08B1AA60;
    }
L_08B1AA60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[20] = (2203u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(13856));
      if (branch_taken) {
          goto L_08B1AA78;
      }
      goto L_08B1AA70;
    }
L_08B1AA70:
    ctx.gpr[31] = (0x08B1AA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1AA78u) goto L_08B1AA78;
    return;
L_08B1AA78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (16576u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1924)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[31] = (0x08B1AA94u);
    ctx.gpr[7] = (0u | 196u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem) && ctx.pc == 0x08B1AA94u) goto L_08B1AA94;
    return;
L_08B1AA94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1AAA0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B1AAA0u) goto L_08B1AAA0;
    return;
L_08B1AAA0:
    ctx.gpr[31] = (0x08B1AAA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08B1AAA8u) goto L_08B1AAA8;
    return;
L_08B1AAA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B1AAB8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08B1AAB8u) goto L_08B1AAB8;
    return;
L_08B1AAB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B284;
      }
      goto L_08B1AAC0;
    }
L_08B1AAC0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08B1ABB8;
      }
      goto L_08B1AAE0;
    }
L_08B1AAE0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (48896u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B1ABB8;
      }
      goto L_08B1AAFC;
    }
L_08B1AAFC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1ABB8;
      }
      goto L_08B1AB10;
    }
L_08B1AB10:
    ctx.gpr[20] = (2203u << 16u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(13856));
      if (branch_taken) {
          goto L_08B1AB28;
      }
      goto L_08B1AB1C;
    }
L_08B1AB1C:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B1AB64;
      }
      goto L_08B1AB28;
    }
L_08B1AB28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B1AB40;
    }
    goto L_08B1AB34;
L_08B1AB34:
    ctx.gpr[31] = (0x08B1AB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1AB3Cu) goto L_08B1AB3C;
    return;
L_08B1AB3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B1AB40;
L_08B1AB40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1924)));
    ctx.gpr[31] = (0x08B1AB50u);
    ctx.gpr[7] = (0u | 194u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B1AB50u) goto L_08B1AB50;
    return;
L_08B1AB50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1AB5Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B1AB5Cu) goto L_08B1AB5C;
    return;
L_08B1AB5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1AB98;
      }
      goto L_08B1AB64;
    }
L_08B1AB64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B1AB7C;
    }
    goto L_08B1AB70;
L_08B1AB70:
    ctx.gpr[31] = (0x08B1AB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1AB78u) goto L_08B1AB78;
    return;
L_08B1AB78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B1AB7C;
L_08B1AB7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1924)));
    ctx.gpr[31] = (0x08B1AB8Cu);
    ctx.gpr[7] = (0u | 195u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B1AB8Cu) goto L_08B1AB8C;
    return;
L_08B1AB8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1AB98u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B1AB98u) goto L_08B1AB98;
    return;
L_08B1AB98:
    ctx.gpr[31] = (0x08B1ABA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08B1ABA0u) goto L_08B1ABA0;
    return;
L_08B1ABA0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B1ABB0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08B1ABB0u) goto L_08B1ABB0;
    return;
L_08B1ABB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B284;
      }
      goto L_08B1ABB8;
    }
L_08B1ABB8:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08B1ABC8;
      }
      goto L_08B1ABC0;
    }
L_08B1ABC0:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B1AC54;
      }
      goto L_08B1ABC8;
    }
L_08B1ABC8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1AC18;
      }
      goto L_08B1ABDC;
    }
L_08B1ABDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B1ABF4;
    }
    goto L_08B1ABE8;
L_08B1ABE8:
    ctx.gpr[31] = (0x08B1ABF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1ABF0u) goto L_08B1ABF0;
    return;
L_08B1ABF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B1ABF4;
L_08B1ABF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B1AC04u);
    ctx.gpr[7] = (0u | 114u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B1AC04u) goto L_08B1AC04;
    return;
L_08B1AC04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1AC10u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B1AC10u) goto L_08B1AC10;
    return;
L_08B1AC10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1ACD8;
      }
      goto L_08B1AC18;
    }
L_08B1AC18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B1AC30;
    }
    goto L_08B1AC24;
L_08B1AC24:
    ctx.gpr[31] = (0x08B1AC2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1AC2Cu) goto L_08B1AC2C;
    return;
L_08B1AC2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B1AC30;
L_08B1AC30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B1AC40u);
    ctx.gpr[7] = (0u | 116u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B1AC40u) goto L_08B1AC40;
    return;
L_08B1AC40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1AC4Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B1AC4Cu) goto L_08B1AC4C;
    return;
L_08B1AC4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1ACD8;
      }
      goto L_08B1AC54;
    }
L_08B1AC54:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1ACA4;
      }
      goto L_08B1AC68;
    }
L_08B1AC68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B1AC80;
    }
    goto L_08B1AC74;
L_08B1AC74:
    ctx.gpr[31] = (0x08B1AC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1AC7Cu) goto L_08B1AC7C;
    return;
L_08B1AC7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B1AC80;
L_08B1AC80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B1AC90u);
    ctx.gpr[7] = (0u | 115u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B1AC90u) goto L_08B1AC90;
    return;
L_08B1AC90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1AC9Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B1AC9Cu) goto L_08B1AC9C;
    return;
L_08B1AC9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1ACD8;
      }
      goto L_08B1ACA4;
    }
L_08B1ACA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B1ACBC;
    }
    goto L_08B1ACB0;
L_08B1ACB0:
    ctx.gpr[31] = (0x08B1ACB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1ACB8u) goto L_08B1ACB8;
    return;
L_08B1ACB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B1ACBC;
L_08B1ACBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B1ACCCu);
    ctx.gpr[7] = (0u | 117u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B1ACCCu) goto L_08B1ACCC;
    return;
L_08B1ACCC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1ACD8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B1ACD8u) goto L_08B1ACD8;
    return;
L_08B1ACD8:
    ctx.gpr[31] = (0x08B1ACE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08B1ACE0u) goto L_08B1ACE0;
    return;
L_08B1ACE0:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1ACF4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12000));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08B1ACF4u) goto L_08B1ACF4;
    return;
L_08B1ACF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B284;
      }
      goto L_08B1ACFC;
    }
L_08B1ACFC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B1AE08;
      }
      goto L_08B1AD0C;
    }
L_08B1AD0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1ADA8;
      }
      goto L_08B1AD18;
    }
L_08B1AD18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B1AD98;
      }
      goto L_08B1AD30;
    }
L_08B1AD30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B1AD98;
      }
      goto L_08B1AD48;
    }
L_08B1AD48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[20] = (2203u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(13856));
      if (branch_taken) {
          goto L_08B1AD60;
      }
      goto L_08B1AD58;
    }
L_08B1AD58:
    ctx.gpr[31] = (0x08B1AD60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1AD60u) goto L_08B1AD60;
    return;
L_08B1AD60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (16576u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1924)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[31] = (0x08B1AD7Cu);
    ctx.gpr[7] = (0u | 196u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem) && ctx.pc == 0x08B1AD7Cu) goto L_08B1AD7C;
    return;
L_08B1AD7C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(780), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B1AD90u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08B1AD90u) goto L_08B1AD90;
    return;
L_08B1AD90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
      if (branch_taken) {
          goto L_08B1B284;
      }
      goto L_08B1AD98;
    }
L_08B1AD98:
    ctx.gpr[31] = (0x08B1ADA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x08B1ADA0u) goto L_08B1ADA0;
    return;
L_08B1ADA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B284;
      }
      goto L_08B1ADA8;
    }
L_08B1ADA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[20] = (2203u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(13856));
      if (branch_taken) {
          goto L_08B1ADC0;
      }
      goto L_08B1ADB8;
    }
L_08B1ADB8:
    ctx.gpr[31] = (0x08B1ADC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1ADC0u) goto L_08B1ADC0;
    return;
L_08B1ADC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (16576u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1924)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[31] = (0x08B1ADDCu);
    ctx.gpr[7] = (0u | 196u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem) && ctx.pc == 0x08B1ADDCu) goto L_08B1ADDC;
    return;
L_08B1ADDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1ADE8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B1ADE8u) goto L_08B1ADE8;
    return;
L_08B1ADE8:
    ctx.gpr[31] = (0x08B1ADF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08B1ADF0u) goto L_08B1ADF0;
    return;
L_08B1ADF0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B1AE00u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08B1AE00u) goto L_08B1AE00;
    return;
L_08B1AE00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B284;
      }
      goto L_08B1AE08;
    }
L_08B1AE08:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08B1AE1C;
      }
      goto L_08B1AE14;
    }
L_08B1AE14:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B1B040;
      }
      goto L_08B1AE1C;
    }
L_08B1AE1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1AFA4;
      }
      goto L_08B1AE28;
    }
L_08B1AE28:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1AEBC;
      }
      goto L_08B1AE5C;
    }
L_08B1AE5C:
    ctx.gpr[31] = (0x08B1AE64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x08B1AE64u) goto L_08B1AE64;
    return;
L_08B1AE64:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B1AE84;
      }
      goto L_08B1AE74;
    }
L_08B1AE74:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B1AEA0;
      }
      goto L_08B1AE84;
    }
L_08B1AE84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (0u | 31u);
    ctx.gpr[31] = (0x08B1AE98u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem) && ctx.pc == 0x08B1AE98u) goto L_08B1AE98;
    return;
L_08B1AE98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1AEB4;
      }
      goto L_08B1AEA0;
    }
L_08B1AEA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (0u | 29u);
    ctx.gpr[31] = (0x08B1AEB4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem) && ctx.pc == 0x08B1AEB4u) goto L_08B1AEB4;
    return;
L_08B1AEB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B328;
      }
      goto L_08B1AEBC;
    }
L_08B1AEBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[6] = (0u | 55u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2228));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B1AF94;
      }
      goto L_08B1AED4;
    }
L_08B1AED4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B1AF94;
      }
      goto L_08B1AEEC;
    }
L_08B1AEEC:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (2203u << 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-21176));
      if (branch_taken) {
          goto L_08B1AF38;
      }
      goto L_08B1AEFC;
    }
L_08B1AEFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B1AF14;
    }
    goto L_08B1AF08;
L_08B1AF08:
    ctx.gpr[31] = (0x08B1AF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1AF10u) goto L_08B1AF10;
    return;
L_08B1AF10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B1AF14;
L_08B1AF14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B1AF24u);
    ctx.gpr[7] = (0u | 118u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B1AF24u) goto L_08B1AF24;
    return;
L_08B1AF24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1AF30u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B1AF30u) goto L_08B1AF30;
    return;
L_08B1AF30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1AF6C;
      }
      goto L_08B1AF38;
    }
L_08B1AF38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B1AF50;
    }
    goto L_08B1AF44;
L_08B1AF44:
    ctx.gpr[31] = (0x08B1AF4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1AF4Cu) goto L_08B1AF4C;
    return;
L_08B1AF4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B1AF50;
L_08B1AF50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B1AF60u);
    ctx.gpr[7] = (0u | 119u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B1AF60u) goto L_08B1AF60;
    return;
L_08B1AF60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1AF6Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B1AF6Cu) goto L_08B1AF6C;
    return;
L_08B1AF6C:
    ctx.gpr[31] = (0x08B1AF74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08B1AF74u) goto L_08B1AF74;
    return;
L_08B1AF74:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B1AF84u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08B1AF84u) goto L_08B1AF84;
    return;
L_08B1AF84:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B1B284;
      }
      goto L_08B1AF94;
    }
L_08B1AF94:
    ctx.gpr[31] = (0x08B1AF9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x08B1AF9Cu) goto L_08B1AF9C;
    return;
L_08B1AF9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B284;
      }
      goto L_08B1AFA4;
    }
L_08B1AFA4:
    ctx.gpr[20] = (2203u << 16u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(13856));
      if (branch_taken) {
          goto L_08B1AFEC;
      }
      goto L_08B1AFB0;
    }
L_08B1AFB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B1AFC8;
    }
    goto L_08B1AFBC;
L_08B1AFBC:
    ctx.gpr[31] = (0x08B1AFC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1AFC4u) goto L_08B1AFC4;
    return;
L_08B1AFC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B1AFC8;
L_08B1AFC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1924)));
    ctx.gpr[31] = (0x08B1AFD8u);
    ctx.gpr[7] = (0u | 194u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B1AFD8u) goto L_08B1AFD8;
    return;
L_08B1AFD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1AFE4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B1AFE4u) goto L_08B1AFE4;
    return;
L_08B1AFE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B020;
      }
      goto L_08B1AFEC;
    }
L_08B1AFEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B1B004;
    }
    goto L_08B1AFF8;
L_08B1AFF8:
    ctx.gpr[31] = (0x08B1B000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1B000u) goto L_08B1B000;
    return;
L_08B1B000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B1B004;
L_08B1B004:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1924)));
    ctx.gpr[31] = (0x08B1B014u);
    ctx.gpr[7] = (0u | 195u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B1B014u) goto L_08B1B014;
    return;
L_08B1B014:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1B020u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B1B020u) goto L_08B1B020;
    return;
L_08B1B020:
    ctx.gpr[31] = (0x08B1B028u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08B1B028u) goto L_08B1B028;
    return;
L_08B1B028:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B1B038u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08B1B038u) goto L_08B1B038;
    return;
L_08B1B038:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B284;
      }
      goto L_08B1B040;
    }
L_08B1B040:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B1B04Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1B04Cu) goto L_08B1B04C;
    return;
L_08B1B04C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B1EC;
      }
      goto L_08B1B054;
    }
L_08B1B054:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
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
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B1B0E8;
      }
      goto L_08B1B088;
    }
L_08B1B088:
    ctx.gpr[31] = (0x08B1B090u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x08B1B090u) goto L_08B1B090;
    return;
L_08B1B090:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B1B0B0;
      }
      goto L_08B1B0A0;
    }
L_08B1B0A0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B1B0CC;
      }
      goto L_08B1B0B0;
    }
L_08B1B0B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (0u | 31u);
    ctx.gpr[31] = (0x08B1B0C4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem) && ctx.pc == 0x08B1B0C4u) goto L_08B1B0C4;
    return;
L_08B1B0C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B0E0;
      }
      goto L_08B1B0CC;
    }
L_08B1B0CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (0u | 29u);
    ctx.gpr[31] = (0x08B1B0E0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem) && ctx.pc == 0x08B1B0E0u) goto L_08B1B0E0;
    return;
L_08B1B0E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B328;
      }
      goto L_08B1B0E8;
    }
L_08B1B0E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B1B0F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1B0F4u) goto L_08B1B0F4;
    return;
L_08B1B0F4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B1B1DC;
      }
      goto L_08B1B108;
    }
L_08B1B108:
    ctx.gpr[31] = (0x08B1B110u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1B110u) goto L_08B1B110;
    return;
L_08B1B110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B1DC;
      }
      goto L_08B1B124;
    }
L_08B1B124:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (2203u << 16u);
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-21176));
      if (branch_taken) {
          goto L_08B1B174;
      }
      goto L_08B1B138;
    }
L_08B1B138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B1B150;
    }
    goto L_08B1B144;
L_08B1B144:
    ctx.gpr[31] = (0x08B1B14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1B14Cu) goto L_08B1B14C;
    return;
L_08B1B14C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B1B150;
L_08B1B150:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B1B160u);
    ctx.gpr[7] = (0u | 118u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B1B160u) goto L_08B1B160;
    return;
L_08B1B160:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1B16Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B1B16Cu) goto L_08B1B16C;
    return;
L_08B1B16C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B1A8;
      }
      goto L_08B1B174;
    }
L_08B1B174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B1B18C;
    }
    goto L_08B1B180;
L_08B1B180:
    ctx.gpr[31] = (0x08B1B188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1B188u) goto L_08B1B188;
    return;
L_08B1B188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B1B18C;
L_08B1B18C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B1B19Cu);
    ctx.gpr[7] = (0u | 119u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B1B19Cu) goto L_08B1B19C;
    return;
L_08B1B19C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1B1A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B1B1A8u) goto L_08B1B1A8;
    return;
L_08B1B1A8:
    ctx.gpr[31] = (0x08B1B1B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08B1B1B0u) goto L_08B1B1B0;
    return;
L_08B1B1B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B1B1C0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08B1B1C0u) goto L_08B1B1C0;
    return;
L_08B1B1C0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B1B1CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1B1CCu) goto L_08B1B1CC;
    return;
L_08B1B1CC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B1B284;
      }
      goto L_08B1B1DC;
    }
L_08B1B1DC:
    ctx.gpr[31] = (0x08B1B1E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x08B1B1E4u) goto L_08B1B1E4;
    return;
L_08B1B1E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B284;
      }
      goto L_08B1B1EC;
    }
L_08B1B1EC:
    ctx.gpr[20] = (2203u << 16u);
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(13856));
      if (branch_taken) {
          goto L_08B1B238;
      }
      goto L_08B1B1FC;
    }
L_08B1B1FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B1B214;
    }
    goto L_08B1B208;
L_08B1B208:
    ctx.gpr[31] = (0x08B1B210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1B210u) goto L_08B1B210;
    return;
L_08B1B210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B1B214;
L_08B1B214:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1924)));
    ctx.gpr[31] = (0x08B1B224u);
    ctx.gpr[7] = (0u | 194u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B1B224u) goto L_08B1B224;
    return;
L_08B1B224:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1B230u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B1B230u) goto L_08B1B230;
    return;
L_08B1B230:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B26C;
      }
      goto L_08B1B238;
    }
L_08B1B238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B1B250;
    }
    goto L_08B1B244;
L_08B1B244:
    ctx.gpr[31] = (0x08B1B24Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B1B24Cu) goto L_08B1B24C;
    return;
L_08B1B24C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B1B250;
L_08B1B250:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1924)));
    ctx.gpr[31] = (0x08B1B260u);
    ctx.gpr[7] = (0u | 195u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B1B260u) goto L_08B1B260;
    return;
L_08B1B260:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1B26Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B1B26Cu) goto L_08B1B26C;
    return;
L_08B1B26C:
    ctx.gpr[31] = (0x08B1B274u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08B1B274u) goto L_08B1B274;
    return;
L_08B1B274:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B1B284u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08B1B284u) goto L_08B1B284;
    return;
L_08B1B284:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B328;
      }
      goto L_08B1B28C;
    }
L_08B1B28C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B1B2A0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 567u, 0x089AE4F4u>(ctx, &aot_mem) && ctx.pc == 0x08B1B2A0u) goto L_08B1B2A0;
    return;
L_08B1B2A0:
    ctx.gpr[31] = (0x08B1B2A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1B2A8u) goto L_08B1B2A8;
    return;
L_08B1B2A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[19] = (0u | 6u);
      if (branch_taken) {
          goto L_08B1B2BC;
      }
      goto L_08B1B2B0;
    }
L_08B1B2B0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B1B2BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 119u, 0x089B4624u>(ctx, &aot_mem) && ctx.pc == 0x08B1B2BCu) goto L_08B1B2BC;
    return;
L_08B1B2BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08B1B2EC;
      }
      goto L_08B1B2C8;
    }
L_08B1B2C8:
    ctx.gpr[31] = (0x08B1B2D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B1B2D0u) goto L_08B1B2D0;
    return;
L_08B1B2D0:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B1B2EC;
      }
      goto L_08B1B2D8;
    }
L_08B1B2D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08B1B2EC;
      }
      goto L_08B1B2E4;
    }
L_08B1B2E4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2301), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B1B2EC;
L_08B1B2EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B1B328;
      }
      goto L_08B1B2F8;
    }
L_08B1B2F8:
    ctx.gpr[31] = (0x08B1B300u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1B300u) goto L_08B1B300;
    return;
L_08B1B300:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B328;
      }
      goto L_08B1B308;
    }
L_08B1B308:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B1B314u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1B314u) goto L_08B1B314;
    return;
L_08B1B314:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 11u);
    ctx.gpr[31] = (0x08B1B328u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 567u, 0x089AE4F4u>(ctx, &aot_mem) && ctx.pc == 0x08B1B328u) goto L_08B1B328;
    return;
L_08B1B328:
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
L_08B1B348:
    ctx.gpr[4] = (16254u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 47186u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10560), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10564), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10568), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1B36C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B1B37Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(3216));
    goto L_08B1B3E8;
L_08B1B37C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1B388:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B1B398u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B73094u;
    return;
L_08B1B398:
    ctx.gpr[31] = (0x08B1B3A0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.pc = 0x08B73094u;
    return;
L_08B1B3A0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(3232), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1B3B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(3232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B3DC;
      }
      goto L_08B1B3C8;
    }
L_08B1B3C8:
    ctx.gpr[31] = (0x08B1B3D0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.pc = 0x08B730B4u;
    return;
L_08B1B3D0:
    ctx.gpr[31] = (0x08B1B3D8u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B730B4u;
    return;
L_08B1B3D8:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(3232), static_cast<std::uint8_t>(0u));
    goto L_08B1B3DC;
L_08B1B3DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1B3E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B1B444u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B730ECu;
    return;
L_08B1B444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B1B4B4;
      }
      goto L_08B1B450;
    }
L_08B1B450:
    ctx.gpr[19] = (0u | 75u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08B1B45C;
L_08B1B45C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08B1B470;
      }
      goto L_08B1B468;
    }
L_08B1B468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B4A4;
      }
      goto L_08B1B470;
    }
L_08B1B470:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08B1B494;
      }
      goto L_08B1B47C;
    }
L_08B1B47C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B1B48Cu);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_08B1B4DC;
L_08B1B48C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B4A4;
      }
      goto L_08B1B494;
    }
L_08B1B494:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B1B4A4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08B1B4DC;
L_08B1B4A4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B1B45C;
      }
      goto L_08B1B4B4;
    }
L_08B1B4B4:
    ctx.gpr[31] = (0x08B1B4BCu);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B730ECu;
    return;
L_08B1B4BC:
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
L_08B1B4DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B1B518u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32128));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1B518u) goto L_08B1B518;
    return;
L_08B1B518:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B1B524u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 45u, 0x08B58238u>(ctx, &aot_mem) && ctx.pc == 0x08B1B524u) goto L_08B1B524;
    return;
L_08B1B524:
    ctx.gpr[31] = (0x08B1B52Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 542u, 0x08B59EE4u>(ctx, &aot_mem) && ctx.pc == 0x08B1B52Cu) goto L_08B1B52C;
    return;
L_08B1B52C:
    ctx.gpr[31] = (0x08B1B534u);
    // nop
    ctx.pc = 0x08B73114u;
    return;
L_08B1B534:
    ctx.gpr[18] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-24288));
      if (branch_taken) {
          goto L_08B1B574;
      }
      goto L_08B1B544;
    }
L_08B1B544:
    ctx.gpr[31] = (0x08B1B54Cu);
    // nop
    ctx.pc = 0x08B73114u;
    return;
L_08B1B54C:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B574;
      }
      goto L_08B1B558;
    }
L_08B1B558:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08B1B564u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.pc = 0x08B7310Cu;
    return;
L_08B1B564:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B1B56C;
      }
      goto L_08B1B56C;
    }
L_08B1B56C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1B544;
      }
      goto L_08B1B574;
    }
L_08B1B574:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08B1B584u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 214u, 0x088B54E4u>(ctx, &aot_mem) && ctx.pc == 0x08B1B584u) goto L_08B1B584;
    return;
L_08B1B584:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B1B598;
      }
      goto L_08B1B590;
    }
L_08B1B590:
    ctx.gpr[31] = (0x08B1B598u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08B1B598:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B1B574;
      }
      goto L_08B1B5A0;
    }
L_08B1B5A0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08B1B5B0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B735ECu;
    return;
L_08B1B5B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B1B5E0;
      }
      goto L_08B1B5B8;
    }
L_08B1B5B8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08B1B5C8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B735ECu;
    return;
L_08B1B5C8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08B1B5D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08B1B5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B1B5B8;
      }
      goto L_08B1B5E0;
    }
L_08B1B5E0:
    ctx.gpr[31] = (0x08B1B5E8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B7363Cu;
    return;
L_08B1B5E8:
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 16384u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B1B620u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B735DCu;
    return;
L_08B1B620:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B1B630;
      }
      goto L_08B1B628;
    }
L_08B1B628:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B1B634;
      }
      goto L_08B1B630;
    }
L_08B1B630:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B1B634;
L_08B1B634:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1B654:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 16384u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B1B698u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B735BCu;
    return;
L_08B1B698:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08B1B6B8;
      }
      goto L_08B1B6A0;
    }
L_08B1B6A0:
    ctx.gpr[31] = (0x08B1B6A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B735D4u;
    return;
L_08B1B6A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B1B6C0;
      }
      goto L_08B1B6B0;
    }
L_08B1B6B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B1B6C4;
      }
      goto L_08B1B6B8;
    }
L_08B1B6B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B1B6C4;
      }
      goto L_08B1B6C0;
    }
L_08B1B6C0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B1B6C4;
L_08B1B6C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1B6D0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B1B70C;
      }
      goto L_08B1B6E8;
    }
L_08B1B6E8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[10] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[10]));
      if (branch_taken) {
          goto L_08B1B6E8;
      }
      goto L_08B1B70C;
    }
L_08B1B70C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1B714:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1B728:
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
    ctx.gpr[31] = (0x08B1B76Cu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem) && ctx.pc == 0x08B1B76Cu) goto L_08B1B76C;
    return;
L_08B1B76C:
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
    goto L_08B1B8CC;
L_08B1B8CC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(209)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B1B8CC;
      }
      goto L_08B1B8E8;
    }
L_08B1B8E8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B1B8F4;
L_08B1B8F4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(216), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B1B8F4;
      }
      goto L_08B1B910;
    }
L_08B1B910:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B1B91C;
L_08B1B91C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(232)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B1B91C;
      }
      goto L_08B1B938;
    }
L_08B1B938:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B1B944;
L_08B1B944:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(248)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B1B944;
      }
      goto L_08B1B960;
    }
L_08B1B960:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B1B96C;
L_08B1B96C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B1B96C;
      }
      goto L_08B1B988;
    }
L_08B1B988:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B1B994;
L_08B1B994:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B1B994;
      }
      goto L_08B1B9B0;
    }
L_08B1B9B0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(304));
    goto L_08B1B9BC;
L_08B1B9BC:
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
          goto L_08B1B9BC;
      }
      goto L_08B1BA14;
    }
L_08B1BA14:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B1BA20;
L_08B1BA20:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(432), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B1BA20;
      }
      goto L_08B1BA3C;
    }
L_08B1BA3C:
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
L_08B1BB04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
L_08B1BB34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B1BB48u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 74u, 0x08AAC48Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1BB48u) goto L_08B1BB48;
    return;
L_08B1BB48:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25444));
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
L_08B1BB68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B1BB94u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 101u, 0x08AAC5E8u>(ctx, &aot_mem) && ctx.pc == 0x08B1BB94u) goto L_08B1BB94;
    return;
L_08B1BB94:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25444));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(1392));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[19] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08B1BBC4u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08B1B714;
L_08B1BBC4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[16] - ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 5u));
    ctx.gpr[4] = (ctx.gpr[4] >> 27u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(304));
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 5u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B1BC0C;
      }
      goto L_08B1BBF0;
    }
L_08B1BBF0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B1BBFCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 157u, 0x08805288u>(ctx, &aot_mem) && ctx.pc == 0x08B1BBFCu) goto L_08B1BBFC;
    return;
L_08B1BBFC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B1BBF0;
      }
      goto L_08B1BC0C;
    }
L_08B1BC0C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1BC2C:
    ctx.gpr[2] = (2226u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-17364));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1BC38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B1BC48u);
    // nop
    goto L_08B1BC2C;
L_08B1BC48:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1BC54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B1BC7Cu);
    ctx.gpr[20] = (0u | 0u);
    goto L_08B1BC2C;
L_08B1BC7C:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[20] = (0u | 1u);
        goto L_08B1BD04;
    }
    goto L_08B1BC84;
L_08B1BC84:
    ctx.gpr[31] = (0x08B1BC8Cu);
    ctx.gpr[19] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 139u, 0x08AACA60u>(ctx, &aot_mem) && ctx.pc == 0x08B1BC8Cu) goto L_08B1BC8C;
    return;
L_08B1BC8C:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[19] = (0u | 1u);
        goto L_08B1BCF4;
    }
    goto L_08B1BC94;
L_08B1BC94:
    ctx.gpr[31] = (0x08B1BC9Cu);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 666u, 0x08A7FAA4u>(ctx, &aot_mem) && ctx.pc == 0x08B1BC9Cu) goto L_08B1BC9C;
    return;
L_08B1BC9C:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[18] = (0u | 1u);
        goto L_08B1BCE4;
    }
    goto L_08B1BCA4;
L_08B1BCA4:
    ctx.gpr[31] = (0x08B1BCACu);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 400u, 0x0888E51Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1BCACu) goto L_08B1BCAC;
    return;
L_08B1BCAC:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08B1BCD4;
    }
    goto L_08B1BCB4;
L_08B1BCB4:
    ctx.gpr[31] = (0x08B1BCBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 295u, 0x08A9A6CCu>(ctx, &aot_mem) && ctx.pc == 0x08B1BCBCu) goto L_08B1BCBC;
    return;
L_08B1BCBC:
    ctx.gpr[4] = (ctx.gpr[2] ^ ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08B1BCD8;
      }
      goto L_08B1BCD0;
    }
L_08B1BCD0:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B1BCD4;
L_08B1BCD4:
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
    goto L_08B1BCD8;
L_08B1BCD8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08B1BCE8;
      }
      goto L_08B1BCE0;
    }
L_08B1BCE0:
    ctx.gpr[18] = (0u | 1u);
    goto L_08B1BCE4;
L_08B1BCE4:
    ctx.gpr[4] = (ctx.gpr[18] & 255u);
    goto L_08B1BCE8;
L_08B1BCE8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08B1BCF8;
      }
      goto L_08B1BCF0;
    }
L_08B1BCF0:
    ctx.gpr[19] = (0u | 1u);
    goto L_08B1BCF4;
L_08B1BCF4:
    ctx.gpr[4] = (ctx.gpr[19] & 255u);
    goto L_08B1BCF8;
L_08B1BCF8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1BD04;
      }
      goto L_08B1BD00;
    }
L_08B1BD00:
    ctx.gpr[20] = (0u | 1u);
    goto L_08B1BD04;
L_08B1BD04:
    ctx.gpr[2] = (ctx.gpr[20] & 255u);
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
L_08B1BD28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B1BD78;
      }
      goto L_08B1BD44;
    }
L_08B1BD44:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25636));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B1BD58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 425u, 0x08A9B6A8u>(ctx, &aot_mem) && ctx.pc == 0x08B1BD58u) goto L_08B1BD58;
    return;
L_08B1BD58:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B1BD64u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 161u, 0x08AACB80u>(ctx, &aot_mem) && ctx.pc == 0x08B1BD64u) goto L_08B1BD64;
    return;
L_08B1BD64:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1BD78;
      }
      goto L_08B1BD70;
    }
L_08B1BD70:
    ctx.gpr[31] = (0x08B1BD78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B1BD78u) goto L_08B1BD78;
    return;
L_08B1BD78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1BD8C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 4u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1BD94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (0u | 752u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B1BDB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1BDB8u) goto L_08B1BDB8;
    return;
L_08B1BDB8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B1BDD0;
      }
      goto L_08B1BDC4;
    }
L_08B1BDC4:
    ctx.gpr[31] = (0x08B1BDCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B1BB34;
L_08B1BDCC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08B1BDD0;
L_08B1BDD0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1BDE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B1BE0C;
      }
      goto L_08B1BDF0;
    }
L_08B1BDF0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B1BE0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B1BE0Cu) goto L_08B1BE0C;
    return;
L_08B1BE0C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1BE18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (0u | 752u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B1BE44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1BE44u) goto L_08B1BE44;
    return;
L_08B1BE44:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B1BE9C;
      }
      goto L_08B1BE50;
    }
L_08B1BE50:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B1BE5Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B1B728;
L_08B1BE5C:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28580));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[7] = (2226u << 16u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(544), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(560));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(560));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x08B1BE8Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-17660));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 115u, 0x08B6095Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1BE8Cu) goto L_08B1BE8C;
    return;
L_08B1BE8C:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25444));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08B1BE9C;
L_08B1BE9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1BEB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B1BEC4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 660u, 0x08A7FA3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1BEC4u) goto L_08B1BEC4;
    return;
L_08B1BEC4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1BED0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B1BEECu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 158u, 0x08AACB34u>(ctx, &aot_mem) && ctx.pc == 0x08B1BEECu) goto L_08B1BEEC;
    return;
L_08B1BEEC:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31008));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08B1BF04u);
    ctx.gpr[4] = (0u | 400u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B1BF04u) goto L_08B1BF04;
    return;
L_08B1BF04:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B1BF1C;
      }
      goto L_08B1BF10;
    }
L_08B1BF10:
    ctx.gpr[31] = (0x08B1BF18u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 73u, 0x08B1C6ACu>(ctx, &aot_mem) && ctx.pc == 0x08B1BF18u) goto L_08B1BF18;
    return;
L_08B1BF18:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08B1BF1C;
L_08B1BF1C:
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
L_08B1BF3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B1BF60u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 158u, 0x08AACB34u>(ctx, &aot_mem) && ctx.pc == 0x08B1BF60u) goto L_08B1BF60;
    return;
L_08B1BF60:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31008));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1BF80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 736u, 0x08ADEF00u>(ctx, &aot_mem) && ctx.pc == 0x08B1BF80u) goto L_08B1BF80;
    return;
L_08B1BF80:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08B1BF90u);
    ctx.gpr[4] = (0u | 400u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B1BF90u) goto L_08B1BF90;
    return;
L_08B1BF90:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08B1BFA8;
      }
      goto L_08B1BF9C;
    }
L_08B1BF9C:
    ctx.gpr[31] = (0x08B1BFA4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 73u, 0x08B1C6ACu>(ctx, &aot_mem) && ctx.pc == 0x08B1BFA4u) goto L_08B1BFA4;
    return;
L_08B1BFA4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08B1BFA8;
L_08B1BFA8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    ctx.gpr[31] = (0x08B1BFB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 2u, 0x08B1C024u>(ctx, &aot_mem) && ctx.pc == 0x08B1BFB4u) goto L_08B1BFB4;
    return;
L_08B1BFB4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (0u | 752u);
    ctx.gpr[31] = (0x08B1BFD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1BFD0u) goto L_08B1BFD0;
    return;
L_08B1BFD0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B1BFEC;
      }
      goto L_08B1BFDC;
    }
L_08B1BFDC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B1BFE8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B1BB68;
L_08B1BFE8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08B1BFEC;
L_08B1BFEC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B1BFFCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 456u, 0x08A9B9F4u>(ctx, &aot_mem) && ctx.pc == 0x08B1BFFCu) goto L_08B1BFFC;
    return;
L_08B1BFFC:
    ctx.gpr[31] = (0x08B1C004u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 562u, 0x0888F9A4u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0197(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0197_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_197(Runtime &runtime) {
    runtime.register_generated_unit(197u, 0x08B18000u, 16384u, &recomp_unit_0197, &recomp_unit_0197_entry);
    runtime.register_function(0x08B18000u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18010u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18018u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1801Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18034u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18058u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18060u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1806Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18088u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1809Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18110u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1811Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1812Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1813Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18140u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1814Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1815Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1816Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1817Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18188u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18198u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B181A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B181BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B181C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B181D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B181E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B181FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18204u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18210u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18218u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18224u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1822Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18230u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1824Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18268u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1827Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18288u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18294u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B182A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B182B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B182BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B182CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B182D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B182E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B182F4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18314u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18330u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1833Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18348u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18358u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18360u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18368u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18374u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18378u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1838Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183B4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18404u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18408u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18418u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18438u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18444u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18450u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18468u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18488u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18498u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B184A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B184B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B184B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B184C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B184D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B184D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B184ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18504u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18514u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18528u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18530u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1853Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18550u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1855Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18564u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18568u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18578u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1859Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B185A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B185BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B185C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B185D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B185D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B185E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B185ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B185F4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B185FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18608u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18610u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18618u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18624u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18630u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18638u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18654u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18658u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18674u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18690u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1869Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B186A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B186B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B186C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B186CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B186E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18700u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1870Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18718u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18720u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1872Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18734u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18754u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18774u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18794u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B187B4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B187BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B187DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B187FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18808u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1880Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18824u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18844u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1884Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18858u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1886Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18884u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1889Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B188A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B188B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B188C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B188D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B188E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B188F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18900u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1891Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1892Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1894Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18988u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18990u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1899Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189ACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189F4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A08u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A0Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A14u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A20u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A30u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A3Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A44u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A50u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A54u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A70u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18AACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18AB4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18AC0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18AC4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18AD0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18AE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B24u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B30u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B38u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B5Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B64u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B6Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B70u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B80u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B90u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B94u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B9Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18BA4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18BBCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18BC0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18BC4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18BF4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18BFCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C08u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C1Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C2Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C34u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C3Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C44u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C50u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C58u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C5Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C78u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CA0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CA8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CB4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CBCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CC8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CD0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CDCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CE4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CF8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D04u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D3Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D44u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D4Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D68u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D74u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D78u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D90u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DA0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DBCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DD8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DE4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DFCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E14u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E34u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E4Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E80u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E8Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E94u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18ECCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18ED8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EE8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EF8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F0Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F24u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F54u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F8Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F94u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FA0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FB0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FBCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FCCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FD4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FE4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19018u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19020u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1902Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1903Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19048u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19058u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19060u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19070u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1907Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190ACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19100u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19108u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19114u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19120u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19128u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19130u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1913Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19158u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19178u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19188u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1919Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B191B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B191BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B191F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1920Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19224u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1923Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1924Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19254u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19258u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1926Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19270u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19278u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19288u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19298u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B192B4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B192BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B192CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19334u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19350u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19358u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19370u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19384u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193B4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19400u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19408u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1941Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19430u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19444u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19458u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19464u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1946Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1947Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19488u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19494u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B194A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B194A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B194B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B194BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B194C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B194D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B194E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B194E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B194F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19504u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19518u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19524u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1952Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19540u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19554u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19568u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1957Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19588u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19590u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B195A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B195B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B195C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B195F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B195F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19600u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19614u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1961Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19624u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1962Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19634u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19648u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19650u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19668u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19680u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19688u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196F4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19704u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1970Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19718u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19728u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1973Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1974Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19754u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19768u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B197A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B197B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B197B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B197BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B197D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19834u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19850u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1986Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19878u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19880u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19888u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19890u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B198A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B198B4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B198B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B198C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B198C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B198DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B198FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1990Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1991Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19938u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19974u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19984u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19998u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B199B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B199C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B199C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B199F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A04u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A14u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A24u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A7Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A98u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19AB4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19ACCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19AD8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19AE4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19AECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B18u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B24u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B34u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B40u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B64u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B70u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B78u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19BD0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19BE8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19BF4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C08u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C20u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C40u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C48u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C58u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C64u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C90u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19CACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19CBCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19CE8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D08u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D1Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D28u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D40u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D50u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D58u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D5Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D74u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19DA0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19DB0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19DB8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19DC0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19DCCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19DE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19DE8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19DF4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19E0Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19E1Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19E24u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19E28u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19E40u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19E6Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19E7Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19E84u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19E8Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19E98u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19EACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19EB4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19EB8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19EC4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19ED0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19ED8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19F00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19F20u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19F30u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19F40u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19F50u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19F60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19F88u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19F98u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19FA8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19FB8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19FC8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19FDCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19FF4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A008u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A014u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A028u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A038u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A040u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A048u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A070u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A07Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A084u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A08Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A094u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A0A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A0ACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A0B4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A0BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A0C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A0CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A0D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A0E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A0ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A100u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A128u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A130u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A178u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A184u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A1D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A1ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A200u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A214u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A228u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A264u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A274u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A288u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A29Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A2B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A2C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A308u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A320u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A46Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A4F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A4F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A50Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A518u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A530u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A54Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A580u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A600u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A608u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A62Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A634u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A664u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A67Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A68Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A6A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A6B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A6D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A704u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A720u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A774u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A77Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A790u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7ACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A81Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A838u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A890u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A92Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A948u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A984u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A990u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A99Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA04u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA14u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA20u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA28u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA38u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA50u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA70u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA78u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA94u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAA0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAA8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAB8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAC0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAFCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB1Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB28u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB34u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB3Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB40u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB50u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB5Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB64u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB70u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB78u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB7Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB8Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB98u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ABA0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ABB0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ABB8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ABC0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ABC8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ABDCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ABE8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ABF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ABF4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC04u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC18u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC24u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC2Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC30u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC40u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC4Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC54u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC68u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC74u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC7Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC80u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC90u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC9Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ACA4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ACB0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ACB8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ACBCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ACCCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ACD8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ACE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ACF4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ACFCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AD0Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AD18u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AD30u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AD48u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AD58u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AD60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AD7Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AD90u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AD98u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ADA0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ADA8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ADB8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ADC0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ADDCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ADE8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ADF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AE00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AE08u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AE14u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AE1Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AE28u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AE5Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AE64u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AE74u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AE84u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AE98u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AEA0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AEB4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AEBCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AED4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AEECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AEFCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AF08u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AF10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AF14u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AF24u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AF30u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AF38u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AF44u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AF4Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AF50u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AF60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AF6Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AF74u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AF84u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AF94u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AF9Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AFA4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AFB0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AFBCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AFC4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AFC8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AFD8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AFE4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AFECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AFF8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B000u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B004u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B014u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B020u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B028u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B038u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B040u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B04Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B054u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B088u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B090u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0F4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B108u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B110u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B124u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B138u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B144u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B14Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B150u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B160u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B16Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B174u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B180u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B188u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B18Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B19Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B1A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B1B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B1C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B1CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B1DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B1E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B1ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B1FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B208u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B210u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B214u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B224u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B230u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B238u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B244u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B24Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B250u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B260u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B26Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B274u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B284u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B28Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B300u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B308u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B314u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B328u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B348u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B36Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B37Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B388u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B398u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B3A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B3B4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B3C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B3D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B3D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B3DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B3E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B444u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B450u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B45Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B468u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B470u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B47Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B48Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B494u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B4A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B4B4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B4BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B4DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B518u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B524u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B52Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B534u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B544u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B54Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B558u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B564u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B56Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B574u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B584u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B590u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B598u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B5A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B5B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B5B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B5C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B5D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B5E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B5E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B620u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B628u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B630u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B634u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B654u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B698u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B6A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B6A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B6B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B6B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B6C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B6C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B6D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B6E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B70Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B714u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B728u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B76Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B8CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B8E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B8F4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B910u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B91Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B938u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B944u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B960u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B96Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B988u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B994u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B9B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B9BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BA14u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BA20u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BA3Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BB04u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BB34u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BB48u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BB68u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BB94u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BBC4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BBF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BBFCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BC0Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BC2Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BC38u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BC48u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BC54u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BC7Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BC84u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BC8Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BC94u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BC9Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BCA4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BCACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BCB4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BCBCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BCD0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BCD4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BCD8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BCE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BCE4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BCE8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BCF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BCF4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BCF8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BD00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BD04u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BD28u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BD44u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BD58u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BD64u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BD70u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BD78u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BD8Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BD94u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BDB8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BDC4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BDCCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BDD0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BDE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BDF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BE0Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BE18u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BE44u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BE50u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BE5Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BE8Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BE9Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BEB0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BEC4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BED0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BEECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BF04u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BF10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BF18u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BF1Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BF3Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BF60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BF80u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BF90u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BF9Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BFA4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BFA8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BFB4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BFD0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BFDCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BFE8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BFECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BFFCu, &recomp_unit_0197, "recomp_unit_0197");
}
} // namespace psprecomp
