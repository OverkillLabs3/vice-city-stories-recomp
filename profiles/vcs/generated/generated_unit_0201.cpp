#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0201[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0,
    6, 0, 0, 0, 7, 0, 8, 0, 0, 9, 0, 10, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 14, 15, 0, 0, 0, 0, 0, 16,
    0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 20, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 31, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0,
    35, 0, 0, 0, 0, 0, 36, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 47, 48, 0, 0, 0, 49, 0, 50, 0, 51, 0,
    0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 64, 0, 65, 0, 66, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 70, 0, 71,
    0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0,
    0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 0,
    87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0,
    0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 101, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0,
    0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 133,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0,
    139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 150, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 157, 0, 158, 0, 0, 159, 0, 160, 0, 161, 0,
    162, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0,
    0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 196, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 201, 0,
    0, 202, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 208, 209,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0,
    0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0,
    222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 229, 0, 0,
    0, 0, 230, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 239, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0,
    0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 252, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 258, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262,
    0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    266, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 272, 273, 0,
    0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 280, 0,
    0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 283, 0, 284, 285, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 0, 289, 0, 290, 0, 291, 0, 0,
    0, 292, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0,
    0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 305, 306, 0, 0, 0, 0, 307, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 309, 0, 0, 310, 0, 311, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 320, 0, 0, 0, 0, 321, 0, 322, 0,
    0, 0, 0, 0, 323, 0, 324, 0, 325, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 0, 329, 0, 330, 0, 331, 0, 0, 0, 332, 0, 0, 0,
    333, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0,
    341, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0,
    0, 0, 0, 352, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0,
    358, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0,
    367, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 373, 374, 0,
    0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 0, 0,
    0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0,
    387, 0, 388, 0, 389, 0, 390, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0,
    0, 0, 0, 396, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 401, 0,
    0, 0, 402, 0, 0, 0, 0, 403, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0,
    0, 0, 0, 0, 409, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0,
    414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 420, 0,
    0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0,
    0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 431, 0, 432, 0, 0,
    0, 433, 0, 434, 0, 435, 0, 0, 436, 0, 437, 0, 438, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0,
    0, 0, 441, 0, 442, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 447, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 450, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    453, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 457, 458, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 461, 0, 462, 0, 0, 0,
    0, 0, 463, 0, 0, 464, 0, 465, 0, 466, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470,
    0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 477, 0, 0, 0, 0,
    0, 0, 478, 0, 479, 480, 0, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 484, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 488, 489, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0,
    0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 0, 0, 494, 495, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497,
    0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    504, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 521, 522, 0, 0, 0, 0, 0, 0, 523, 0, 524, 0,
    0, 0, 0, 0, 0, 0, 525, 0, 0, 526, 0, 0, 0, 0, 0, 527, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 530, 0,
    0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0, 536, 0, 537, 538,
    0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0,
    0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 549,
    550, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 554, 0, 0, 0, 0, 0, 555, 556, 0, 0,
    0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 571, 0, 0, 572, 0, 0, 0, 573, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0,
    0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 0, 0, 582, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 586, 0, 587, 0, 0, 0, 588,
    0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 0,
    0, 594, 0, 0, 0, 595, 0, 0, 596, 0, 597, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 600, 0, 0, 601, 0, 0, 0, 602, 0, 603, 0, 0, 604, 0, 0, 605, 0, 606, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0,
    0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 612, 0, 0, 613, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 627, 0, 628, 0, 629, 630,
    0, 0, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 634, 0, 0, 0, 0, 0, 635, 636, 0, 0, 0, 0, 0,
    0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0, 641, 0, 642, 643, 0, 0, 0, 0, 0,
    0, 644, 0, 645, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 648, 649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 651, 0, 0, 652, 0, 0, 0, 653, 0, 654, 0, 0, 0, 655, 0, 656, 657, 0, 0, 0, 0, 0, 0, 0, 0, 658,
    0, 659, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 661, 0, 0, 0, 0, 0, 662, 663, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 669, 0, 670, 671, 0, 0, 0,
    0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 676, 677, 0, 0, 0, 0, 0, 0,
    678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 683,
    0, 684, 685, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 689, 0, 0, 0, 0, 0, 690, 691,
    0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 699, 0, 0,
    700, 0, 0, 701, 0, 702, 0, 0, 0, 0, 0, 703, 0, 704, 0, 0, 705, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707,
    0, 0, 708, 0, 0, 709, 0, 0, 710, 0, 711, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 714,
    0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0, 0, 717, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 723, 0,
    0, 724, 0, 725, 0, 0, 0, 0, 726, 0, 727, 0, 0, 0, 0, 728, 0, 729, 730, 0, 731, 0, 0, 732, 0, 0, 733, 0, 0, 0, 734, 0,
    0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 737, 0, 738, 0, 739, 0, 0, 0, 740, 0, 741, 742, 0, 0, 743, 0, 0, 0, 744, 0,
    0, 745, 0, 0, 746, 0, 0, 0, 0, 0, 747, 0, 748, 0, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 751, 0, 0, 0, 0, 752, 0,
    0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 759, 0, 0, 0, 0, 0, 0, 760, 0, 0, 761, 0, 762, 0, 0, 0,
    763, 0, 764, 0, 0, 0, 0, 765, 0, 766, 767, 0, 768, 0, 0, 769, 0, 770, 0, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0, 0, 0, 0,
    0, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0,
    0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 779, 0, 0, 0, 780, 0, 781, 0, 0, 782, 0, 783, 0, 0,
    784, 785, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 787, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 789, 0, 0, 0, 0, 0, 790, 791, 0,
    0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 795,
    0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 797, 0, 0, 798, 0, 799, 800, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 802,
    0, 803, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 806, 807, 0, 808, 0, 0, 0, 0, 0, 0, 0, 809,
    0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    813, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 817, 0, 0, 0, 818, 0, 819, 0,
    820, 0, 821, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 0, 823, 0, 0, 824, 0, 0, 825, 0, 826, 0, 0, 827, 0, 828, 0, 829,
};
void recomp_unit_0201_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B28000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0201[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B28000;
    case 2u: goto L_08B28018;
    case 3u: goto L_08B28030;
    case 4u: goto L_08B28064;
    case 5u: goto L_08B28070;
    case 6u: goto L_08B28080;
    case 7u: goto L_08B28090;
    case 8u: goto L_08B28098;
    case 9u: goto L_08B280A4;
    case 10u: goto L_08B280AC;
    case 11u: goto L_08B280BC;
    case 12u: goto L_08B280C4;
    case 13u: goto L_08B280D0;
    case 14u: goto L_08B280E0;
    case 15u: goto L_08B280E4;
    case 16u: goto L_08B280FC;
    case 17u: goto L_08B28104;
    case 18u: goto L_08B28124;
    case 19u: goto L_08B28130;
    case 20u: goto L_08B28148;
    case 21u: goto L_08B2814C;
    case 22u: goto L_08B2816C;
    case 23u: goto L_08B28194;
    case 24u: goto L_08B281A0;
    case 25u: goto L_08B281B0;
    case 26u: goto L_08B281C8;
    case 27u: goto L_08B281F8;
    case 28u: goto L_08B28204;
    case 29u: goto L_08B28224;
    case 30u: goto L_08B2822C;
    case 31u: goto L_08B28230;
    case 32u: goto L_08B2824C;
    case 33u: goto L_08B28254;
    case 34u: goto L_08B28274;
    case 35u: goto L_08B28280;
    case 36u: goto L_08B28298;
    case 37u: goto L_08B2829C;
    case 38u: goto L_08B282B8;
    case 39u: goto L_08B282C8;
    case 40u: goto L_08B282D8;
    case 41u: goto L_08B28304;
    case 42u: goto L_08B28310;
    case 43u: goto L_08B28328;
    case 44u: goto L_08B28334;
    case 45u: goto L_08B28340;
    case 46u: goto L_08B28348;
    case 47u: goto L_08B28354;
    case 48u: goto L_08B28358;
    case 49u: goto L_08B28368;
    case 50u: goto L_08B28370;
    case 51u: goto L_08B28378;
    case 52u: goto L_08B28384;
    case 53u: goto L_08B2838C;
    case 54u: goto L_08B28394;
    case 55u: goto L_08B283B4;
    case 56u: goto L_08B283C0;
    case 57u: goto L_08B283C8;
    case 58u: goto L_08B283D0;
    case 59u: goto L_08B283D8;
    case 60u: goto L_08B283E0;
    case 61u: goto L_08B28400;
    case 62u: goto L_08B2841C;
    case 63u: goto L_08B28424;
    case 64u: goto L_08B28430;
    case 65u: goto L_08B28438;
    case 66u: goto L_08B28440;
    case 67u: goto L_08B28458;
    case 68u: goto L_08B28460;
    case 69u: goto L_08B2846C;
    case 70u: goto L_08B28474;
    case 71u: goto L_08B2847C;
    case 72u: goto L_08B28494;
    case 73u: goto L_08B284B0;
    case 74u: goto L_08B284E0;
    case 75u: goto L_08B284EC;
    case 76u: goto L_08B284F8;
    case 77u: goto L_08B28504;
    case 78u: goto L_08B28514;
    case 79u: goto L_08B28520;
    case 80u: goto L_08B2852C;
    case 81u: goto L_08B28538;
    case 82u: goto L_08B28540;
    case 83u: goto L_08B28548;
    case 84u: goto L_08B28560;
    case 85u: goto L_08B28568;
    case 86u: goto L_08B28570;
    case 87u: goto L_08B28580;
    case 88u: goto L_08B2858C;
    case 89u: goto L_08B2859C;
    case 90u: goto L_08B285BC;
    case 91u: goto L_08B285EC;
    case 92u: goto L_08B285F8;
    case 93u: goto L_08B28604;
    case 94u: goto L_08B28618;
    case 95u: goto L_08B28624;
    case 96u: goto L_08B2863C;
    case 97u: goto L_08B2864C;
    case 98u: goto L_08B28690;
    case 99u: goto L_08B286A8;
    case 100u: goto L_08B286C8;
    case 101u: goto L_08B286CC;
    case 102u: goto L_08B286D4;
    case 103u: goto L_08B286E4;
    case 104u: goto L_08B28704;
    case 105u: goto L_08B2872C;
    case 106u: goto L_08B28738;
    case 107u: goto L_08B28744;
    case 108u: goto L_08B28750;
    case 109u: goto L_08B2875C;
    case 110u: goto L_08B28778;
    case 111u: goto L_08B28790;
    case 112u: goto L_08B287B8;
    case 113u: goto L_08B287C4;
    case 114u: goto L_08B287D0;
    case 115u: goto L_08B287D8;
    case 116u: goto L_08B287F4;
    case 117u: goto L_08B2880C;
    case 118u: goto L_08B28834;
    case 119u: goto L_08B28840;
    case 120u: goto L_08B28850;
    case 121u: goto L_08B28860;
    case 122u: goto L_08B28878;
    case 123u: goto L_08B28898;
    case 124u: goto L_08B288A4;
    case 125u: goto L_08B288AC;
    case 126u: goto L_08B288C0;
    case 127u: goto L_08B288E8;
    case 128u: goto L_08B28914;
    case 129u: goto L_08B2892C;
    case 130u: goto L_08B2894C;
    case 131u: goto L_08B28958;
    case 132u: goto L_08B28968;
    case 133u: goto L_08B2897C;
    case 134u: goto L_08B289B4;
    case 135u: goto L_08B289C0;
    case 136u: goto L_08B289D0;
    case 137u: goto L_08B289DC;
    case 138u: goto L_08B289F4;
    case 139u: goto L_08B28A00;
    case 140u: goto L_08B28A18;
    case 141u: goto L_08B28A28;
    case 142u: goto L_08B28A30;
    case 143u: goto L_08B28A38;
    case 144u: goto L_08B28A44;
    case 145u: goto L_08B28A5C;
    case 146u: goto L_08B28A68;
    case 147u: goto L_08B28A90;
    case 148u: goto L_08B28AA8;
    case 149u: goto L_08B28AC8;
    case 150u: goto L_08B28ACC;
    case 151u: goto L_08B28AD4;
    case 152u: goto L_08B28AE4;
    case 153u: goto L_08B28B0C;
    case 154u: goto L_08B28B34;
    case 155u: goto L_08B28B40;
    case 156u: goto L_08B28B4C;
    case 157u: goto L_08B28B54;
    case 158u: goto L_08B28B5C;
    case 159u: goto L_08B28B68;
    case 160u: goto L_08B28B70;
    case 161u: goto L_08B28B78;
    case 162u: goto L_08B28B80;
    case 163u: goto L_08B28B98;
    case 164u: goto L_08B28BA0;
    case 165u: goto L_08B28BBC;
    case 166u: goto L_08B28BC4;
    case 167u: goto L_08B28BD0;
    case 168u: goto L_08B28BE8;
    case 169u: goto L_08B28C18;
    case 170u: goto L_08B28C24;
    case 171u: goto L_08B28C44;
    case 172u: goto L_08B28C60;
    case 173u: goto L_08B28C88;
    case 174u: goto L_08B28C94;
    case 175u: goto L_08B28CA4;
    case 176u: goto L_08B28CBC;
    case 177u: goto L_08B28CC8;
    case 178u: goto L_08B28CEC;
    case 179u: goto L_08B28D0C;
    case 180u: goto L_08B28D18;
    case 181u: goto L_08B28D34;
    case 182u: goto L_08B28D54;
    case 183u: goto L_08B28D5C;
    case 184u: goto L_08B28D64;
    case 185u: goto L_08B28D78;
    case 186u: goto L_08B28DA0;
    case 187u: goto L_08B28DAC;
    case 188u: goto L_08B28DB8;
    case 189u: goto L_08B28DD0;
    case 190u: goto L_08B28DF8;
    case 191u: goto L_08B28E04;
    case 192u: goto L_08B28E38;
    case 193u: goto L_08B28E60;
    case 194u: goto L_08B28E6C;
    case 195u: goto L_08B28E88;
    case 196u: goto L_08B28E98;
    case 197u: goto L_08B28E9C;
    case 198u: goto L_08B28EB4;
    case 199u: goto L_08B28ED8;
    case 200u: goto L_08B28EE4;
    case 201u: goto L_08B28EF8;
    case 202u: goto L_08B28F04;
    case 203u: goto L_08B28F08;
    case 204u: goto L_08B28F2C;
    case 205u: goto L_08B28F34;
    case 206u: goto L_08B28F54;
    case 207u: goto L_08B28F60;
    case 208u: goto L_08B28F78;
    case 209u: goto L_08B28F7C;
    case 210u: goto L_08B28F90;
    case 211u: goto L_08B28FB8;
    case 212u: goto L_08B28FC4;
    case 213u: goto L_08B28FD4;
    case 214u: goto L_08B28FE4;
    case 215u: goto L_08B28FF4;
    case 216u: goto L_08B2900C;
    case 217u: goto L_08B29034;
    case 218u: goto L_08B29040;
    case 219u: goto L_08B29050;
    case 220u: goto L_08B29064;
    case 221u: goto L_08B29078;
    case 222u: goto L_08B29080;
    case 223u: goto L_08B29094;
    case 224u: goto L_08B290A8;
    case 225u: goto L_08B290B0;
    case 226u: goto L_08B290C4;
    case 227u: goto L_08B290D8;
    case 228u: goto L_08B290E0;
    case 229u: goto L_08B290F4;
    case 230u: goto L_08B29108;
    case 231u: goto L_08B29110;
    case 232u: goto L_08B29120;
    case 233u: goto L_08B29130;
    case 234u: goto L_08B29148;
    case 235u: goto L_08B29170;
    case 236u: goto L_08B2917C;
    case 237u: goto L_08B2922C;
    case 238u: goto L_08B29234;
    case 239u: goto L_08B2923C;
    case 240u: goto L_08B29240;
    case 241u: goto L_08B29264;
    case 242u: goto L_08B2926C;
    case 243u: goto L_08B29284;
    case 244u: goto L_08B29298;
    case 245u: goto L_08B292B8;
    case 246u: goto L_08B292BC;
    case 247u: goto L_08B292D4;
    case 248u: goto L_08B29304;
    case 249u: goto L_08B29310;
    case 250u: goto L_08B2932C;
    case 251u: goto L_08B29340;
    case 252u: goto L_08B29348;
    case 253u: goto L_08B2934C;
    case 254u: goto L_08B29370;
    case 255u: goto L_08B29378;
    case 256u: goto L_08B29398;
    case 257u: goto L_08B293A4;
    case 258u: goto L_08B293BC;
    case 259u: goto L_08B293C0;
    case 260u: goto L_08B293CC;
    case 261u: goto L_08B293F0;
    case 262u: goto L_08B293FC;
    case 263u: goto L_08B29418;
    case 264u: goto L_08B29448;
    case 265u: goto L_08B29454;
    case 266u: goto L_08B29480;
    case 267u: goto L_08B29484;
    case 268u: goto L_08B294A8;
    case 269u: goto L_08B294B0;
    case 270u: goto L_08B294D0;
    case 271u: goto L_08B294DC;
    case 272u: goto L_08B294F4;
    case 273u: goto L_08B294F8;
    case 274u: goto L_08B29514;
    case 275u: goto L_08B2957C;
    case 276u: goto L_08B295A0;
    case 277u: goto L_08B295D8;
    case 278u: goto L_08B295E4;
    case 279u: goto L_08B295F0;
    case 280u: goto L_08B295F8;
    case 281u: goto L_08B2960C;
    case 282u: goto L_08B29614;
    case 283u: goto L_08B29628;
    case 284u: goto L_08B29630;
    case 285u: goto L_08B29634;
    case 286u: goto L_08B2963C;
    case 287u: goto L_08B29648;
    case 288u: goto L_08B29654;
    case 289u: goto L_08B29664;
    case 290u: goto L_08B2966C;
    case 291u: goto L_08B29674;
    case 292u: goto L_08B29684;
    case 293u: goto L_08B29694;
    case 294u: goto L_08B296A0;
    case 295u: goto L_08B296B8;
    case 296u: goto L_08B296C0;
    case 297u: goto L_08B296D8;
    case 298u: goto L_08B296E0;
    case 299u: goto L_08B296F8;
    case 300u: goto L_08B29708;
    case 301u: goto L_08B29714;
    case 302u: goto L_08B29728;
    case 303u: goto L_08B29740;
    case 304u: goto L_08B29754;
    case 305u: goto L_08B2975C;
    case 306u: goto L_08B29760;
    case 307u: goto L_08B29774;
    case 308u: goto L_08B297C0;
    case 309u: goto L_08B29810;
    case 310u: goto L_08B2981C;
    case 311u: goto L_08B29824;
    case 312u: goto L_08B29830;
    case 313u: goto L_08B29844;
    case 314u: goto L_08B29850;
    case 315u: goto L_08B2986C;
    case 316u: goto L_08B2987C;
    case 317u: goto L_08B298BC;
    case 318u: goto L_08B298C8;
    case 319u: goto L_08B298D4;
    case 320u: goto L_08B298DC;
    case 321u: goto L_08B298F0;
    case 322u: goto L_08B298F8;
    case 323u: goto L_08B29910;
    case 324u: goto L_08B29918;
    case 325u: goto L_08B29920;
    case 326u: goto L_08B29928;
    case 327u: goto L_08B29934;
    case 328u: goto L_08B29940;
    case 329u: goto L_08B29950;
    case 330u: goto L_08B29958;
    case 331u: goto L_08B29960;
    case 332u: goto L_08B29970;
    case 333u: goto L_08B29980;
    case 334u: goto L_08B2998C;
    case 335u: goto L_08B299A4;
    case 336u: goto L_08B299AC;
    case 337u: goto L_08B299BC;
    case 338u: goto L_08B299C8;
    case 339u: goto L_08B299E8;
    case 340u: goto L_08B299F0;
    case 341u: goto L_08B29A00;
    case 342u: goto L_08B29A10;
    case 343u: goto L_08B29A1C;
    case 344u: goto L_08B29A30;
    case 345u: goto L_08B29A50;
    case 346u: goto L_08B29A64;
    case 347u: goto L_08B29A6C;
    case 348u: goto L_08B29A80;
    case 349u: goto L_08B29AC0;
    case 350u: goto L_08B29AE8;
    case 351u: goto L_08B29AF4;
    case 352u: goto L_08B29B0C;
    case 353u: goto L_08B29B10;
    case 354u: goto L_08B29B34;
    case 355u: goto L_08B29B3C;
    case 356u: goto L_08B29B5C;
    case 357u: goto L_08B29B68;
    case 358u: goto L_08B29B80;
    case 359u: goto L_08B29B84;
    case 360u: goto L_08B29B9C;
    case 361u: goto L_08B29BC4;
    case 362u: goto L_08B29BD0;
    case 363u: goto L_08B29C0C;
    case 364u: goto L_08B29C30;
    case 365u: goto L_08B29C60;
    case 366u: goto L_08B29C6C;
    case 367u: goto L_08B29C80;
    case 368u: goto L_08B29C84;
    case 369u: goto L_08B29CA8;
    case 370u: goto L_08B29CB0;
    case 371u: goto L_08B29CD0;
    case 372u: goto L_08B29CDC;
    case 373u: goto L_08B29CF4;
    case 374u: goto L_08B29CF8;
    case 375u: goto L_08B29D14;
    case 376u: goto L_08B29D3C;
    case 377u: goto L_08B29D48;
    case 378u: goto L_08B29D58;
    case 379u: goto L_08B29D64;
    case 380u: goto L_08B29D70;
    case 381u: goto L_08B29D88;
    case 382u: goto L_08B29DB8;
    case 383u: goto L_08B29DC4;
    case 384u: goto L_08B29DD4;
    case 385u: goto L_08B29DE4;
    case 386u: goto L_08B29DF0;
    case 387u: goto L_08B29E00;
    case 388u: goto L_08B29E08;
    case 389u: goto L_08B29E10;
    case 390u: goto L_08B29E18;
    case 391u: goto L_08B29E1C;
    case 392u: goto L_08B29E40;
    case 393u: goto L_08B29E48;
    case 394u: goto L_08B29E68;
    case 395u: goto L_08B29E74;
    case 396u: goto L_08B29E8C;
    case 397u: goto L_08B29E90;
    case 398u: goto L_08B29EAC;
    case 399u: goto L_08B29EDC;
    case 400u: goto L_08B29EE8;
    case 401u: goto L_08B29EF8;
    case 402u: goto L_08B29F08;
    case 403u: goto L_08B29F1C;
    case 404u: goto L_08B29F20;
    case 405u: goto L_08B29F44;
    case 406u: goto L_08B29F4C;
    case 407u: goto L_08B29F6C;
    case 408u: goto L_08B29F78;
    case 409u: goto L_08B29F90;
    case 410u: goto L_08B29F94;
    case 411u: goto L_08B29FB0;
    case 412u: goto L_08B29FD0;
    case 413u: goto L_08B29FDC;
    case 414u: goto L_08B2A000;
    case 415u: goto L_08B2A014;
    case 416u: goto L_08B2A03C;
    case 417u: goto L_08B2A048;
    case 418u: goto L_08B2A058;
    case 419u: goto L_08B2A068;
    case 420u: goto L_08B2A078;
    case 421u: goto L_08B2A090;
    case 422u: goto L_08B2A0B8;
    case 423u: goto L_08B2A0C4;
    case 424u: goto L_08B2A0E4;
    case 425u: goto L_08B2A0F8;
    case 426u: goto L_08B2A108;
    case 427u: goto L_08B2A120;
    case 428u: goto L_08B2A14C;
    case 429u: goto L_08B2A158;
    case 430u: goto L_08B2A164;
    case 431u: goto L_08B2A16C;
    case 432u: goto L_08B2A174;
    case 433u: goto L_08B2A184;
    case 434u: goto L_08B2A18C;
    case 435u: goto L_08B2A194;
    case 436u: goto L_08B2A1A0;
    case 437u: goto L_08B2A1A8;
    case 438u: goto L_08B2A1B0;
    case 439u: goto L_08B2A1BC;
    case 440u: goto L_08B2A1F0;
    case 441u: goto L_08B2A208;
    case 442u: goto L_08B2A210;
    case 443u: goto L_08B2A218;
    case 444u: goto L_08B2A224;
    case 445u: goto L_08B2A240;
    case 446u: goto L_08B2A25C;
    case 447u: goto L_08B2A284;
    case 448u: goto L_08B2A290;
    case 449u: goto L_08B2A2A8;
    case 450u: goto L_08B2A2B4;
    case 451u: goto L_08B2A2B8;
    case 452u: goto L_08B2A2D0;
    case 453u: goto L_08B2A300;
    case 454u: goto L_08B2A30C;
    case 455u: goto L_08B2A324;
    case 456u: goto L_08B2A330;
    case 457u: goto L_08B2A338;
    case 458u: goto L_08B2A33C;
    case 459u: goto L_08B2A354;
    case 460u: goto L_08B2A360;
    case 461u: goto L_08B2A368;
    case 462u: goto L_08B2A370;
    case 463u: goto L_08B2A388;
    case 464u: goto L_08B2A394;
    case 465u: goto L_08B2A39C;
    case 466u: goto L_08B2A3A4;
    case 467u: goto L_08B2A3AC;
    case 468u: goto L_08B2A3B4;
    case 469u: goto L_08B2A3D0;
    case 470u: goto L_08B2A3FC;
    case 471u: goto L_08B2A408;
    case 472u: goto L_08B2A42C;
    case 473u: goto L_08B2A434;
    case 474u: goto L_08B2A43C;
    case 475u: goto L_08B2A45C;
    case 476u: goto L_08B2A464;
    case 477u: goto L_08B2A46C;
    case 478u: goto L_08B2A488;
    case 479u: goto L_08B2A490;
    case 480u: goto L_08B2A494;
    case 481u: goto L_08B2A4A4;
    case 482u: goto L_08B2A4AC;
    case 483u: goto L_08B2A4CC;
    case 484u: goto L_08B2A504;
    case 485u: goto L_08B2A510;
    case 486u: goto L_08B2A520;
    case 487u: goto L_08B2A534;
    case 488u: goto L_08B2A53C;
    case 489u: goto L_08B2A540;
    case 490u: goto L_08B2A564;
    case 491u: goto L_08B2A56C;
    case 492u: goto L_08B2A58C;
    case 493u: goto L_08B2A598;
    case 494u: goto L_08B2A5B0;
    case 495u: goto L_08B2A5B4;
    case 496u: goto L_08B2A5D4;
    case 497u: goto L_08B2A5FC;
    case 498u: goto L_08B2A608;
    case 499u: goto L_08B2A618;
    case 500u: goto L_08B2A62C;
    case 501u: goto L_08B2A638;
    case 502u: goto L_08B2A640;
    case 503u: goto L_08B2A658;
    case 504u: goto L_08B2A680;
    case 505u: goto L_08B2A68C;
    case 506u: goto L_08B2A6A0;
    case 507u: goto L_08B2A6AC;
    case 508u: goto L_08B2A6C0;
    case 509u: goto L_08B2A6C8;
    case 510u: goto L_08B2A6DC;
    case 511u: goto L_08B2A6F4;
    case 512u: goto L_08B2A71C;
    case 513u: goto L_08B2A728;
    case 514u: goto L_08B2A738;
    case 515u: goto L_08B2A748;
    case 516u: goto L_08B2A758;
    case 517u: goto L_08B2A770;
    case 518u: goto L_08B2A798;
    case 519u: goto L_08B2A7A4;
    case 520u: goto L_08B2A7C8;
    case 521u: goto L_08B2A7D0;
    case 522u: goto L_08B2A7D4;
    case 523u: goto L_08B2A7F0;
    case 524u: goto L_08B2A7F8;
    case 525u: goto L_08B2A818;
    case 526u: goto L_08B2A824;
    case 527u: goto L_08B2A83C;
    case 528u: goto L_08B2A840;
    case 529u: goto L_08B2A858;
    case 530u: goto L_08B2A878;
    case 531u: goto L_08B2A888;
    case 532u: goto L_08B2A89C;
    case 533u: goto L_08B2A8D0;
    case 534u: goto L_08B2A8DC;
    case 535u: goto L_08B2A8E8;
    case 536u: goto L_08B2A8F0;
    case 537u: goto L_08B2A8F8;
    case 538u: goto L_08B2A8FC;
    case 539u: goto L_08B2A908;
    case 540u: goto L_08B2A91C;
    case 541u: goto L_08B2A93C;
    case 542u: goto L_08B2A95C;
    case 543u: goto L_08B2A978;
    case 544u: goto L_08B2A998;
    case 545u: goto L_08B2A9B4;
    case 546u: goto L_08B2A9DC;
    case 547u: goto L_08B2A9E8;
    case 548u: goto L_08B2A9F4;
    case 549u: goto L_08B2A9FC;
    case 550u: goto L_08B2AA00;
    case 551u: goto L_08B2AA24;
    case 552u: goto L_08B2AA2C;
    case 553u: goto L_08B2AA4C;
    case 554u: goto L_08B2AA58;
    case 555u: goto L_08B2AA70;
    case 556u: goto L_08B2AA74;
    case 557u: goto L_08B2AA8C;
    case 558u: goto L_08B2AAB4;
    case 559u: goto L_08B2AAFC;
    case 560u: goto L_08B2AB24;
    case 561u: goto L_08B2AB70;
    case 562u: goto L_08B2AB9C;
    case 563u: goto L_08B2ABA8;
    case 564u: goto L_08B2ABB8;
    case 565u: goto L_08B2ABCC;
    case 566u: goto L_08B2ABDC;
    case 567u: goto L_08B2ABF8;
    case 568u: goto L_08B2AC20;
    case 569u: goto L_08B2AC2C;
    case 570u: goto L_08B2AC5C;
    case 571u: goto L_08B2AC84;
    case 572u: goto L_08B2AC90;
    case 573u: goto L_08B2ACA0;
    case 574u: goto L_08B2ACA8;
    case 575u: goto L_08B2ACCC;
    case 576u: goto L_08B2ACF0;
    case 577u: goto L_08B2AD08;
    case 578u: goto L_08B2AD30;
    case 579u: goto L_08B2AD3C;
    case 580u: goto L_08B2AD50;
    case 581u: goto L_08B2AD58;
    case 582u: goto L_08B2AD70;
    case 583u: goto L_08B2AD98;
    case 584u: goto L_08B2ADCC;
    case 585u: goto L_08B2ADD4;
    case 586u: goto L_08B2ADE4;
    case 587u: goto L_08B2ADEC;
    case 588u: goto L_08B2ADFC;
    case 589u: goto L_08B2AE08;
    case 590u: goto L_08B2AE28;
    case 591u: goto L_08B2AE40;
    case 592u: goto L_08B2AE68;
    case 593u: goto L_08B2AE74;
    case 594u: goto L_08B2AE84;
    case 595u: goto L_08B2AE94;
    case 596u: goto L_08B2AEA0;
    case 597u: goto L_08B2AEA8;
    case 598u: goto L_08B2AEB0;
    case 599u: goto L_08B2AEC8;
    case 600u: goto L_08B2AF04;
    case 601u: goto L_08B2AF10;
    case 602u: goto L_08B2AF20;
    case 603u: goto L_08B2AF28;
    case 604u: goto L_08B2AF34;
    case 605u: goto L_08B2AF40;
    case 606u: goto L_08B2AF48;
    case 607u: goto L_08B2AF50;
    case 608u: goto L_08B2AF60;
    case 609u: goto L_08B2AF84;
    case 610u: goto L_08B2AFAC;
    case 611u: goto L_08B2AFB8;
    case 612u: goto L_08B2AFC8;
    case 613u: goto L_08B2AFD4;
    case 614u: goto L_08B2AFE0;
    case 615u: goto L_08B2AFF8;
    case 616u: goto L_08B2B020;
    case 617u: goto L_08B2B02C;
    case 618u: goto L_08B2B03C;
    case 619u: goto L_08B2B04C;
    case 620u: goto L_08B2B054;
    case 621u: goto L_08B2B06C;
    case 622u: goto L_08B2B09C;
    case 623u: goto L_08B2B0A8;
    case 624u: goto L_08B2B0B8;
    case 625u: goto L_08B2B0CC;
    case 626u: goto L_08B2B0DC;
    case 627u: goto L_08B2B0E8;
    case 628u: goto L_08B2B0F0;
    case 629u: goto L_08B2B0F8;
    case 630u: goto L_08B2B0FC;
    case 631u: goto L_08B2B118;
    case 632u: goto L_08B2B120;
    case 633u: goto L_08B2B140;
    case 634u: goto L_08B2B14C;
    case 635u: goto L_08B2B164;
    case 636u: goto L_08B2B168;
    case 637u: goto L_08B2B184;
    case 638u: goto L_08B2B1AC;
    case 639u: goto L_08B2B1B8;
    case 640u: goto L_08B2B1CC;
    case 641u: goto L_08B2B1DC;
    case 642u: goto L_08B2B1E4;
    case 643u: goto L_08B2B1E8;
    case 644u: goto L_08B2B204;
    case 645u: goto L_08B2B20C;
    case 646u: goto L_08B2B22C;
    case 647u: goto L_08B2B238;
    case 648u: goto L_08B2B250;
    case 649u: goto L_08B2B254;
    case 650u: goto L_08B2B26C;
    case 651u: goto L_08B2B298;
    case 652u: goto L_08B2B2A4;
    case 653u: goto L_08B2B2B4;
    case 654u: goto L_08B2B2BC;
    case 655u: goto L_08B2B2CC;
    case 656u: goto L_08B2B2D4;
    case 657u: goto L_08B2B2D8;
    case 658u: goto L_08B2B2FC;
    case 659u: goto L_08B2B304;
    case 660u: goto L_08B2B324;
    case 661u: goto L_08B2B330;
    case 662u: goto L_08B2B348;
    case 663u: goto L_08B2B34C;
    case 664u: goto L_08B2B368;
    case 665u: goto L_08B2B398;
    case 666u: goto L_08B2B3A4;
    case 667u: goto L_08B2B3B4;
    case 668u: goto L_08B2B3C8;
    case 669u: goto L_08B2B3E4;
    case 670u: goto L_08B2B3EC;
    case 671u: goto L_08B2B3F0;
    case 672u: goto L_08B2B414;
    case 673u: goto L_08B2B41C;
    case 674u: goto L_08B2B43C;
    case 675u: goto L_08B2B448;
    case 676u: goto L_08B2B460;
    case 677u: goto L_08B2B464;
    case 678u: goto L_08B2B480;
    case 679u: goto L_08B2B4B0;
    case 680u: goto L_08B2B4BC;
    case 681u: goto L_08B2B4CC;
    case 682u: goto L_08B2B4E0;
    case 683u: goto L_08B2B4FC;
    case 684u: goto L_08B2B504;
    case 685u: goto L_08B2B508;
    case 686u: goto L_08B2B52C;
    case 687u: goto L_08B2B534;
    case 688u: goto L_08B2B554;
    case 689u: goto L_08B2B560;
    case 690u: goto L_08B2B578;
    case 691u: goto L_08B2B57C;
    case 692u: goto L_08B2B598;
    case 693u: goto L_08B2B5C0;
    case 694u: goto L_08B2B5CC;
    case 695u: goto L_08B2B5DC;
    case 696u: goto L_08B2B630;
    case 697u: goto L_08B2B648;
    case 698u: goto L_08B2B668;
    case 699u: goto L_08B2B674;
    case 700u: goto L_08B2B680;
    case 701u: goto L_08B2B68C;
    case 702u: goto L_08B2B694;
    case 703u: goto L_08B2B6AC;
    case 704u: goto L_08B2B6B4;
    case 705u: goto L_08B2B6C0;
    case 706u: goto L_08B2B6D4;
    case 707u: goto L_08B2B6FC;
    case 708u: goto L_08B2B708;
    case 709u: goto L_08B2B714;
    case 710u: goto L_08B2B720;
    case 711u: goto L_08B2B728;
    case 712u: goto L_08B2B730;
    case 713u: goto L_08B2B764;
    case 714u: goto L_08B2B77C;
    case 715u: goto L_08B2B79C;
    case 716u: goto L_08B2B7A8;
    case 717u: goto L_08B2B7B4;
    case 718u: goto L_08B2B7BC;
    case 719u: goto L_08B2B7D0;
    case 720u: goto L_08B2B824;
    case 721u: goto L_08B2B838;
    case 722u: goto L_08B2B86C;
    case 723u: goto L_08B2B878;
    case 724u: goto L_08B2B884;
    case 725u: goto L_08B2B88C;
    case 726u: goto L_08B2B8A0;
    case 727u: goto L_08B2B8A8;
    case 728u: goto L_08B2B8BC;
    case 729u: goto L_08B2B8C4;
    case 730u: goto L_08B2B8C8;
    case 731u: goto L_08B2B8D0;
    case 732u: goto L_08B2B8DC;
    case 733u: goto L_08B2B8E8;
    case 734u: goto L_08B2B8F8;
    case 735u: goto L_08B2B918;
    case 736u: goto L_08B2B920;
    case 737u: goto L_08B2B930;
    case 738u: goto L_08B2B938;
    case 739u: goto L_08B2B940;
    case 740u: goto L_08B2B950;
    case 741u: goto L_08B2B958;
    case 742u: goto L_08B2B95C;
    case 743u: goto L_08B2B968;
    case 744u: goto L_08B2B978;
    case 745u: goto L_08B2B984;
    case 746u: goto L_08B2B990;
    case 747u: goto L_08B2B9A8;
    case 748u: goto L_08B2B9B0;
    case 749u: goto L_08B2B9C8;
    case 750u: goto L_08B2B9D8;
    case 751u: goto L_08B2B9E4;
    case 752u: goto L_08B2B9F8;
    case 753u: goto L_08B2BA18;
    case 754u: goto L_08B2BA2C;
    case 755u: goto L_08B2BA34;
    case 756u: goto L_08B2BA48;
    case 757u: goto L_08B2BA84;
    case 758u: goto L_08B2BAB4;
    case 759u: goto L_08B2BAC0;
    case 760u: goto L_08B2BADC;
    case 761u: goto L_08B2BAE8;
    case 762u: goto L_08B2BAF0;
    case 763u: goto L_08B2BB00;
    case 764u: goto L_08B2BB08;
    case 765u: goto L_08B2BB1C;
    case 766u: goto L_08B2BB24;
    case 767u: goto L_08B2BB28;
    case 768u: goto L_08B2BB30;
    case 769u: goto L_08B2BB3C;
    case 770u: goto L_08B2BB44;
    case 771u: goto L_08B2BB58;
    case 772u: goto L_08B2BB6C;
    case 773u: goto L_08B2BB88;
    case 774u: goto L_08B2BBB8;
    case 775u: goto L_08B2BBC4;
    case 776u: goto L_08B2BBF4;
    case 777u: goto L_08B2BC10;
    case 778u: goto L_08B2BC3C;
    case 779u: goto L_08B2BC48;
    case 780u: goto L_08B2BC58;
    case 781u: goto L_08B2BC60;
    case 782u: goto L_08B2BC6C;
    case 783u: goto L_08B2BC74;
    case 784u: goto L_08B2BC80;
    case 785u: goto L_08B2BC84;
    case 786u: goto L_08B2BCA8;
    case 787u: goto L_08B2BCB0;
    case 788u: goto L_08B2BCD0;
    case 789u: goto L_08B2BCDC;
    case 790u: goto L_08B2BCF4;
    case 791u: goto L_08B2BCF8;
    case 792u: goto L_08B2BD14;
    case 793u: goto L_08B2BD50;
    case 794u: goto L_08B2BD5C;
    case 795u: goto L_08B2BD7C;
    case 796u: goto L_08B2BDA0;
    case 797u: goto L_08B2BDAC;
    case 798u: goto L_08B2BDB8;
    case 799u: goto L_08B2BDC0;
    case 800u: goto L_08B2BDC4;
    case 801u: goto L_08B2BDD8;
    case 802u: goto L_08B2BDFC;
    case 803u: goto L_08B2BE04;
    case 804u: goto L_08B2BE20;
    case 805u: goto L_08B2BE34;
    case 806u: goto L_08B2BE50;
    case 807u: goto L_08B2BE54;
    case 808u: goto L_08B2BE5C;
    case 809u: goto L_08B2BE7C;
    case 810u: goto L_08B2BE9C;
    case 811u: goto L_08B2BEC0;
    case 812u: goto L_08B2BED8;
    case 813u: goto L_08B2BF00;
    case 814u: goto L_08B2BF0C;
    case 815u: goto L_08B2BF2C;
    case 816u: goto L_08B2BF54;
    case 817u: goto L_08B2BF60;
    case 818u: goto L_08B2BF70;
    case 819u: goto L_08B2BF78;
    case 820u: goto L_08B2BF80;
    case 821u: goto L_08B2BF88;
    case 822u: goto L_08B2BFA0;
    case 823u: goto L_08B2BFC0;
    case 824u: goto L_08B2BFCC;
    case 825u: goto L_08B2BFD8;
    case 826u: goto L_08B2BFE0;
    case 827u: goto L_08B2BFEC;
    case 828u: goto L_08B2BFF4;
    case 829u: goto L_08B2BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B28000:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x08B28018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x08B28018u) goto L_08B28018;
    return;
