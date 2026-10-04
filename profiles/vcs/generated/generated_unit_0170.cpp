#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0170[4091] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 8, 0, 0,
    0, 0, 0, 9, 0, 10, 0, 0, 0, 11, 0, 0, 12, 13, 0, 14, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18,
    0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26,
    0, 0, 0, 27, 28, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33,
    0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 39, 40, 0, 41, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 49, 0, 50, 0, 0, 51, 0, 0, 0,
    0, 52, 0, 0, 0, 0, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0,
    60, 0, 0, 0, 61, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 66, 0, 0, 67, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 78,
    0, 0, 79, 0, 0, 80, 81, 0, 0, 82, 0, 83, 84, 0, 0, 85, 0, 86, 87, 0, 0, 88, 0, 89, 90, 0, 0, 91, 0, 92, 93, 0,
    0, 94, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 98, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120,
    0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0,
    131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 141,
    0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 150, 151, 152, 0,
    153, 154, 155, 0, 156, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 168, 0,
    0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0,
    0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 185, 186, 187, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 193, 194, 0,
    195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 200, 201, 0, 202, 0, 0, 0, 0, 203, 204, 0, 0,
    0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 220,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0,
    0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250,
    0, 0, 251, 0, 252, 0, 253, 0, 0, 0, 254, 0, 255, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 263, 0, 0, 0,
    0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0,
    0, 269, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0,
    0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 285, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0,
    289, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 294, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 304, 305, 0, 0,
    0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0,
    0, 313, 0, 314, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 319, 0, 320, 0,
    0, 0, 0, 321, 0, 0, 0, 322, 0, 323, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0,
    0, 328, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 332, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 336, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342,
    0, 343, 0, 344, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 348, 0, 349, 0, 350, 0, 0, 351, 0, 0, 352, 353, 0, 0, 0, 354,
    0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 357, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360,
    0, 0, 361, 362, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 368, 0, 369, 0, 0,
    370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0,
    377, 0, 0, 378, 0, 379, 0, 380, 0, 0, 0, 0, 381, 0, 0, 382, 383, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 386, 0,
    387, 0, 388, 389, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 396, 0, 0, 0, 0,
    0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 401, 0, 0, 402, 0, 0, 0, 0, 403, 0, 404, 0, 405, 0, 0, 406,
    0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412,
    0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0,
    0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 426, 0, 427, 0, 428, 0, 429, 0, 430, 431, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 436,
    0, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 440, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 445, 0,
    0, 446, 447, 0, 448, 0, 449, 0, 450, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 453, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0,
    0, 0, 456, 457, 0, 0, 0, 458, 0, 459, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0,
    463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0,
    0, 468, 0, 0, 0, 0, 0, 469, 0, 470, 471, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0,
    476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0,
    481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 485, 486, 0, 0, 487, 0, 0, 0, 0, 0, 0,
    0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 493, 0, 494, 495, 0, 496, 0, 0, 0, 497, 0,
    0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 505,
    0, 506, 507, 0, 508, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 513, 0, 514, 0, 0, 0, 515,
    0, 516, 517, 0, 518, 0, 0, 0, 519, 0, 520, 521, 0, 522, 0, 0, 0, 523, 0, 524, 525, 0, 526, 0, 0, 0, 527, 0, 528, 529, 0, 530,
    0, 0, 0, 531, 0, 532, 533, 0, 534, 0, 0, 0, 535, 0, 536, 537, 0, 538, 0, 0, 0, 539, 0, 540, 541, 0, 542, 0, 0, 0, 543, 0,
    544, 545, 0, 546, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 0, 551, 0, 0, 552, 0, 0, 553, 554, 555, 0, 0, 0, 0, 556,
    0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 561, 0, 562, 0, 0, 0, 0, 563, 0, 564, 0,
    0, 565, 0, 566, 0, 567, 0, 568, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0,
    573, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 578, 0, 579, 0, 0, 0, 0, 0, 580, 0, 581, 0,
    0, 0, 0, 582, 0, 583, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0, 0, 587, 0,
    588, 0, 0, 0, 0, 589, 0, 590, 591, 0, 592, 0, 0, 593, 0, 594, 0, 0, 595, 0, 0, 0, 596, 0, 597, 0, 598, 0, 0, 0, 599, 0,
    600, 0, 601, 0, 0, 602, 0, 0, 603, 0, 604, 0, 605, 0, 0, 0, 0, 0, 606, 0, 607, 0, 608, 609, 0, 0, 0, 0, 0, 0, 0, 0,
    610, 0, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 0, 614, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 617, 0, 618, 0,
    619, 0, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 625, 0, 626, 0, 0,
    0, 627, 0, 0, 628, 0, 0, 0, 629, 0, 0, 630, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0,
    634, 0, 635, 0, 0, 0, 0, 636, 0, 637, 0, 0, 0, 638, 0, 639, 0, 0, 640, 0, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 643, 0,
    0, 0, 644, 0, 645, 0, 0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 0, 652,
    0, 0, 0, 0, 653, 0, 654, 0, 0, 0, 0, 655, 0, 656, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 659, 0, 0, 0, 0, 0, 660,
    0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 665, 0, 666, 0, 0, 0, 667, 0, 0, 0,
    0, 0, 668, 0, 669, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 674, 0, 675, 0, 0, 0, 676, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 680, 0, 681, 0, 0, 0, 0, 682, 0, 683, 0, 0, 0,
    0, 684, 0, 685, 0, 0, 0, 686, 0, 0, 0, 687, 0, 688, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 691, 0, 692, 0, 0, 0, 693,
    0, 694, 0, 0, 0, 0, 0, 0, 0, 695, 0, 696, 0, 697, 0, 0, 0, 698, 0, 699, 0, 0, 0, 0, 700, 0, 701, 0, 0, 0, 0, 702,
    0, 703, 0, 0, 704, 0, 705, 0, 706, 0, 0, 0, 0, 707, 708, 0, 0, 709, 0, 0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 712, 0, 713,
    0, 0, 0, 0, 714, 0, 715, 0, 0, 0, 0, 716, 0, 717, 718, 719, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0, 0, 724, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 726, 0, 0, 727,
    0, 728, 0, 729, 0, 0, 730, 0, 0, 0, 731, 0, 0, 0, 0, 732, 0, 733, 0, 0, 734, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 738, 0, 0, 739, 0, 0, 0, 740, 0, 0, 0, 741, 0,
    0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 744, 0, 0, 0, 745, 0, 0, 0, 746, 0, 747, 0, 0, 0, 0, 748, 0, 749, 0, 750, 0,
    0, 0, 751, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 754, 0, 755, 0, 756, 757, 0, 0, 0, 0, 758,
    0, 0, 0, 0, 759, 0, 0, 0, 760, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 763, 0, 764, 0, 0, 0,
    765, 0, 766, 0, 0, 767, 0, 768, 0, 0, 0, 0, 769, 0, 770, 771, 0, 0, 772, 0, 0, 773, 0, 0, 0, 774, 775, 0, 0, 0, 0, 0,
    776, 0, 0, 777, 0, 0, 0, 778, 779, 0, 780, 0, 0, 0, 781, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 787, 0, 0, 0, 788, 0, 0,
    0, 789, 0, 0, 790, 0, 0, 0, 791, 0, 0, 792, 0, 0, 0, 793, 0, 0, 0, 794, 0, 0, 0, 0, 795, 0, 0, 0, 796, 0, 797, 798,
    0, 799, 0, 0, 0, 800, 0, 0, 801, 0, 0, 0, 802, 0, 0, 803, 0, 0, 0, 804, 0, 0, 805, 0, 0, 0, 806, 0, 0, 0, 807, 0,
    0, 0, 0, 808, 0, 0, 0, 809, 0, 0, 0, 0, 810, 0, 0, 0, 811, 0, 812, 813, 0, 814, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 816, 0, 0, 817, 0, 818, 0, 819, 0, 820, 0, 0, 821, 0, 822, 0, 0, 0, 823, 0, 0, 824, 0, 0, 0, 0,
    0, 825, 826, 0, 827, 0, 0, 0, 0, 828, 0, 0, 0, 829, 830, 0, 831, 0, 0, 0, 832, 0, 0, 0, 833, 0, 834, 0, 835, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 837, 0, 838, 0, 839, 0, 840, 0, 841, 0,
    842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 843, 0, 0, 844, 0, 845, 0, 0, 0, 846, 0, 0,
    847, 0, 0, 0, 0, 0, 0, 0, 848, 0, 849, 850, 0, 851, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 852, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 853, 0, 0, 0, 0, 0, 0, 0, 0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 856, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 858, 0, 0, 0, 0, 859, 0, 860,
    0, 861, 0, 0, 862, 0, 0, 0, 863, 0, 0, 0, 864, 0, 0, 865, 0, 0, 866, 0, 867, 0, 868, 0, 0, 0, 0, 869, 870, 871, 0, 0,
    872, 0, 0, 0, 0, 0, 0, 0, 873, 0, 0, 0, 0, 874, 0, 875, 0, 0, 876, 0, 877, 0, 878, 0, 879, 0, 880, 0, 881, 0, 0, 0,
    0, 882, 0, 883, 0, 0, 884, 0, 885, 0, 886, 0, 887, 0, 888, 0, 889, 0, 0, 0, 0, 890, 0, 0, 0, 0, 891,
};
void recomp_unit_0170_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AAC000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0170[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AAC000;
    case 2u: goto L_08AAC010;
    case 3u: goto L_08AAC020;
    case 4u: goto L_08AAC030;
    case 5u: goto L_08AAC040;
    case 6u: goto L_08AAC058;
    case 7u: goto L_08AAC06C;
    case 8u: goto L_08AAC074;
    case 9u: goto L_08AAC08C;
    case 10u: goto L_08AAC094;
    case 11u: goto L_08AAC0A4;
    case 12u: goto L_08AAC0B0;
    case 13u: goto L_08AAC0B4;
    case 14u: goto L_08AAC0BC;
    case 15u: goto L_08AAC0C8;
    case 16u: goto L_08AAC0D0;
    case 17u: goto L_08AAC0F0;
    case 18u: goto L_08AAC0FC;
    case 19u: goto L_08AAC120;
    case 20u: goto L_08AAC12C;
    case 21u: goto L_08AAC138;
    case 22u: goto L_08AAC144;
    case 23u: goto L_08AAC154;
    case 24u: goto L_08AAC15C;
    case 25u: goto L_08AAC16C;
    case 26u: goto L_08AAC17C;
    case 27u: goto L_08AAC18C;
    case 28u: goto L_08AAC190;
    case 29u: goto L_08AAC19C;
    case 30u: goto L_08AAC1A4;
    case 31u: goto L_08AAC1C0;
    case 32u: goto L_08AAC1CC;
    case 33u: goto L_08AAC1FC;
    case 34u: goto L_08AAC204;
    case 35u: goto L_08AAC214;
    case 36u: goto L_08AAC220;
    case 37u: goto L_08AAC234;
    case 38u: goto L_08AAC240;
    case 39u: goto L_08AAC248;
    case 40u: goto L_08AAC24C;
    case 41u: goto L_08AAC254;
    case 42u: goto L_08AAC258;
    case 43u: goto L_08AAC284;
    case 44u: goto L_08AAC290;
    case 45u: goto L_08AAC2A8;
    case 46u: goto L_08AAC2B8;
    case 47u: goto L_08AAC2C8;
    case 48u: goto L_08AAC2D4;
    case 49u: goto L_08AAC2DC;
    case 50u: goto L_08AAC2E4;
    case 51u: goto L_08AAC2F0;
    case 52u: goto L_08AAC304;
    case 53u: goto L_08AAC31C;
    case 54u: goto L_08AAC324;
    case 55u: goto L_08AAC32C;
    case 56u: goto L_08AAC334;
    case 57u: goto L_08AAC33C;
    case 58u: goto L_08AAC36C;
    case 59u: goto L_08AAC374;
    case 60u: goto L_08AAC380;
    case 61u: goto L_08AAC390;
    case 62u: goto L_08AAC394;
    case 63u: goto L_08AAC39C;
    case 64u: goto L_08AAC3C0;
    case 65u: goto L_08AAC3D4;
    case 66u: goto L_08AAC3DC;
    case 67u: goto L_08AAC3E8;
    case 68u: goto L_08AAC3FC;
    case 69u: goto L_08AAC410;
    case 70u: goto L_08AAC424;
    case 71u: goto L_08AAC438;
    case 72u: goto L_08AAC44C;
    case 73u: goto L_08AAC470;
    case 74u: goto L_08AAC48C;
    case 75u: goto L_08AAC4AC;
    case 76u: goto L_08AAC4D0;
    case 77u: goto L_08AAC4F8;
    case 78u: goto L_08AAC4FC;
    case 79u: goto L_08AAC508;
    case 80u: goto L_08AAC514;
    case 81u: goto L_08AAC518;
    case 82u: goto L_08AAC524;
    case 83u: goto L_08AAC52C;
    case 84u: goto L_08AAC530;
    case 85u: goto L_08AAC53C;
    case 86u: goto L_08AAC544;
    case 87u: goto L_08AAC548;
    case 88u: goto L_08AAC554;
    case 89u: goto L_08AAC55C;
    case 90u: goto L_08AAC560;
    case 91u: goto L_08AAC56C;
    case 92u: goto L_08AAC574;
    case 93u: goto L_08AAC578;
    case 94u: goto L_08AAC584;
    case 95u: goto L_08AAC58C;
    case 96u: goto L_08AAC59C;
    case 97u: goto L_08AAC5AC;
    case 98u: goto L_08AAC5B8;
    case 99u: goto L_08AAC5BC;
    case 100u: goto L_08AAC5C8;
    case 101u: goto L_08AAC5E8;
    case 102u: goto L_08AAC668;
    case 103u: goto L_08AAC68C;
    case 104u: goto L_08AAC6B0;
    case 105u: goto L_08AAC6DC;
    case 106u: goto L_08AAC6E8;
    case 107u: goto L_08AAC6F8;
    case 108u: goto L_08AAC718;
    case 109u: goto L_08AAC728;
    case 110u: goto L_08AAC738;
    case 111u: goto L_08AAC75C;
    case 112u: goto L_08AAC78C;
    case 113u: goto L_08AAC7AC;
    case 114u: goto L_08AAC7D0;
    case 115u: goto L_08AAC800;
    case 116u: goto L_08AAC818;
    case 117u: goto L_08AAC838;
    case 118u: goto L_08AAC848;
    case 119u: goto L_08AAC858;
    case 120u: goto L_08AAC87C;
    case 121u: goto L_08AAC88C;
    case 122u: goto L_08AAC89C;
    case 123u: goto L_08AAC8C0;
    case 124u: goto L_08AAC8D0;
    case 125u: goto L_08AAC8E0;
    case 126u: goto L_08AAC904;
    case 127u: goto L_08AAC934;
    case 128u: goto L_08AAC94C;
    case 129u: goto L_08AAC95C;
    case 130u: goto L_08AAC970;
    case 131u: goto L_08AAC980;
    case 132u: goto L_08AAC990;
    case 133u: goto L_08AAC9AC;
    case 134u: goto L_08AAC9BC;
    case 135u: goto L_08AAC9CC;
    case 136u: goto L_08AAC9DC;
    case 137u: goto L_08AAC9F0;
    case 138u: goto L_08AACA2C;
    case 139u: goto L_08AACA60;
    case 140u: goto L_08AACA6C;
    case 141u: goto L_08AACA7C;
    case 142u: goto L_08AACA88;
    case 143u: goto L_08AACAAC;
    case 144u: goto L_08AACAB4;
    case 145u: goto L_08AACABC;
    case 146u: goto L_08AACAC4;
    case 147u: goto L_08AACACC;
    case 148u: goto L_08AACAD4;
    case 149u: goto L_08AACADC;
    case 150u: goto L_08AACAF0;
    case 151u: goto L_08AACAF4;
    case 152u: goto L_08AACAF8;
    case 153u: goto L_08AACB00;
    case 154u: goto L_08AACB04;
    case 155u: goto L_08AACB08;
    case 156u: goto L_08AACB10;
    case 157u: goto L_08AACB14;
    case 158u: goto L_08AACB34;
    case 159u: goto L_08AACB48;
    case 160u: goto L_08AACB6C;
    case 161u: goto L_08AACB80;
    case 162u: goto L_08AACB9C;
    case 163u: goto L_08AACBB4;
    case 164u: goto L_08AACBC0;
    case 165u: goto L_08AACBC8;
    case 166u: goto L_08AACBDC;
    case 167u: goto L_08AACBF0;
    case 168u: goto L_08AACBF8;
    case 169u: goto L_08AACC08;
    case 170u: goto L_08AACC1C;
    case 171u: goto L_08AACC28;
    case 172u: goto L_08AACC54;
    case 173u: goto L_08AACC64;
    case 174u: goto L_08AACC70;
    case 175u: goto L_08AACC7C;
    case 176u: goto L_08AACCA0;
    case 177u: goto L_08AACCB4;
    case 178u: goto L_08AACCCC;
    case 179u: goto L_08AACCE0;
    case 180u: goto L_08AACCF4;
    case 181u: goto L_08AACD04;
    case 182u: goto L_08AACD10;
    case 183u: goto L_08AACD38;
    case 184u: goto L_08AACD8C;
    case 185u: goto L_08AACD9C;
    case 186u: goto L_08AACDA0;
    case 187u: goto L_08AACDA4;
    case 188u: goto L_08AACDAC;
    case 189u: goto L_08AACDB8;
    case 190u: goto L_08AACDC4;
    case 191u: goto L_08AACDE0;
    case 192u: goto L_08AACDF0;
    case 193u: goto L_08AACDF4;
    case 194u: goto L_08AACDF8;
    case 195u: goto L_08AACE00;
    case 196u: goto L_08AACE1C;
    case 197u: goto L_08AACE28;
    case 198u: goto L_08AACE3C;
    case 199u: goto L_08AACE4C;
    case 200u: goto L_08AACE50;
    case 201u: goto L_08AACE54;
    case 202u: goto L_08AACE5C;
    case 203u: goto L_08AACE70;
    case 204u: goto L_08AACE74;
    case 205u: goto L_08AACE88;
    case 206u: goto L_08AACEA0;
    case 207u: goto L_08AACF90;
    case 208u: goto L_08AACFA0;
    case 209u: goto L_08AACFAC;
    case 210u: goto L_08AAD008;
    case 211u: goto L_08AAD014;
    case 212u: goto L_08AAD024;
    case 213u: goto L_08AAD0E4;
    case 214u: goto L_08AAD0F4;
    case 215u: goto L_08AAD1B4;
    case 216u: goto L_08AAD1C4;
    case 217u: goto L_08AAD1E0;
    case 218u: goto L_08AAD268;
    case 219u: goto L_08AAD270;
    case 220u: goto L_08AAD27C;
    case 221u: goto L_08AAD2A8;
    case 222u: goto L_08AAD2C0;
    case 223u: goto L_08AAD2D0;
    case 224u: goto L_08AAD338;
    case 225u: goto L_08AAD348;
    case 226u: goto L_08AAD3B0;
    case 227u: goto L_08AAD3C4;
    case 228u: goto L_08AAD3DC;
    case 229u: goto L_08AAD3EC;
    case 230u: goto L_08AAD3F8;
    case 231u: goto L_08AAD408;
    case 232u: goto L_08AAD414;
    case 233u: goto L_08AAD430;
    case 234u: goto L_08AAD440;
    case 235u: goto L_08AAD45C;
    case 236u: goto L_08AAD4B4;
    case 237u: goto L_08AAD508;
    case 238u: goto L_08AAD510;
    case 239u: goto L_08AAD568;
    case 240u: goto L_08AAD5BC;
    case 241u: goto L_08AAD5C4;
    case 242u: goto L_08AAD5FC;
    case 243u: goto L_08AAD630;
    case 244u: goto L_08AAD638;
    case 245u: goto L_08AAD660;
    case 246u: goto L_08AAD674;
    case 247u: goto L_08AAD69C;
    case 248u: goto L_08AAD6C0;
    case 249u: goto L_08AAD6C8;
    case 250u: goto L_08AAD6FC;
    case 251u: goto L_08AAD708;
    case 252u: goto L_08AAD710;
    case 253u: goto L_08AAD718;
    case 254u: goto L_08AAD728;
    case 255u: goto L_08AAD730;
    case 256u: goto L_08AAD734;
    case 257u: goto L_08AAD750;
    case 258u: goto L_08AAD7B0;
    case 259u: goto L_08AAD7C4;
    case 260u: goto L_08AAD7CC;
    case 261u: goto L_08AAD7DC;
    case 262u: goto L_08AAD7E8;
    case 263u: goto L_08AAD7F0;
    case 264u: goto L_08AAD80C;
    case 265u: goto L_08AAD824;
    case 266u: goto L_08AAD844;
    case 267u: goto L_08AAD860;
    case 268u: goto L_08AAD878;
    case 269u: goto L_08AAD884;
    case 270u: goto L_08AAD88C;
    case 271u: goto L_08AAD8A0;
    case 272u: goto L_08AAD8BC;
    case 273u: goto L_08AAD908;
    case 274u: goto L_08AAD920;
    case 275u: goto L_08AAD934;
    case 276u: goto L_08AAD948;
    case 277u: goto L_08AAD95C;
    case 278u: goto L_08AAD970;
    case 279u: goto L_08AAD984;
    case 280u: goto L_08AAD998;
    case 281u: goto L_08AAD9A8;
    case 282u: goto L_08AAD9B4;
    case 283u: goto L_08AADA24;
    case 284u: goto L_08AADA34;
    case 285u: goto L_08AADA3C;
    case 286u: goto L_08AADA40;
    case 287u: goto L_08AADA58;
    case 288u: goto L_08AADA74;
    case 289u: goto L_08AADA80;
    case 290u: goto L_08AADA94;
    case 291u: goto L_08AADA9C;
    case 292u: goto L_08AADAB0;
    case 293u: goto L_08AADAC0;
    case 294u: goto L_08AADAC8;
    case 295u: goto L_08AADACC;
    case 296u: goto L_08AADAE4;
    case 297u: goto L_08AADB0C;
    case 298u: goto L_08AADB18;
    case 299u: goto L_08AADB2C;
    case 300u: goto L_08AADB34;
    case 301u: goto L_08AADB44;
    case 302u: goto L_08AADB58;
    case 303u: goto L_08AADB68;
    case 304u: goto L_08AADB70;
    case 305u: goto L_08AADB74;
    case 306u: goto L_08AADB8C;
    case 307u: goto L_08AADBA8;
    case 308u: goto L_08AADBB4;
    case 309u: goto L_08AADBC8;
    case 310u: goto L_08AADBD0;
    case 311u: goto L_08AADBE0;
    case 312u: goto L_08AADBF4;
    case 313u: goto L_08AADC04;
    case 314u: goto L_08AADC0C;
    case 315u: goto L_08AADC10;
    case 316u: goto L_08AADC28;
    case 317u: goto L_08AADC50;
    case 318u: goto L_08AADC5C;
    case 319u: goto L_08AADC70;
    case 320u: goto L_08AADC78;
    case 321u: goto L_08AADC8C;
    case 322u: goto L_08AADC9C;
    case 323u: goto L_08AADCA4;
    case 324u: goto L_08AADCA8;
    case 325u: goto L_08AADCC0;
    case 326u: goto L_08AADCE4;
    case 327u: goto L_08AADCF0;
    case 328u: goto L_08AADD04;
    case 329u: goto L_08AADD0C;
    case 330u: goto L_08AADD20;
    case 331u: goto L_08AADD30;
    case 332u: goto L_08AADD38;
    case 333u: goto L_08AADD3C;
    case 334u: goto L_08AADD54;
    case 335u: goto L_08AADD80;
    case 336u: goto L_08AADD8C;
    case 337u: goto L_08AADDA0;
    case 338u: goto L_08AADDA8;
    case 339u: goto L_08AADDB8;
    case 340u: goto L_08AADDC4;
    case 341u: goto L_08AADDCC;
    case 342u: goto L_08AADDFC;
    case 343u: goto L_08AADE04;
    case 344u: goto L_08AADE0C;
    case 345u: goto L_08AADE14;
    case 346u: goto L_08AADE2C;
    case 347u: goto L_08AADE38;
    case 348u: goto L_08AADE40;
    case 349u: goto L_08AADE48;
    case 350u: goto L_08AADE50;
    case 351u: goto L_08AADE5C;
    case 352u: goto L_08AADE68;
    case 353u: goto L_08AADE6C;
    case 354u: goto L_08AADE7C;
    case 355u: goto L_08AADE98;
    case 356u: goto L_08AADEA8;
    case 357u: goto L_08AADEB0;
    case 358u: goto L_08AADEC0;
    case 359u: goto L_08AADECC;
    case 360u: goto L_08AADEFC;
    case 361u: goto L_08AADF08;
    case 362u: goto L_08AADF0C;
    case 363u: goto L_08AADF20;
    case 364u: goto L_08AADF30;
    case 365u: goto L_08AADF38;
    case 366u: goto L_08AADF58;
    case 367u: goto L_08AADF64;
    case 368u: goto L_08AADF6C;
    case 369u: goto L_08AADF74;
    case 370u: goto L_08AADF80;
    case 371u: goto L_08AADF94;
    case 372u: goto L_08AADFA8;
    case 373u: goto L_08AADFBC;
    case 374u: goto L_08AADFD4;
    case 375u: goto L_08AADFDC;
    case 376u: goto L_08AADFF4;
    case 377u: goto L_08AAE000;
    case 378u: goto L_08AAE00C;
    case 379u: goto L_08AAE014;
    case 380u: goto L_08AAE01C;
    case 381u: goto L_08AAE030;
    case 382u: goto L_08AAE03C;
    case 383u: goto L_08AAE040;
    case 384u: goto L_08AAE058;
    case 385u: goto L_08AAE064;
    case 386u: goto L_08AAE078;
    case 387u: goto L_08AAE080;
    case 388u: goto L_08AAE088;
    case 389u: goto L_08AAE08C;
    case 390u: goto L_08AAE098;
    case 391u: goto L_08AAE0A8;
    case 392u: goto L_08AAE0C0;
    case 393u: goto L_08AAE0D4;
    case 394u: goto L_08AAE0DC;
    case 395u: goto L_08AAE0E4;
    case 396u: goto L_08AAE0EC;
    case 397u: goto L_08AAE104;
    case 398u: goto L_08AAE110;
    case 399u: goto L_08AAE128;
    case 400u: goto L_08AAE138;
    case 401u: goto L_08AAE140;
    case 402u: goto L_08AAE14C;
    case 403u: goto L_08AAE160;
    case 404u: goto L_08AAE168;
    case 405u: goto L_08AAE170;
    case 406u: goto L_08AAE17C;
    case 407u: goto L_08AAE184;
    case 408u: goto L_08AAE1AC;
    case 409u: goto L_08AAE1B8;
    case 410u: goto L_08AAE1BC;
    case 411u: goto L_08AAE1C4;
    case 412u: goto L_08AAE1FC;
    case 413u: goto L_08AAE20C;
    case 414u: goto L_08AAE220;
    case 415u: goto L_08AAE230;
    case 416u: goto L_08AAE244;
    case 417u: goto L_08AAE258;
    case 418u: goto L_08AAE270;
    case 419u: goto L_08AAE290;
    case 420u: goto L_08AAE2A4;
    case 421u: goto L_08AAE2BC;
    case 422u: goto L_08AAE2CC;
    case 423u: goto L_08AAE300;
    case 424u: goto L_08AAE32C;
    case 425u: goto L_08AAE358;
    case 426u: goto L_08AAE384;
    case 427u: goto L_08AAE38C;
    case 428u: goto L_08AAE394;
    case 429u: goto L_08AAE39C;
    case 430u: goto L_08AAE3A4;
    case 431u: goto L_08AAE3A8;
    case 432u: goto L_08AAE3B0;
    case 433u: goto L_08AAE3CC;
    case 434u: goto L_08AAE3EC;
    case 435u: goto L_08AAE3F4;
    case 436u: goto L_08AAE3FC;
    case 437u: goto L_08AAE408;
    case 438u: goto L_08AAE424;
    case 439u: goto L_08AAE434;
    case 440u: goto L_08AAE43C;
    case 441u: goto L_08AAE440;
    case 442u: goto L_08AAE44C;
    case 443u: goto L_08AAE468;
    case 444u: goto L_08AAE470;
    case 445u: goto L_08AAE478;
    case 446u: goto L_08AAE484;
    case 447u: goto L_08AAE488;
    case 448u: goto L_08AAE490;
    case 449u: goto L_08AAE498;
    case 450u: goto L_08AAE4A0;
    case 451u: goto L_08AAE4AC;
    case 452u: goto L_08AAE4C8;
    case 453u: goto L_08AAE4CC;
    case 454u: goto L_08AAE4E0;
    case 455u: goto L_08AAE4EC;
    case 456u: goto L_08AAE508;
    case 457u: goto L_08AAE50C;
    case 458u: goto L_08AAE51C;
    case 459u: goto L_08AAE524;
    case 460u: goto L_08AAE528;
    case 461u: goto L_08AAE53C;
    case 462u: goto L_08AAE564;
    case 463u: goto L_08AAE580;
    case 464u: goto L_08AAE5A0;
    case 465u: goto L_08AAE5BC;
    case 466u: goto L_08AAE5DC;
    case 467u: goto L_08AAE5F8;
    case 468u: goto L_08AAE604;
    case 469u: goto L_08AAE61C;
    case 470u: goto L_08AAE624;
    case 471u: goto L_08AAE628;
    case 472u: goto L_08AAE63C;
    case 473u: goto L_08AAE644;
    case 474u: goto L_08AAE654;
    case 475u: goto L_08AAE668;
    case 476u: goto L_08AAE680;
    case 477u: goto L_08AAE690;
    case 478u: goto L_08AAE6AC;
    case 479u: goto L_08AAE6C8;
    case 480u: goto L_08AAE6E4;
    case 481u: goto L_08AAE700;
    case 482u: goto L_08AAE71C;
    case 483u: goto L_08AAE738;
    case 484u: goto L_08AAE74C;
    case 485u: goto L_08AAE754;
    case 486u: goto L_08AAE758;
    case 487u: goto L_08AAE764;
    case 488u: goto L_08AAE784;
    case 489u: goto L_08AAE7A0;
    case 490u: goto L_08AAE7A8;
    case 491u: goto L_08AAE7B8;
    case 492u: goto L_08AAE7C0;
    case 493u: goto L_08AAE7D4;
    case 494u: goto L_08AAE7DC;
    case 495u: goto L_08AAE7E0;
    case 496u: goto L_08AAE7E8;
    case 497u: goto L_08AAE7F8;
    case 498u: goto L_08AAE808;
    case 499u: goto L_08AAE81C;
    case 500u: goto L_08AAE82C;
    case 501u: goto L_08AAE848;
    case 502u: goto L_08AAE850;
    case 503u: goto L_08AAE860;
    case 504u: goto L_08AAE868;
    case 505u: goto L_08AAE87C;
    case 506u: goto L_08AAE884;
    case 507u: goto L_08AAE888;
    case 508u: goto L_08AAE890;
    case 509u: goto L_08AAE8A0;
    case 510u: goto L_08AAE8B0;
    case 511u: goto L_08AAE8C4;
    case 512u: goto L_08AAE8D4;
    case 513u: goto L_08AAE8E4;
    case 514u: goto L_08AAE8EC;
    case 515u: goto L_08AAE8FC;
    case 516u: goto L_08AAE904;
    case 517u: goto L_08AAE908;
    case 518u: goto L_08AAE910;
    case 519u: goto L_08AAE920;
    case 520u: goto L_08AAE928;
    case 521u: goto L_08AAE92C;
    case 522u: goto L_08AAE934;
    case 523u: goto L_08AAE944;
    case 524u: goto L_08AAE94C;
    case 525u: goto L_08AAE950;
    case 526u: goto L_08AAE958;
    case 527u: goto L_08AAE968;
    case 528u: goto L_08AAE970;
    case 529u: goto L_08AAE974;
    case 530u: goto L_08AAE97C;
    case 531u: goto L_08AAE98C;
    case 532u: goto L_08AAE994;
    case 533u: goto L_08AAE998;
    case 534u: goto L_08AAE9A0;
    case 535u: goto L_08AAE9B0;
    case 536u: goto L_08AAE9B8;
    case 537u: goto L_08AAE9BC;
    case 538u: goto L_08AAE9C4;
    case 539u: goto L_08AAE9D4;
    case 540u: goto L_08AAE9DC;
    case 541u: goto L_08AAE9E0;
    case 542u: goto L_08AAE9E8;
    case 543u: goto L_08AAE9F8;
    case 544u: goto L_08AAEA00;
    case 545u: goto L_08AAEA04;
    case 546u: goto L_08AAEA0C;
    case 547u: goto L_08AAEA14;
    case 548u: goto L_08AAEA90;
    case 549u: goto L_08AAEAA0;
    case 550u: goto L_08AAEABC;
    case 551u: goto L_08AAEAC8;
    case 552u: goto L_08AAEAD4;
    case 553u: goto L_08AAEAE0;
    case 554u: goto L_08AAEAE4;
    case 555u: goto L_08AAEAE8;
    case 556u: goto L_08AAEAFC;
    case 557u: goto L_08AAEB10;
    case 558u: goto L_08AAEB20;
    case 559u: goto L_08AAEB38;
    case 560u: goto L_08AAEB40;
    case 561u: goto L_08AAEB54;
    case 562u: goto L_08AAEB5C;
    case 563u: goto L_08AAEB70;
    case 564u: goto L_08AAEB78;
    case 565u: goto L_08AAEB84;
    case 566u: goto L_08AAEB8C;
    case 567u: goto L_08AAEB94;
    case 568u: goto L_08AAEB9C;
    case 569u: goto L_08AAEBA4;
    case 570u: goto L_08AAEBB4;
    case 571u: goto L_08AAEBC8;
    case 572u: goto L_08AAEBE4;
    case 573u: goto L_08AAEC00;
    case 574u: goto L_08AAEC0C;
    case 575u: goto L_08AAEC20;
    case 576u: goto L_08AAEC34;
    case 577u: goto L_08AAEC3C;
    case 578u: goto L_08AAEC50;
    case 579u: goto L_08AAEC58;
    case 580u: goto L_08AAEC70;
    case 581u: goto L_08AAEC78;
    case 582u: goto L_08AAEC8C;
    case 583u: goto L_08AAEC94;
    case 584u: goto L_08AAECA4;
    case 585u: goto L_08AAECE0;
    case 586u: goto L_08AAECE8;
    case 587u: goto L_08AAECF8;
    case 588u: goto L_08AAED00;
    case 589u: goto L_08AAED14;
    case 590u: goto L_08AAED1C;
    case 591u: goto L_08AAED20;
    case 592u: goto L_08AAED28;
    case 593u: goto L_08AAED34;
    case 594u: goto L_08AAED3C;
    case 595u: goto L_08AAED48;
    case 596u: goto L_08AAED58;
    case 597u: goto L_08AAED60;
    case 598u: goto L_08AAED68;
    case 599u: goto L_08AAED78;
    case 600u: goto L_08AAED80;
    case 601u: goto L_08AAED88;
    case 602u: goto L_08AAED94;
    case 603u: goto L_08AAEDA0;
    case 604u: goto L_08AAEDA8;
    case 605u: goto L_08AAEDB0;
    case 606u: goto L_08AAEDC8;
    case 607u: goto L_08AAEDD0;
    case 608u: goto L_08AAEDD8;
    case 609u: goto L_08AAEDDC;
    case 610u: goto L_08AAEE00;
    case 611u: goto L_08AAEE14;
    case 612u: goto L_08AAEE28;
    case 613u: goto L_08AAEE30;
    case 614u: goto L_08AAEE44;
    case 615u: goto L_08AAEE4C;
    case 616u: goto L_08AAEE5C;
    case 617u: goto L_08AAEE70;
    case 618u: goto L_08AAEE78;
    case 619u: goto L_08AAEE80;
    case 620u: goto L_08AAEE90;
    case 621u: goto L_08AAEEA8;
    case 622u: goto L_08AAEEBC;
    case 623u: goto L_08AAEED0;
    case 624u: goto L_08AAEED8;
    case 625u: goto L_08AAEEEC;
    case 626u: goto L_08AAEEF4;
    case 627u: goto L_08AAEF04;
    case 628u: goto L_08AAEF10;
    case 629u: goto L_08AAEF20;
    case 630u: goto L_08AAEF2C;
    case 631u: goto L_08AAEF40;
    case 632u: goto L_08AAEF5C;
    case 633u: goto L_08AAEF6C;
    case 634u: goto L_08AAEF80;
    case 635u: goto L_08AAEF88;
    case 636u: goto L_08AAEF9C;
    case 637u: goto L_08AAEFA4;
    case 638u: goto L_08AAEFB4;
    case 639u: goto L_08AAEFBC;
    case 640u: goto L_08AAEFC8;
    case 641u: goto L_08AAEFD8;
    case 642u: goto L_08AAEFE8;
    case 643u: goto L_08AAEFF8;
    case 644u: goto L_08AAF008;
    case 645u: goto L_08AAF010;
    case 646u: goto L_08AAF024;
    case 647u: goto L_08AAF02C;
    case 648u: goto L_08AAF040;
    case 649u: goto L_08AAF048;
    case 650u: goto L_08AAF058;
    case 651u: goto L_08AAF068;
    case 652u: goto L_08AAF07C;
    case 653u: goto L_08AAF090;
    case 654u: goto L_08AAF098;
    case 655u: goto L_08AAF0AC;
    case 656u: goto L_08AAF0B4;
    case 657u: goto L_08AAF0C4;
    case 658u: goto L_08AAF0D8;
    case 659u: goto L_08AAF0E4;
    case 660u: goto L_08AAF0FC;
    case 661u: goto L_08AAF118;
    case 662u: goto L_08AAF128;
    case 663u: goto L_08AAF13C;
    case 664u: goto L_08AAF144;
    case 665u: goto L_08AAF158;
    case 666u: goto L_08AAF160;
    case 667u: goto L_08AAF170;
    case 668u: goto L_08AAF188;
    case 669u: goto L_08AAF190;
    case 670u: goto L_08AAF19C;
    case 671u: goto L_08AAF1AC;
    case 672u: goto L_08AAF1C0;
    case 673u: goto L_08AAF1C8;
    case 674u: goto L_08AAF1DC;
    case 675u: goto L_08AAF1E4;
    case 676u: goto L_08AAF1F4;
    case 677u: goto L_08AAF21C;
    case 678u: goto L_08AAF228;
    case 679u: goto L_08AAF240;
    case 680u: goto L_08AAF24C;
    case 681u: goto L_08AAF254;
    case 682u: goto L_08AAF268;
    case 683u: goto L_08AAF270;
    case 684u: goto L_08AAF284;
    case 685u: goto L_08AAF28C;
    case 686u: goto L_08AAF29C;
    case 687u: goto L_08AAF2AC;
    case 688u: goto L_08AAF2B4;
    case 689u: goto L_08AAF2C8;
    case 690u: goto L_08AAF2D0;
    case 691u: goto L_08AAF2E4;
    case 692u: goto L_08AAF2EC;
    case 693u: goto L_08AAF2FC;
    case 694u: goto L_08AAF304;
    case 695u: goto L_08AAF324;
    case 696u: goto L_08AAF32C;
    case 697u: goto L_08AAF334;
    case 698u: goto L_08AAF344;
    case 699u: goto L_08AAF34C;
    case 700u: goto L_08AAF360;
    case 701u: goto L_08AAF368;
    case 702u: goto L_08AAF37C;
    case 703u: goto L_08AAF384;
    case 704u: goto L_08AAF390;
    case 705u: goto L_08AAF398;
    case 706u: goto L_08AAF3A0;
    case 707u: goto L_08AAF3B4;
    case 708u: goto L_08AAF3B8;
    case 709u: goto L_08AAF3C4;
    case 710u: goto L_08AAF3D8;
    case 711u: goto L_08AAF3E8;
    case 712u: goto L_08AAF3F4;
    case 713u: goto L_08AAF3FC;
    case 714u: goto L_08AAF410;
    case 715u: goto L_08AAF418;
    case 716u: goto L_08AAF42C;
    case 717u: goto L_08AAF434;
    case 718u: goto L_08AAF438;
    case 719u: goto L_08AAF43C;
    case 720u: goto L_08AAF44C;
    case 721u: goto L_08AAF460;
    case 722u: goto L_08AAF498;
    case 723u: goto L_08AAF4AC;
    case 724u: goto L_08AAF4C0;
    case 725u: goto L_08AAF4D4;
    case 726u: goto L_08AAF4F0;
    case 727u: goto L_08AAF4FC;
    case 728u: goto L_08AAF504;
    case 729u: goto L_08AAF50C;
    case 730u: goto L_08AAF518;
    case 731u: goto L_08AAF528;
    case 732u: goto L_08AAF53C;
    case 733u: goto L_08AAF544;
    case 734u: goto L_08AAF550;
    case 735u: goto L_08AAF568;
    case 736u: goto L_08AAF5A0;
    case 737u: goto L_08AAF5B8;
    case 738u: goto L_08AAF5CC;
    case 739u: goto L_08AAF5D8;
    case 740u: goto L_08AAF5E8;
    case 741u: goto L_08AAF5F8;
    case 742u: goto L_08AAF614;
    case 743u: goto L_08AAF620;
    case 744u: goto L_08AAF62C;
    case 745u: goto L_08AAF63C;
    case 746u: goto L_08AAF64C;
    case 747u: goto L_08AAF654;
    case 748u: goto L_08AAF668;
    case 749u: goto L_08AAF670;
    case 750u: goto L_08AAF678;
    case 751u: goto L_08AAF688;
    case 752u: goto L_08AAF6A0;
    case 753u: goto L_08AAF6B4;
    case 754u: goto L_08AAF6D4;
    case 755u: goto L_08AAF6DC;
    case 756u: goto L_08AAF6E4;
    case 757u: goto L_08AAF6E8;
    case 758u: goto L_08AAF6FC;
    case 759u: goto L_08AAF710;
    case 760u: goto L_08AAF720;
    case 761u: goto L_08AAF72C;
    case 762u: goto L_08AAF760;
    case 763u: goto L_08AAF768;
    case 764u: goto L_08AAF770;
    case 765u: goto L_08AAF780;
    case 766u: goto L_08AAF788;
    case 767u: goto L_08AAF794;
    case 768u: goto L_08AAF79C;
    case 769u: goto L_08AAF7B0;
    case 770u: goto L_08AAF7B8;
    case 771u: goto L_08AAF7BC;
    case 772u: goto L_08AAF7C8;
    case 773u: goto L_08AAF7D4;
    case 774u: goto L_08AAF7E4;
    case 775u: goto L_08AAF7E8;
    case 776u: goto L_08AAF800;
    case 777u: goto L_08AAF80C;
    case 778u: goto L_08AAF81C;
    case 779u: goto L_08AAF820;
    case 780u: goto L_08AAF828;
    case 781u: goto L_08AAF838;
    case 782u: goto L_08AAF840;
    case 783u: goto L_08AAF864;
    case 784u: goto L_08AAF898;
    case 785u: goto L_08AAF8AC;
    case 786u: goto L_08AAF8D0;
    case 787u: goto L_08AAF8E4;
    case 788u: goto L_08AAF8F4;
    case 789u: goto L_08AAF904;
    case 790u: goto L_08AAF910;
    case 791u: goto L_08AAF920;
    case 792u: goto L_08AAF92C;
    case 793u: goto L_08AAF93C;
    case 794u: goto L_08AAF94C;
    case 795u: goto L_08AAF960;
    case 796u: goto L_08AAF970;
    case 797u: goto L_08AAF978;
    case 798u: goto L_08AAF97C;
    case 799u: goto L_08AAF984;
    case 800u: goto L_08AAF994;
    case 801u: goto L_08AAF9A0;
    case 802u: goto L_08AAF9B0;
    case 803u: goto L_08AAF9BC;
    case 804u: goto L_08AAF9CC;
    case 805u: goto L_08AAF9D8;
    case 806u: goto L_08AAF9E8;
    case 807u: goto L_08AAF9F8;
    case 808u: goto L_08AAFA0C;
    case 809u: goto L_08AAFA1C;
    case 810u: goto L_08AAFA30;
    case 811u: goto L_08AAFA40;
    case 812u: goto L_08AAFA48;
    case 813u: goto L_08AAFA4C;
    case 814u: goto L_08AAFA54;
    case 815u: goto L_08AAFA6C;
    case 816u: goto L_08AAFA98;
    case 817u: goto L_08AAFAA4;
    case 818u: goto L_08AAFAAC;
    case 819u: goto L_08AAFAB4;
    case 820u: goto L_08AAFABC;
    case 821u: goto L_08AAFAC8;
    case 822u: goto L_08AAFAD0;
    case 823u: goto L_08AAFAE0;
    case 824u: goto L_08AAFAEC;
    case 825u: goto L_08AAFB04;
    case 826u: goto L_08AAFB08;
    case 827u: goto L_08AAFB10;
    case 828u: goto L_08AAFB24;
    case 829u: goto L_08AAFB34;
    case 830u: goto L_08AAFB38;
    case 831u: goto L_08AAFB40;
    case 832u: goto L_08AAFB50;
    case 833u: goto L_08AAFB60;
    case 834u: goto L_08AAFB68;
    case 835u: goto L_08AAFB70;
    case 836u: goto L_08AAFBCC;
    case 837u: goto L_08AAFBD8;
    case 838u: goto L_08AAFBE0;
    case 839u: goto L_08AAFBE8;
    case 840u: goto L_08AAFBF0;
    case 841u: goto L_08AAFBF8;
    case 842u: goto L_08AAFC00;
    case 843u: goto L_08AAFC50;
    case 844u: goto L_08AAFC5C;
    case 845u: goto L_08AAFC64;
    case 846u: goto L_08AAFC74;
    case 847u: goto L_08AAFC80;
    case 848u: goto L_08AAFCA0;
    case 849u: goto L_08AAFCA8;
    case 850u: goto L_08AAFCAC;
    case 851u: goto L_08AAFCB4;
    case 852u: goto L_08AAFCF8;
    case 853u: goto L_08AAFD28;
    case 854u: goto L_08AAFD4C;
    case 855u: goto L_08AAFDAC;
    case 856u: goto L_08AAFDC4;
    case 857u: goto L_08AAFE24;
    case 858u: goto L_08AAFE60;
    case 859u: goto L_08AAFE74;
    case 860u: goto L_08AAFE7C;
    case 861u: goto L_08AAFE84;
    case 862u: goto L_08AAFE90;
    case 863u: goto L_08AAFEA0;
    case 864u: goto L_08AAFEB0;
    case 865u: goto L_08AAFEBC;
    case 866u: goto L_08AAFEC8;
    case 867u: goto L_08AAFED0;
    case 868u: goto L_08AAFED8;
    case 869u: goto L_08AAFEEC;
    case 870u: goto L_08AAFEF0;
    case 871u: goto L_08AAFEF4;
    case 872u: goto L_08AAFF00;
    case 873u: goto L_08AAFF20;
    case 874u: goto L_08AAFF34;
    case 875u: goto L_08AAFF3C;
    case 876u: goto L_08AAFF48;
    case 877u: goto L_08AAFF50;
    case 878u: goto L_08AAFF58;
    case 879u: goto L_08AAFF60;
    case 880u: goto L_08AAFF68;
    case 881u: goto L_08AAFF70;
    case 882u: goto L_08AAFF84;
    case 883u: goto L_08AAFF8C;
    case 884u: goto L_08AAFF98;
    case 885u: goto L_08AAFFA0;
    case 886u: goto L_08AAFFA8;
    case 887u: goto L_08AAFFB0;
    case 888u: goto L_08AAFFB8;
    case 889u: goto L_08AAFFC0;
    case 890u: goto L_08AAFFD4;
    case 891u: goto L_08AAFFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AAC000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 5u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC0B4;
      }
      goto L_08AAC010;
    }