L_08B28018:
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
L_08B28030:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B28064u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B28064u) goto L_08B28064;
    return;
L_08B28064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B28070u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B28070u) goto L_08B28070;
    return;
L_08B28070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B28080u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem) && ctx.pc == 0x08B28080u) goto L_08B28080;
    return;
L_08B28080:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08B28090u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B28090u) goto L_08B28090;
    return;
L_08B28090:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B280C4;
      }
      goto L_08B28098;
    }
L_08B28098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B280C4;
      }
      goto L_08B280A4;
    }
L_08B280A4:
    ctx.gpr[31] = (0x08B280ACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 587u, 0x08A66C04u>(ctx, &aot_mem) && ctx.pc == 0x08B280ACu) goto L_08B280AC;
    return;
L_08B280AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B280E4;
      }
      goto L_08B280BC;
    }
L_08B280BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B280E4;
      }
      goto L_08B280C4;
    }
L_08B280C4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B280D0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 587u, 0x08A66C04u>(ctx, &aot_mem) && ctx.pc == 0x08B280D0u) goto L_08B280D0;
    return;
L_08B280D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B280E4;
      }
      goto L_08B280E0;
    }
L_08B280E0:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B280E4;
L_08B280E4:
    ctx.gpr[5] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[17] = (ctx.gpr[5] ^ ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B28104;
      }
      goto L_08B280FC;
    }
L_08B280FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B2814C;
      }
      goto L_08B28104;
    }
L_08B28104:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B28130;
      }
      goto L_08B28124;
    }
L_08B28124:
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B2814C;
      }
      goto L_08B28130;
    }
L_08B28130:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2814C;
      }
      goto L_08B28148;
    }
L_08B28148:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2814C;
L_08B2814C:
    ctx.gpr[2] = (0u | 0u);
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
L_08B2816C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B28194u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B28194u) goto L_08B28194;
    return;
L_08B28194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B281A0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B281A0u) goto L_08B281A0;
    return;
L_08B281A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B281B0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 66u, 0x089083B4u>(ctx, &aot_mem) && ctx.pc == 0x08B281B0u) goto L_08B281B0;
    return;
L_08B281B0:
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
L_08B281C8:
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
    ctx.gpr[31] = (0x08B281F8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B281F8u) goto L_08B281F8;
    return;
L_08B281F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B28204u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B28204u) goto L_08B28204;
    return;
L_08B28204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2822C;
      }
      goto L_08B28224;
    }
L_08B28224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08B28230;
      }
      goto L_08B2822C;
    }
L_08B2822C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08B28230;
L_08B28230:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B28254;
      }
      goto L_08B2824C;
    }
L_08B2824C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B2829C;
      }
      goto L_08B28254;
    }
L_08B28254:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B28280;
      }
      goto L_08B28274;
    }
L_08B28274:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B2829C;
      }
      goto L_08B28280;
    }
L_08B28280:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2829C;
      }
      goto L_08B28298;
    }
L_08B28298:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2829C;
L_08B2829C:
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
L_08B282B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B282C8u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 747u, 0x088671E0u>(ctx, &aot_mem) && ctx.pc == 0x08B282C8u) goto L_08B282C8;
    return;
L_08B282C8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B282D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B28304u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B28304u) goto L_08B28304;
    return;
L_08B28304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B28310u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B28310u) goto L_08B28310;
    return;
L_08B28310:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B28328u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08B28328u) goto L_08B28328;
    return;
L_08B28328:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B28334u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 15u, 0x08908080u>(ctx, &aot_mem) && ctx.pc == 0x08B28334u) goto L_08B28334;
    return;
L_08B28334:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08B28340u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B28340u) goto L_08B28340;
    return;
L_08B28340:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28358;
      }
      goto L_08B28348;
    }
L_08B28348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28358;
      }
      goto L_08B28354;
    }
L_08B28354:
    ctx.gpr[16] = (0u | 1u);
    goto L_08B28358;
L_08B28358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(476)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B28494;
      }
      goto L_08B28368;
    }
L_08B28368:
    ctx.gpr[31] = (0x08B28370u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B28370u) goto L_08B28370;
    return;
L_08B28370:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B283C8;
      }
      goto L_08B28378;
    }
L_08B28378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B283C8;
      }
      goto L_08B28384;
    }