L_08AAC010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC0B4;
      }
      goto L_08AAC020;
    }
L_08AAC020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AAC0B4;
      }
      goto L_08AAC030;
    }
L_08AAC030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AAC0B4;
      }
      goto L_08AAC040;
    }
L_08AAC040:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23248)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08AAC058u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.pc = 0x08B73284u;
    return;
L_08AAC058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC074;
      }
      goto L_08AAC06C;
    }
L_08AAC06C:
    ctx.gpr[4] = (8u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08AAC074;
L_08AAC074:
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23248));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AAC0A4;
      }
      goto L_08AAC08C;
    }
L_08AAC08C:
    ctx.gpr[31] = (0x08AAC094u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 345u, 0x08AAB734u>(ctx, &aot_mem) && ctx.pc == 0x08AAC094u) goto L_08AAC094;
    return;
L_08AAC094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23248));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08AAC0A4;
L_08AAC0A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08AAC0B0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 339u, 0x08AAB6B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAC0B0u) goto L_08AAC0B0;
    return;
L_08AAC0B0:
    ctx.gpr[20] = (0u | 1u);
    goto L_08AAC0B4;
L_08AAC0B4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC138;
      }
      goto L_08AAC0BC;
    }
L_08AAC0BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[31] = (0x08AAC0C8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 321u, 0x08AAB5BCu>(ctx, &aot_mem) && ctx.pc == 0x08AAC0C8u) goto L_08AAC0C8;
    return;
L_08AAC0C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC138;
      }
      goto L_08AAC0D0;
    }
L_08AAC0D0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2956), 0u);
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(23248));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(23248)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08AAC0F0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2952)));
    ctx.pc = 0x08B73294u;
    return;
L_08AAC0F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(23248)));
    ctx.gpr[31] = (0x08AAC0FCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08B732ACu;
    return;
L_08AAC0FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(23248)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AAC120u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B732B4u;
    return;
L_08AAC120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8356)));
    ctx.gpr[31] = (0x08AAC12Cu);
    ctx.gpr[5] = (0u | 8u);
    ctx.pc = 0x08B73424u;
    return;
L_08AAC12C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8356)));
    ctx.gpr[31] = (0x08AAC138u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.pc = 0x08B734FCu;
    return;
L_08AAC138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2956)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC15C;
      }
      goto L_08AAC144;
    }
L_08AAC144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC15C;
      }
      goto L_08AAC154;
    }
L_08AAC154:
    ctx.gpr[31] = (0x08AAC15Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2956)));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 290u, 0x089391FCu>(ctx, &aot_mem) && ctx.pc == 0x08AAC15Cu) goto L_08AAC15C;
    return;
L_08AAC15C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAC18C;
      }
      goto L_08AAC16C;
    }
L_08AAC16C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08AAC190;
    }
    goto L_08AAC17C;
L_08AAC17C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC190;
      }
      goto L_08AAC18C;
    }
L_08AAC18C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AAC190;
L_08AAC190:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAC1A4;
      }
      goto L_08AAC19C;
    }
L_08AAC19C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC1CC;
      }
      goto L_08AAC1A4;
    }
L_08AAC1A4:
    ctx.gpr[5] = (2244u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4928));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AAC1C0u);
    ctx.gpr[6] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAC1C0u) goto L_08AAC1C0;
    return;
L_08AAC1C0:
    ctx.gpr[4] = (0u | 2048u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAC2F0;
      }
      goto L_08AAC1CC;
    }
L_08AAC1CC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25908), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2244u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4928));
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(23248)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08AAC1FCu);
    ctx.gpr[8] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B7329Cu;
    return;