L_08B28384:
    ctx.gpr[31] = (0x08B2838Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 187u, 0x08B00B68u>(ctx, &aot_mem) && ctx.pc == 0x08B2838Cu) goto L_08B2838C;
    return;
L_08B2838C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B283C8;
      }
      goto L_08B28394;
    }
L_08B28394:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x08B283B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08B283B4u) goto L_08B283B4;
    return;
L_08B283B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08B283C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem) && ctx.pc == 0x08B283C0u) goto L_08B283C0;
    return;
L_08B283C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28494;
      }
      goto L_08B283C8;
    }
L_08B283C8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B28494;
      }
      goto L_08B283D0;
    }
L_08B283D0:
    ctx.gpr[31] = (0x08B283D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B283D8u) goto L_08B283D8;
    return;
L_08B283D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B28494;
      }
      goto L_08B283E0;
    }
L_08B283E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x08B28400u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08B28400u) goto L_08B28400;
    return;
L_08B28400:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08B2841Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 161u, 0x08A40D58u>(ctx, &aot_mem) && ctx.pc == 0x08B2841Cu) goto L_08B2841C;
    return;
L_08B2841C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28460;
      }
      goto L_08B28424;
    }
L_08B28424:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B28430u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B28430u) goto L_08B28430;
    return;
L_08B28430:
    ctx.gpr[31] = (0x08B28438u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 976u, 0x0890BDFCu>(ctx, &aot_mem) && ctx.pc == 0x08B28438u) goto L_08B28438;
    return;
L_08B28438:
    ctx.gpr[31] = (0x08B28440u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 195u, 0x0886D420u>(ctx, &aot_mem) && ctx.pc == 0x08B28440u) goto L_08B28440;
    return;
L_08B28440:
    ctx.gpr[6] = (0u | 33u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(776), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B28458u);
    ctx.gpr[7] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x08B28458u) goto L_08B28458;
    return;
L_08B28458:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28494;
      }
      goto L_08B28460;
    }
L_08B28460:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B2846Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B2846Cu) goto L_08B2846C;
    return;
L_08B2846C:
    ctx.gpr[31] = (0x08B28474u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 976u, 0x0890BDFCu>(ctx, &aot_mem) && ctx.pc == 0x08B28474u) goto L_08B28474;
    return;
L_08B28474:
    ctx.gpr[31] = (0x08B2847Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 195u, 0x0886D420u>(ctx, &aot_mem) && ctx.pc == 0x08B2847Cu) goto L_08B2847C;
    return;
L_08B2847C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(776), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B28494u);
    ctx.gpr[7] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x08B28494u) goto L_08B28494;
    return;
L_08B28494:
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
L_08B284B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B284E0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B284E0u) goto L_08B284E0;
    return;
L_08B284E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B284ECu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B284ECu) goto L_08B284EC;
    return;
L_08B284EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B28568;
      }
      goto L_08B284F8;
    }
L_08B284F8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B28504u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 15u, 0x08908080u>(ctx, &aot_mem) && ctx.pc == 0x08B28504u) goto L_08B28504;
    return;
L_08B28504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B2859C;
      }
      goto L_08B28514;
    }
L_08B28514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08B28520u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem) && ctx.pc == 0x08B28520u) goto L_08B28520;
    return;
L_08B28520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(776)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28560;
      }
      goto L_08B2852C;
    }
L_08B2852C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B28538u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B28538u) goto L_08B28538;
    return;
L_08B28538:
    ctx.gpr[31] = (0x08B28540u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 976u, 0x0890BDFCu>(ctx, &aot_mem) && ctx.pc == 0x08B28540u) goto L_08B28540;
    return;
L_08B28540:
    ctx.gpr[31] = (0x08B28548u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 195u, 0x0886D420u>(ctx, &aot_mem) && ctx.pc == 0x08B28548u) goto L_08B28548;
    return;
L_08B28548:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(776), 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B28560u);
    ctx.gpr[7] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x08B28560u) goto L_08B28560;
    return;
L_08B28560:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2859C;
      }
      goto L_08B28568;
    }
L_08B28568:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(1396));
    goto L_08B28570;
L_08B28570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B2858C;
      }
      goto L_08B28580;
    }
L_08B28580:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B2858Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 15u, 0x08908080u>(ctx, &aot_mem) && ctx.pc == 0x08B2858Cu) goto L_08B2858C;
    return;
L_08B2858C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08B28570;
      }
      goto L_08B2859C;
    }
L_08B2859C:
    ctx.gpr[2] = (0u | 0u);
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
L_08B285BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B285ECu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B285ECu) goto L_08B285EC;
    return;
L_08B285EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B285F8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B285F8u) goto L_08B285F8;
    return;
L_08B285F8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B28604u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B28604u) goto L_08B28604;
    return;
L_08B28604:
    ctx.gpr[5] = (16585u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B2863C;
      }
      goto L_08B28618;
    }
L_08B28618:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2863C;
      }
      goto L_08B28624;
    }
L_08B28624:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
          goto L_08B2864C;
      }
      goto L_08B2863C;
    }
L_08B2863C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    goto L_08B2864C;
L_08B2864C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08B28690u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08B28690u) goto L_08B28690;
    return;
L_08B28690:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
        goto L_08B286A8;
    }
    goto L_08B286A8;
L_08B286A8:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B286CC;
      }
      goto L_08B286C8;
    }
L_08B286C8:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    goto L_08B286CC;
L_08B286CC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B286E4;
      }
      goto L_08B286D4;
    }
L_08B286D4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B286E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x08B286E4u) goto L_08B286E4;
    return;
L_08B286E4:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B28704:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B2872Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2872Cu) goto L_08B2872C;
    return;
L_08B2872C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B28738u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B28738u) goto L_08B28738;
    return;
L_08B28738:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28778;
      }
      goto L_08B28744;
    }
L_08B28744:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08B28750u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 786u, 0x08863EF0u>(ctx, &aot_mem) && ctx.pc == 0x08B28750u) goto L_08B28750;
    return;
L_08B28750:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28778;
      }
      goto L_08B2875C;
    }
L_08B2875C:
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08B28778u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21784));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x0886565Cu>(ctx, &aot_mem) && ctx.pc == 0x08B28778u) goto L_08B28778;
    return;
L_08B28778:
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
L_08B28790:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B287B8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B287B8u) goto L_08B287B8;
    return;
L_08B287B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B287C4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B287C4u) goto L_08B287C4;
    return;
L_08B287C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B287F4;
      }
      goto L_08B287D0;
    }
L_08B287D0:
    ctx.gpr[31] = (0x08B287D8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem) && ctx.pc == 0x08B287D8u) goto L_08B287D8;
    return;
L_08B287D8:
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08B287F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21784));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x0886565Cu>(ctx, &aot_mem) && ctx.pc == 0x08B287F4u) goto L_08B287F4;
    return;
L_08B287F4:
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
L_08B2880C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B28834u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B28834u) goto L_08B28834;
    return;
L_08B28834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B28840u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B28840u) goto L_08B28840;
    return;
L_08B28840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B28850u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B28850u) goto L_08B28850;
    return;
L_08B28850:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[31] = (0x08B28860u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08B28860u) goto L_08B28860;
    return;
L_08B28860:
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
L_08B28878:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B28898u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B28898u) goto L_08B28898;
    return;
L_08B28898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B288A4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B288A4u) goto L_08B288A4;
    return;
L_08B288A4:
    ctx.gpr[31] = (0x08B288ACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 452u, 0x08882930u>(ctx, &aot_mem) && ctx.pc == 0x08B288ACu) goto L_08B288AC;
    return;
L_08B288AC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B288C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B288E8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B288E8u) goto L_08B288E8;
    return;
L_08B288E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08B28914u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 147u, 0x08AB4B5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B28914u) goto L_08B28914;
    return;
L_08B28914:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B2892C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B2894Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2894Cu) goto L_08B2894C;
    return;
L_08B2894C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B28958u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B28958u) goto L_08B28958;
    return;
L_08B28958:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(684), 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B28968u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 890u, 0x08907DB8u>(ctx, &aot_mem) && ctx.pc == 0x08B28968u) goto L_08B28968;
    return;
L_08B28968:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B2897C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B289B4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B289B4u) goto L_08B289B4;
    return;
L_08B289B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B289C0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B289C0u) goto L_08B289C0;
    return;
L_08B289C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B289D0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B289D0u) goto L_08B289D0;
    return;
L_08B289D0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B289DCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B289DCu) goto L_08B289DC;
    return;
L_08B289DC:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08B28A18;
      }
      goto L_08B289F4;
    }
L_08B289F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28A18;
      }
      goto L_08B28A00;
    }
L_08B28A00:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
          goto L_08B28A28;
      }
      goto L_08B28A18;
    }
L_08B28A18:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
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
    goto L_08B28A28;
L_08B28A28:
    ctx.gpr[31] = (0x08B28A30u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B28A30u) goto L_08B28A30;
    return;
L_08B28A30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28A5C;
      }
      goto L_08B28A38;
    }
L_08B28A38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28A5C;
      }
      goto L_08B28A44;
    }
L_08B28A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
          goto L_08B28A68;
      }
      goto L_08B28A5C;
    }
L_08B28A5C:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_08B28A68;
L_08B28A68:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08B28A90u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08B28A90u) goto L_08B28A90;
    return;
L_08B28A90:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
        goto L_08B28AA8;
    }
    goto L_08B28AA8;
L_08B28AA8:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B28ACC;
      }
      goto L_08B28AC8;
    }
L_08B28AC8:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    goto L_08B28ACC;
L_08B28ACC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B28AE4;
      }
      goto L_08B28AD4;
    }
L_08B28AD4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B28AE4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x08B28AE4u) goto L_08B28AE4;
    return;
L_08B28AE4:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
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
L_08B28B0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B28B34u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B28B34u) goto L_08B28B34;
    return;
L_08B28B34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B28B40u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B28B40u) goto L_08B28B40;
    return;
L_08B28B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B28BC4;
      }
      goto L_08B28B4C;
    }
L_08B28B4C:
    ctx.gpr[31] = (0x08B28B54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B28B54u) goto L_08B28B54;
    return;
L_08B28B54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28BA0;
      }
      goto L_08B28B5C;
    }
L_08B28B5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28BA0;
      }
      goto L_08B28B68;
    }
L_08B28B68:
    ctx.gpr[31] = (0x08B28B70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 854u, 0x0890B608u>(ctx, &aot_mem) && ctx.pc == 0x08B28B70u) goto L_08B28B70;
    return;
L_08B28B70:
    ctx.gpr[31] = (0x08B28B78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B28B78u) goto L_08B28B78;
    return;
L_08B28B78:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B28BD0;
      }
      goto L_08B28B80;
    }
L_08B28B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B28B98u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B28B98u) goto L_08B28B98;
    return;
L_08B28B98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28BD0;
      }
      goto L_08B28BA0;
    }
L_08B28BA0:
    ctx.gpr[7] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08B28BBCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 653u, 0x0891F338u>(ctx, &aot_mem) && ctx.pc == 0x08B28BBCu) goto L_08B28BBC;
    return;
L_08B28BBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28BD0;
      }
      goto L_08B28BC4;
    }
L_08B28BC4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08B28BD0;
L_08B28BD0:
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
L_08B28BE8:
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
    ctx.gpr[31] = (0x08B28C18u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B28C18u) goto L_08B28C18;
    return;
L_08B28C18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B28C24u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B28C24u) goto L_08B28C24;
    return;
L_08B28C24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B28C44u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08B28C44u) goto L_08B28C44;
    return;
L_08B28C44:
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
L_08B28C60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B28C88u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B28C88u) goto L_08B28C88;
    return;
L_08B28C88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B28C94u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B28C94u) goto L_08B28C94;
    return;
L_08B28C94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B28CA4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B28CA4u) goto L_08B28CA4;
    return;
L_08B28CA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08B28CBCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x08B28CBCu) goto L_08B28CBC;
    return;
L_08B28CBC:
    ctx.gpr[5] = (0u | 60000u);
    ctx.gpr[31] = (0x08B28CC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x08B28CC8u) goto L_08B28CC8;
    return;
L_08B28CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B28CEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B28D0Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B28D0Cu) goto L_08B28D0C;
    return;
L_08B28D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B28D18u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B28D18u) goto L_08B28D18;
    return;
L_08B28D18:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B28D34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x08B28D34u) goto L_08B28D34;
    return;
L_08B28D34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08B28D5C;
      }
      goto L_08B28D54;
    }
L_08B28D54:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B28D64;
      }
      goto L_08B28D5C;
    }
L_08B28D5C:
    ctx.gpr[31] = (0x08B28D64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08B28D64u) goto L_08B28D64;
    return;
L_08B28D64:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B28D78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B28DA0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B28DA0u) goto L_08B28DA0;
    return;
L_08B28DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B28DACu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B28DACu) goto L_08B28DAC;
    return;
L_08B28DAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B28DB8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 501u, 0x08906484u>(ctx, &aot_mem) && ctx.pc == 0x08B28DB8u) goto L_08B28DB8;
    return;
L_08B28DB8:
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
L_08B28DD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B28DF8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B28DF8u) goto L_08B28DF8;
    return;
L_08B28DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B28E04u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B28E04u) goto L_08B28E04;
    return;
L_08B28E04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(468)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(776), ctx.gpr[4]);
    ctx.gpr[4] = (65520u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
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
L_08B28E38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B28E60u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B28E60u) goto L_08B28E60;
    return;
L_08B28E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B28E6Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B28E6Cu) goto L_08B28E6C;
    return;
L_08B28E6C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(456)));
    ctx.gpr[7] = (65532u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B28E98;
      }
      goto L_08B28E88;
    }
L_08B28E88:
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B28E9C;
      }
      goto L_08B28E98;
    }
L_08B28E98:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08B28E9C;
L_08B28E9C:
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
L_08B28EB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B28ED8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B28ED8u) goto L_08B28ED8;
    return;
L_08B28ED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B28EE4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B28EE4u) goto L_08B28EE4;
    return;
L_08B28EE4:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B28EF8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 745u, 0x08863CB4u>(ctx, &aot_mem) && ctx.pc == 0x08B28EF8u) goto L_08B28EF8;
    return;
L_08B28EF8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B28F08;
      }
      goto L_08B28F04;
    }
L_08B28F04:
    ctx.gpr[5] = (0u | 1u);
    goto L_08B28F08;
L_08B28F08:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B28F34;
      }
      goto L_08B28F2C;
    }
L_08B28F2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B28F7C;
      }
      goto L_08B28F34;
    }
L_08B28F34:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(518));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(521)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B28F60;
      }
      goto L_08B28F54;
    }
L_08B28F54:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B28F7C;
      }
      goto L_08B28F60;
    }
L_08B28F60:
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28F7C;
      }
      goto L_08B28F78;
    }
L_08B28F78:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B28F7C;
L_08B28F7C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B28F90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B28FB8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B28FB8u) goto L_08B28FB8;
    return;
L_08B28FB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B28FC4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B28FC4u) goto L_08B28FC4;
    return;
L_08B28FC4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08B28FE4;
      }
      goto L_08B28FD4;
    }
L_08B28FD4:
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B28FF4;
      }
      goto L_08B28FE4;
    }