L_08AAC1FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2237u << 16u);
      if (branch_taken) {
          goto L_08AAC258;
      }
      goto L_08AAC204;
    }
L_08AAC204:
    ctx.gpr[21] = (2237u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(23248)));
    ctx.gpr[31] = (0x08AAC214u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.pc = 0x08B732CCu;
    return;
L_08AAC214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8356)));
    ctx.gpr[31] = (0x08AAC220u);
    ctx.gpr[5] = (0u | 4u);
    ctx.pc = 0x08B73424u;
    return;
L_08AAC220:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(23248));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 111u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AAC254;
      }
      goto L_08AAC234;
    }
L_08AAC234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
        goto L_08AAC24C;
    }
    goto L_08AAC240;
L_08AAC240:
    ctx.gpr[31] = (0x08AAC248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x08AAC248u) goto L_08AAC248;
    return;
L_08AAC248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08AAC24C;
L_08AAC24C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    goto L_08AAC254;
L_08AAC254:
    ctx.gpr[5] = (2237u << 16u);
    goto L_08AAC258;
L_08AAC258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23248));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AAC284u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 184u, 0x08888898u>(ctx, &aot_mem) && ctx.pc == 0x08AAC284u) goto L_08AAC284;
    return;
L_08AAC284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC2F0;
      }
      goto L_08AAC290;
    }
L_08AAC290:
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23248));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 111u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AAC2E4;
      }
      goto L_08AAC2A8;
    }
L_08AAC2A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AAC2C8;
      }
      goto L_08AAC2B8;
    }
L_08AAC2B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AAC2E4;
      }
      goto L_08AAC2C8;
    }
L_08AAC2C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC2DC;
      }
      goto L_08AAC2D4;
    }
L_08AAC2D4:
    ctx.gpr[31] = (0x08AAC2DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x08AAC2DCu) goto L_08AAC2DC;
    return;
L_08AAC2DC:
    ctx.gpr[31] = (0x08AAC2E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 490u, 0x088B6998u>(ctx, &aot_mem) && ctx.pc == 0x08AAC2E4u) goto L_08AAC2E4;
    return;
L_08AAC2E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8356)));
    ctx.gpr[31] = (0x08AAC2F0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.pc = 0x08B73424u;
    return;
L_08AAC2F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6144 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC31C;
      }
      goto L_08AAC304;
    }
L_08AAC304:
    ctx.gpr[4] = (2244u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-6144));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4928));
    ctx.gpr[6] = (ctx.gpr[18] << 2u);
    ctx.gpr[31] = (0x08AAC31Cu);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24576));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AAC31Cu) goto L_08AAC31C;
    return;
L_08AAC31C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 422u, 0x08AABC68u>(ctx, &aot_mem); return;
      }
      goto L_08AAC324;
    }
L_08AAC324:
    ctx.gpr[31] = (0x08AAC32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 350u, 0x08AAB790u>(ctx, &aot_mem) && ctx.pc == 0x08AAC32Cu) goto L_08AAC32C;
    return;
L_08AAC32C:
    ctx.gpr[31] = (0x08AAC334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 416u, 0x08AABBE0u>(ctx, &aot_mem) && ctx.pc == 0x08AAC334u) goto L_08AAC334;
    return;
L_08AAC334:
    ctx.gpr[31] = (0x08AAC33Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 569u, 0x0880A788u>(ctx, &aot_mem) && ctx.pc == 0x08AAC33Cu) goto L_08AAC33C;
    return;
L_08AAC33C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2960)));
    ctx.gpr[6] = (2244u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4928));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] >> 29u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 3u));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AAC36Cu);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 21u, 0x08B642C0u>(ctx, &aot_mem) && ctx.pc == 0x08AAC36Cu) goto L_08AAC36C;
    return;
L_08AAC36C:
    ctx.gpr[31] = (0x08AAC374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 418u, 0x08AABC04u>(ctx, &aot_mem) && ctx.pc == 0x08AAC374u) goto L_08AAC374;
    return;
L_08AAC374:
    ctx.gpr[4] = (0u | 32768u);
    ctx.gpr[31] = (0x08AAC380u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B7338Cu;
    return;
L_08AAC380:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(512));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6144 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC394;
      }
      goto L_08AAC390;
    }
L_08AAC390:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6144));
    goto L_08AAC394;
L_08AAC394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 422u, 0x08AABC68u>(ctx, &aot_mem); return;
      }
      goto L_08AAC39C;
    }
L_08AAC39C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC3C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAC3D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 872u, 0x08887CFCu>(ctx, &aot_mem) && ctx.pc == 0x08AAC3D4u) goto L_08AAC3D4;
    return;
L_08AAC3D4:
    ctx.gpr[31] = (0x08AAC3DCu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2880));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AAC3DCu) goto L_08AAC3DC;
    return;
L_08AAC3DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC3E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC3FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC410:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC438:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC44C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC470:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC48C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAC4ACu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 624u, 0x08A7F694u>(ctx, &aot_mem) && ctx.pc == 0x08AAC4ACu) goto L_08AAC4AC;
    return;
L_08AAC4AC:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28580));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[7] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(560));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x08AAC4D0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-15284));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAC4D0u) goto L_08AAC4D0;
    return;
L_08AAC4D0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(209));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(213));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(232));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(248));
    ctx.gpr[9] = (ctx.gpr[16] + static_cast<std::uint32_t>(264));
    ctx.gpr[10] = (ctx.gpr[16] + static_cast<std::uint32_t>(280));
    ctx.gpr[11] = (ctx.gpr[16] + static_cast<std::uint32_t>(296));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(448));
      if (branch_taken) {
          goto L_08AAC508;
      }
      goto L_08AAC4F8;
    }
L_08AAC4F8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AAC4FC;
L_08AAC4FC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] != ctx.gpr[6]) {
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
        goto L_08AAC4FC;
    }
    goto L_08AAC508;
L_08AAC508:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(216));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAC524;
      }
      goto L_08AAC514;
    }
L_08AAC514:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AAC518;
L_08AAC518:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] != ctx.gpr[7]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
        goto L_08AAC518;
    }
    goto L_08AAC524;
L_08AAC524:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08AAC53C;
      }
      goto L_08AAC52C;
    }
L_08AAC52C:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAC530;
L_08AAC530:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08AAC530;
    }
    goto L_08AAC53C;
L_08AAC53C:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AAC554;
      }
      goto L_08AAC544;
    }
L_08AAC544:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAC548;
L_08AAC548:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[8] != ctx.gpr[9]) {
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08AAC548;
    }
    goto L_08AAC554;
L_08AAC554:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08AAC56C;
      }
      goto L_08AAC55C;
    }
L_08AAC55C:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAC560;
L_08AAC560:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[9] != ctx.gpr[10]) {
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08AAC560;
    }
    goto L_08AAC56C;
L_08AAC56C:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08AAC584;
      }
      goto L_08AAC574;
    }
L_08AAC574:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAC578;
L_08AAC578:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[10] != ctx.gpr[11]) {
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08AAC578;
    }
    goto L_08AAC584;
L_08AAC584:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    goto L_08AAC58C;
L_08AAC58C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AAC59Cu);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAC59Cu) goto L_08AAC59C;
    return;
L_08AAC59C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AAC58C;
      }
      goto L_08AAC5AC;
    }
L_08AAC5AC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(432));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAC5C8;
      }
      goto L_08AAC5B8;
    }
L_08AAC5B8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AAC5BC;
L_08AAC5BC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
        goto L_08AAC5BC;
    }
    goto L_08AAC5C8;
L_08AAC5C8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC5E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(232));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1620));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(1636));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(264));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(976));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[30]);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(1520));
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(280));
    ctx.gpr[23] = (ctx.gpr[5] + static_cast<std::uint32_t>(1604));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AAC668u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 650u, 0x08A7F85Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAC668u) goto L_08AAC668;
    return;
L_08AAC668:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28580));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[7] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(560));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x08AAC68Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-15284));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAC68Cu) goto L_08AAC68C;
    return;
L_08AAC68C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(1392));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08AAC6B0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AAC3E8;
L_08AAC6B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[5] = (ctx.gpr[16] - ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 5u));
    ctx.gpr[4] = (ctx.gpr[4] >> 27u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(304));
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 5u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AAC6F8;
      }
      goto L_08AAC6DC;
    }
L_08AAC6DC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AAC6E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 157u, 0x08805288u>(ctx, &aot_mem) && ctx.pc == 0x08AAC6E8u) goto L_08AAC6E8;
    return;
L_08AAC6E8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AAC6DC;
      }
      goto L_08AAC6F8;
    }
L_08AAC6F8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(8))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(11))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AAC718u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AAC3FC;
L_08AAC718:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[20];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AAC738;
      }
      goto L_08AAC728;
    }
L_08AAC728:
    ctx.gpr[6] = (ctx.gpr[16] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08AAC738u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AAC738u) goto L_08AAC738;
    return;
L_08AAC738:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(14))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[16] = (ctx.gpr[22] + static_cast<std::uint32_t>(1552));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AAC75Cu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AAC410;
L_08AAC75C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(209));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AAC7AC;
      }
      goto L_08AAC78C;
    }
L_08AAC78C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAC78C;
      }
      goto L_08AAC7AC;
    }
L_08AAC7AC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[16] = (ctx.gpr[22] + static_cast<std::uint32_t>(1580));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AAC7D0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AAC424;
L_08AAC7D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(432));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AAC818;
      }
      goto L_08AAC800;
    }
L_08AAC800:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AAC800;
      }
      goto L_08AAC818;
    }
L_08AAC818:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AAC838u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AAC3FC;
L_08AAC838:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(68))))));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[23];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AAC858;
      }
      goto L_08AAC848;
    }
L_08AAC848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[16] - ctx.gpr[23]);
    ctx.gpr[31] = (0x08AAC858u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AAC858u) goto L_08AAC858;
    return;
L_08AAC858:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AAC87Cu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AAC3FC;
L_08AAC87C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(72))))));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AAC89C;
      }
      goto L_08AAC88C;
    }
L_08AAC88C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[16] - ctx.gpr[17]);
    ctx.gpr[31] = (0x08AAC89Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AAC89Cu) goto L_08AAC89C;
    return;
L_08AAC89C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(43))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AAC8C0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AAC3FC;
L_08AAC8C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(76))))));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AAC8E0;
      }
      goto L_08AAC8D0;
    }
L_08AAC8D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (ctx.gpr[16] - ctx.gpr[17]);
    ctx.gpr[31] = (0x08AAC8E0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AAC8E0u) goto L_08AAC8E0;
    return;
L_08AAC8E0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(46))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(49))))));
    ctx.gpr[16] = (ctx.gpr[22] + static_cast<std::uint32_t>(1892));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AAC904u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AAC438;
L_08AAC904:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(216));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AAC94C;
      }
      goto L_08AAC934;
    }
L_08AAC934:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AAC934;
      }
      goto L_08AAC94C;
    }
L_08AAC94C:
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(1596));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1600));
    goto L_08AAC95C;
L_08AAC95C:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[21] << (ctx.gpr[4] & 31u));
      if (branch_taken) {
          goto L_08AAC980;
      }
      goto L_08AAC970;
    }
L_08AAC970:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(448)));
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08AAC990;
      }
      goto L_08AAC980;
    }
L_08AAC980:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(448)));
    ctx.gpr[6] = (~(ctx.gpr[6] | 0u));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08AAC990;
L_08AAC990:
    ctx.gpr[6] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[8] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[21] << (ctx.gpr[7] & 31u));
      if (branch_taken) {
          goto L_08AAC9BC;
      }
      goto L_08AAC9AC;
    }
L_08AAC9AC:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(448)));
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08AAC9CC;
      }
      goto L_08AAC9BC;
    }
L_08AAC9BC:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(448)));
    ctx.gpr[6] = (~(ctx.gpr[6] | 0u));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08AAC9CC;
L_08AAC9CC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC95C;
      }
      goto L_08AAC9DC;
    }
L_08AAC9DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(576));
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    goto L_08AAC9F0;
L_08AAC9F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AAC9F0;
      }
      goto L_08AACA2C;
    }
L_08AACA2C:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACA60:
    ctx.gpr[2] = (2219u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-13728));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACA6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AACA7Cu);
    // nop
    goto L_08AACA60;
L_08AACA7C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACA88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AACAACu);
    ctx.gpr[19] = (0u | 0u);
    goto L_08AACA60;
L_08AACAAC:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[19] = (0u | 1u);
        goto L_08AACB14;
    }
    goto L_08AACAB4;
L_08AACAB4:
    ctx.gpr[31] = (0x08AACABCu);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 666u, 0x08A7FAA4u>(ctx, &aot_mem) && ctx.pc == 0x08AACABCu) goto L_08AACABC;
    return;
L_08AACABC:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[18] = (0u | 1u);
        goto L_08AACB04;
    }
    goto L_08AACAC4;
L_08AACAC4:
    ctx.gpr[31] = (0x08AACACCu);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 400u, 0x0888E51Cu>(ctx, &aot_mem) && ctx.pc == 0x08AACACCu) goto L_08AACACC;
    return;
L_08AACACC:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08AACAF4;
    }
    goto L_08AACAD4;
L_08AACAD4:
    ctx.gpr[31] = (0x08AACADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 295u, 0x08A9A6CCu>(ctx, &aot_mem) && ctx.pc == 0x08AACADCu) goto L_08AACADC;
    return;
L_08AACADC:
    ctx.gpr[4] = (ctx.gpr[2] ^ ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08AACAF8;
      }
      goto L_08AACAF0;
    }
L_08AACAF0:
    ctx.gpr[17] = (0u | 1u);
    goto L_08AACAF4;
L_08AACAF4:
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
    goto L_08AACAF8;
L_08AACAF8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AACB08;
      }
      goto L_08AACB00;
    }
L_08AACB00:
    ctx.gpr[18] = (0u | 1u);
    goto L_08AACB04;
L_08AACB04:
    ctx.gpr[4] = (ctx.gpr[18] & 255u);
    goto L_08AACB08;
L_08AACB08:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACB14;
      }
      goto L_08AACB10;
    }
L_08AACB10:
    ctx.gpr[19] = (0u | 1u);
    goto L_08AACB14;
L_08AACB14:
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
L_08AACB34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AACB48u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 680u, 0x08A7FB50u>(ctx, &aot_mem) && ctx.pc == 0x08AACB48u) goto L_08AACB48;
    return;
L_08AACB48:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32056));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[7] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(292));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x08AACB6Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-15248));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AACB6Cu) goto L_08AACB6C;
    return;
L_08AACB6C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACB80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AACBC8;
      }
      goto L_08AACB9C;
    }
L_08AACB9C:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32056));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AACBB4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 682u, 0x08A7FB94u>(ctx, &aot_mem) && ctx.pc == 0x08AACBB4u) goto L_08AACBB4;
    return;
L_08AACBB4:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACBC8;
      }
      goto L_08AACBC0;
    }
L_08AACBC0:
    ctx.gpr[31] = (0x08AACBC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AACBC8u) goto L_08AACBC8;
    return;
L_08AACBC8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACBDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AACBF0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 692u, 0x08A7FC34u>(ctx, &aot_mem) && ctx.pc == 0x08AACBF0u) goto L_08AACBF0;
    return;
L_08AACBF0:
    ctx.gpr[31] = (0x08AACBF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AAD414;
L_08AACBF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACC08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AACC1Cu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 697u, 0x08A7FD50u>(ctx, &aot_mem) && ctx.pc == 0x08AACC1Cu) goto L_08AACC1C;
    return;
L_08AACC1C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACC28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AACC70;
      }
      goto L_08AACC54;
    }
L_08AACC54:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AACC64u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08AACC64u) goto L_08AACC64;
    return;
L_08AACC64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AACC70;
L_08AACC70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (0u | 0u);
    goto L_08AACC7C;
L_08AACC7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(560)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(976), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(568)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(984), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AACC7C;
      }
      goto L_08AACCA0;
    }
L_08AACCA0:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AACCB4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 204u, 0x08A82438u>(ctx, &aot_mem) && ctx.pc == 0x08AACCB4u) goto L_08AACCB4;
    return;
L_08AACCB4:
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
L_08AACCCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08AACCE0;
L_08AACCE0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(176), 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 29 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AACCE0;
      }
      goto L_08AACCF4;
    }
L_08AACCF4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08AACD04u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 888u, 0x0885F668u>(ctx, &aot_mem) && ctx.pc == 0x08AACD04u) goto L_08AACD04;
    return;
L_08AACD04:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACD10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AACD38u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 224u, 0x08A82798u>(ctx, &aot_mem) && ctx.pc == 0x08AACD38u) goto L_08AACD38;
    return;
L_08AACD38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (46470u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 14269u);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (13702u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14269u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(560));
      if (branch_taken) {
          goto L_08AACDA0;
      }
      goto L_08AACD8C;
    }
L_08AACD8C:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AACDA4;
      }
      goto L_08AACD9C;
    }
L_08AACD9C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AACDA0;
L_08AACDA0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AACDA4;
L_08AACDA4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACDB8;
      }
      goto L_08AACDAC;
    }
L_08AACDAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AACDB8;
L_08AACDB8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (0u | 128u);
    goto L_08AACDC4;
L_08AACDC4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(560)));
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08AACDF4;
      }
      goto L_08AACDE0;
    }
L_08AACDE0:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
      if (branch_taken) {
          goto L_08AACDF8;
      }
      goto L_08AACDF0;
    }
L_08AACDF0:
    ctx.gpr[8] = (0u | 1u);
    goto L_08AACDF4;
L_08AACDF4:
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    goto L_08AACDF8;
L_08AACDF8:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACE1C;
      }
      goto L_08AACE00;
    }
L_08AACE00:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[6] << (ctx.gpr[4] & 31u));
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(568)));
      if (branch_taken) {
          goto L_08AACE28;
      }
      goto L_08AACE1C;
    }
L_08AACE1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(568)));
    goto L_08AACE28;
L_08AACE28:
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08AACE50;
      }
      goto L_08AACE3C;
    }
L_08AACE3C:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
      if (branch_taken) {
          goto L_08AACE54;
      }
      goto L_08AACE4C;
    }
L_08AACE4C:
    ctx.gpr[8] = (0u | 1u);
    goto L_08AACE50;
L_08AACE50:
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    goto L_08AACE54;
L_08AACE54:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACE70;
      }
      goto L_08AACE5C;
    }
L_08AACE5C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[7] << (ctx.gpr[4] & 31u));
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AACE74;
      }
      goto L_08AACE70;
    }
L_08AACE70:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AACE74;
L_08AACE74:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AACDC4;
      }
      goto L_08AACE88;
    }
L_08AACE88:
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
L_08AACEA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[18] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[18] >> 16u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[18] & 1u);
    ctx.gpr[19] = (ctx.gpr[6] + static_cast<std::uint32_t>(560));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACFA0;
      }
      goto L_08AACF90;
    }
L_08AACF90:
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AACFA0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 288u, 0x08A82BCCu>(ctx, &aot_mem) && ctx.pc == 0x08AACFA0u) goto L_08AACFA0;
    return;
L_08AACFA0:
    ctx.gpr[4] = (ctx.gpr[18] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD008;
      }
      goto L_08AACFAC;
    }
L_08AACFAC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AAD008;
L_08AAD008:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 128u);
    goto L_08AAD014;
L_08AAD014:
    ctx.gpr[7] = (ctx.gpr[5] << (ctx.gpr[4] & 31u));
    ctx.gpr[7] = (ctx.gpr[18] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD0E4;
      }
      goto L_08AAD024;
    }
L_08AAD024:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (ctx.gpr[16] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (ctx.gpr[16] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[7] >> 16u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (ctx.gpr[7] & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (ctx.gpr[16] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[16] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08AAD0E4;
L_08AAD0E4:
    ctx.gpr[7] = (ctx.gpr[6] << (ctx.gpr[4] & 31u));
    ctx.gpr[7] = (ctx.gpr[18] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD1B4;
      }
      goto L_08AAD0F4;
    }
L_08AAD0F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (ctx.gpr[16] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (ctx.gpr[16] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[7] >> 16u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (ctx.gpr[7] & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (ctx.gpr[16] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[16] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08AAD1B4;
L_08AAD1B4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AAD014;
      }
      goto L_08AAD1C4;
    }
L_08AAD1C4:
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
L_08AAD1E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.gpr[17] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[17] = (ctx.gpr[17] | ctx.gpr[7]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD270;
      }
      goto L_08AAD268;
    }
L_08AAD268:
    ctx.gpr[31] = (0x08AAD270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 337u, 0x08A83758u>(ctx, &aot_mem) && ctx.pc == 0x08AAD270u) goto L_08AAD270;
    return;
L_08AAD270:
    ctx.gpr[4] = (ctx.gpr[17] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AAD27C;
    }
L_08AAD27C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(544), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AAD2A8;
L_08AAD2A8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] + static_cast<std::uint32_t>(560));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(568));
    goto L_08AAD2C0;
L_08AAD2C0:
    ctx.gpr[8] = (ctx.gpr[5] << (ctx.gpr[4] & 31u));
    ctx.gpr[8] = (ctx.gpr[17] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD338;
      }
      goto L_08AAD2D0;
    }
L_08AAD2D0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] << 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAD338;
L_08AAD338:
    ctx.gpr[8] = (ctx.gpr[6] << (ctx.gpr[4] & 31u));
    ctx.gpr[8] = (ctx.gpr[17] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD3B0;
      }
      goto L_08AAD348;
    }
L_08AAD348:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] << 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAD3B0;
L_08AAD3B0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AAD2C0;
      }
      goto L_08AAD3C4;
    }
L_08AAD3C4:
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
L_08AAD3DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAD3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 102u, 0x08A81DA8u>(ctx, &aot_mem) && ctx.pc == 0x08AAD3ECu) goto L_08AAD3EC;
    return;
L_08AAD3EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD3F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAD408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 106u, 0x08A81E04u>(ctx, &aot_mem) && ctx.pc == 0x08AAD408u) goto L_08AAD408;
    return;
L_08AAD408:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD414:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08AAD440;
      }
      goto L_08AAD430;
    }
L_08AAD430:
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08AAD440;
L_08AAD440:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    ctx.gpr[6] = (ctx.gpr[6] & 2u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD4B4;
      }
      goto L_08AAD45C;
    }
L_08AAD45C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (49097u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(325), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (16329u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(337), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08AAD508;
      }
      goto L_08AAD4B4;
    }
L_08AAD4B4:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (49056u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 55676u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(325), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (16288u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 55676u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(337), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08AAD508;
L_08AAD508:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD568;
      }
      goto L_08AAD510;
    }
L_08AAD510:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (49097u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(348), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(349), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (16329u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(360), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(361), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    ctx.gpr[6] = (ctx.gpr[6] & 16u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08AAD5BC;
      }
      goto L_08AAD568;
    }
L_08AAD568:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (49056u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 55676u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(348), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(349), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (16288u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 55676u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(360), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(361), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    ctx.gpr[6] = (ctx.gpr[6] & 16u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08AAD5BC;
L_08AAD5BC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD5FC;
      }
      goto L_08AAD5C4;
    }
L_08AAD5C4:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (49009u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 17979u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(300), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(301), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[6] & 32u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAD630;
      }
      goto L_08AAD5FC;
    }
L_08AAD5FC:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (16241u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 17979u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(300), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(301), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[6] & 32u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08AAD630;
L_08AAD630:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD660;
      }
      goto L_08AAD638;
    }
L_08AAD638:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (49056u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 55676u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(313), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08AAD6C0;
      }
      goto L_08AAD660;
    }
L_08AAD660:
    ctx.gpr[5] = (ctx.gpr[6] & 64u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD69C;
      }
      goto L_08AAD674;
    }
L_08AAD674:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (16329u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(313), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08AAD6C0;
      }
      goto L_08AAD69C;
    }
L_08AAD69C:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (49009u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 17979u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(313), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08AAD6C0;
L_08AAD6C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD6C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[6] << 2u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(176)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AAD710;
      }
      goto L_08AAD6FC;
    }
L_08AAD6FC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = 0u != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_08AAD718;
      }
      goto L_08AAD708;
    }
L_08AAD708:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AAD734;
      }
      goto L_08AAD710;
    }
L_08AAD710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD7F0;
      }
      goto L_08AAD718;
    }
L_08AAD718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AAD734;
      }
      goto L_08AAD728;
    }
L_08AAD728:
    ctx.gpr[31] = (0x08AAD730u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08AAD730u) goto L_08AAD730;
    return;
L_08AAD730:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    goto L_08AAD734;
L_08AAD734:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AAD750u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x08AAD750u) goto L_08AAD750;
    return;
L_08AAD750:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(560)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(301)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08AAD7B0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x08AAD7B0u) goto L_08AAD7B0;
    return;
L_08AAD7B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08AAD7C4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08AAD7C4u) goto L_08AAD7C4;
    return;
L_08AAD7C4:
    ctx.gpr[31] = (0x08AAD7CCu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x08AAD7CCu) goto L_08AAD7CC;
    return;
L_08AAD7CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD7F0;
      }
      goto L_08AAD7DC;
    }
L_08AAD7DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD7F0;
      }
      goto L_08AAD7E8;
    }
L_08AAD7E8:
    ctx.gpr[31] = (0x08AAD7F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08AAD7F0u) goto L_08AAD7F0;
    return;
L_08AAD7F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD80C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AAD824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 170u, 0x08A82198u>(ctx, &aot_mem) && ctx.pc == 0x08AAD824u) goto L_08AAD824;
    return;
L_08AAD824:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32248));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD844:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AAD88C;
      }
      goto L_08AAD860;
    }
L_08AAD860:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32248));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AAD878u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 175u, 0x08A8223Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD878u) goto L_08AAD878;
    return;
L_08AAD878:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD88C;
      }
      goto L_08AAD884;
    }
L_08AAD884:
    ctx.gpr[31] = (0x08AAD88Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AAD88Cu) goto L_08AAD88C;
    return;
L_08AAD88C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD8A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AAD8BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 195u, 0x08A82398u>(ctx, &aot_mem) && ctx.pc == 0x08AAD8BCu) goto L_08AAD8BC;
    return;
L_08AAD8BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[31] = (0x08AAD908u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08AAD908u) goto L_08AAD908;
    return;
L_08AAD908:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x08AAD920u);
    ctx.gpr[7] = (0u | 2u);
    goto L_08AAD6C8;
L_08AAD920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08AAD934u);
    ctx.gpr[7] = (0u | 3u);
    goto L_08AAD6C8;
L_08AAD934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 11u);
    ctx.gpr[31] = (0x08AAD948u);
    ctx.gpr[7] = (0u | 4u);
    goto L_08AAD6C8;
L_08AAD948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x08AAD95Cu);
    ctx.gpr[7] = (0u | 5u);
    goto L_08AAD6C8;
L_08AAD95C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 18u);
    ctx.gpr[31] = (0x08AAD970u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AAD6C8;
L_08AAD970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 19u);
    ctx.gpr[31] = (0x08AAD984u);
    ctx.gpr[7] = (0u | 1u);
    goto L_08AAD6C8;
L_08AAD984:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD998:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAD9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 196u, 0x08A823A0u>(ctx, &aot_mem) && ctx.pc == 0x08AAD9A8u) goto L_08AAD9A8;
    return;
L_08AAD9A8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD9B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(192)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (16457u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AADA3C;
      }
      goto L_08AADA24;
    }
L_08AADA24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AADA40;
      }
      goto L_08AADA34;
    }
L_08AADA34:
    ctx.gpr[31] = (0x08AADA3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08AADA3Cu) goto L_08AADA3C;
    return;
L_08AADA3C:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    goto L_08AADA40;
L_08AADA40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AADA58u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x08AADA58u) goto L_08AADA58;
    return;
L_08AADA58:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(244)));
    ctx.gpr[31] = (0x08AADA74u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem) && ctx.pc == 0x08AADA74u) goto L_08AADA74;
    return;
L_08AADA74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08AADA80u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem) && ctx.pc == 0x08AADA80u) goto L_08AADA80;
    return;
L_08AADA80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08AADA94u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08AADA94u) goto L_08AADA94;
    return;
L_08AADA94:
    ctx.gpr[31] = (0x08AADA9Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x08AADA9Cu) goto L_08AADA9C;
    return;
L_08AADA9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AADACC;
      }
      goto L_08AADAB0;
    }
L_08AADAB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AADACC;
      }
      goto L_08AADAC0;
    }
L_08AADAC0:
    ctx.gpr[31] = (0x08AADAC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08AADAC8u) goto L_08AADAC8;
    return;
L_08AADAC8:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    goto L_08AADACC;
L_08AADACC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AADAE4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x08AADAE4u) goto L_08AADAE4;
    return;
L_08AADAE4:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(252)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AADB0Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x08AADB0Cu) goto L_08AADB0C;
    return;
L_08AADB0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08AADB18u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem) && ctx.pc == 0x08AADB18u) goto L_08AADB18;
    return;
L_08AADB18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08AADB2Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08AADB2Cu) goto L_08AADB2C;
    return;
L_08AADB2C:
    ctx.gpr[31] = (0x08AADB34u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x08AADB34u) goto L_08AADB34;
    return;
L_08AADB34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AADBD0;
      }
      goto L_08AADB44;
    }
L_08AADB44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AADB74;
      }
      goto L_08AADB58;
    }
L_08AADB58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AADB74;
      }
      goto L_08AADB68;
    }
L_08AADB68:
    ctx.gpr[31] = (0x08AADB70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08AADB70u) goto L_08AADB70;
    return;
L_08AADB70:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    goto L_08AADB74;
L_08AADB74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AADB8Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x08AADB8Cu) goto L_08AADB8C;
    return;
L_08AADB8C:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(244)));
    ctx.gpr[31] = (0x08AADBA8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem) && ctx.pc == 0x08AADBA8u) goto L_08AADBA8;
    return;
L_08AADBA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08AADBB4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem) && ctx.pc == 0x08AADBB4u) goto L_08AADBB4;
    return;
L_08AADBB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08AADBC8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08AADBC8u) goto L_08AADBC8;
    return;
L_08AADBC8:
    ctx.gpr[31] = (0x08AADBD0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x08AADBD0u) goto L_08AADBD0;
    return;
L_08AADBD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AADC78;
      }
      goto L_08AADBE0;
    }
L_08AADBE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AADC10;
      }
      goto L_08AADBF4;
    }
L_08AADBF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AADC10;
      }
      goto L_08AADC04;
    }
L_08AADC04:
    ctx.gpr[31] = (0x08AADC0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08AADC0Cu) goto L_08AADC0C;
    return;
L_08AADC0C:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    goto L_08AADC10;
L_08AADC10:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AADC28u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x08AADC28u) goto L_08AADC28;
    return;
L_08AADC28:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(252)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AADC50u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x08AADC50u) goto L_08AADC50;
    return;
L_08AADC50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08AADC5Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem) && ctx.pc == 0x08AADC5Cu) goto L_08AADC5C;
    return;
L_08AADC5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08AADC70u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08AADC70u) goto L_08AADC70;
    return;
L_08AADC70:
    ctx.gpr[31] = (0x08AADC78u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x08AADC78u) goto L_08AADC78;
    return;
L_08AADC78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AADCA8;
      }
      goto L_08AADC8C;
    }
L_08AADC8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AADCA8;
      }
      goto L_08AADC9C;
    }
L_08AADC9C:
    ctx.gpr[31] = (0x08AADCA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08AADCA4u) goto L_08AADCA4;
    return;
L_08AADCA4:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    goto L_08AADCA8;
L_08AADCA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AADCC0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x08AADCC0u) goto L_08AADCC0;
    return;
L_08AADCC0:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(240)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AADCE4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x08AADCE4u) goto L_08AADCE4;
    return;
L_08AADCE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08AADCF0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem) && ctx.pc == 0x08AADCF0u) goto L_08AADCF0;
    return;
L_08AADCF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08AADD04u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08AADD04u) goto L_08AADD04;
    return;
L_08AADD04:
    ctx.gpr[31] = (0x08AADD0Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x08AADD0Cu) goto L_08AADD0C;
    return;
L_08AADD0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AADD3C;
      }
      goto L_08AADD20;
    }
L_08AADD20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AADD3C;
      }
      goto L_08AADD30;
    }
L_08AADD30:
    ctx.gpr[31] = (0x08AADD38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08AADD38u) goto L_08AADD38;
    return;
L_08AADD38:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08AADD3C;
L_08AADD3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AADD54u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x08AADD54u) goto L_08AADD54;
    return;
L_08AADD54:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(232)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AADD80u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x08AADD80u) goto L_08AADD80;
    return;
L_08AADD80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08AADD8Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem) && ctx.pc == 0x08AADD8Cu) goto L_08AADD8C;
    return;
L_08AADD8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08AADDA0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08AADDA0u) goto L_08AADDA0;
    return;
L_08AADDA0:
    ctx.gpr[31] = (0x08AADDA8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x08AADDA8u) goto L_08AADDA8;
    return;
L_08AADDA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AADDCC;
      }
      goto L_08AADDB8;
    }
L_08AADDB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AADDCC;
      }
      goto L_08AADDC4;
    }
L_08AADDC4:
    ctx.gpr[31] = (0x08AADDCCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08AADDCCu) goto L_08AADDCC;
    return;
L_08AADDCC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AADDFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AADE04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AADE0C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AADE14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AADE38;
      }
      goto L_08AADE2C;
    }
L_08AADE2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AADE40;
      }
      goto L_08AADE38;
    }
L_08AADE38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AADE6C;
      }
      goto L_08AADE40;
    }
L_08AADE40:
    ctx.gpr[31] = (0x08AADE48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 490u, 0x0895B708u>(ctx, &aot_mem) && ctx.pc == 0x08AADE48u) goto L_08AADE48;
    return;
L_08AADE48:
    ctx.gpr[31] = (0x08AADE50u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 622u, 0x08972DA4u>(ctx, &aot_mem) && ctx.pc == 0x08AADE50u) goto L_08AADE50;
    return;
L_08AADE50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AADE5Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 523u, 0x0895B9C8u>(ctx, &aot_mem) && ctx.pc == 0x08AADE5Cu) goto L_08AADE5C;
    return;
L_08AADE5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AADE68u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 698u, 0x0887F368u>(ctx, &aot_mem) && ctx.pc == 0x08AADE68u) goto L_08AADE68;
    return;
L_08AADE68:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08AADE6C;
L_08AADE6C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AADE7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AADEA8;
      }
      goto L_08AADE98;
    }