L_08B28FE4:
    ctx.gpr[6] = (49152u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08B28FF4;
L_08B28FF4:
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
L_08B2900C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B29034u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B29034u) goto L_08B29034;
    return;
L_08B29034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B29040u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B29040u) goto L_08B29040;
    return;
L_08B29040:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08B29064;
      }
      goto L_08B29050;
    }
L_08B29050:
    ctx.gpr[6] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B29078;
      }
      goto L_08B29064;
    }
L_08B29064:
    ctx.gpr[6] = (64512u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08B29078;
L_08B29078:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29094;
      }
      goto L_08B29080;
    }
L_08B29080:
    ctx.gpr[6] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B290A8;
      }
      goto L_08B29094;
    }
L_08B29094:
    ctx.gpr[6] = (63488u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08B290A8;
L_08B290A8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B290C4;
      }
      goto L_08B290B0;
    }
L_08B290B0:
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B290D8;
      }
      goto L_08B290C4;
    }
L_08B290C4:
    ctx.gpr[6] = (65532u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08B290D8;
L_08B290D8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B290F4;
      }
      goto L_08B290E0;
    }
L_08B290E0:
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B29108;
      }
      goto L_08B290F4;
    }
L_08B290F4:
    ctx.gpr[6] = (61440u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08B29108;
L_08B29108:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29120;
      }
      goto L_08B29110;
    }
L_08B29110:
    ctx.gpr[6] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B29130;
      }
      goto L_08B29120;
    }
L_08B29120:
    ctx.gpr[6] = (57344u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08B29130;
L_08B29130:
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
L_08B29148:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B29170u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B29170u) goto L_08B29170;
    return;
L_08B29170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2917Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2917Cu) goto L_08B2917C;
    return;
L_08B2917C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(48);
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
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1840));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08B29234;
      }
      goto L_08B2922C;
    }
L_08B2922C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08B29234;
L_08B29234:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29240;
      }
      goto L_08B2923C;
    }
L_08B2923C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08B29240;
L_08B29240:
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
          goto L_08B2926C;
      }
      goto L_08B29264;
    }
L_08B29264:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B292BC;
      }
      goto L_08B2926C;
    }
L_08B2926C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08B29298;
      }
      goto L_08B29284;
    }
L_08B29284:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B292BC;
      }
      goto L_08B29298;
    }
L_08B29298:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B292BC;
      }
      goto L_08B292B8;
    }
L_08B292B8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B292BC;
L_08B292BC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B292D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08B29304u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B29304u) goto L_08B29304;
    return;
L_08B29304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B29310u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B29310u) goto L_08B29310;
    return;
L_08B29310:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    ctx.gpr[6] = (128u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2934C;
      }
      goto L_08B2932C;
    }
L_08B2932C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08B29340u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 788u, 0x08AAF8F4u>(ctx, &aot_mem) && ctx.pc == 0x08B29340u) goto L_08B29340;
    return;
L_08B29340:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2934C;
      }
      goto L_08B29348;
    }
L_08B29348:
    ctx.gpr[18] = (0u | 1u);
    goto L_08B2934C;
L_08B2934C:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B29378;
      }
      goto L_08B29370;
    }
L_08B29370:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08B293C0;
      }
      goto L_08B29378;
    }
L_08B29378:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B293A4;
      }
      goto L_08B29398;
    }
L_08B29398:
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B293C0;
      }
      goto L_08B293A4;
    }
L_08B293A4:
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B293C0;
      }
      goto L_08B293BC;
    }
L_08B293BC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B293C0;
L_08B293C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B293F0;
      }
      goto L_08B293CC;
    }
L_08B293CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[31] = (0x08B293F0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x08B293F0u) goto L_08B293F0;
    return;
L_08B293F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B293FC;
      }
      goto L_08B293FC;
    }
L_08B293FC:
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
L_08B29418:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B29448u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B29448u) goto L_08B29448;
    return;
L_08B29448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B29454u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B29454u) goto L_08B29454;
    return;
L_08B29454:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1396));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B29484;
      }
      goto L_08B29480;
    }
L_08B29480:
    ctx.gpr[4] = (0u | 1u);
    goto L_08B29484;
L_08B29484:
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
          goto L_08B294B0;
      }
      goto L_08B294A8;
    }
L_08B294A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B294F8;
      }
      goto L_08B294B0;
    }
L_08B294B0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B294DC;
      }
      goto L_08B294D0;
    }
L_08B294D0:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B294F8;
      }
      goto L_08B294DC;
    }
L_08B294DC:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B294F8;
      }
      goto L_08B294F4;
    }
L_08B294F4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B294F8;
L_08B294F8:
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
L_08B29514:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x08B2957Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2957Cu) goto L_08B2957C;
    return;
L_08B2957C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08B295A0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B295A0u) goto L_08B295A0;
    return;
L_08B295A0:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = ctx.fpr[30] - ctx.fpr[12];
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    ctx.gpr[30] = (65532u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (2239u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(21784));
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B295D8;
L_08B295D8:
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08B2975C;
      }
      goto L_08B295E4;
    }
L_08B295E4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08B29760;
      }
      goto L_08B295F0;
    }
L_08B295F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B2960C;
      }
      goto L_08B295F8;
    }
L_08B295F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08B29614;
    }
    goto L_08B2960C;
L_08B2960C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B29634;
      }
      goto L_08B29614;
    }
L_08B29614:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08B29630;
    }
    goto L_08B29628;
L_08B29628:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B29634;
      }
      goto L_08B29630;
    }
L_08B29630:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[20]);
    goto L_08B29634;
L_08B29634:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B2963C;
    }
L_08B2963C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B29648u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem) && ctx.pc == 0x08B29648u) goto L_08B29648;
    return;
L_08B29648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7980)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B29654;
    }
L_08B29654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B29664;
    }
L_08B29664:
    ctx.gpr[31] = (0x08B2966Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08B2966Cu) goto L_08B2966C;
    return;
L_08B2966C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B29674;
    }
L_08B29674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (32768u << 16u);
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B29684;
    }
L_08B29684:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B29694;
    }
L_08B29694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2236)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B296A0;
    }
L_08B296A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08B296B8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 563u, 0x08863028u>(ctx, &aot_mem) && ctx.pc == 0x08B296B8u) goto L_08B296B8;
    return;
L_08B296B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B296C0;
    }
L_08B296C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08B296D8u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 788u, 0x08AAF8F4u>(ctx, &aot_mem) && ctx.pc == 0x08B296D8u) goto L_08B296D8;
    return;
L_08B296D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B296E0;
    }
L_08B296E0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B296F8;
    }
L_08B296F8:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B29708;
    }
L_08B29708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B29714u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem) && ctx.pc == 0x08B29714u) goto L_08B29714;
    return;
L_08B29714:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7980), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B29728u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem) && ctx.pc == 0x08B29728u) goto L_08B29728;
    return;
L_08B29728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B29740;
    }
L_08B29740:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B29754u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 275u, 0x08861C90u>(ctx, &aot_mem) && ctx.pc == 0x08B29754u) goto L_08B29754;
    return;
L_08B29754:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B295D8;
      }
      goto L_08B2975C;
    }
L_08B2975C:
    ctx.gpr[4] = (2236u << 16u);
    goto L_08B29760;
L_08B29760:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29704), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B29774u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08B29774u) goto L_08B29774;
    return;
L_08B29774:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B297C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B29810u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B29810u) goto L_08B29810;
    return;
L_08B29810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (2236u << 16u);
      if (branch_taken) {
          goto L_08B29824;
      }
      goto L_08B2981C;
    }
L_08B2981C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08B29830;
      }
      goto L_08B29824;
    }
L_08B29824:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    goto L_08B29830;
L_08B29830:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B29844u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 322u, 0x08A8DB38u>(ctx, &aot_mem) && ctx.pc == 0x08B29844u) goto L_08B29844;
    return;
L_08B29844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x08B29850u);
    ctx.gpr[5] = (ctx.gpr[2] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 516u, 0x08A8EA74u>(ctx, &aot_mem) && ctx.pc == 0x08B29850u) goto L_08B29850;
    return;
L_08B29850:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (ctx.gpr[30] + static_cast<std::uint32_t>(29704));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08B2986Cu);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2986Cu) goto L_08B2986C;
    return;
L_08B2986C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B2987Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B2987Cu) goto L_08B2987C;
    return;
L_08B2987C:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[24] - ctx.fpr[12];
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21784));
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[19] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B298BC;
L_08B298BC:
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08B29A6C;
      }
      goto L_08B298C8;
    }
L_08B298C8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B29A6C;
      }
      goto L_08B298D4;
    }
L_08B298D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B298F0;
      }
      goto L_08B298DC;
    }
L_08B298DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
        goto L_08B298F8;
    }
    goto L_08B298F0;
L_08B298F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B29920;
      }
      goto L_08B298F8;
    }
L_08B298F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
        goto L_08B29918;
    }
    goto L_08B29910;
L_08B29910:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B29920;
      }
      goto L_08B29918;
    }
L_08B29918:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[19]);
    goto L_08B29920;
L_08B29920:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B29928;
    }
L_08B29928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B29934u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem) && ctx.pc == 0x08B29934u) goto L_08B29934;
    return;
L_08B29934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7980)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B29940;
    }
L_08B29940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B29950;
    }
L_08B29950:
    ctx.gpr[31] = (0x08B29958u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08B29958u) goto L_08B29958;
    return;
L_08B29958:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B29960;
    }
L_08B29960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (32768u << 16u);
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B29970;
    }
L_08B29970:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B29980;
    }
L_08B29980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2236)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B2998C;
    }
L_08B2998C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B299A4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 563u, 0x08863028u>(ctx, &aot_mem) && ctx.pc == 0x08B299A4u) goto L_08B299A4;
    return;
L_08B299A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2u << 16u);
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B299AC;
    }
L_08B299AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B299BC;
    }
L_08B299BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B299C8;
    }
L_08B299C8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08B299E8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 313u, 0x08A8DAA0u>(ctx, &aot_mem) && ctx.pc == 0x08B299E8u) goto L_08B299E8;
    return;
L_08B299E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B299F0;
    }
L_08B299F0:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B29A00;
    }
L_08B29A00:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B29A10;
    }
L_08B29A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B29A1Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem) && ctx.pc == 0x08B29A1Cu) goto L_08B29A1C;
    return;
L_08B29A1C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7980), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B29A30u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem) && ctx.pc == 0x08B29A30u) goto L_08B29A30;
    return;
L_08B29A30:
    ctx.gpr[4] = (65532u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B29A50;
    }
L_08B29A50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B29A64u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 275u, 0x08861C90u>(ctx, &aot_mem) && ctx.pc == 0x08B29A64u) goto L_08B29A64;
    return;
L_08B29A64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B298BC;
      }
      goto L_08B29A6C;
    }
L_08B29A6C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(29704), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B29A80u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08B29A80u) goto L_08B29A80;
    return;
L_08B29A80:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
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
L_08B29AC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B29AE8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B29AE8u) goto L_08B29AE8;
    return;
L_08B29AE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B29AF4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B29AF4u) goto L_08B29AF4;
    return;
L_08B29AF4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(456)));
    ctx.gpr[6] = (128u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29B10;
      }
      goto L_08B29B0C;
    }
L_08B29B0C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08B29B10;
L_08B29B10:
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
          goto L_08B29B3C;
      }
      goto L_08B29B34;
    }
L_08B29B34:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B29B84;
      }
      goto L_08B29B3C;
    }
L_08B29B3C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B29B68;
      }
      goto L_08B29B5C;
    }
L_08B29B5C:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B29B84;
      }
      goto L_08B29B68;
    }
L_08B29B68:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29B84;
      }
      goto L_08B29B80;
    }
L_08B29B80:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B29B84;
L_08B29B84:
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
L_08B29B9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B29BC4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B29BC4u) goto L_08B29BC4;
    return;
L_08B29BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B29BD0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B29BD0u) goto L_08B29BD0;
    return;
L_08B29BD0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08B29C0C;
    }
    goto L_08B29C0C;
L_08B29C0C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1934), static_cast<std::uint8_t>(ctx.gpr[5]));
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
L_08B29C30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B29C60u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B29C60u) goto L_08B29C60;
    return;
L_08B29C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B29C6Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B29C6Cu) goto L_08B29C6C;
    return;
L_08B29C6C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B29C84;
      }
      goto L_08B29C80;
    }
L_08B29C80:
    ctx.gpr[4] = (0u | 1u);
    goto L_08B29C84;
L_08B29C84:
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
          goto L_08B29CB0;
      }
      goto L_08B29CA8;
    }
L_08B29CA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B29CF8;
      }
      goto L_08B29CB0;
    }
L_08B29CB0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B29CDC;
      }
      goto L_08B29CD0;
    }
L_08B29CD0:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B29CF8;
      }
      goto L_08B29CDC;
    }
L_08B29CDC:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29CF8;
      }
      goto L_08B29CF4;
    }
L_08B29CF4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B29CF8;
L_08B29CF8:
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
L_08B29D14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B29D3Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B29D3Cu) goto L_08B29D3C;
    return;
L_08B29D3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B29D48u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B29D48u) goto L_08B29D48;
    return;
L_08B29D48:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(456)));
      if (branch_taken) {
          goto L_08B29D64;
      }
      goto L_08B29D58;
    }
L_08B29D58:
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B29D70;
      }
      goto L_08B29D64;
    }
L_08B29D64:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08B29D70;
L_08B29D70:
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
L_08B29D88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B29DB8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B29DB8u) goto L_08B29DB8;
    return;
L_08B29DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B29DC4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B29DC4u) goto L_08B29DC4;
    return;
L_08B29DC4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B29E1C;
      }
      goto L_08B29DD4;
    }
L_08B29DD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(91))))));
      if (branch_taken) {
          goto L_08B29DF0;
      }
      goto L_08B29DE4;
    }
L_08B29DE4:
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B29E10;
      }
      goto L_08B29DF0;
    }
L_08B29DF0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B29E00u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 518u, 0x08862E80u>(ctx, &aot_mem) && ctx.pc == 0x08B29E00u) goto L_08B29E00;
    return;
L_08B29E00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29E1C;
      }
      goto L_08B29E08;
    }
L_08B29E08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B29E1C;
      }
      goto L_08B29E10;
    }
L_08B29E10:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B29E1C;
      }
      goto L_08B29E18;
    }
L_08B29E18:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B29E1C;
L_08B29E1C:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B29E48;
      }
      goto L_08B29E40;
    }
L_08B29E40:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B29E90;
      }
      goto L_08B29E48;
    }
L_08B29E48:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B29E74;
      }
      goto L_08B29E68;
    }
L_08B29E68:
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B29E90;
      }
      goto L_08B29E74;
    }
L_08B29E74:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29E90;
      }
      goto L_08B29E8C;
    }
L_08B29E8C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B29E90;
L_08B29E90:
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
L_08B29EAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B29EDCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B29EDCu) goto L_08B29EDC;
    return;
L_08B29EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B29EE8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B29EE8u) goto L_08B29EE8;
    return;
L_08B29EE8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B29EF8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B29EF8u) goto L_08B29EF8;
    return;
L_08B29EF8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B29F20;
      }
      goto L_08B29F08;
    }
L_08B29F08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    ctx.gpr[6] = (512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B29F20;
      }
      goto L_08B29F1C;
    }