L_08AADE98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AADEB0;
      }
      goto L_08AADEA8;
    }
L_08AADEA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AADF0C;
      }
      goto L_08AADEB0;
    }
L_08AADEB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AADEC0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 490u, 0x0895B708u>(ctx, &aot_mem) && ctx.pc == 0x08AADEC0u) goto L_08AADEC0;
    return;
L_08AADEC0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AADECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 622u, 0x08972DA4u>(ctx, &aot_mem) && ctx.pc == 0x08AADECCu) goto L_08AADECC;
    return;
L_08AADECC:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AADEFCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 523u, 0x0895B9C8u>(ctx, &aot_mem) && ctx.pc == 0x08AADEFCu) goto L_08AADEFC;
    return;
L_08AADEFC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AADF08u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 698u, 0x0887F368u>(ctx, &aot_mem) && ctx.pc == 0x08AADF08u) goto L_08AADF08;
    return;
L_08AADF08:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08AADF0C;
L_08AADF0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AADF20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[2] = (0u | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08AADF30;
    }
    goto L_08AADF30;
L_08AADF30:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AADF38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AADF6C;
      }
      goto L_08AADF58;
    }
L_08AADF58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AADF74;
      }
      goto L_08AADF64;
    }
L_08AADF64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE040;
      }
      goto L_08AADF6C;
    }
L_08AADF6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE040;
      }
      goto L_08AADF74;
    }
L_08AADF74:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08AADF80u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08AADF80u) goto L_08AADF80;
    return;
L_08AADF80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AADFBC;
      }
      goto L_08AADF94;
    }
L_08AADF94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08AADFA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 715u, 0x0887F4DCu>(ctx, &aot_mem) && ctx.pc == 0x08AADFA8u) goto L_08AADFA8;
    return;
L_08AADFA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AADF94;
      }
      goto L_08AADFBC;
    }
L_08AADFBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AADFD4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AADFD4u) goto L_08AADFD4;
    return;
L_08AADFD4:
    ctx.gpr[31] = (0x08AADFDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 476u, 0x088DF860u>(ctx, &aot_mem) && ctx.pc == 0x08AADFDCu) goto L_08AADFDC;
    return;
L_08AADFDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AADFF4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AADFF4u) goto L_08AADFF4;
    return;
L_08AADFF4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AAE03C;
      }
      goto L_08AAE000;
    }
L_08AAE000:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_08AAE01C;
    }
    goto L_08AAE00C;
L_08AAE00C:
    ctx.gpr[31] = (0x08AAE014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08AAE014u) goto L_08AAE014;
    return;
L_08AAE014:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_08AAE01C;
L_08AAE01C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AAE030u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAE030u) goto L_08AAE030;
    return;
L_08AAE030:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AAE03Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 696u, 0x0893EDD4u>(ctx, &aot_mem) && ctx.pc == 0x08AAE03Cu) goto L_08AAE03C;
    return;
L_08AAE03C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    goto L_08AAE040;
L_08AAE040:
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
L_08AAE058:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE080;
      }
      goto L_08AAE064;
    }
L_08AAE064:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(58)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[8] & 8u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08AAE088;
      }
      goto L_08AAE078;
    }
L_08AAE078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE08C;
      }
      goto L_08AAE080;
    }
L_08AAE080:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE0E4;
      }
      goto L_08AAE088;
    }
L_08AAE088:
    ctx.gpr[6] = (ctx.gpr[8] & 3u);
    goto L_08AAE08C;
L_08AAE08C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[9] = (2236u << 16u);
      if (branch_taken) {
          goto L_08AAE0D4;
      }
      goto L_08AAE098;
    }
L_08AAE098:
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(1960)));
    goto L_08AAE0A8;
L_08AAE0A8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE0DC;
      }
      goto L_08AAE0C0;
    }
L_08AAE0C0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AAE0A8;
      }
      goto L_08AAE0D4;
    }
L_08AAE0D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE0E4;
      }
      goto L_08AAE0DC;
    }
L_08AAE0DC:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AAE0E4;
L_08AAE0E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE0EC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(58)));
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1960)));
      if (branch_taken) {
          goto L_08AAE110;
      }
      goto L_08AAE104;
    }
L_08AAE104:
    ctx.gpr[6] = (ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE128;
      }
      goto L_08AAE110;
    }
L_08AAE110:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_08AAE138;
      }
      goto L_08AAE128;
    }
L_08AAE128:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    goto L_08AAE138;
L_08AAE138:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE140:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE168;
      }
      goto L_08AAE14C;
    }
L_08AAE14C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(58)));
    ctx.gpr[7] = (ctx.gpr[8] & 3u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AAE170;
      }
      goto L_08AAE160;
    }
L_08AAE160:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_08AAE184;
      }
      goto L_08AAE168;
    }
L_08AAE168:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE1BC;
      }
      goto L_08AAE170;
    }
L_08AAE170:
    ctx.gpr[8] = (ctx.gpr[8] & 8u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_08AAE184;
      }
      goto L_08AAE17C;
    }
L_08AAE17C:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    goto L_08AAE184;
L_08AAE184:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1960)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE1B8;
      }
      goto L_08AAE1AC;
    }
L_08AAE1AC:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAE1BC;
      }
      goto L_08AAE1B8;
    }
L_08AAE1B8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AAE1BC;
L_08AAE1BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE1C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AAE1FCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem) && ctx.pc == 0x08AAE1FCu) goto L_08AAE1FC;
    return;
L_08AAE1FC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AAE20Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem) && ctx.pc == 0x08AAE20Cu) goto L_08AAE20C;
    return;
L_08AAE20C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE258;
      }
      goto L_08AAE220;
    }
L_08AAE220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08AAE230u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 639u, 0x08A53688u>(ctx, &aot_mem) && ctx.pc == 0x08AAE230u) goto L_08AAE230;
    return;
L_08AAE230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08AAE244u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 706u, 0x0887F414u>(ctx, &aot_mem) && ctx.pc == 0x08AAE244u) goto L_08AAE244;
    return;
L_08AAE244:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AAE220;
      }
      goto L_08AAE258;
    }
L_08AAE258:
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
L_08AAE270:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2280u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(2128));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAE290u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 451u, 0x088DF69Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAE290u) goto L_08AAE290;
    return;
L_08AAE290:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32464));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AAE2A4u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2848));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AAE2A4u) goto L_08AAE2A4;
    return;
L_08AAE2A4:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(10232));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 40u);
    ctx.gpr[31] = (0x08AAE2BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9952));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 279u, 0x08A312B4u>(ctx, &aot_mem) && ctx.pc == 0x08AAE2BCu) goto L_08AAE2BC;
    return;
L_08AAE2BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE2CC:
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[3] = ctx.fpr[17] - ctx.fpr[15];
    ctx.fpr[4] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[5] = ctx.fpr[16] - ctx.fpr[14];
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[3] = ctx.fpr[3] - ctx.fpr[4];
    ctx.set_fpu_condition((ctx.fpr[3] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AAE39C;
      }
      goto L_08AAE300;
    }
L_08AAE300:
    ctx.fpr[3] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[4] = ctx.fpr[19] - ctx.fpr[17];
    ctx.fpr[16] = ctx.fpr[18] - ctx.fpr[16];
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[17];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[3] - ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE394;
      }
      goto L_08AAE32C;
    }
L_08AAE32C:
    ctx.fpr[16] = ctx.fpr[12] - ctx.fpr[18];
    ctx.fpr[17] = ctx.fpr[2] - ctx.fpr[19];
    ctx.fpr[18] = ctx.fpr[1] - ctx.fpr[18];
    ctx.fpr[19] = ctx.fpr[13] - ctx.fpr[19];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[18];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE38C;
      }
      goto L_08AAE358;
    }
L_08AAE358:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[1];
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[2];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[2];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[1];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE3A4;
      }
      goto L_08AAE384;
    }
L_08AAE384:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE3A8;
      }
      goto L_08AAE38C;
    }
L_08AAE38C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE3A8;
      }
      goto L_08AAE394;
    }
L_08AAE394:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE3A8;
      }
      goto L_08AAE39C;
    }
L_08AAE39C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE3A8;
      }
      goto L_08AAE3A4;
    }
L_08AAE3A4:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AAE3A8;
L_08AAE3A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE3B0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10248), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10264), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10260), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10256), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10252), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10244), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE3CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08AAE4A0;
      }
      goto L_08AAE3EC;
    }
L_08AAE3EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08AAE490;
      }
      goto L_08AAE3F4;
    }
L_08AAE3F4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AAE4CC;
      }
      goto L_08AAE3FC;
    }
L_08AAE3FC:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08AAE408u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 54u, 0x08A1C648u>(ctx, &aot_mem) && ctx.pc == 0x08AAE408u) goto L_08AAE408;
    return;
L_08AAE408:
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
    ctx.gpr[31] = (0x08AAE424u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AAE51C;
L_08AAE424:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10252), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE43C;
      }
      goto L_08AAE434;
    }
L_08AAE434:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAE440;
      }
      goto L_08AAE43C;
    }
L_08AAE43C:
    ctx.gpr[16] = (0u | 0u);
    goto L_08AAE440;
L_08AAE440:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10244)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AAE488;
      }
      goto L_08AAE44C;
    }
L_08AAE44C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE478;
      }
      goto L_08AAE468;
    }
L_08AAE468:
    ctx.gpr[31] = (0x08AAE470u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08AAE764;
L_08AAE470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE484;
      }
      goto L_08AAE478;
    }
L_08AAE478:
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08AAE484u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AAE764;
L_08AAE484:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10244), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08AAE488;
L_08AAE488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE4CC;
      }
      goto L_08AAE490;
    }
L_08AAE490:
    ctx.gpr[31] = (0x08AAE498u);
    // nop
    goto L_08AAEA14;
L_08AAE498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE4CC;
      }
      goto L_08AAE4A0;
    }
L_08AAE4A0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AAE4ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08AAE4ACu) goto L_08AAE4AC;
    return;
L_08AAE4AC:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(10260));
    ctx.gpr[31] = (0x08AAE4C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AAE51C;
L_08AAE4C8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10256), ctx.gpr[2]);
    goto L_08AAE4CC;
L_08AAE4CC:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2016)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE50C;
      }
      goto L_08AAE4E0;
    }
L_08AAE4E0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08AAE4ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08AAE4ECu) goto L_08AAE4EC;
    return;
L_08AAE4EC:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(10260));
    ctx.gpr[31] = (0x08AAE508u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AAE51C;
L_08AAE508:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10256), ctx.gpr[2]);
    goto L_08AAE50C;
L_08AAE50C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE51C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE528;
      }
      goto L_08AAE524;
    }
L_08AAE524:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AAE528;
L_08AAE528:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10248)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE63C;
      }
      goto L_08AAE53C;
    }
L_08AAE53C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10264)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE628;
      }
      goto L_08AAE564;
    }
L_08AAE564:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE628;
      }
      goto L_08AAE580;
    }
L_08AAE580:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(4))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE628;
      }
      goto L_08AAE5A0;
    }
L_08AAE5A0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(6))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE628;
      }
      goto L_08AAE5BC;
    }
L_08AAE5BC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(8))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE628;
      }
      goto L_08AAE5DC;
    }
L_08AAE5DC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(10))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE628;
      }
      goto L_08AAE5F8;
    }
L_08AAE5F8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AAE628;
      }
      goto L_08AAE604;
    }
L_08AAE604:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE624;
      }
      goto L_08AAE61C;
    }
L_08AAE61C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AAE624;
      }
      goto L_08AAE624;
    }
L_08AAE624:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_08AAE628;
L_08AAE628:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10248)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AAE53C;
      }
      goto L_08AAE63C;
    }
L_08AAE63C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE644:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAE654u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08AAE654u) goto L_08AAE654;
    return;
L_08AAE654:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10248)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE74C;
      }
      goto L_08AAE668;
    }
L_08AAE668:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10264)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AAE680;
L_08AAE680:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[9] = (ctx.gpr[9] & 2u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE738;
      }
      goto L_08AAE690;
    }
L_08AAE690:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE738;
      }
      goto L_08AAE6AC;
    }
L_08AAE6AC:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE738;
      }
      goto L_08AAE6C8;
    }
L_08AAE6C8:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE738;
      }
      goto L_08AAE6E4;
    }
L_08AAE6E4:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE738;
      }
      goto L_08AAE700;
    }
L_08AAE700:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE738;
      }
      goto L_08AAE71C;
    }
L_08AAE71C:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE754;
      }
      goto L_08AAE738;
    }
L_08AAE738:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AAE680;
      }
      goto L_08AAE74C;
    }
L_08AAE74C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE758;
      }
      goto L_08AAE754;
    }
L_08AAE754:
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_08AAE758;
L_08AAE758:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE764:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15968)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15964)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AAE81C;
      }
      goto L_08AAE784;
    }
L_08AAE784:
    ctx.gpr[10] = (ctx.gpr[4] << 5u);
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[2] & 1u);
    ctx.gpr[9] = (65528u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] << 19u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    goto L_08AAE7A0;
L_08AAE7A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAE7B8;
      }
      goto L_08AAE7A8;
    }
L_08AAE7A8:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
        goto L_08AAE7C0;
    }
    goto L_08AAE7B8;
L_08AAE7B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE7E0;
      }
      goto L_08AAE7C0;
    }
L_08AAE7C0:
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[4]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[3] & 128u);
    if (ctx.gpr[3] == 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
        goto L_08AAE7DC;
    }
    goto L_08AAE7D4;
L_08AAE7D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE7E0;
      }
      goto L_08AAE7DC;
    }
L_08AAE7DC:
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[10]);
    goto L_08AAE7E0;
L_08AAE7E0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE808;
      }
      goto L_08AAE7E8;
    }
L_08AAE7E8:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(76)));
    ctx.gpr[12] = (ctx.gpr[12] & 8u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE808;
      }
      goto L_08AAE7F8;
    }
L_08AAE7F8:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(72)));
    ctx.gpr[12] = (ctx.gpr[12] & ctx.gpr[9]);
    ctx.gpr[12] = (ctx.gpr[12] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(72), ctx.gpr[12]);
    goto L_08AAE808;
L_08AAE808:
    ctx.gpr[3] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_08AAE7A0;
      }
      goto L_08AAE81C;
    }
L_08AAE81C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AAE8C4;
      }
      goto L_08AAE82C;
    }
L_08AAE82C:
    ctx.gpr[10] = (ctx.gpr[4] << 5u);
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[2] & 1u);
    ctx.gpr[9] = (65528u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] << 19u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    goto L_08AAE848;
L_08AAE848:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAE860;
      }
      goto L_08AAE850;
    }
L_08AAE850:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    if (ctx.gpr[11] != 0u) {
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_08AAE868;
    }
    goto L_08AAE860;
L_08AAE860:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE888;
      }
      goto L_08AAE868;
    }
L_08AAE868:
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] & 128u);
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_08AAE884;
    }
    goto L_08AAE87C;
L_08AAE87C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE888;
      }
      goto L_08AAE884;
    }
L_08AAE884:
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[10]);
    goto L_08AAE888;
L_08AAE888:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE8B0;
      }
      goto L_08AAE890;
    }
L_08AAE890:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(76)));
    ctx.gpr[2] = (ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE8B0;
      }
      goto L_08AAE8A0;
    }
L_08AAE8A0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[9]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    goto L_08AAE8B0;
L_08AAE8B0:
    ctx.gpr[11] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_08AAE848;
      }
      goto L_08AAE8C4;
    }
L_08AAE8C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AAE8E4;
      }
      goto L_08AAE8D4;
    }
L_08AAE8D4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AAE8D4;
      }
      goto L_08AAE8E4;
    }
L_08AAE8E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE8EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10256)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE904;
      }
      goto L_08AAE8FC;
    }
L_08AAE8FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAE908;
      }
      goto L_08AAE904;
    }
L_08AAE904:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AAE908;
L_08AAE908:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10256)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE928;
      }
      goto L_08AAE920;
    }
L_08AAE920:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAE92C;
      }
      goto L_08AAE928;
    }
L_08AAE928:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AAE92C;
L_08AAE92C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10256)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE94C;
      }
      goto L_08AAE944;
    }
L_08AAE944:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAE950;
      }
      goto L_08AAE94C;
    }
L_08AAE94C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AAE950;
L_08AAE950:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10256)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE970;
      }
      goto L_08AAE968;
    }
L_08AAE968:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAE974;
      }
      goto L_08AAE970;
    }
L_08AAE970:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AAE974;
L_08AAE974:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE97C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10256)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE994;
      }
      goto L_08AAE98C;
    }
L_08AAE98C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAE998;
      }
      goto L_08AAE994;
    }
L_08AAE994:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AAE998;
L_08AAE998:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE9A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10252)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE9B8;
      }
      goto L_08AAE9B0;
    }
L_08AAE9B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAE9BC;
      }
      goto L_08AAE9B8;
    }
L_08AAE9B8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AAE9BC;
L_08AAE9BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE9C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10252)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE9DC;
      }
      goto L_08AAE9D4;
    }
L_08AAE9D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAE9E0;
      }
      goto L_08AAE9DC;
    }
L_08AAE9DC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AAE9E0;
L_08AAE9E0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE9E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10256)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEA00;
      }
      goto L_08AAE9F8;
    }
L_08AAE9F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAEA04;
      }
      goto L_08AAEA00;
    }
L_08AAEA00:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AAEA04;
L_08AAEA04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEA0C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10260)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEA14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (17490u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (50394u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (50381u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 36045u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17467u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 63898u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17566u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 31130u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17522u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 63898u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17560u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 1638u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (17352u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAEA90u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08AAE2CC;
L_08AAEA90:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2828), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEAA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEAE8;
      }
      goto L_08AAEABC;
    }
L_08AAEABC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AAEAC8u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AAEAC8u) goto L_08AAEAC8;
    return;
L_08AAEAC8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2808));
      if (branch_taken) {
          goto L_08AAEAE4;
      }
      goto L_08AAEAD4;
    }
L_08AAEAD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AAEAE0u);
    ctx.gpr[5] = (0u | 840u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 84u, 0x08B70724u>(ctx, &aot_mem) && ctx.pc == 0x08AAEAE0u) goto L_08AAEAE0;
    return;
L_08AAEAE0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AAEAE4;
L_08AAEAE4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816), ctx.gpr[17]);
    goto L_08AAEAE8;
L_08AAEAE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEAFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAEB10u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 90u, 0x08B707C8u>(ctx, &aot_mem) && ctx.pc == 0x08AAEB10u) goto L_08AAEB10;
    return;
L_08AAEB10:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816), 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEB20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_08AAEB38;
L_08AAEB38:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAEB54;
      }
      goto L_08AAEB40;
    }
L_08AAEB40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08AAEB5C;
    }
    goto L_08AAEB54;
L_08AAEB54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAEB84;
      }
      goto L_08AAEB5C;
    }
L_08AAEB5C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08AAEB78;
    }
    goto L_08AAEB70;
L_08AAEB70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAEB84;
      }
      goto L_08AAEB78;
    }
L_08AAEB78:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AAEB84;
L_08AAEB84:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEBA4;
      }
      goto L_08AAEB8C;
    }
L_08AAEB8C:
    ctx.gpr[31] = (0x08AAEB94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AAF2AC;
L_08AAEB94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEBA4;
      }
      goto L_08AAEB9C;
    }
L_08AAEB9C:
    ctx.gpr[31] = (0x08AAEBA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AAEC20;
L_08AAEBA4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 840 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08AAEB38;
      }
      goto L_08AAEBB4;
    }
L_08AAEBB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEBC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAEBE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 100u, 0x08B7085Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAEBE4u) goto L_08AAEBE4;
    return;
L_08AAEBE4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08AAEC00u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAEC00u) goto L_08AAEC00;
    return;
L_08AAEC00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[31] = (0x08AAEC0Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 111u, 0x08B7095Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAEC0Cu) goto L_08AAEC0C;
    return;
L_08AAEC0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEC20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAEC34u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08AAEEA8;
L_08AAEC34:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
      if (branch_taken) {
          goto L_08AAEC50;
      }
      goto L_08AAEC3C;
    }
L_08AAEC3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
        goto L_08AAEC58;
    }
    goto L_08AAEC50;
L_08AAEC50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAEC8C;
      }
      goto L_08AAEC58;
    }
L_08AAEC58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
        goto L_08AAEC78;
    }
    goto L_08AAEC70;
L_08AAEC70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAEC8C;
      }
      goto L_08AAEC78;
    }
L_08AAEC78:
    ctx.gpr[6] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[16] << 2u);
    ctx.gpr[16] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[16]);
    goto L_08AAEC8C;
L_08AAEC8C:
    ctx.gpr[31] = (0x08AAEC94u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 108u, 0x08B70918u>(ctx, &aot_mem) && ctx.pc == 0x08AAEC94u) goto L_08AAEC94;
    return;
L_08AAEC94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAECA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAEDD8;
      }
      goto L_08AAECE0;
    }
L_08AAECE0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAECF8;
      }
      goto L_08AAECE8;
    }
L_08AAECE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08AAED00;
    }
    goto L_08AAECF8;
L_08AAECF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAED20;
      }
      goto L_08AAED00;
    }
L_08AAED00:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08AAED1C;
    }
    goto L_08AAED14;
L_08AAED14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAED20;
      }
      goto L_08AAED1C;
    }
L_08AAED1C:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[18]);
    goto L_08AAED20;
L_08AAED20:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AAEDB0;
      }
      goto L_08AAED28;
    }
L_08AAED28:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AAED94;
      }
      goto L_08AAED34;
    }
L_08AAED34:
    ctx.gpr[31] = (0x08AAED3Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 340u, 0x08B552D8u>(ctx, &aot_mem) && ctx.pc == 0x08AAED3Cu) goto L_08AAED3C;
    return;
L_08AAED3C:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AAED58;
      }
      goto L_08AAED48;
    }
L_08AAED48:
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(-32));
    ctx.gpr[21] = (ctx.gpr[5] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 24u));
      if (branch_taken) {
          goto L_08AAED58;
      }
      goto L_08AAED58;
    }
L_08AAED58:
    ctx.gpr[31] = (0x08AAED60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 340u, 0x08B552D8u>(ctx, &aot_mem) && ctx.pc == 0x08AAED60u) goto L_08AAED60;
    return;
L_08AAED60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AAED78;
      }
      goto L_08AAED68;
    }
L_08AAED68:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
      if (branch_taken) {
          goto L_08AAED78;
      }
      goto L_08AAED78;
    }
L_08AAED78:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAED88;
      }
      goto L_08AAED80;
    }
L_08AAED80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAEDA8;
      }
      goto L_08AAED88;
    }
L_08AAED88:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAED34;
      }
      goto L_08AAED94;
    }
L_08AAED94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAEDA8;
      }
      goto L_08AAEDA0;
    }
L_08AAEDA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAEDA8;
      }
      goto L_08AAEDA8;
    }
L_08AAEDA8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEDD0;
      }
      goto L_08AAEDB0;
    }
L_08AAEDB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08AAECE0;
      }
      goto L_08AAEDC8;
    }
L_08AAEDC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEDD8;
      }
      goto L_08AAEDD0;
    }
L_08AAEDD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AAEDDC;
      }
      goto L_08AAEDD8;
    }
L_08AAEDD8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AAEDDC;
L_08AAEDDC:
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
L_08AAEE00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAEE28;
      }
      goto L_08AAEE14;
    }
L_08AAEE14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AAEE30;
    }
    goto L_08AAEE28;
L_08AAEE28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAEE5C;
      }
      goto L_08AAEE30;
    }
L_08AAEE30:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_08AAEE4C;
      }
      goto L_08AAEE44;
    }
L_08AAEE44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAEE5C;
      }
      goto L_08AAEE4C;
    }
L_08AAEE4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08AAEE5C;
L_08AAEE5C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2800));
    ctx.gpr[31] = (0x08AAEE70u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 162u, 0x08B589F8u>(ctx, &aot_mem) && ctx.pc == 0x08AAEE70u) goto L_08AAEE70;
    return;
L_08AAEE70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEE80;
      }
      goto L_08AAEE78;
    }
L_08AAEE78:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    goto L_08AAEE80;
L_08AAEE80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08AAEE90u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem) && ctx.pc == 0x08AAEE90u) goto L_08AAEE90;
    return;
L_08AAEE90:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEEA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAEED0;
      }
      goto L_08AAEEBC;
    }
L_08AAEEBC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AAEED8;
    }
    goto L_08AAEED0;
L_08AAEED0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAEF04;
      }
      goto L_08AAEED8;
    }
L_08AAEED8:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_08AAEEF4;
      }
      goto L_08AAEEEC;
    }
L_08AAEEEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAEF04;
      }
      goto L_08AAEEF4;
    }
L_08AAEEF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08AAEF04;
L_08AAEF04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEF40;
      }
      goto L_08AAEF10;
    }
L_08AAEF10:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AAEF20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4936));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 352u, 0x08A65998u>(ctx, &aot_mem) && ctx.pc == 0x08AAEF20u) goto L_08AAEF20;
    return;
L_08AAEF20:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AAEF2Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08AAEF2Cu) goto L_08AAEF2C;
    return;
L_08AAEF2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    ctx.gpr[31] = (0x08AAEF40u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08AAEF40u) goto L_08AAEF40;
    return;
L_08AAEF40:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEF5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAEF80;
      }
      goto L_08AAEF6C;
    }
L_08AAEF6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08AAEF88;
    }
    goto L_08AAEF80;
L_08AAEF80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAEFB4;
      }
      goto L_08AAEF88;
    }
L_08AAEF88:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_08AAEFA4;
      }
      goto L_08AAEF9C;
    }
L_08AAEF9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAEFB4;
      }
      goto L_08AAEFA4;
    }
L_08AAEFA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AAEFB4;
L_08AAEFB4:
    ctx.gpr[31] = (0x08AAEFBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 351u, 0x08A6598Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAEFBCu) goto L_08AAEFBC;
    return;
L_08AAEFBC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEFC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAEFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 350u, 0x08A65984u>(ctx, &aot_mem) && ctx.pc == 0x08AAEFD8u) goto L_08AAEFD8;
    return;
L_08AAEFD8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2812), ctx.gpr[2]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEFE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAEFF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2812)));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 351u, 0x08A6598Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAEFF8u) goto L_08AAEFF8;
    return;
L_08AAEFF8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2812), 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF008:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAF024;
      }
      goto L_08AAF010;
    }
L_08AAF010:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08AAF02C;
    }
    goto L_08AAF024;
L_08AAF024:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAF058;
      }
      goto L_08AAF02C;
    }
L_08AAF02C:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_08AAF048;
      }
      goto L_08AAF040;
    }
L_08AAF040:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAF058;
      }
      goto L_08AAF048;
    }
L_08AAF048:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AAF058;
L_08AAF058:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF068:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAF090;
      }
      goto L_08AAF07C;
    }
L_08AAF07C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AAF098;
    }
    goto L_08AAF090;
L_08AAF090:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAF0C4;
      }
      goto L_08AAF098;
    }
L_08AAF098:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_08AAF0B4;
      }
      goto L_08AAF0AC;
    }
L_08AAF0AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAF0C4;
      }
      goto L_08AAF0B4;
    }
L_08AAF0B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08AAF0C4;
L_08AAF0C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AAF0FC;
      }
      goto L_08AAF0D8;
    }
L_08AAF0D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF0FC;
      }
      goto L_08AAF0E4;
    }
L_08AAF0E4:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(31984));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AAF0FCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 563u, 0x08ABE988u>(ctx, &aot_mem) && ctx.pc == 0x08AAF0FCu) goto L_08AAF0FC;
    return;
L_08AAF0FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF118:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAF13C;
      }
      goto L_08AAF128;
    }
L_08AAF128:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08AAF144;
    }
    goto L_08AAF13C;
L_08AAF13C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAF170;
      }
      goto L_08AAF144;
    }
L_08AAF144:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08AAF160;
    }
    goto L_08AAF158;
L_08AAF158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAF170;
      }
      goto L_08AAF160;
    }
L_08AAF160:
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_08AAF170;
L_08AAF170:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AAF190;
      }
      goto L_08AAF188;
    }
L_08AAF188:
    ctx.gpr[31] = (0x08AAF190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 567u, 0x08AD342Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAF190u) goto L_08AAF190;
    return;
L_08AAF190:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF19C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAF1C0;
      }
      goto L_08AAF1AC;
    }
L_08AAF1AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08AAF1C8;
    }
    goto L_08AAF1C0;
L_08AAF1C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAF1F4;
      }
      goto L_08AAF1C8;
    }
L_08AAF1C8:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_08AAF1E4;
      }
      goto L_08AAF1DC;
    }
L_08AAF1DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAF1F4;
      }
      goto L_08AAF1E4;
    }
L_08AAF1E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AAF1F4;
L_08AAF1F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF240;
      }
      goto L_08AAF21C;
    }
L_08AAF21C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF240;
      }
      goto L_08AAF228;
    }
L_08AAF228:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(31984));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AAF240u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 563u, 0x08ABE988u>(ctx, &aot_mem) && ctx.pc == 0x08AAF240u) goto L_08AAF240;
    return;
L_08AAF240:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF24C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAF268;
      }
      goto L_08AAF254;
    }
L_08AAF254:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08AAF270;
    }
    goto L_08AAF268;
L_08AAF268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAF29C;
      }
      goto L_08AAF270;
    }
L_08AAF270:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_08AAF28C;
      }
      goto L_08AAF284;
    }
L_08AAF284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAF29C;
      }
      goto L_08AAF28C;
    }
L_08AAF28C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AAF29C;
L_08AAF29C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF2AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAF2C8;
      }
      goto L_08AAF2B4;
    }
L_08AAF2B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08AAF2D0;
    }
    goto L_08AAF2C8;
L_08AAF2C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAF2FC;
      }
      goto L_08AAF2D0;
    }
L_08AAF2D0:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_08AAF2EC;
      }
      goto L_08AAF2E4;
    }
L_08AAF2E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAF2FC;
      }
      goto L_08AAF2EC;
    }
L_08AAF2EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AAF2FC;
L_08AAF2FC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF304:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AAF334;
      }
      goto L_08AAF324;
    }
L_08AAF324:
    ctx.gpr[31] = (0x08AAF32Cu);
    // nop
    goto L_08AAEB20;
L_08AAF32C:
    ctx.gpr[31] = (0x08AAF334u);
    // nop
    goto L_08AAEAFC;
L_08AAF334:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2812), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08AAF344;
L_08AAF344:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAF360;
      }
      goto L_08AAF34C;
    }
L_08AAF34C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08AAF368;
    }
    goto L_08AAF360;
L_08AAF360:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAF390;
      }
      goto L_08AAF368;
    }
L_08AAF368:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08AAF384;
    }
    goto L_08AAF37C;
L_08AAF37C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAF390;
      }
      goto L_08AAF384;
    }
L_08AAF384:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08AAF390;
L_08AAF390:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF43C;
      }
      goto L_08AAF398;
    }
L_08AAF398:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAF3B8;
      }
      goto L_08AAF3A0;
    }
L_08AAF3A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08AAF3C4;
    }
    goto L_08AAF3B4;
L_08AAF3B4:
    ctx.gpr[5] = (0u | 0u);
    goto L_08AAF3B8;
L_08AAF3B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAF3F4;
      }
      goto L_08AAF3C4;
    }
L_08AAF3C4:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08AAF3E8;
    }
    goto L_08AAF3D8;
L_08AAF3D8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAF3F4;
      }
      goto L_08AAF3E8;
    }
L_08AAF3E8:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    goto L_08AAF3F4;
L_08AAF3F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAF410;
      }
      goto L_08AAF3FC;
    }
L_08AAF3FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08AAF418;
    }
    goto L_08AAF410;
L_08AAF410:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAF438;
      }
      goto L_08AAF418;
    }
L_08AAF418:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08AAF434;
    }
    goto L_08AAF42C;
L_08AAF42C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAF438;
      }
      goto L_08AAF434;
    }
L_08AAF434:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    goto L_08AAF438;
L_08AAF438:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    goto L_08AAF43C;
L_08AAF43C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 840 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08AAF344;
      }
      goto L_08AAF44C;
    }
L_08AAF44C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF460:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (116u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25976));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAF498u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 285u, 0x08A3137Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAF498u) goto L_08AAF498;
    return;
L_08AAF498:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AAF4ACu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08AAEE00;
L_08AAF4AC:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AAF4C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 563u, 0x08ABE988u>(ctx, &aot_mem) && ctx.pc == 0x08AAF4C0u) goto L_08AAF4C0;
    return;
L_08AAF4C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF4D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAF4F0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x08AAF4F0u) goto L_08AAF4F0;
    return;
L_08AAF4F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF504;
      }
      goto L_08AAF4FC;
    }
L_08AAF4FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF550;
      }
      goto L_08AAF504;
    }
L_08AAF504:
    ctx.gpr[31] = (0x08AAF50Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 262u, 0x08938FD8u>(ctx, &aot_mem) && ctx.pc == 0x08AAF50Cu) goto L_08AAF50C;
    return;
L_08AAF50C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AAF518u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 694u, 0x08AD3BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AAF518u) goto L_08AAF518;
    return;
L_08AAF518:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AAF528u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAF528u) goto L_08AAF528;
    return;
L_08AAF528:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AAF53Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem) && ctx.pc == 0x08AAF53Cu) goto L_08AAF53C;
    return;
L_08AAF53C:
    ctx.gpr[31] = (0x08AAF544u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x08AAF544u) goto L_08AAF544;
    return;
L_08AAF544:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AAF550u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AAF460;
L_08AAF550:
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
L_08AAF568:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7328));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAF5A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9976));
    ctx.pc = 0x08B7341Cu;
    return;
L_08AAF5A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF5B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF5CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF5D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAF5E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B73474u;
    return;
L_08AAF5E8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF5F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAF614u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.pc = 0x08B7347Cu;
    return;
L_08AAF614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4484)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AAF678;
      }
      goto L_08AAF620;
    }
L_08AAF620:
    ctx.gpr[18] = (0u | 5000u);
    ctx.gpr[31] = (0x08AAF62Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x08AAF62Cu) goto L_08AAF62C;
    return;
L_08AAF62C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AAF63Cu);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B734E4u;
    return;
L_08AAF63C:
    ctx.gpr[17] = (32770u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(424));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AAF670;
      }
      goto L_08AAF64C;
    }
L_08AAF64C:
    ctx.gpr[31] = (0x08AAF654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x08AAF654u) goto L_08AAF654;
    return;