L_08B29F1C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08B29F20;
L_08B29F20:
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
          goto L_08B29F4C;
      }
      goto L_08B29F44;
    }
L_08B29F44:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B29F94;
      }
      goto L_08B29F4C;
    }
L_08B29F4C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B29F78;
      }
      goto L_08B29F6C;
    }
L_08B29F6C:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B29F94;
      }
      goto L_08B29F78;
    }
L_08B29F78:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29F94;
      }
      goto L_08B29F90;
    }
L_08B29F90:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B29F94;
L_08B29F94:
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
L_08B29FB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B29FD0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B29FD0u) goto L_08B29FD0;
    return;
L_08B29FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B29FDCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B29FDCu) goto L_08B29FDC;
    return;
L_08B29FDC:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08B2A000u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem) && ctx.pc == 0x08B2A000u) goto L_08B2A000;
    return;
L_08B2A000:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B2A014:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2A03Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A03Cu) goto L_08B2A03C;
    return;
L_08B2A03C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2A048u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2A048u) goto L_08B2A048;
    return;
L_08B2A048:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(456)));
      if (branch_taken) {
          goto L_08B2A068;
      }
      goto L_08B2A058;
    }
L_08B2A058:
    ctx.gpr[6] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B2A078;
      }
      goto L_08B2A068;
    }
L_08B2A068:
    ctx.gpr[6] = (63488u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08B2A078;
L_08B2A078:
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
L_08B2A090:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2A0B8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A0B8u) goto L_08B2A0B8;
    return;
L_08B2A0B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2A0C4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2A0C4u) goto L_08B2A0C4;
    return;
L_08B2A0C4:
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (65528u << 16u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B2A0F8;
      }
      goto L_08B2A0E4;
    }
L_08B2A0E4:
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B2A108;
      }
      goto L_08B2A0F8;
    }
L_08B2A0F8:
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_08B2A108;
L_08B2A108:
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
L_08B2A120:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B2A14Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A14Cu) goto L_08B2A14C;
    return;
L_08B2A14C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2A158u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2A158u) goto L_08B2A158;
    return;
L_08B2A158:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A240;
      }
      goto L_08B2A164;
    }
L_08B2A164:
    ctx.gpr[31] = (0x08B2A16Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A16Cu) goto L_08B2A16C;
    return;
L_08B2A16C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A208;
      }
      goto L_08B2A174;
    }
L_08B2A174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B2A208;
      }
      goto L_08B2A184;
    }
L_08B2A184:
    ctx.gpr[31] = (0x08B2A18Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B2A18Cu) goto L_08B2A18C;
    return;
L_08B2A18C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A1B0;
      }
      goto L_08B2A194;
    }
L_08B2A194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A1B0;
      }
      goto L_08B2A1A0;
    }
L_08B2A1A0:
    ctx.gpr[31] = (0x08B2A1A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 765u, 0x08863DD8u>(ctx, &aot_mem) && ctx.pc == 0x08B2A1A8u) goto L_08B2A1A8;
    return;
L_08B2A1A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A208;
      }
      goto L_08B2A1B0;
    }
L_08B2A1B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B2A1BCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem) && ctx.pc == 0x08B2A1BCu) goto L_08B2A1BC;
    return;
L_08B2A1BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B2A1F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 452u, 0x08882930u>(ctx, &aot_mem) && ctx.pc == 0x08B2A1F0u) goto L_08B2A1F0;
    return;
L_08B2A1F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B2A208u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 537u, 0x0889358Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A208u) goto L_08B2A208;
    return;
L_08B2A208:
    ctx.gpr[31] = (0x08B2A210u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A210u) goto L_08B2A210;
    return;
L_08B2A210:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A240;
      }
      goto L_08B2A218;
    }
L_08B2A218:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A240;
      }
      goto L_08B2A224;
    }
L_08B2A224:
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21784));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B2A240u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x0886565Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A240u) goto L_08B2A240;
    return;
L_08B2A240:
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
L_08B2A25C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2A284u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A284u) goto L_08B2A284;
    return;
L_08B2A284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2A290u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2A290u) goto L_08B2A290;
    return;
L_08B2A290:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(460)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-513));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B2A2B4;
      }
      goto L_08B2A2A8;
    }
L_08B2A2A8:
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B2A2B8;
      }
      goto L_08B2A2B4;
    }
L_08B2A2B4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    goto L_08B2A2B8;
L_08B2A2B8:
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
L_08B2A2D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B2A300u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A300u) goto L_08B2A300;
    return;
L_08B2A300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2A30Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2A30Cu) goto L_08B2A30C;
    return;
L_08B2A30C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08B2A324u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A324u) goto L_08B2A324;
    return;
L_08B2A324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08B2A338;
    }
    goto L_08B2A330;
L_08B2A330:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B2A33C;
      }
      goto L_08B2A338;
    }
L_08B2A338:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08B2A33C;
L_08B2A33C:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A388;
      }
      goto L_08B2A354;
    }
L_08B2A354:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 91 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B2A370;
      }
      goto L_08B2A360;
    }
L_08B2A360:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A370;
      }
      goto L_08B2A368;
    }
L_08B2A368:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08B2A370;
L_08B2A370:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A354;
      }
      goto L_08B2A388;
    }
L_08B2A388:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B2A394u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 671u, 0x0890EE04u>(ctx, &aot_mem) && ctx.pc == 0x08B2A394u) goto L_08B2A394;
    return;
L_08B2A394:
    ctx.gpr[31] = (0x08B2A39Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 127u, 0x08A11208u>(ctx, &aot_mem) && ctx.pc == 0x08B2A39Cu) goto L_08B2A39C;
    return;
L_08B2A39C:
    ctx.gpr[31] = (0x08B2A3A4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08B2A3A4u) goto L_08B2A3A4;
    return;
L_08B2A3A4:
    ctx.gpr[31] = (0x08B2A3ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 128u, 0x08A11214u>(ctx, &aot_mem) && ctx.pc == 0x08B2A3ACu) goto L_08B2A3AC;
    return;
L_08B2A3AC:
    ctx.gpr[31] = (0x08B2A3B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 688u, 0x0890EF00u>(ctx, &aot_mem) && ctx.pc == 0x08B2A3B4u) goto L_08B2A3B4;
    return;
L_08B2A3B4:
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
L_08B2A3D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2A3FCu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A3FCu) goto L_08B2A3FC;
    return;
L_08B2A3FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2A408u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2A408u) goto L_08B2A408;
    return;
L_08B2A408:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1256)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B2A42Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A42Cu) goto L_08B2A42C;
    return;
L_08B2A42C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B2A46C;
      }
      goto L_08B2A434;
    }
L_08B2A434:
    ctx.gpr[31] = (0x08B2A43Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem) && ctx.pc == 0x08B2A43Cu) goto L_08B2A43C;
    return;
L_08B2A43C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1256)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(337)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2A464;
      }
      goto L_08B2A45C;
    }
L_08B2A45C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08B2A464;
      }
      goto L_08B2A464;
    }
L_08B2A464:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08B2A494;
      }
      goto L_08B2A46C;
    }
L_08B2A46C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1256)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2A490;
      }
      goto L_08B2A488;
    }
L_08B2A488:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08B2A490;
      }
      goto L_08B2A490;
    }
L_08B2A490:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08B2A494;
L_08B2A494:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2A4AC;
      }
      goto L_08B2A4A4;
    }
L_08B2A4A4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08B2A4AC;
      }
      goto L_08B2A4AC;
    }
L_08B2A4AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B2A4CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2A504u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A504u) goto L_08B2A504;
    return;
L_08B2A504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2A510u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2A510u) goto L_08B2A510;
    return;
L_08B2A510:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2A520u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2A520u) goto L_08B2A520;
    return;
L_08B2A520:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B2A534u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 571u, 0x089068C8u>(ctx, &aot_mem) && ctx.pc == 0x08B2A534u) goto L_08B2A534;
    return;
L_08B2A534:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A540;
      }
      goto L_08B2A53C;
    }
L_08B2A53C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B2A540;
L_08B2A540:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B2A56C;
      }
      goto L_08B2A564;
    }
L_08B2A564:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B2A5B4;
      }
      goto L_08B2A56C;
    }
L_08B2A56C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B2A598;
      }
      goto L_08B2A58C;
    }
L_08B2A58C:
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B2A5B4;
      }
      goto L_08B2A598;
    }
L_08B2A598:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A5B4;
      }
      goto L_08B2A5B0;
    }
L_08B2A5B0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2A5B4;
L_08B2A5B4:
    ctx.gpr[2] = (0u | 0u);
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
L_08B2A5D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2A5FCu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A5FCu) goto L_08B2A5FC;
    return;
L_08B2A5FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2A608u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2A608u) goto L_08B2A608;
    return;
L_08B2A608:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08B2A618u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08B2A618u) goto L_08B2A618;
    return;
L_08B2A618:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x08B2A62Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08B2A62Cu) goto L_08B2A62C;
    return;
L_08B2A62C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B2A638u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 878u, 0x0892BA54u>(ctx, &aot_mem) && ctx.pc == 0x08B2A638u) goto L_08B2A638;
    return;
L_08B2A638:
    ctx.gpr[31] = (0x08B2A640u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08B2A640u) goto L_08B2A640;
    return;
L_08B2A640:
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
L_08B2A658:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08B2A680u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A680u) goto L_08B2A680;
    return;
L_08B2A680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2A68Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2A68Cu) goto L_08B2A68C;
    return;
L_08B2A68C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A6DC;
      }
      goto L_08B2A6A0;
    }
L_08B2A6A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B2A6C8;
      }
      goto L_08B2A6AC;
    }
L_08B2A6AC:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08B2A6C0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x08B2A6C0u) goto L_08B2A6C0;
    return;
L_08B2A6C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A6DC;
      }
      goto L_08B2A6C8;
    }
L_08B2A6C8:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08B2A6DCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x08B2A6DCu) goto L_08B2A6DC;
    return;
L_08B2A6DC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B2A6F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2A71Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A71Cu) goto L_08B2A71C;
    return;
L_08B2A71C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2A728u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2A728u) goto L_08B2A728;
    return;
L_08B2A728:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(460)));
      if (branch_taken) {
          goto L_08B2A748;
      }
      goto L_08B2A738;
    }
L_08B2A738:
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B2A758;
      }
      goto L_08B2A748;
    }
L_08B2A748:
    ctx.gpr[6] = (65532u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    goto L_08B2A758;
L_08B2A758:
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
L_08B2A770:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B2A798u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A798u) goto L_08B2A798;
    return;
L_08B2A798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2A7A4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2A7A4u) goto L_08B2A7A4;
    return;
L_08B2A7A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (ctx.gpr[4] ^ 20u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 5u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A7D0;
      }
      goto L_08B2A7C8;
    }
L_08B2A7C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B2A7D4;
      }
      goto L_08B2A7D0;
    }
L_08B2A7D0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08B2A7D4;
L_08B2A7D4:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B2A7F8;
      }
      goto L_08B2A7F0;
    }
L_08B2A7F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B2A840;
      }
      goto L_08B2A7F8;
    }
L_08B2A7F8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B2A824;
      }
      goto L_08B2A818;
    }
L_08B2A818:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B2A840;
      }
      goto L_08B2A824;
    }
L_08B2A824:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A840;
      }
      goto L_08B2A83C;
    }
L_08B2A83C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2A840;
L_08B2A840:
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
L_08B2A858:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B2A878u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A878u) goto L_08B2A878;
    return;
L_08B2A878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x08B2A888u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 152u, 0x08AB4BCCu>(ctx, &aot_mem) && ctx.pc == 0x08B2A888u) goto L_08B2A888;
    return;
L_08B2A888:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B2A89C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B2A8D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A8D0u) goto L_08B2A8D0;
    return;
L_08B2A8D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2A8DCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2A8DCu) goto L_08B2A8DC;
    return;
L_08B2A8DC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B2A8E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B2A8E8u) goto L_08B2A8E8;
    return;
L_08B2A8E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A8F8;
      }
      goto L_08B2A8F0;
    }
L_08B2A8F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08B2A8FC;
      }
      goto L_08B2A8F8;
    }
L_08B2A8F8:
    ctx.gpr[17] = (0u | 0u);
    goto L_08B2A8FC;
L_08B2A8FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08B2A908u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem) && ctx.pc == 0x08B2A908u) goto L_08B2A908;
    return;
L_08B2A908:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B2A91Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08B2A91Cu) goto L_08B2A91C;
    return;
L_08B2A91C:
    ctx.gpr[2] = (0u | 0u);
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
L_08B2A93C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B2A95Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A95Cu) goto L_08B2A95C;
    return;
L_08B2A95C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11836), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B2A978:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B2A998u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A998u) goto L_08B2A998;
    return;
L_08B2A998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11832), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B2A9B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B2A9DCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2A9DCu) goto L_08B2A9DC;
    return;
L_08B2A9DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2A9E8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2A9E8u) goto L_08B2A9E8;
    return;
L_08B2A9E8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08B2A9F4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08B2A9F4u) goto L_08B2A9F4;
    return;
L_08B2A9F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2AA00;
      }
      goto L_08B2A9FC;
    }
L_08B2A9FC:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B2AA00;
L_08B2AA00:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B2AA2C;
      }
      goto L_08B2AA24;
    }
L_08B2AA24:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B2AA74;
      }
      goto L_08B2AA2C;
    }
L_08B2AA2C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B2AA58;
      }
      goto L_08B2AA4C;
    }
L_08B2AA4C:
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B2AA74;
      }
      goto L_08B2AA58;
    }
L_08B2AA58:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2AA74;
      }
      goto L_08B2AA70;
    }
L_08B2AA70:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2AA74;
L_08B2AA74:
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
L_08B2AA8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2AAB4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2AAB4u) goto L_08B2AAB4;
    return;
L_08B2AAB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24276)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
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
L_08B2AAFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2AB24u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2AB24u) goto L_08B2AB24;
    return;
L_08B2AB24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24276)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (~(ctx.gpr[7] | 0u));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
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
L_08B2AB70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08B2AB9Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2AB9Cu) goto L_08B2AB9C;
    return;
L_08B2AB9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2ABA8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2ABA8u) goto L_08B2ABA8;
    return;
L_08B2ABA8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2ABB8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2ABB8u) goto L_08B2ABB8;
    return;
L_08B2ABB8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B2ABCCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 65u, 0x0890C42Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2ABCCu) goto L_08B2ABCC;
    return;
L_08B2ABCC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B2ABDCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 65u, 0x0890C42Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2ABDCu) goto L_08B2ABDC;
    return;
L_08B2ABDC:
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
L_08B2ABF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2AC20u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2AC20u) goto L_08B2AC20;
    return;
L_08B2AC20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2AC2Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2AC2Cu) goto L_08B2AC2C;
    return;
L_08B2AC2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(1918), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
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
L_08B2AC5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2AC84u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2AC84u) goto L_08B2AC84;
    return;
L_08B2AC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2AC90u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2AC90u) goto L_08B2AC90;
    return;
L_08B2AC90:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2ACCC;
      }
      goto L_08B2ACA0;
    }
L_08B2ACA0:
    ctx.gpr[31] = (0x08B2ACA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x08B2ACA8u) goto L_08B2ACA8;
    return;
L_08B2ACA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(888), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(889), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B2ACF0;
      }
      goto L_08B2ACCC;
    }
L_08B2ACCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 15u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(888), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(889), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B2ACF0;
L_08B2ACF0:
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
L_08B2AD08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2AD30u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2AD30u) goto L_08B2AD30;
    return;
L_08B2AD30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2AD3Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2AD3Cu) goto L_08B2AD3C;
    return;
L_08B2AD3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B2AD58;
      }
      goto L_08B2AD50;
    }
L_08B2AD50:
    ctx.gpr[31] = (0x08B2AD58u);
    ctx.gpr[5] = (0u | 146u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08B2AD58u) goto L_08B2AD58;
    return;
L_08B2AD58:
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
L_08B2AD70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08B2AD98u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2AD98u) goto L_08B2AD98;
    return;
L_08B2AD98:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2ADD4;
      }
      goto L_08B2ADCC;
    }
L_08B2ADCC:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B2ADD4;
L_08B2ADD4:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2ADEC;
      }
      goto L_08B2ADE4;
    }
L_08B2ADE4:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_08B2ADEC;
L_08B2ADEC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08B2AE08;
    }
    goto L_08B2ADFC;
L_08B2ADFC:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08B2AE08;
L_08B2AE08:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[31] = (0x08B2AE28u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 143u, 0x08894B04u>(ctx, &aot_mem) && ctx.pc == 0x08B2AE28u) goto L_08B2AE28;
    return;
L_08B2AE28:
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
L_08B2AE40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08B2AE68u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2AE68u) goto L_08B2AE68;
    return;
L_08B2AE68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2AE74u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2AE74u) goto L_08B2AE74;
    return;
L_08B2AE74:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08B2AE84u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08B2AE84u) goto L_08B2AE84;
    return;
L_08B2AE84:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B2AEA8;
      }
      goto L_08B2AE94;
    }
L_08B2AE94:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B2AEA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 933u, 0x0892BDC4u>(ctx, &aot_mem) && ctx.pc == 0x08B2AEA0u) goto L_08B2AEA0;
    return;
L_08B2AEA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2AEB0;
      }
      goto L_08B2AEA8;
    }
L_08B2AEA8:
    ctx.gpr[31] = (0x08B2AEB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 933u, 0x0892BDC4u>(ctx, &aot_mem) && ctx.pc == 0x08B2AEB0u) goto L_08B2AEB0;
    return;
L_08B2AEB0:
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
L_08B2AEC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2AF04u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2AF04u) goto L_08B2AF04;
    return;
L_08B2AF04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08B2AF10u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08B2AF10u) goto L_08B2AF10;
    return;
L_08B2AF10:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B2AF20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2AF20u) goto L_08B2AF20;
    return;
L_08B2AF20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2AF48;
      }
      goto L_08B2AF28;
    }
L_08B2AF28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B2AF34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2AF34u) goto L_08B2AF34;
    return;
L_08B2AF34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2AF40u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem) && ctx.pc == 0x08B2AF40u) goto L_08B2AF40;
    return;
L_08B2AF40:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B2AF50;
      }
      goto L_08B2AF48;
    }
L_08B2AF48:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    goto L_08B2AF50;
L_08B2AF50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B2AF60u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08B2AF60u) goto L_08B2AF60;
    return;
L_08B2AF60:
    ctx.gpr[2] = (0u | 0u);
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
L_08B2AF84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2AFACu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2AFACu) goto L_08B2AFAC;
    return;
L_08B2AFAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2AFB8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2AFB8u) goto L_08B2AFB8;
    return;
L_08B2AFB8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(464)));
      if (branch_taken) {
          goto L_08B2AFD4;
      }
      goto L_08B2AFC8;
    }
L_08B2AFC8:
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B2AFE0;
      }
      goto L_08B2AFD4;
    }
L_08B2AFD4:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    goto L_08B2AFE0;
L_08B2AFE0:
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
L_08B2AFF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2B020u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2B020u) goto L_08B2B020;
    return;
L_08B2B020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2B02Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2B02Cu) goto L_08B2B02C;
    return;
L_08B2B02C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(464)));
      if (branch_taken) {
          goto L_08B2B04C;
      }
      goto L_08B2B03C;
    }
L_08B2B03C:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B2B054;
      }
      goto L_08B2B04C;
    }
L_08B2B04C:
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    goto L_08B2B054;
L_08B2B054:
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
L_08B2B06C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2B09Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2B09Cu) goto L_08B2B09C;
    return;
L_08B2B09C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2B0A8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2B0A8u) goto L_08B2B0A8;
    return;
L_08B2B0A8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08B2B0B8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08B2B0B8u) goto L_08B2B0B8;
    return;
L_08B2B0B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B2B0F8;
      }
      goto L_08B2B0CC;
    }
L_08B2B0CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B2B0F8;
      }
      goto L_08B2B0DC;
    }
L_08B2B0DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B2B0F0;
      }
      goto L_08B2B0E8;
    }
L_08B2B0E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08B2B0FC;
      }
      goto L_08B2B0F0;
    }
L_08B2B0F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B2B0FC;
      }
      goto L_08B2B0F8;
    }
L_08B2B0F8:
    ctx.gpr[4] = (0u | 0u);
    goto L_08B2B0FC;
L_08B2B0FC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B2B120;
      }
      goto L_08B2B118;
    }
L_08B2B118:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B2B168;
      }
      goto L_08B2B120;
    }
L_08B2B120:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B2B14C;
      }
      goto L_08B2B140;
    }
L_08B2B140:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B2B168;
      }
      goto L_08B2B14C;
    }
L_08B2B14C:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B168;
      }
      goto L_08B2B164;
    }
L_08B2B164:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2B168;
L_08B2B168:
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
L_08B2B184:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B2B1ACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2B1ACu) goto L_08B2B1AC;
    return;
L_08B2B1AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2B1B8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2B1B8u) goto L_08B2B1B8;
    return;
L_08B2B1B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B2B1E4;
      }
      goto L_08B2B1CC;
    }
L_08B2B1CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B2B1E4;
      }
      goto L_08B2B1DC;
    }
L_08B2B1DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08B2B1E8;
      }
      goto L_08B2B1E4;
    }
L_08B2B1E4:
    ctx.gpr[4] = (0u | 0u);
    goto L_08B2B1E8;
L_08B2B1E8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B2B20C;
      }
      goto L_08B2B204;
    }
L_08B2B204:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B2B254;
      }
      goto L_08B2B20C;
    }
L_08B2B20C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B2B238;
      }
      goto L_08B2B22C;
    }
L_08B2B22C:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B2B254;
      }
      goto L_08B2B238;
    }
L_08B2B238:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B254;
      }
      goto L_08B2B250;
    }
L_08B2B250:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2B254;
L_08B2B254:
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
L_08B2B26C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B2B298u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2B298u) goto L_08B2B298;
    return;
L_08B2B298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2B2A4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2B2A4u) goto L_08B2B2A4;
    return;
L_08B2B2A4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08B2B2B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B2B2B4u) goto L_08B2B2B4;
    return;
L_08B2B2B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B2D8;
      }
      goto L_08B2B2BC;
    }
L_08B2B2BC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 18u);
      if (branch_taken) {
          goto L_08B2B2D8;
      }
      goto L_08B2B2CC;
    }
L_08B2B2CC:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B2B2D8;
      }
      goto L_08B2B2D4;
    }
L_08B2B2D4:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B2B2D8;
L_08B2B2D8:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B2B304;
      }
      goto L_08B2B2FC;
    }
L_08B2B2FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B2B34C;
      }
      goto L_08B2B304;
    }
L_08B2B304:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B2B330;
      }
      goto L_08B2B324;
    }
L_08B2B324:
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B2B34C;
      }
      goto L_08B2B330;
    }
L_08B2B330:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B34C;
      }
      goto L_08B2B348;
    }
L_08B2B348:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2B34C;
L_08B2B34C:
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
L_08B2B368:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2B398u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2B398u) goto L_08B2B398;
    return;
L_08B2B398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2B3A4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2B3A4u) goto L_08B2B3A4;
    return;
L_08B2B3A4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2B3B4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2B3B4u) goto L_08B2B3B4;
    return;
L_08B2B3B4:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B3F0;
      }
      goto L_08B2B3C8;
    }
L_08B2B3C8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (ctx.gpr[7] & 14u);
    ctx.gpr[7] = (ctx.gpr[7] ^ 6u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B3F0;
      }
      goto L_08B2B3E4;
    }
L_08B2B3E4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B2B3F0;
      }
      goto L_08B2B3EC;
    }
L_08B2B3EC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08B2B3F0;
L_08B2B3F0:
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
          goto L_08B2B41C;
      }
      goto L_08B2B414;
    }
L_08B2B414:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B2B464;
      }
      goto L_08B2B41C;
    }
L_08B2B41C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B2B448;
      }
      goto L_08B2B43C;
    }
L_08B2B43C:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B2B464;
      }
      goto L_08B2B448;
    }
L_08B2B448:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B464;
      }
      goto L_08B2B460;
    }
L_08B2B460:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2B464;
L_08B2B464:
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
L_08B2B480:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2B4B0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2B4B0u) goto L_08B2B4B0;
    return;
L_08B2B4B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2B4BCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2B4BCu) goto L_08B2B4BC;
    return;
L_08B2B4BC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[31] = (0x08B2B4CCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem) && ctx.pc == 0x08B2B4CCu) goto L_08B2B4CC;
    return;
L_08B2B4CC:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B508;
      }
      goto L_08B2B4E0;
    }
L_08B2B4E0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (ctx.gpr[7] & 14u);
    ctx.gpr[7] = (ctx.gpr[7] ^ 8u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B508;
      }
      goto L_08B2B4FC;
    }
L_08B2B4FC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B2B508;
      }
      goto L_08B2B504;
    }
L_08B2B504:
    ctx.gpr[4] = (0u | 1u);
    goto L_08B2B508;
L_08B2B508:
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
          goto L_08B2B534;
      }
      goto L_08B2B52C;
    }
L_08B2B52C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B2B57C;
      }
      goto L_08B2B534;
    }
L_08B2B534:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B2B560;
      }
      goto L_08B2B554;
    }
L_08B2B554:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B2B57C;
      }
      goto L_08B2B560;
    }
L_08B2B560:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B57C;
      }
      goto L_08B2B578;
    }
L_08B2B578:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2B57C;
L_08B2B57C:
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
L_08B2B598:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08B2B5C0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2B5C0u) goto L_08B2B5C0;
    return;
L_08B2B5C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2B5CCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2B5CCu) goto L_08B2B5CC;
    return;
L_08B2B5CC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08B2B5DCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08B2B5DCu) goto L_08B2B5DC;
    return;
L_08B2B5DC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B2B630u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 76u, 0x0892C914u>(ctx, &aot_mem) && ctx.pc == 0x08B2B630u) goto L_08B2B630;
    return;
L_08B2B630:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B2B648:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B2B668u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2B668u) goto L_08B2B668;
    return;
L_08B2B668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2B674u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2B674u) goto L_08B2B674;
    return;
L_08B2B674:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B6C0;
      }
      goto L_08B2B680;
    }
L_08B2B680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B6C0;
      }
      goto L_08B2B68C;
    }
L_08B2B68C:
    ctx.gpr[31] = (0x08B2B694u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 636u, 0x0890EAA4u>(ctx, &aot_mem) && ctx.pc == 0x08B2B694u) goto L_08B2B694;
    return;
L_08B2B694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B2B6ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2B6ACu) goto L_08B2B6AC;
    return;
L_08B2B6AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B6C0;
      }
      goto L_08B2B6B4;
    }
L_08B2B6B4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3236), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08B2B6C0;
L_08B2B6C0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B2B6D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2B6FCu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2B6FCu) goto L_08B2B6FC;
    return;
L_08B2B6FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2B708u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2B708u) goto L_08B2B708;
    return;
L_08B2B708:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B764;
      }
      goto L_08B2B714;
    }
L_08B2B714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B764;
      }
      goto L_08B2B720;
    }
L_08B2B720:
    ctx.gpr[31] = (0x08B2B728u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2B728u) goto L_08B2B728;
    return;
L_08B2B728:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B764;
      }
      goto L_08B2B730;
    }
L_08B2B730:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3236), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08B2B764;
L_08B2B764:
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
L_08B2B77C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B2B79Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2B79Cu) goto L_08B2B79C;
    return;
L_08B2B79C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2B7A8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2B7A8u) goto L_08B2B7A8;
    return;
L_08B2B7A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B7BC;
      }
      goto L_08B2B7B4;
    }
L_08B2B7B4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08B2B7BC;
L_08B2B7BC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B2B7D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x08B2B824u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2B824u) goto L_08B2B824;
    return;
L_08B2B824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08B2B838u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B2B838u) goto L_08B2B838;
    return;
L_08B2B838:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[22] - ctx.fpr[12];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[30] = (2239u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(21784));
    ctx.gpr[22] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[21] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08B2B86C;
L_08B2B86C:
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08B2BA34;
      }
      goto L_08B2B878;
    }
L_08B2B878:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B2BA34;
      }
      goto L_08B2B884;
    }
L_08B2B884:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[22] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B2B8A0;
      }
      goto L_08B2B88C;
    }
L_08B2B88C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08B2B8A8;
    }
    goto L_08B2B8A0;
L_08B2B8A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B2B8C8;
      }
      goto L_08B2B8A8;
    }
L_08B2B8A8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08B2B8C4;
    }
    goto L_08B2B8BC;
L_08B2B8BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B2B8C8;
      }
      goto L_08B2B8C4;
    }
L_08B2B8C4:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[21]);
    goto L_08B2B8C8;
L_08B2B8C8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B8D0;
    }
L_08B2B8D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2B8DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem) && ctx.pc == 0x08B2B8DCu) goto L_08B2B8DC;
    return;
L_08B2B8DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7980)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B8E8;
    }
L_08B2B8E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B8F8;
    }
L_08B2B8F8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08B2B918u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 534u, 0x08862F30u>(ctx, &aot_mem) && ctx.pc == 0x08B2B918u) goto L_08B2B918;
    return;
L_08B2B918:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B920;
    }
L_08B2B920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B930;
    }
L_08B2B930:
    ctx.gpr[31] = (0x08B2B938u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08B2B938u) goto L_08B2B938;
    return;
L_08B2B938:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
        goto L_08B2B95C;
    }
    goto L_08B2B940;
L_08B2B940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 41u);
      if (branch_taken) {
          goto L_08B2B958;
      }
      goto L_08B2B950;
    }
L_08B2B950:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B958;
    }
L_08B2B958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    goto L_08B2B95C;
L_08B2B95C:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (32768u << 16u);
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B968;
    }
L_08B2B968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2u << 16u);
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B978;
    }
L_08B2B978:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B984;
    }
L_08B2B984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B990;
    }
L_08B2B990:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08B2B9A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 788u, 0x08AAF8F4u>(ctx, &aot_mem) && ctx.pc == 0x08B2B9A8u) goto L_08B2B9A8;
    return;
L_08B2B9A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B9B0;
    }
L_08B2B9B0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B9C8;
    }
L_08B2B9C8:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B9D8;
    }
L_08B2B9D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2B9E4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem) && ctx.pc == 0x08B2B9E4u) goto L_08B2B9E4;
    return;