L_08AAF654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AAF668u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B734E4u;
    return;
L_08AAF668:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AAF64C;
      }
      goto L_08AAF670;
    }
L_08AAF670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF688;
      }
      goto L_08AAF678;
    }
L_08AAF678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AAF688u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B734E4u;
    return;
L_08AAF688:
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
L_08AAF6A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] ^ 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF6B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAF6E4;
      }
      goto L_08AAF6D4;
    }
L_08AAF6D4:
    ctx.gpr[31] = (0x08AAF6DCu);
    // nop
    goto L_08AAF710;
L_08AAF6DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF6E8;
      }
      goto L_08AAF6E4;
    }
L_08AAF6E4:
    ctx.gpr[16] = (0u | 1u);
    goto L_08AAF6E8;
L_08AAF6E8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF6FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF710:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAF720u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B731BCu;
    return;
L_08AAF720:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF72C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAF838;
      }
      goto L_08AAF760;
    }
L_08AAF760:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[20] = (0u | 2u);
    goto L_08AAF768;
L_08AAF768:
    ctx.gpr[31] = (0x08AAF770u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B731BCu;
    return;
L_08AAF770:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AAF7E4;
      }
      goto L_08AAF780;
    }
L_08AAF780:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AAF7E4;
      }
      goto L_08AAF788;
    }
L_08AAF788:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF79C;
      }
      goto L_08AAF794;
    }
L_08AAF794:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 32u);
      if (branch_taken) {
          goto L_08AAF7BC;
      }
      goto L_08AAF79C;
    }
L_08AAF79C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[17]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF7B8;
      }
      goto L_08AAF7B0;
    }
L_08AAF7B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF7BC;
      }
      goto L_08AAF7B8;
    }
L_08AAF7B8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08AAF7BC;
L_08AAF7BC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AAF7C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B731B4u;
    return;
L_08AAF7C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AAF7E8;
      }
      goto L_08AAF7D4;
    }
L_08AAF7D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AAF7E8;
      }
      goto L_08AAF7E4;
    }
L_08AAF7E4:
    ctx.gpr[4] = (0u | 0u);
    goto L_08AAF7E8;
L_08AAF7E8:
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AAF800u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B734A4u;
    return;
L_08AAF800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AAF820;
      }
      goto L_08AAF80C;
    }
L_08AAF80C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF820;
      }
      goto L_08AAF81C;
    }
L_08AAF81C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    goto L_08AAF820;
L_08AAF820:
    ctx.gpr[31] = (0x08AAF828u);
    ctx.gpr[4] = (0u | 100u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08AAF828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AAF768;
      }
      goto L_08AAF838;
    }
L_08AAF838:
    ctx.gpr[31] = (0x08AAF840u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B73524u;
    return;
L_08AAF840:
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
L_08AAF864:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAF898u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 942u, 0x0885FFB4u>(ctx, &aot_mem) && ctx.pc == 0x08AAF898u) goto L_08AAF898;
    return;
L_08AAF898:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF8AC:
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
    ctx.gpr[31] = (0x08AAF8D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem) && ctx.pc == 0x08AAF8D0u) goto L_08AAF8D0;
    return;
L_08AAF8D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AAF8E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08AAF8E4u) goto L_08AAF8E4;
    return;
L_08AAF8E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF8F4:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08AAF910;
      }
      goto L_08AAF904;
    }
L_08AAF904:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    goto L_08AAF910;
L_08AAF910:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAF92C;
      }
      goto L_08AAF920;
    }
L_08AAF920:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    goto L_08AAF92C;
L_08AAF92C:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAF978;
      }
      goto L_08AAF93C;
    }
L_08AAF93C:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAF978;
      }
      goto L_08AAF94C;
    }
L_08AAF94C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAF978;
      }
      goto L_08AAF960;
    }
L_08AAF960:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAF978;
      }
      goto L_08AAF970;
    }
L_08AAF970:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAF97C;
      }
      goto L_08AAF978;
    }
L_08AAF978:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AAF97C;
L_08AAF97C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF984:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08AAF9A0;
      }
      goto L_08AAF994;
    }
L_08AAF994:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    goto L_08AAF9A0;
L_08AAF9A0:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAF9BC;
      }
      goto L_08AAF9B0;
    }
L_08AAF9B0:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    goto L_08AAF9BC;
L_08AAF9BC:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAF9D8;
      }
      goto L_08AAF9CC;
    }
L_08AAF9CC:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    goto L_08AAF9D8;
L_08AAF9D8:
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAFA48;
      }
      goto L_08AAF9E8;
    }
L_08AAF9E8:
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAFA48;
      }
      goto L_08AAF9F8;
    }
L_08AAF9F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAFA48;
      }
      goto L_08AAFA0C;
    }
L_08AAFA0C:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAFA48;
      }
      goto L_08AAFA1C;
    }
L_08AAFA1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAFA48;
      }
      goto L_08AAFA30;
    }
L_08AAFA30:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAFA48;
      }
      goto L_08AAFA40;
    }
L_08AAFA40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAFA4C;
      }
      goto L_08AAFA48;
    }
L_08AAFA48:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AAFA4C;
L_08AAFA4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFA54:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFA6C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[5] = (17279u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAFB68;
      }
      goto L_08AAFA98;
    }
L_08AAFA98:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AAFAC8;
      }
      goto L_08AAFAA4;
    }
L_08AAFAA4:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AAFB10;
      }
      goto L_08AAFAAC;
    }
L_08AAFAAC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AAFB40;
      }
      goto L_08AAFAB4;
    }
L_08AAFAB4:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08AAFAD0;
      }
      goto L_08AAFABC;
    }
L_08AAFABC:
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AAFB68;
      }
      goto L_08AAFAC8;
    }
L_08AAFAC8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AAFB68;
      }
      goto L_08AAFAD0;
    }
L_08AAFAD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFAEC;
      }
      goto L_08AAFAE0;
    }
L_08AAFAE0:
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AAFB08;
      }
      goto L_08AAFAEC;
    }
L_08AAFAEC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08AAFB08;
      }
      goto L_08AAFB04;
    }
L_08AAFB04:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_08AAFB08;
L_08AAFB08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFB68;
      }
      goto L_08AAFB10;
    }
L_08AAFB10:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFB34;
      }
      goto L_08AAFB24;
    }
L_08AAFB24:
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AAFB38;
      }
      goto L_08AAFB34;
    }
L_08AAFB34:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AAFB38;
L_08AAFB38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFB68;
      }
      goto L_08AAFB40;
    }
L_08AAFB40:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFB60;
      }
      goto L_08AAFB50;
    }
L_08AAFB50:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AAFB68;
      }
      goto L_08AAFB60;
    }
L_08AAFB60:
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AAFB68;
L_08AAFB68:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFB70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08AAFBE0;
      }
      goto L_08AAFBCC;
    }
L_08AAFBCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFBE8;
      }
      goto L_08AAFBD8;
    }
L_08AAFBD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFBF0;
      }
      goto L_08AAFBE0;
    }
L_08AAFBE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFE24;
      }
      goto L_08AAFBE8;
    }
L_08AAFBE8:
    ctx.gpr[31] = (0x08AAFBF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AAFBF0u) goto L_08AAFBF0;
    return;
L_08AAFBF0:
    ctx.gpr[31] = (0x08AAFBF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 638u, 0x089C6DBCu>(ctx, &aot_mem) && ctx.pc == 0x08AAFBF8u) goto L_08AAFBF8;
    return;
L_08AAFBF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFC5C;
      }
      goto L_08AAFC00;
    }
L_08AAFC00:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[30] = ctx.fpr[30] - ctx.fpr[12];
    ctx.gpr[5] = (16960u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16512u << 16u);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[30] - ctx.fpr[14];
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[28]) || std::isnan(ctx.fpr[22])) && ctx.fpr[28] == ctx.fpr[22]));
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[24] = ctx.fpr[26] / ctx.fpr[30];
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AAFC64;
      }
      goto L_08AAFC50;
    }
L_08AAFC50:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08AAFC80;
      }
      goto L_08AAFC5C;
    }
L_08AAFC5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFE24;
      }
      goto L_08AAFC64;
    }
L_08AAFC64:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[28]) || std::isnan(ctx.fpr[20])) && ctx.fpr[28] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAFC80;
      }
      goto L_08AAFC74;
    }
L_08AAFC74:
    ctx.gpr[5] = (17024u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AAFC80;
L_08AAFC80:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[28] = ctx.fpr[28] / ctx.fpr[13];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFCAC;
      }
      goto L_08AAFCA0;
    }
L_08AAFCA0:
    ctx.gpr[31] = (0x08AAFCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AAFCA8u) goto L_08AAFCA8;
    return;
L_08AAFCA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AAFCAC;
L_08AAFCAC:
    ctx.gpr[31] = (0x08AAFCB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 554u, 0x089BAA68u>(ctx, &aot_mem) && ctx.pc == 0x08AAFCB4u) goto L_08AAFCB4;
    return;
L_08AAFCB4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 34079u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[31] = (0x08AAFCF8u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAFCF8u) goto L_08AAFCF8;
    return;
L_08AAFCF8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AAFD28u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem) && ctx.pc == 0x08AAFD28u) goto L_08AAFD28;
    return;
L_08AAFD28:
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = ctx.fpr[13] + ctx.fpr[28];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08AAFD4Cu);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAFD4Cu) goto L_08AAFD4C;
    return;
L_08AAFD4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AAFDACu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem) && ctx.pc == 0x08AAFDACu) goto L_08AAFDAC;
    return;
L_08AAFDAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AAFDC4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAFDC4u) goto L_08AAFDC4;
    return;
L_08AAFDC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AAFE24u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem) && ctx.pc == 0x08AAFE24u) goto L_08AAFE24;
    return;
L_08AAFE24:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
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
L_08AAFE60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAFE74u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08AAFEA0;
L_08AAFE74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFE84;
      }
      goto L_08AAFE7C;
    }
L_08AAFE7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAFE90;
      }
      goto L_08AAFE84;
    }
L_08AAFE84:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08AAFE90;
L_08AAFE90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFEA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFED0;
      }
      goto L_08AAFEB0;
    }
L_08AAFEB0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AAFEBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15952)));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 123u, 0x08B70A78u>(ctx, &aot_mem) && ctx.pc == 0x08AAFEBCu) goto L_08AAFEBC;
    return;
L_08AAFEBC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAFED8;
      }
      goto L_08AAFEC8;
    }
L_08AAFEC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFEF0;
      }
      goto L_08AAFED0;
    }
L_08AAFED0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAFEF4;
      }
      goto L_08AAFED8;
    }
L_08AAFED8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15952)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFEF0;
      }
      goto L_08AAFEEC;
    }
L_08AAFEEC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AAFEF0;
L_08AAFEF0:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    goto L_08AAFEF4;
L_08AAFEF4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFF00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFFC0;
      }
      goto L_08AAFF20;
    }
L_08AAFF20:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AAFF3C;
      }
      goto L_08AAFF34;
    }
L_08AAFF34:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_08AAFF3C;
L_08AAFF3C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFF50;
      }
      goto L_08AAFF48;
    }
L_08AAFF48:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_08AAFF50;
L_08AAFF50:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFF60;
      }
      goto L_08AAFF58;
    }
L_08AAFF58:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08AAFF60;
L_08AAFF60:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFF70;
      }
      goto L_08AAFF68;
    }
L_08AAFF68:
    ctx.gpr[31] = (0x08AAFF70u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 595u, 0x08807CB8u>(ctx, &aot_mem) && ctx.pc == 0x08AAFF70u) goto L_08AAFF70;
    return;
L_08AAFF70:
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08AAFF8C;
      }
      goto L_08AAFF84;
    }
L_08AAFF84:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08AAFF8C;
L_08AAFF8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFFA0;
      }
      goto L_08AAFF98;
    }
L_08AAFF98:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08AAFFA0;
L_08AAFFA0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFFB0;
      }
      goto L_08AAFFA8;
    }
L_08AAFFA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08AAFFB0;
L_08AAFFB0:
    ctx.gpr[31] = (0x08AAFFB8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 724u, 0x0897EBF4u>(ctx, &aot_mem) && ctx.pc == 0x08AAFFB8u) goto L_08AAFFB8;
    return;
L_08AAFFB8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFF20;
      }
      goto L_08AAFFC0;
    }
L_08AAFFC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFFD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAFFE8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 349u, 0x08AD1B88u>(ctx, &aot_mem) && ctx.pc == 0x08AAFFE8u) goto L_08AAFFE8;
    return;
L_08AAFFE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-15));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32560));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.pc = 0x08AB0000u; return;
}

void recomp_unit_0170(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0170_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_170(Runtime &runtime) {
    runtime.register_generated_unit(170u, 0x08AAC000u, 16384u, &recomp_unit_0170, &recomp_unit_0170_entry);
    runtime.register_function(0x08AAC000u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC010u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC020u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC030u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC040u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC058u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC06Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC074u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC08Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC094u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC0A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC0B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC0B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC0BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC0C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC0D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC0F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC0FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC120u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC12Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC138u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC144u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC154u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC15Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC16Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC17Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC18Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC190u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC19Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC1A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC1C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC1CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC1FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC204u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC214u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC220u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC234u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC240u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC248u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC24Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC254u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC258u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC284u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC290u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC304u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC31Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC324u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC32Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC334u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC33Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC36Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC374u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC380u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC390u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC394u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC39Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC410u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC424u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC438u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC44Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC470u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC48Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC508u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC514u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC518u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC524u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC52Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC530u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC53Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC544u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC548u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC554u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC55Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC560u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC56Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC574u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC578u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC584u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC58Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC59Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC668u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC68Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC718u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC728u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC738u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC75Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC78Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC800u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC818u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC838u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC848u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC858u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC87Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC88Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC89Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC904u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC934u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC94Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC95Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC970u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC980u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC990u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA6Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA88u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACABCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACACCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAD4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACADCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB08u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB6Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB80u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBC0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBDCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC08u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC1Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCCCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE1Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE88u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD008u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD014u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD024u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD268u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD270u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD27Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD338u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD348u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD408u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD414u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD430u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD440u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD45Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD508u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD510u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD568u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD630u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD638u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD660u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD674u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD69Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD708u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD710u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD718u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD728u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD730u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD734u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD750u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD80Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD824u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD844u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD860u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD878u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD884u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD88Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD908u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD920u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD934u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD948u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD95Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD970u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD984u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD998u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA80u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAC0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADACCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB18u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB44u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADBA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADBB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADBC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADBD0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADBE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADBF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADCA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADCA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADCC0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADCE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADCF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD80u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADDA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADDA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADDB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADDC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADDCCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADDFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE6Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADEA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADEB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADEC0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADECCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADEFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF08u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF6Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF80u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADFA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADFBCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADFD4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADFDCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADFF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE000u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE00Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE014u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE01Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE030u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE03Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE040u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE058u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE064u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE078u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE080u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE088u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE08Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE098u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE104u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE110u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE128u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE138u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE140u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE14Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE160u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE168u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE170u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE17Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE184u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE20Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE220u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE230u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE244u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE258u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE270u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE290u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE2A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE2BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE2CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE300u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE32Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE358u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE384u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE38Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE394u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE39Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE3A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE3A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE3B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE3CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE3ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE3F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE3FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE408u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE424u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE434u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE43Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE440u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE44Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE468u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE470u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE478u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE484u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE488u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE490u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE498u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE508u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE50Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE51Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE524u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE528u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE53Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE564u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE580u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE604u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE61Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE624u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE628u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE63Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE644u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE654u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE668u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE680u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE690u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE700u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE71Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE738u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE74Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE754u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE758u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE764u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE784u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE808u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE81Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE82Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE848u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE850u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE860u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE868u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE87Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE884u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE888u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE890u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE904u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE908u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE910u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE920u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE928u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE92Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE934u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE944u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE94Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE950u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE958u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE968u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE970u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE974u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE97Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE98Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE994u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE998u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEAA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEABCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEAC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEAD4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEAE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEAE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEAE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEAFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEBA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEBB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEBC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEBE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAECA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAECE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAECE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAECF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED1Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED80u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED88u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDD0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDD8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDDCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE44u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE80u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEBCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEED0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEED8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF6Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF80u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF88u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFBCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFD8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF008u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF010u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF024u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF02Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF040u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF048u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF058u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF068u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF07Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF090u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF098u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF0ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF0B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF0C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF0D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF0E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF0FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF118u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF128u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF13Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF144u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF158u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF160u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF170u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF188u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF190u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF19Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF21Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF228u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF240u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF24Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF254u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF268u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF270u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF284u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF28Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF29Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF304u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF324u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF32Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF334u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF344u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF34Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF360u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF368u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF37Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF384u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF390u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF398u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF410u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF418u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF42Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF434u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF438u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF43Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF44Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF460u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF498u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF504u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF50Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF518u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF528u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF53Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF544u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF550u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF568u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF614u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF620u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF62Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF63Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF64Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF654u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF668u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF670u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF678u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF688u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF710u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF720u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF72Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF760u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF768u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF770u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF780u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF788u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF794u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF79Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF800u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF80Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF81Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF820u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF828u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF838u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF840u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF864u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF898u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF904u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF910u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF920u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF92Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF93Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF94Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF960u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF970u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF978u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF97Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF984u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF994u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA1Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA6Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFABCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAD0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB08u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBCCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBD8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC80u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEBCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFED0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFED8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFC0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFD4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFE8u, &recomp_unit_0170, "recomp_unit_0170");
}
} // namespace psprecomp