L_08B2B9E4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7980), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B2B9F8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem) && ctx.pc == 0x08B2B9F8u) goto L_08B2B9F8;
    return;
L_08B2B9F8:
    ctx.gpr[4] = (65532u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2BA18;
    }
L_08B2BA18:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2BA2Cu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 275u, 0x08861C90u>(ctx, &aot_mem) && ctx.pc == 0x08B2BA2Cu) goto L_08B2BA2C;
    return;
L_08B2BA2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B2B86C;
      }
      goto L_08B2BA34;
    }
L_08B2BA34:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(29704), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B2BA48u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08B2BA48u) goto L_08B2BA48;
    return;
L_08B2BA48:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_08B2BA84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B2BAB4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2BAB4u) goto L_08B2BAB4;
    return;
L_08B2BAB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2BAC0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2BAC0u) goto L_08B2BAC0;
    return;
L_08B2BAC0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08B2BB58;
      }
      goto L_08B2BADC;
    }
L_08B2BADC:
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (ctx.lo);
    goto L_08B2BAE8;
L_08B2BAE8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B2BB00;
      }
      goto L_08B2BAF0;
    }
L_08B2BAF0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08B2BB08;
    }
    goto L_08B2BB00;
L_08B2BB00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08B2BB28;
      }
      goto L_08B2BB08;
    }
L_08B2BB08:
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08B2BB24;
    }
    goto L_08B2BB1C;
L_08B2BB1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08B2BB28;
      }
      goto L_08B2BB24;
    }
L_08B2BB24:
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    goto L_08B2BB28;
L_08B2BB28:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BB44;
      }
      goto L_08B2BB30;
    }
L_08B2BB30:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B2BB44;
      }
      goto L_08B2BB3C;
    }
L_08B2BB3C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_08B2BB44;
L_08B2BB44:
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08B2BAE8;
      }
      goto L_08B2BB58;
    }
L_08B2BB58:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B2BB6Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08B2BB6Cu) goto L_08B2BB6C;
    return;
L_08B2BB6C:
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
L_08B2BB88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B2BBB8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2BBB8u) goto L_08B2BBB8;
    return;
L_08B2BBB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2BBC4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2BBC4u) goto L_08B2BBC4;
    return;
L_08B2BBC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B2BBF4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08B2BBF4u) goto L_08B2BBF4;
    return;
L_08B2BBF4:
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
L_08B2BC10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B2BC3Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2BC3Cu) goto L_08B2BC3C;
    return;
L_08B2BC3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2BC48u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2BC48u) goto L_08B2BC48;
    return;
L_08B2BC48:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08B2BC58u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B2BC58u) goto L_08B2BC58;
    return;
L_08B2BC58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BC84;
      }
      goto L_08B2BC60;
    }
L_08B2BC60:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BC84;
      }
      goto L_08B2BC6C;
    }
L_08B2BC6C:
    ctx.gpr[31] = (0x08B2BC74u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x08B2BC74u) goto L_08B2BC74;
    return;
L_08B2BC74:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B2BC84;
      }
      goto L_08B2BC80;
    }
L_08B2BC80:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B2BC84;
L_08B2BC84:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B2BCB0;
      }
      goto L_08B2BCA8;
    }
L_08B2BCA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B2BCF8;
      }
      goto L_08B2BCB0;
    }
L_08B2BCB0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B2BCDC;
      }
      goto L_08B2BCD0;
    }
L_08B2BCD0:
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B2BCF8;
      }
      goto L_08B2BCDC;
    }
L_08B2BCDC:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BCF8;
      }
      goto L_08B2BCF4;
    }
L_08B2BCF4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2BCF8;
L_08B2BCF8:
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
L_08B2BD14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2BD50u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2BD50u) goto L_08B2BD50;
    return;
L_08B2BD50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2BD5Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2BD5Cu) goto L_08B2BD5C;
    return;
L_08B2BD5C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BDD8;
      }
      goto L_08B2BD7C;
    }
L_08B2BD7C:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2BDC4;
      }
      goto L_08B2BDA0;
    }
L_08B2BDA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B2BDC4;
      }
      goto L_08B2BDAC;
    }
L_08B2BDAC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B2BDB8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 571u, 0x089068C8u>(ctx, &aot_mem) && ctx.pc == 0x08B2BDB8u) goto L_08B2BDB8;
    return;
L_08B2BDB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BDC4;
      }
      goto L_08B2BDC0;
    }
L_08B2BDC0:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B2BDC4;
L_08B2BDC4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BD7C;
      }
      goto L_08B2BDD8;
    }
L_08B2BDD8:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B2BE04;
      }
      goto L_08B2BDFC;
    }
L_08B2BDFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B2BE54;
      }
      goto L_08B2BE04;
    }
L_08B2BE04:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
        goto L_08B2BE34;
    }
    goto L_08B2BE20;
L_08B2BE20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B2BE54;
      }
      goto L_08B2BE34;
    }
L_08B2BE34:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BE54;
      }
      goto L_08B2BE50;
    }
L_08B2BE50:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2BE54;
L_08B2BE54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B2BE5C;
      }
      goto L_08B2BE5C;
    }
L_08B2BE5C:
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
L_08B2BE7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B2BE9Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2BE9Cu) goto L_08B2BE9C;
    return;
L_08B2BE9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-13362), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-13362))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08B2BEC0;
    }
    goto L_08B2BEC0;
L_08B2BEC0:
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-13362), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B2BED8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2BF00u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2BF00u) goto L_08B2BF00;
    return;
L_08B2BF00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2BF0Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2BF0Cu) goto L_08B2BF0C;
    return;
L_08B2BF0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1776), ctx.gpr[4]);
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
L_08B2BF2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B2BF54u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2BF54u) goto L_08B2BF54;
    return;
L_08B2BF54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2BF60u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2BF60u) goto L_08B2BF60;
    return;
L_08B2BF60:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_08B2BF80;
      }
      goto L_08B2BF70;
    }
L_08B2BF70:
    ctx.gpr[31] = (0x08B2BF78u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 631u, 0x08A067DCu>(ctx, &aot_mem) && ctx.pc == 0x08B2BF78u) goto L_08B2BF78;
    return;
L_08B2BF78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BF88;
      }
      goto L_08B2BF80;
    }
L_08B2BF80:
    ctx.gpr[31] = (0x08B2BF88u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 631u, 0x08A067DCu>(ctx, &aot_mem) && ctx.pc == 0x08B2BF88u) goto L_08B2BF88;
    return;
L_08B2BF88:
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
L_08B2BFA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08B2BFC0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2BFC0u) goto L_08B2BFC0;
    return;
L_08B2BFC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08B2BFCCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08B2BFCCu) goto L_08B2BFCC;
    return;
L_08B2BFCC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B2BFD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B2BFD8u) goto L_08B2BFD8;
    return;
L_08B2BFD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 2u, 0x08B2C014u>(ctx, &aot_mem); return;
      }
      goto L_08B2BFE0;
    }
L_08B2BFE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B2BFECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B2BFECu) goto L_08B2BFEC;
    return;
L_08B2BFEC:
    ctx.gpr[31] = (0x08B2BFF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 976u, 0x0890BDFCu>(ctx, &aot_mem) && ctx.pc == 0x08B2BFF4u) goto L_08B2BFF4;
    return;
L_08B2BFF4:
    ctx.gpr[31] = (0x08B2BFFCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 195u, 0x0886D420u>(ctx, &aot_mem) && ctx.pc == 0x08B2BFFCu) goto L_08B2BFFC;
    return;
L_08B2BFFC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(776), 0u);
    ctx.pc = 0x08B2C000u; return;
}

void recomp_unit_0201(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0201_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_201(Runtime &runtime) {
    runtime.register_generated_unit(201u, 0x08B28000u, 16384u, &recomp_unit_0201, &recomp_unit_0201_entry);
    runtime.register_function(0x08B28000u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28018u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28030u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28064u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28070u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28080u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28090u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28098u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B280A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B280ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B280BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B280C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B280D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B280E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B280E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B280FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28104u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28124u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28130u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28148u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2814Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2816Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28194u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B281A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B281B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B281C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B281F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28204u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28224u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2822Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28230u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2824Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28254u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28274u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28280u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28298u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2829Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B282B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B282C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B282D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28304u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28310u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28328u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28334u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28340u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28348u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28354u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28358u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28368u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28370u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28378u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28384u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2838Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28394u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B283B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B283C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B283C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B283D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B283D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B283E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28400u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2841Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28424u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28430u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28438u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28440u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28458u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28460u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2846Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28474u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2847Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28494u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B284B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B284E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B284ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B284F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28504u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28514u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28520u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2852Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28538u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28540u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28548u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28560u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28568u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28570u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28580u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2858Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2859Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B285BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B285ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B285F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28604u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28618u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28624u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2863Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2864Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28690u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B286A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B286C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B286CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B286D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B286E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28704u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2872Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28738u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28744u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28750u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2875Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28778u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28790u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B287B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B287C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B287D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B287D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B287F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2880Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28834u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28840u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28850u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28860u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28878u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28898u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B288A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B288ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B288C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B288E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28914u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2892Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2894Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28958u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28968u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2897Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B289B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B289C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B289D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B289DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B289F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A00u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A18u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A28u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A30u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A38u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A44u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A5Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A68u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A90u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28AA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28AC8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28ACCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28AD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28AE4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B0Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B34u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B40u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B4Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B54u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B5Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B68u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B70u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B78u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B98u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28BA0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28BBCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28BC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28BD0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28BE8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28C18u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28C24u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28C44u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28C60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28C88u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28C94u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28CA4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28CBCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28CC8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28CECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28D0Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28D18u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28D34u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28D54u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28D5Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28D64u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28D78u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28DA0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28DACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28DB8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28DD0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28DF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28E04u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28E38u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28E60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28E6Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28E88u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28E98u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28E9Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28EB4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28ED8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28EE4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28EF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F04u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F08u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F2Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F34u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F54u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F78u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F7Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F90u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28FB8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28FC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28FD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28FE4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28FF4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2900Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29034u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29040u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29050u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29064u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29078u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29080u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29094u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B290A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B290B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B290C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B290D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B290E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B290F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29108u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29110u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29120u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29130u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29148u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29170u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2917Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2922Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29234u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2923Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29240u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29264u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2926Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29284u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29298u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B292B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B292BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B292D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29304u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29310u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2932Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29340u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29348u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2934Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29370u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29378u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29398u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B293A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B293BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B293C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B293CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B293F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B293FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29418u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29448u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29454u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29480u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29484u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B294A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B294B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B294D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B294DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B294F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B294F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29514u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2957Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B295A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B295D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B295E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B295F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B295F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2960Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29614u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29628u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29630u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29634u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2963Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29648u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29654u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29664u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2966Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29674u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29684u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29694u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B296A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B296B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B296C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B296D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B296E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B296F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29708u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29714u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29728u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29740u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29754u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2975Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29760u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29774u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B297C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29810u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2981Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29824u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29830u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29844u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29850u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2986Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2987Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B298BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B298C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B298D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B298DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B298F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B298F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29910u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29918u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29920u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29928u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29934u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29940u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29950u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29958u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29960u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29970u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29980u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2998Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B299A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B299ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B299BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B299C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B299E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B299F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A00u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A10u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A1Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A30u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A50u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A64u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A6Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29AC0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29AE8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29AF4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29B0Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29B10u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29B34u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29B3Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29B5Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29B68u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29B80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29B84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29B9Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29BC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29BD0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29C0Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29C30u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29C60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29C6Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29C80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29C84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29CA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29CB0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29CD0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29CDCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29CF4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29CF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29D14u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29D3Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29D48u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29D58u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29D64u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29D70u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29D88u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29DB8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29DC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29DD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29DE4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29DF0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E00u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E08u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E10u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E18u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E1Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E40u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E48u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E68u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E74u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E8Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E90u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29EACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29EDCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29EE8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29EF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29F08u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29F1Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29F20u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29F44u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29F4Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29F6Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29F78u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29F90u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29F94u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29FB0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29FD0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29FDCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A000u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A014u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A03Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A048u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A058u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A068u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A078u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A090u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A0B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A0C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A0E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A0F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A108u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A120u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A14Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A158u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A164u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A16Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A174u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A184u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A18Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A194u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A1A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A1A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A1B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A1BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A1F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A208u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A210u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A218u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A224u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A240u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A25Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A284u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A290u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A2A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A2B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A2B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A2D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A300u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A30Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A324u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A330u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A338u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A33Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A354u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A360u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A368u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A370u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A388u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A394u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A39Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A3A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A3ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A3B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A3D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A3FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A408u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A42Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A434u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A43Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A45Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A464u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A46Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A488u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A490u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A494u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A4A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A4ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A4CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A504u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A510u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A520u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A534u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A53Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A540u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A564u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A56Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A58Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A598u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A608u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A618u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A62Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A638u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A640u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A658u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A680u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A68Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A6A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A6ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A6C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A6C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A6DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A6F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A71Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A728u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A738u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A748u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A758u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A770u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A798u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A818u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A824u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A83Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A840u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A858u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A878u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A888u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A89Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A908u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A91Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A93Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A95Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A978u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A998u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA00u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA24u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA2Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA4Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA58u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA70u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA74u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA8Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AAB4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AAFCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB24u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB70u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB9Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABB8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABCCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABDCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC20u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC2Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC5Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC90u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACA0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACCCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACF0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD08u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD30u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD3Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD50u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD58u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD70u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD98u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADCCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADE4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADFCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE08u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE28u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE40u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE68u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE74u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE94u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AEA0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AEA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AEB0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AEC8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF04u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF10u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF20u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF28u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF34u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF40u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF48u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF50u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFB8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFC8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFE0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B020u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B02Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B03Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B04Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B054u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B06Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B09Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B118u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B120u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B140u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B14Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B164u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B168u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B184u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B204u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B20Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B22Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B238u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B250u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B254u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B26Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B298u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B2A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B2B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B2BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B2CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B2D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B2D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B2FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B304u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B324u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B330u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B348u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B34Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B368u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B398u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B3A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B3B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B3C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B3E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B3ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B3F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B414u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B41Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B43Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B448u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B460u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B464u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B480u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B4B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B4BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B4CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B4E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B4FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B504u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B508u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B52Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B534u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B554u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B560u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B578u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B57Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B598u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B5C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B5CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B5DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B630u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B648u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B668u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B674u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B680u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B68Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B694u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B708u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B714u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B720u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B728u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B730u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B764u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B77Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B79Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B824u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B838u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B86Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B878u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B884u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B88Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B918u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B920u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B930u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B938u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B940u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B950u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B958u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B95Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B968u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B978u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B984u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B990u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B9A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B9B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B9C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B9D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B9E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B9F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA18u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA2Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA34u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA48u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BAB4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BAC0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BADCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BAE8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BAF0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB00u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB08u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB1Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB24u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB28u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB30u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB3Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB44u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB58u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB6Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB88u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BBB8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BBC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BBF4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BC10u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BC3Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BC48u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BC58u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BC60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BC6Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BC74u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BC80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BC84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BCA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BCB0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BCD0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BCDCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BCF4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BCF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BD14u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BD50u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BD5Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BD7Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDA0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDB8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDC0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDD8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDFCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE04u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE20u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE34u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE50u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE54u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE5Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE7Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE9Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BEC0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BED8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF00u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF0Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF2Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF54u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF70u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF78u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF88u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFA0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFC0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFCCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFD8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFE0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFF4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFFCu, &recomp_unit_0201, "recomp_unit_0201");
}
} // namespace psprecomp
