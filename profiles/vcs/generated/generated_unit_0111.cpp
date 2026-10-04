#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0111[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 8, 0, 0,
    9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0, 31,
    0, 0, 32, 0, 0, 33, 0, 34, 35, 0, 36, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 44,
    45, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 58, 59, 0, 60, 61, 0, 62, 0, 0, 63, 0, 0, 0, 0, 64, 0,
    65, 0, 66, 67, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 102,
    103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0,
    144, 0, 145, 146, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167,
    0, 0, 168, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 174, 0, 0, 0,
    175, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0,
    0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 188, 0, 0, 0, 0, 0,
    0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 198, 0, 199,
    200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0,
    206, 0, 207, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 212,
    0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 226, 0, 0, 0,
    227, 0, 0, 228, 0, 0, 0, 229, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 0, 237, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 249, 0, 0, 250, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 258,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0,
    263, 0, 0, 0, 0, 264, 0, 0, 265, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 272, 0, 273, 0, 274, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0,
    279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 282, 0, 0, 0, 0, 0, 283, 0,
    0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0,
    0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 298, 0, 299, 0, 300, 0, 0, 301, 0, 302, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305,
    0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 309, 0, 0, 310, 0, 0,
    311, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 0, 316, 0, 0, 317, 0, 318, 0, 319, 0, 320, 0, 0, 0, 321, 0, 0,
    0, 322, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 327, 0, 0, 328, 0,
    329, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 334, 0, 335, 336, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 341, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0,
    347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0,
    0, 0, 0, 0, 356, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 360, 0, 0, 0, 361, 0, 362, 0, 363, 0, 0, 0, 364, 0, 365, 0, 0,
    366, 0, 0, 0, 0, 367, 0, 0, 0, 368, 369, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 374, 375,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 380, 381, 0, 382, 0, 383, 0, 0, 0, 384, 0,
    0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0, 389, 390, 391, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0,
    0, 395, 0, 0, 396, 0, 0, 397, 0, 398, 399, 400, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0,
    0, 405, 0, 0, 406, 0, 407, 408, 0, 409, 0, 410, 0, 0, 0, 411, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414,
    0, 0, 0, 415, 0, 0, 0, 416, 0, 417, 418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 421, 0, 0, 422, 0, 423, 424,
    0, 425, 0, 426, 0, 0, 0, 427, 0, 428, 0, 0, 0, 0, 429, 0, 430, 431, 0, 0, 432, 0, 0, 0, 433, 0, 434, 435, 0, 0, 0, 0,
    0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 440, 441, 0, 442, 0, 443, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 446,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 448, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0,
    0, 453, 0, 454, 455, 0, 456, 0, 457, 0, 0, 0, 458, 0, 459, 0, 0, 460, 0, 461, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    463, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 467, 468, 0, 469, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 473, 474, 0, 0, 0,
    0, 0, 0, 0, 0, 475, 0, 0, 476, 0, 0, 477, 0, 0, 478, 0, 479, 480, 0, 481, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0,
    485, 486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 489, 0, 0, 490, 0, 491, 492, 0, 493, 0, 494, 0, 0, 0, 495, 0,
    0, 0, 0, 0, 496, 0, 0, 497, 0, 0, 498, 0, 0, 499, 0, 500, 501, 0, 502, 0, 503, 0, 0, 0, 504, 0, 505, 0, 0, 506, 0, 0,
    0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 509, 510, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 514, 0, 515,
    516, 0, 517, 0, 518, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 521, 0, 522, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524,
    0, 0, 525, 0, 0, 526, 0, 0, 527, 0, 528, 529, 0, 530, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 535,
    0, 0, 536, 0, 537, 538, 539, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 0, 545, 0, 546, 547,
    548, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 552, 0, 0, 553, 0, 0, 554, 0, 555, 556, 557, 0, 0,
    558, 0, 0, 0, 559, 0, 560, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 563, 564, 0, 0, 565, 0, 0, 0, 566, 0, 567, 568, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 570, 0, 0, 571, 0, 0, 572, 0, 573, 574, 0, 575, 0, 576, 0, 0, 0, 577, 0, 578, 0,
    0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 581, 582, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 584, 0, 0,
    585, 0, 0, 586, 0, 587, 588, 0, 589, 0, 590, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 594, 0, 595, 596, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 601, 602, 0, 603, 0, 604, 0,
    0, 0, 605, 0, 606, 0, 0, 0, 0, 0, 607, 0, 608, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 612,
    0, 0, 613, 0, 614, 615, 0, 616, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0, 623, 624,
    625, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 631, 0, 632, 633, 634, 0, 0, 635, 0, 0,
    0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 638, 0, 0, 639, 0, 0, 640, 0, 641, 642, 643, 0, 0, 644, 0, 0, 0, 645, 0,
    646, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 0, 649, 650, 0, 0, 651, 0, 0, 0, 652, 0, 653, 654, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 655, 0, 0, 656, 0, 0, 657, 0, 0, 658, 0, 659, 660, 0, 661, 0, 662, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0, 665, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 667, 668, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 670, 0, 0, 671, 0, 0, 672,
    0, 673, 674, 0, 675, 0, 676, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0,
    681, 682, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 684, 0, 0, 685, 0, 0, 686, 0, 687, 688, 0, 689, 0, 690, 0, 0, 0, 691, 0,
    0, 0, 692, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 695, 696, 0, 0, 0, 0, 0, 0, 0, 0, 697,
    0, 0, 698, 0, 0, 699, 0, 0, 700, 0, 701, 702, 0, 703, 0, 704, 0, 0, 0, 705, 0, 706, 0, 0, 0, 0, 0, 0, 0, 707, 0, 708,
    709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 712, 0, 0, 713, 0, 714, 715, 0, 716, 0, 717, 0, 0, 0, 718,
    0, 0, 0, 0, 0, 719, 0, 0, 720, 0, 0, 721, 0, 0, 722, 0, 723, 724, 725, 0, 0, 726, 0, 0, 0, 727, 0, 0, 0, 0, 0, 728,
    0, 0, 729, 0, 0, 730, 0, 0, 731, 0, 732, 733, 734, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 738,
    0, 0, 739, 0, 0, 740, 0, 741, 742, 0, 743, 0, 744, 0, 0, 0, 745, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 0, 0,
    749, 0, 750, 751, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 753, 0, 0, 754, 0, 0, 755, 0, 756, 757, 0, 758, 0, 759, 0, 0, 0,
    760, 0, 0, 761, 0, 762, 0, 0, 763, 0, 764, 0, 765, 0, 766, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 768, 0, 0, 769, 0, 0, 770,
    0, 771, 772, 0, 773, 0, 774, 0, 0, 0, 775, 0, 776, 0, 777, 0, 778, 0, 779, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 781, 0, 0,
    782, 0, 0, 783, 0, 784, 785, 0, 786, 0, 787, 0, 0, 0, 788, 0, 789, 0, 0, 0, 0, 0, 790, 0, 791, 792, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 793, 0, 0, 794, 0, 0, 795, 0, 0, 796, 0, 797, 798, 0, 799, 0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 0, 802, 0,
    0, 803, 0, 0, 804, 0, 0, 805, 0, 806, 807, 808, 0, 0, 809, 0, 0, 0, 810, 0, 0, 0, 0, 0, 811, 0, 0, 812, 0, 0, 813, 0,
    0, 814, 0, 815, 816, 817, 0, 0, 818, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 821, 0, 0, 822, 0, 0, 823, 0,
    824, 825, 0, 826, 0, 827, 0, 0, 0, 828, 0, 829, 0, 0, 0, 830, 0, 831, 0, 0, 832, 0, 0, 0, 0, 0, 0, 833, 0, 834, 835, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 837, 0, 0, 838, 0, 0, 839, 0, 840, 841, 0, 842, 0, 843, 0, 0, 0, 844, 0, 0, 0,
    0, 845, 0, 846, 847, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0, 0, 849, 0, 0, 850, 0, 0, 851, 0, 852, 853, 0, 854, 0, 855, 0, 0,
    0, 856, 0, 857, 0, 0, 0, 0, 0, 0, 0, 858, 0, 859, 860, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 861, 0, 0, 862, 0, 0,
    863, 0, 0, 864, 0, 865, 866, 0, 867, 0, 868, 0, 0, 0, 869, 0, 0, 0, 0, 0, 870, 0, 0, 871, 0, 0, 872, 0, 0, 873, 0, 874,
    875, 876, 0, 0, 877, 0, 0, 0, 878, 0, 0, 0, 0, 0, 879, 0, 0, 880, 0, 0, 881, 0, 0, 882, 0, 883, 884, 885, 0, 0, 886, 0,
    0, 0, 887, 0, 0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 889, 0, 0, 890, 0, 0, 891, 0, 892, 893, 894, 0, 0, 895, 0, 0, 0, 896,
    0, 0, 897, 0, 0, 898, 0, 0, 0, 899, 0, 0, 0, 0, 900, 0, 901, 902, 0, 0, 0, 0, 0, 0, 0, 903, 0, 0, 904, 0, 0, 905,
    0, 0, 906, 0, 907, 908, 0, 909, 0, 910, 0, 0, 0, 911, 912, 0, 0, 913, 0, 914, 0, 915, 0, 0, 0, 0, 0, 0, 0, 0, 916, 0,
    0, 917, 0, 0, 918, 0, 0, 919, 0, 920, 921, 0, 922, 0, 923, 0, 0, 0, 924, 0, 0, 0, 0, 0, 925, 0, 926, 927, 0, 0, 0, 0,
    0, 0, 0, 0, 928, 0, 0, 929, 0, 0, 930, 0, 0, 931, 0, 932, 933, 0, 934, 0, 935, 0, 0, 0, 936, 0, 937, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 938, 0, 939, 940, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 941, 0, 0, 942, 0, 0, 943, 0, 0, 944, 0, 945,
    946, 0, 0, 947, 0, 948, 0, 0, 0, 949, 0, 0, 0, 0, 0, 950, 0, 0, 951, 0, 0, 952, 0, 0, 953, 0, 954, 955, 0, 956, 0, 0,
    957, 0, 0, 0, 958, 0, 0, 0, 0, 0, 959, 0, 0, 960, 0, 0, 961, 0, 0, 962, 0, 963, 964, 0, 965, 0, 0, 966, 0, 0, 0, 967,
};
void recomp_unit_0111_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089C0000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0111[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C0000;
    case 2u: goto L_089C0024;
    case 3u: goto L_089C0038;
    case 4u: goto L_089C0048;
    case 5u: goto L_089C0054;
    case 6u: goto L_089C0060;
    case 7u: goto L_089C006C;
    case 8u: goto L_089C0074;
    case 9u: goto L_089C0080;
    case 10u: goto L_089C0088;
    case 11u: goto L_089C00C0;
    case 12u: goto L_089C00F0;
    case 13u: goto L_089C010C;
    case 14u: goto L_089C0114;
    case 15u: goto L_089C0134;
    case 16u: goto L_089C014C;
    case 17u: goto L_089C0164;
    case 18u: goto L_089C016C;
    case 19u: goto L_089C0180;
    case 20u: goto L_089C01FC;
    case 21u: goto L_089C0218;
    case 22u: goto L_089C0228;
    case 23u: goto L_089C0244;
    case 24u: goto L_089C0260;
    case 25u: goto L_089C0270;
    case 26u: goto L_089C02A8;
    case 27u: goto L_089C02C4;
    case 28u: goto L_089C02D4;
    case 29u: goto L_089C02E4;
    case 30u: goto L_089C02EC;
    case 31u: goto L_089C02FC;
    case 32u: goto L_089C0308;
    case 33u: goto L_089C0314;
    case 34u: goto L_089C031C;
    case 35u: goto L_089C0320;
    case 36u: goto L_089C0328;
    case 37u: goto L_089C0330;
    case 38u: goto L_089C033C;
    case 39u: goto L_089C0374;
    case 40u: goto L_089C03B4;
    case 41u: goto L_089C03CC;
    case 42u: goto L_089C03E4;
    case 43u: goto L_089C03EC;
    case 44u: goto L_089C03FC;
    case 45u: goto L_089C0400;
    case 46u: goto L_089C040C;
    case 47u: goto L_089C0420;
    case 48u: goto L_089C0468;
    case 49u: goto L_089C0500;
    case 50u: goto L_089C0538;
    case 51u: goto L_089C056C;
    case 52u: goto L_089C05A0;
    case 53u: goto L_089C05D4;
    case 54u: goto L_089C0608;
    case 55u: goto L_089C0614;
    case 56u: goto L_089C061C;
    case 57u: goto L_089C0638;
    case 58u: goto L_089C0640;
    case 59u: goto L_089C0644;
    case 60u: goto L_089C064C;
    case 61u: goto L_089C0650;
    case 62u: goto L_089C0658;
    case 63u: goto L_089C0664;
    case 64u: goto L_089C0678;
    case 65u: goto L_089C0680;
    case 66u: goto L_089C0688;
    case 67u: goto L_089C068C;
    case 68u: goto L_089C0698;
    case 69u: goto L_089C06A4;
    case 70u: goto L_089C06B0;
    case 71u: goto L_089C06C8;
    case 72u: goto L_089C06E0;
    case 73u: goto L_089C06EC;
    case 74u: goto L_089C0784;
    case 75u: goto L_089C07BC;
    case 76u: goto L_089C07C0;
    case 77u: goto L_089C07E8;
    case 78u: goto L_089C0804;
    case 79u: goto L_089C0838;
    case 80u: goto L_089C0840;
    case 81u: goto L_089C0874;
    case 82u: goto L_089C089C;
    case 83u: goto L_089C08A8;
    case 84u: goto L_089C08B0;
    case 85u: goto L_089C08B4;
    case 86u: goto L_089C08C0;
    case 87u: goto L_089C08EC;
    case 88u: goto L_089C0908;
    case 89u: goto L_089C093C;
    case 90u: goto L_089C0944;
    case 91u: goto L_089C0950;
    case 92u: goto L_089C095C;
    case 93u: goto L_089C0968;
    case 94u: goto L_089C0974;
    case 95u: goto L_089C0984;
    case 96u: goto L_089C0A14;
    case 97u: goto L_089C0A20;
    case 98u: goto L_089C0A2C;
    case 99u: goto L_089C0A34;
    case 100u: goto L_089C0A68;
    case 101u: goto L_089C0A74;
    case 102u: goto L_089C0A7C;
    case 103u: goto L_089C0A80;
    case 104u: goto L_089C0A8C;
    case 105u: goto L_089C0AC8;
    case 106u: goto L_089C0AE4;
    case 107u: goto L_089C0B18;
    case 108u: goto L_089C0B20;
    case 109u: goto L_089C0B28;
    case 110u: goto L_089C0B5C;
    case 111u: goto L_089C0B90;
    case 112u: goto L_089C0B9C;
    case 113u: goto L_089C0BA8;
    case 114u: goto L_089C0BB4;
    case 115u: goto L_089C0BC0;
    case 116u: goto L_089C0BD0;
    case 117u: goto L_089C0C60;
    case 118u: goto L_089C0C6C;
    case 119u: goto L_089C0C78;
    case 120u: goto L_089C0C80;
    case 121u: goto L_089C0CA4;
    case 122u: goto L_089C0CCC;
    case 123u: goto L_089C0CD4;
    case 124u: goto L_089C0CDC;
    case 125u: goto L_089C0D04;
    case 126u: goto L_089C0D30;
    case 127u: goto L_089C0D38;
    case 128u: goto L_089C0D60;
    case 129u: goto L_089C0D6C;
    case 130u: goto L_089C0D70;
    case 131u: goto L_089C0D98;
    case 132u: goto L_089C0DCC;
    case 133u: goto L_089C0DEC;
    case 134u: goto L_089C0E30;
    case 135u: goto L_089C0E4C;
    case 136u: goto L_089C0E68;
    case 137u: goto L_089C0EA4;
    case 138u: goto L_089C0EC4;
    case 139u: goto L_089C0EE0;
    case 140u: goto L_089C0F10;
    case 141u: goto L_089C0F28;
    case 142u: goto L_089C0F44;
    case 143u: goto L_089C0F74;
    case 144u: goto L_089C0F80;
    case 145u: goto L_089C0F88;
    case 146u: goto L_089C0F8C;
    case 147u: goto L_089C0F98;
    case 148u: goto L_089C0FA0;
    case 149u: goto L_089C0FC8;
    case 150u: goto L_089C0FF8;
    case 151u: goto L_089C101C;
    case 152u: goto L_089C1028;
    case 153u: goto L_089C1034;
    case 154u: goto L_089C1040;
    case 155u: goto L_089C104C;
    case 156u: goto L_089C1058;
    case 157u: goto L_089C1068;
    case 158u: goto L_089C10C8;
    case 159u: goto L_089C10DC;
    case 160u: goto L_089C1120;
    case 161u: goto L_089C113C;
    case 162u: goto L_089C117C;
    case 163u: goto L_089C11B8;
    case 164u: goto L_089C11C4;
    case 165u: goto L_089C11CC;
    case 166u: goto L_089C11D4;
    case 167u: goto L_089C11FC;
    case 168u: goto L_089C1208;
    case 169u: goto L_089C120C;
    case 170u: goto L_089C1230;
    case 171u: goto L_089C124C;
    case 172u: goto L_089C125C;
    case 173u: goto L_089C126C;
    case 174u: goto L_089C1270;
    case 175u: goto L_089C1280;
    case 176u: goto L_089C128C;
    case 177u: goto L_089C1298;
    case 178u: goto L_089C12E8;
    case 179u: goto L_089C1304;
    case 180u: goto L_089C1314;
    case 181u: goto L_089C131C;
    case 182u: goto L_089C1368;
    case 183u: goto L_089C1384;
    case 184u: goto L_089C1394;
    case 185u: goto L_089C13A4;
    case 186u: goto L_089C13CC;
    case 187u: goto L_089C13E4;
    case 188u: goto L_089C13E8;
    case 189u: goto L_089C140C;
    case 190u: goto L_089C1418;
    case 191u: goto L_089C1430;
    case 192u: goto L_089C1444;
    case 193u: goto L_089C1490;
    case 194u: goto L_089C14AC;
    case 195u: goto L_089C14BC;
    case 196u: goto L_089C14D4;
    case 197u: goto L_089C14E8;
    case 198u: goto L_089C14F4;
    case 199u: goto L_089C14FC;
    case 200u: goto L_089C1500;
    case 201u: goto L_089C1544;
    case 202u: goto L_089C154C;
    case 203u: goto L_089C155C;
    case 204u: goto L_089C1568;
    case 205u: goto L_089C1574;
    case 206u: goto L_089C1580;
    case 207u: goto L_089C1588;
    case 208u: goto L_089C158C;
    case 209u: goto L_089C15C4;
    case 210u: goto L_089C15E4;
    case 211u: goto L_089C15F4;
    case 212u: goto L_089C15FC;
    case 213u: goto L_089C1618;
    case 214u: goto L_089C1624;
    case 215u: goto L_089C162C;
    case 216u: goto L_089C1634;
    case 217u: goto L_089C163C;
    case 218u: goto L_089C1660;
    case 219u: goto L_089C1668;
    case 220u: goto L_089C16AC;
    case 221u: goto L_089C16BC;
    case 222u: goto L_089C16C4;
    case 223u: goto L_089C16D0;
    case 224u: goto L_089C16DC;
    case 225u: goto L_089C16E8;
    case 226u: goto L_089C16F0;
    case 227u: goto L_089C1700;
    case 228u: goto L_089C170C;
    case 229u: goto L_089C171C;
    case 230u: goto L_089C1724;
    case 231u: goto L_089C172C;
    case 232u: goto L_089C1734;
    case 233u: goto L_089C173C;
    case 234u: goto L_089C1744;
    case 235u: goto L_089C174C;
    case 236u: goto L_089C1760;
    case 237u: goto L_089C176C;
    case 238u: goto L_089C1770;
    case 239u: goto L_089C17A0;
    case 240u: goto L_089C17C8;
    case 241u: goto L_089C1800;
    case 242u: goto L_089C1824;
    case 243u: goto L_089C1830;
    case 244u: goto L_089C1838;
    case 245u: goto L_089C186C;
    case 246u: goto L_089C1894;
    case 247u: goto L_089C18CC;
    case 248u: goto L_089C18F0;
    case 249u: goto L_089C1904;
    case 250u: goto L_089C1910;
    case 251u: goto L_089C191C;
    case 252u: goto L_089C1924;
    case 253u: goto L_089C1954;
    case 254u: goto L_089C197C;
    case 255u: goto L_089C19B4;
    case 256u: goto L_089C19D8;
    case 257u: goto L_089C19F4;
    case 258u: goto L_089C19FC;
    case 259u: goto L_089C1A10;
    case 260u: goto L_089C1A3C;
    case 261u: goto L_089C1A48;
    case 262u: goto L_089C1A70;
    case 263u: goto L_089C1A80;
    case 264u: goto L_089C1A94;
    case 265u: goto L_089C1AA0;
    case 266u: goto L_089C1AA4;
    case 267u: goto L_089C1AD4;
    case 268u: goto L_089C1AFC;
    case 269u: goto L_089C1B34;
    case 270u: goto L_089C1B48;
    case 271u: goto L_089C1B58;
    case 272u: goto L_089C1B60;
    case 273u: goto L_089C1B68;
    case 274u: goto L_089C1B70;
    case 275u: goto L_089C1B80;
    case 276u: goto L_089C1BAC;
    case 277u: goto L_089C1BD8;
    case 278u: goto L_089C1BF8;
    case 279u: goto L_089C1C00;
    case 280u: goto L_089C1C54;
    case 281u: goto L_089C1C5C;
    case 282u: goto L_089C1C60;
    case 283u: goto L_089C1C78;
    case 284u: goto L_089C1C98;
    case 285u: goto L_089C1CA0;
    case 286u: goto L_089C1CD8;
    case 287u: goto L_089C1CE4;
    case 288u: goto L_089C1CF0;
    case 289u: goto L_089C1D30;
    case 290u: goto L_089C1D3C;
    case 291u: goto L_089C1D48;
    case 292u: goto L_089C1D54;
    case 293u: goto L_089C1D60;
    case 294u: goto L_089C1D6C;
    case 295u: goto L_089C1D78;
    case 296u: goto L_089C1D88;
    case 297u: goto L_089C1D9C;
    case 298u: goto L_089C1DA8;
    case 299u: goto L_089C1DB0;
    case 300u: goto L_089C1DB8;
    case 301u: goto L_089C1DC4;
    case 302u: goto L_089C1DCC;
    case 303u: goto L_089C1DD4;
    case 304u: goto L_089C1DE8;
    case 305u: goto L_089C1DFC;
    case 306u: goto L_089C1E0C;
    case 307u: goto L_089C1E54;
    case 308u: goto L_089C1E60;
    case 309u: goto L_089C1E68;
    case 310u: goto L_089C1E74;
    case 311u: goto L_089C1E80;
    case 312u: goto L_089C1E8C;
    case 313u: goto L_089C1E98;
    case 314u: goto L_089C1EA4;
    case 315u: goto L_089C1EB0;
    case 316u: goto L_089C1EC0;
    case 317u: goto L_089C1ECC;
    case 318u: goto L_089C1ED4;
    case 319u: goto L_089C1EDC;
    case 320u: goto L_089C1EE4;
    case 321u: goto L_089C1EF4;
    case 322u: goto L_089C1F04;
    case 323u: goto L_089C1F14;
    case 324u: goto L_089C1F1C;
    case 325u: goto L_089C1F54;
    case 326u: goto L_089C1F64;
    case 327u: goto L_089C1F6C;
    case 328u: goto L_089C1F78;
    case 329u: goto L_089C1F80;
    case 330u: goto L_089C1F84;
    case 331u: goto L_089C1FB0;
    case 332u: goto L_089C1FC4;
    case 333u: goto L_089C1FD4;
    case 334u: goto L_089C1FE0;
    case 335u: goto L_089C1FE8;
    case 336u: goto L_089C1FEC;
    case 337u: goto L_089C2018;
    case 338u: goto L_089C202C;
    case 339u: goto L_089C203C;
    case 340u: goto L_089C2048;
    case 341u: goto L_089C2050;
    case 342u: goto L_089C2058;
    case 343u: goto L_089C2060;
    case 344u: goto L_089C2068;
    case 345u: goto L_089C2070;
    case 346u: goto L_089C2078;
    case 347u: goto L_089C2080;
    case 348u: goto L_089C20C0;
    case 349u: goto L_089C20CC;
    case 350u: goto L_089C20E4;
    case 351u: goto L_089C2134;
    case 352u: goto L_089C213C;
    case 353u: goto L_089C2144;
    case 354u: goto L_089C2154;
    case 355u: goto L_089C2178;
    case 356u: goto L_089C2190;
    case 357u: goto L_089C2194;
    case 358u: goto L_089C21A4;
    case 359u: goto L_089C21B4;
    case 360u: goto L_089C21BC;
    case 361u: goto L_089C21CC;
    case 362u: goto L_089C21D4;
    case 363u: goto L_089C21DC;
    case 364u: goto L_089C21EC;
    case 365u: goto L_089C21F4;
    case 366u: goto L_089C2200;
    case 367u: goto L_089C2214;
    case 368u: goto L_089C2224;
    case 369u: goto L_089C2228;
    case 370u: goto L_089C2230;
    case 371u: goto L_089C2240;
    case 372u: goto L_089C2258;
    case 373u: goto L_089C2270;
    case 374u: goto L_089C2278;
    case 375u: goto L_089C227C;
    case 376u: goto L_089C22A8;
    case 377u: goto L_089C22B4;
    case 378u: goto L_089C22C0;
    case 379u: goto L_089C22CC;
    case 380u: goto L_089C22D4;
    case 381u: goto L_089C22D8;
    case 382u: goto L_089C22E0;
    case 383u: goto L_089C22E8;
    case 384u: goto L_089C22F8;
    case 385u: goto L_089C2310;
    case 386u: goto L_089C231C;
    case 387u: goto L_089C2328;
    case 388u: goto L_089C2334;
    case 389u: goto L_089C233C;
    case 390u: goto L_089C2340;
    case 391u: goto L_089C2344;
    case 392u: goto L_089C2350;
    case 393u: goto L_089C2360;
    case 394u: goto L_089C2378;
    case 395u: goto L_089C2384;
    case 396u: goto L_089C2390;
    case 397u: goto L_089C239C;
    case 398u: goto L_089C23A4;
    case 399u: goto L_089C23A8;
    case 400u: goto L_089C23AC;
    case 401u: goto L_089C23B8;
    case 402u: goto L_089C23C8;
    case 403u: goto L_089C23EC;
    case 404u: goto L_089C23F8;
    case 405u: goto L_089C2404;
    case 406u: goto L_089C2410;
    case 407u: goto L_089C2418;
    case 408u: goto L_089C241C;
    case 409u: goto L_089C2424;
    case 410u: goto L_089C242C;
    case 411u: goto L_089C243C;
    case 412u: goto L_089C2444;
    case 413u: goto L_089C2450;
    case 414u: goto L_089C247C;
    case 415u: goto L_089C248C;
    case 416u: goto L_089C249C;
    case 417u: goto L_089C24A4;
    case 418u: goto L_089C24A8;
    case 419u: goto L_089C24CC;
    case 420u: goto L_089C24D8;
    case 421u: goto L_089C24E4;
    case 422u: goto L_089C24F0;
    case 423u: goto L_089C24F8;
    case 424u: goto L_089C24FC;
    case 425u: goto L_089C2504;
    case 426u: goto L_089C250C;
    case 427u: goto L_089C251C;
    case 428u: goto L_089C2524;
    case 429u: goto L_089C2538;
    case 430u: goto L_089C2540;
    case 431u: goto L_089C2544;
    case 432u: goto L_089C2550;
    case 433u: goto L_089C2560;
    case 434u: goto L_089C2568;
    case 435u: goto L_089C256C;
    case 436u: goto L_089C2590;
    case 437u: goto L_089C259C;
    case 438u: goto L_089C25A8;
    case 439u: goto L_089C25B4;
    case 440u: goto L_089C25BC;
    case 441u: goto L_089C25C0;
    case 442u: goto L_089C25C8;
    case 443u: goto L_089C25D0;
    case 444u: goto L_089C25E0;
    case 445u: goto L_089C25F0;
    case 446u: goto L_089C25FC;
    case 447u: goto L_089C2630;
    case 448u: goto L_089C2638;
    case 449u: goto L_089C263C;
    case 450u: goto L_089C2660;
    case 451u: goto L_089C266C;
    case 452u: goto L_089C2678;
    case 453u: goto L_089C2684;
    case 454u: goto L_089C268C;
    case 455u: goto L_089C2690;
    case 456u: goto L_089C2698;
    case 457u: goto L_089C26A0;
    case 458u: goto L_089C26B0;
    case 459u: goto L_089C26B8;
    case 460u: goto L_089C26C4;
    case 461u: goto L_089C26CC;
    case 462u: goto L_089C26D0;
    case 463u: goto L_089C2700;
    case 464u: goto L_089C270C;
    case 465u: goto L_089C2718;
    case 466u: goto L_089C2724;
    case 467u: goto L_089C272C;
    case 468u: goto L_089C2730;
    case 469u: goto L_089C2738;
    case 470u: goto L_089C2740;
    case 471u: goto L_089C2750;
    case 472u: goto L_089C2764;
    case 473u: goto L_089C276C;
    case 474u: goto L_089C2770;
    case 475u: goto L_089C2794;
    case 476u: goto L_089C27A0;
    case 477u: goto L_089C27AC;
    case 478u: goto L_089C27B8;
    case 479u: goto L_089C27C0;
    case 480u: goto L_089C27C4;
    case 481u: goto L_089C27CC;
    case 482u: goto L_089C27D4;
    case 483u: goto L_089C27E4;
    case 484u: goto L_089C27F8;
    case 485u: goto L_089C2800;
    case 486u: goto L_089C2804;
    case 487u: goto L_089C2828;
    case 488u: goto L_089C2834;
    case 489u: goto L_089C2840;
    case 490u: goto L_089C284C;
    case 491u: goto L_089C2854;
    case 492u: goto L_089C2858;
    case 493u: goto L_089C2860;
    case 494u: goto L_089C2868;
    case 495u: goto L_089C2878;
    case 496u: goto L_089C2890;
    case 497u: goto L_089C289C;
    case 498u: goto L_089C28A8;
    case 499u: goto L_089C28B4;
    case 500u: goto L_089C28BC;
    case 501u: goto L_089C28C0;
    case 502u: goto L_089C28C8;
    case 503u: goto L_089C28D0;
    case 504u: goto L_089C28E0;
    case 505u: goto L_089C28E8;
    case 506u: goto L_089C28F4;
    case 507u: goto L_089C2904;
    case 508u: goto L_089C2920;
    case 509u: goto L_089C2928;
    case 510u: goto L_089C292C;
    case 511u: goto L_089C2950;
    case 512u: goto L_089C295C;
    case 513u: goto L_089C2968;
    case 514u: goto L_089C2974;
    case 515u: goto L_089C297C;
    case 516u: goto L_089C2980;
    case 517u: goto L_089C2988;
    case 518u: goto L_089C2990;
    case 519u: goto L_089C29A0;
    case 520u: goto L_089C29A8;
    case 521u: goto L_089C29C0;
    case 522u: goto L_089C29C8;
    case 523u: goto L_089C29CC;
    case 524u: goto L_089C29FC;
    case 525u: goto L_089C2A08;
    case 526u: goto L_089C2A14;
    case 527u: goto L_089C2A20;
    case 528u: goto L_089C2A28;
    case 529u: goto L_089C2A2C;
    case 530u: goto L_089C2A34;
    case 531u: goto L_089C2A3C;
    case 532u: goto L_089C2A4C;
    case 533u: goto L_089C2A64;
    case 534u: goto L_089C2A70;
    case 535u: goto L_089C2A7C;
    case 536u: goto L_089C2A88;
    case 537u: goto L_089C2A90;
    case 538u: goto L_089C2A94;
    case 539u: goto L_089C2A98;
    case 540u: goto L_089C2AA4;
    case 541u: goto L_089C2AB4;
    case 542u: goto L_089C2ACC;
    case 543u: goto L_089C2AD8;
    case 544u: goto L_089C2AE4;
    case 545u: goto L_089C2AF0;
    case 546u: goto L_089C2AF8;
    case 547u: goto L_089C2AFC;
    case 548u: goto L_089C2B00;
    case 549u: goto L_089C2B0C;
    case 550u: goto L_089C2B1C;
    case 551u: goto L_089C2B40;
    case 552u: goto L_089C2B4C;
    case 553u: goto L_089C2B58;
    case 554u: goto L_089C2B64;
    case 555u: goto L_089C2B6C;
    case 556u: goto L_089C2B70;
    case 557u: goto L_089C2B74;
    case 558u: goto L_089C2B80;
    case 559u: goto L_089C2B90;
    case 560u: goto L_089C2B98;
    case 561u: goto L_089C2BA4;
    case 562u: goto L_089C2BB8;
    case 563u: goto L_089C2BC8;
    case 564u: goto L_089C2BCC;
    case 565u: goto L_089C2BD8;
    case 566u: goto L_089C2BE8;
    case 567u: goto L_089C2BF0;
    case 568u: goto L_089C2BF4;
    case 569u: goto L_089C2C20;
    case 570u: goto L_089C2C2C;
    case 571u: goto L_089C2C38;
    case 572u: goto L_089C2C44;
    case 573u: goto L_089C2C4C;
    case 574u: goto L_089C2C50;
    case 575u: goto L_089C2C58;
    case 576u: goto L_089C2C60;
    case 577u: goto L_089C2C70;
    case 578u: goto L_089C2C78;
    case 579u: goto L_089C2C88;
    case 580u: goto L_089C2CBC;
    case 581u: goto L_089C2CC4;
    case 582u: goto L_089C2CC8;
    case 583u: goto L_089C2CE8;
    case 584u: goto L_089C2CF4;
    case 585u: goto L_089C2D00;
    case 586u: goto L_089C2D0C;
    case 587u: goto L_089C2D14;
    case 588u: goto L_089C2D18;
    case 589u: goto L_089C2D20;
    case 590u: goto L_089C2D28;
    case 591u: goto L_089C2D38;
    case 592u: goto L_089C2D48;
    case 593u: goto L_089C2D54;
    case 594u: goto L_089C2D88;
    case 595u: goto L_089C2D90;
    case 596u: goto L_089C2D94;
    case 597u: goto L_089C2DB8;
    case 598u: goto L_089C2DC4;
    case 599u: goto L_089C2DD0;
    case 600u: goto L_089C2DDC;
    case 601u: goto L_089C2DE4;
    case 602u: goto L_089C2DE8;
    case 603u: goto L_089C2DF0;
    case 604u: goto L_089C2DF8;
    case 605u: goto L_089C2E08;
    case 606u: goto L_089C2E10;
    case 607u: goto L_089C2E28;
    case 608u: goto L_089C2E30;
    case 609u: goto L_089C2E34;
    case 610u: goto L_089C2E64;
    case 611u: goto L_089C2E70;
    case 612u: goto L_089C2E7C;
    case 613u: goto L_089C2E88;
    case 614u: goto L_089C2E90;
    case 615u: goto L_089C2E94;
    case 616u: goto L_089C2E9C;
    case 617u: goto L_089C2EA4;
    case 618u: goto L_089C2EB4;
    case 619u: goto L_089C2ECC;
    case 620u: goto L_089C2ED8;
    case 621u: goto L_089C2EE4;
    case 622u: goto L_089C2EF0;
    case 623u: goto L_089C2EF8;
    case 624u: goto L_089C2EFC;
    case 625u: goto L_089C2F00;
    case 626u: goto L_089C2F0C;
    case 627u: goto L_089C2F1C;
    case 628u: goto L_089C2F34;
    case 629u: goto L_089C2F40;
    case 630u: goto L_089C2F4C;
    case 631u: goto L_089C2F58;
    case 632u: goto L_089C2F60;
    case 633u: goto L_089C2F64;
    case 634u: goto L_089C2F68;
    case 635u: goto L_089C2F74;
    case 636u: goto L_089C2F84;
    case 637u: goto L_089C2FA8;
    case 638u: goto L_089C2FB4;
    case 639u: goto L_089C2FC0;
    case 640u: goto L_089C2FCC;
    case 641u: goto L_089C2FD4;
    case 642u: goto L_089C2FD8;
    case 643u: goto L_089C2FDC;
    case 644u: goto L_089C2FE8;
    case 645u: goto L_089C2FF8;
    case 646u: goto L_089C3000;
    case 647u: goto L_089C300C;
    case 648u: goto L_089C3020;
    case 649u: goto L_089C3034;
    case 650u: goto L_089C3038;
    case 651u: goto L_089C3044;
    case 652u: goto L_089C3054;
    case 653u: goto L_089C305C;
    case 654u: goto L_089C3060;
    case 655u: goto L_089C308C;
    case 656u: goto L_089C3098;
    case 657u: goto L_089C30A4;
    case 658u: goto L_089C30B0;
    case 659u: goto L_089C30B8;
    case 660u: goto L_089C30BC;
    case 661u: goto L_089C30C4;
    case 662u: goto L_089C30CC;
    case 663u: goto L_089C30DC;
    case 664u: goto L_089C30EC;
    case 665u: goto L_089C30F8;
    case 666u: goto L_089C312C;
    case 667u: goto L_089C3134;
    case 668u: goto L_089C3138;
    case 669u: goto L_089C3158;
    case 670u: goto L_089C3164;
    case 671u: goto L_089C3170;
    case 672u: goto L_089C317C;
    case 673u: goto L_089C3184;
    case 674u: goto L_089C3188;
    case 675u: goto L_089C3190;
    case 676u: goto L_089C3198;
    case 677u: goto L_089C31A8;
    case 678u: goto L_089C31B8;
    case 679u: goto L_089C31C4;
    case 680u: goto L_089C31F8;
    case 681u: goto L_089C3200;
    case 682u: goto L_089C3204;
    case 683u: goto L_089C3228;
    case 684u: goto L_089C3234;
    case 685u: goto L_089C3240;
    case 686u: goto L_089C324C;
    case 687u: goto L_089C3254;
    case 688u: goto L_089C3258;
    case 689u: goto L_089C3260;
    case 690u: goto L_089C3268;
    case 691u: goto L_089C3278;
    case 692u: goto L_089C3288;
    case 693u: goto L_089C3298;
    case 694u: goto L_089C32CC;
    case 695u: goto L_089C32D4;
    case 696u: goto L_089C32D8;
    case 697u: goto L_089C32FC;
    case 698u: goto L_089C3308;
    case 699u: goto L_089C3314;
    case 700u: goto L_089C3320;
    case 701u: goto L_089C3328;
    case 702u: goto L_089C332C;
    case 703u: goto L_089C3334;
    case 704u: goto L_089C333C;
    case 705u: goto L_089C334C;
    case 706u: goto L_089C3354;
    case 707u: goto L_089C3374;
    case 708u: goto L_089C337C;
    case 709u: goto L_089C3380;
    case 710u: goto L_089C33AC;
    case 711u: goto L_089C33B8;
    case 712u: goto L_089C33C4;
    case 713u: goto L_089C33D0;
    case 714u: goto L_089C33D8;
    case 715u: goto L_089C33DC;
    case 716u: goto L_089C33E4;
    case 717u: goto L_089C33EC;
    case 718u: goto L_089C33FC;
    case 719u: goto L_089C3414;
    case 720u: goto L_089C3420;
    case 721u: goto L_089C342C;
    case 722u: goto L_089C3438;
    case 723u: goto L_089C3440;
    case 724u: goto L_089C3444;
    case 725u: goto L_089C3448;
    case 726u: goto L_089C3454;
    case 727u: goto L_089C3464;
    case 728u: goto L_089C347C;
    case 729u: goto L_089C3488;
    case 730u: goto L_089C3494;
    case 731u: goto L_089C34A0;
    case 732u: goto L_089C34A8;
    case 733u: goto L_089C34AC;
    case 734u: goto L_089C34B0;
    case 735u: goto L_089C34BC;
    case 736u: goto L_089C34CC;
    case 737u: goto L_089C34F0;
    case 738u: goto L_089C34FC;
    case 739u: goto L_089C3508;
    case 740u: goto L_089C3514;
    case 741u: goto L_089C351C;
    case 742u: goto L_089C3520;
    case 743u: goto L_089C3528;
    case 744u: goto L_089C3530;
    case 745u: goto L_089C3540;
    case 746u: goto L_089C3548;
    case 747u: goto L_089C355C;
    case 748u: goto L_089C356C;
    case 749u: goto L_089C3580;
    case 750u: goto L_089C3588;
    case 751u: goto L_089C358C;
    case 752u: goto L_089C35B0;
    case 753u: goto L_089C35BC;
    case 754u: goto L_089C35C8;
    case 755u: goto L_089C35D4;
    case 756u: goto L_089C35DC;
    case 757u: goto L_089C35E0;
    case 758u: goto L_089C35E8;
    case 759u: goto L_089C35F0;
    case 760u: goto L_089C3600;
    case 761u: goto L_089C360C;
    case 762u: goto L_089C3614;
    case 763u: goto L_089C3620;
    case 764u: goto L_089C3628;
    case 765u: goto L_089C3630;
    case 766u: goto L_089C3638;
    case 767u: goto L_089C3658;
    case 768u: goto L_089C3664;
    case 769u: goto L_089C3670;
    case 770u: goto L_089C367C;
    case 771u: goto L_089C3684;
    case 772u: goto L_089C3688;
    case 773u: goto L_089C3690;
    case 774u: goto L_089C3698;
    case 775u: goto L_089C36A8;
    case 776u: goto L_089C36B0;
    case 777u: goto L_089C36B8;
    case 778u: goto L_089C36C0;
    case 779u: goto L_089C36C8;
    case 780u: goto L_089C36E8;
    case 781u: goto L_089C36F4;
    case 782u: goto L_089C3700;
    case 783u: goto L_089C370C;
    case 784u: goto L_089C3714;
    case 785u: goto L_089C3718;
    case 786u: goto L_089C3720;
    case 787u: goto L_089C3728;
    case 788u: goto L_089C3738;
    case 789u: goto L_089C3740;
    case 790u: goto L_089C3758;
    case 791u: goto L_089C3760;
    case 792u: goto L_089C3764;
    case 793u: goto L_089C3790;
    case 794u: goto L_089C379C;
    case 795u: goto L_089C37A8;
    case 796u: goto L_089C37B4;
    case 797u: goto L_089C37BC;
    case 798u: goto L_089C37C0;
    case 799u: goto L_089C37C8;
    case 800u: goto L_089C37D0;
    case 801u: goto L_089C37E0;
    case 802u: goto L_089C37F8;
    case 803u: goto L_089C3804;
    case 804u: goto L_089C3810;
    case 805u: goto L_089C381C;
    case 806u: goto L_089C3824;
    case 807u: goto L_089C3828;
    case 808u: goto L_089C382C;
    case 809u: goto L_089C3838;
    case 810u: goto L_089C3848;
    case 811u: goto L_089C3860;
    case 812u: goto L_089C386C;
    case 813u: goto L_089C3878;
    case 814u: goto L_089C3884;
    case 815u: goto L_089C388C;
    case 816u: goto L_089C3890;
    case 817u: goto L_089C3894;
    case 818u: goto L_089C38A0;
    case 819u: goto L_089C38B0;
    case 820u: goto L_089C38D4;
    case 821u: goto L_089C38E0;
    case 822u: goto L_089C38EC;
    case 823u: goto L_089C38F8;
    case 824u: goto L_089C3900;
    case 825u: goto L_089C3904;
    case 826u: goto L_089C390C;
    case 827u: goto L_089C3914;
    case 828u: goto L_089C3924;
    case 829u: goto L_089C392C;
    case 830u: goto L_089C393C;
    case 831u: goto L_089C3944;
    case 832u: goto L_089C3950;
    case 833u: goto L_089C396C;
    case 834u: goto L_089C3974;
    case 835u: goto L_089C3978;
    case 836u: goto L_089C39A0;
    case 837u: goto L_089C39AC;
    case 838u: goto L_089C39B8;
    case 839u: goto L_089C39C4;
    case 840u: goto L_089C39CC;
    case 841u: goto L_089C39D0;
    case 842u: goto L_089C39D8;
    case 843u: goto L_089C39E0;
    case 844u: goto L_089C39F0;
    case 845u: goto L_089C3A04;
    case 846u: goto L_089C3A0C;
    case 847u: goto L_089C3A10;
    case 848u: goto L_089C3A34;
    case 849u: goto L_089C3A40;
    case 850u: goto L_089C3A4C;
    case 851u: goto L_089C3A58;
    case 852u: goto L_089C3A60;
    case 853u: goto L_089C3A64;
    case 854u: goto L_089C3A6C;
    case 855u: goto L_089C3A74;
    case 856u: goto L_089C3A84;
    case 857u: goto L_089C3A8C;
    case 858u: goto L_089C3AAC;
    case 859u: goto L_089C3AB4;
    case 860u: goto L_089C3AB8;
    case 861u: goto L_089C3AE8;
    case 862u: goto L_089C3AF4;
    case 863u: goto L_089C3B00;
    case 864u: goto L_089C3B0C;
    case 865u: goto L_089C3B14;
    case 866u: goto L_089C3B18;
    case 867u: goto L_089C3B20;
    case 868u: goto L_089C3B28;
    case 869u: goto L_089C3B38;
    case 870u: goto L_089C3B50;
    case 871u: goto L_089C3B5C;
    case 872u: goto L_089C3B68;
    case 873u: goto L_089C3B74;
    case 874u: goto L_089C3B7C;
    case 875u: goto L_089C3B80;
    case 876u: goto L_089C3B84;
    case 877u: goto L_089C3B90;
    case 878u: goto L_089C3BA0;
    case 879u: goto L_089C3BB8;
    case 880u: goto L_089C3BC4;
    case 881u: goto L_089C3BD0;
    case 882u: goto L_089C3BDC;
    case 883u: goto L_089C3BE4;
    case 884u: goto L_089C3BE8;
    case 885u: goto L_089C3BEC;
    case 886u: goto L_089C3BF8;
    case 887u: goto L_089C3C08;
    case 888u: goto L_089C3C2C;
    case 889u: goto L_089C3C38;
    case 890u: goto L_089C3C44;
    case 891u: goto L_089C3C50;
    case 892u: goto L_089C3C58;
    case 893u: goto L_089C3C5C;
    case 894u: goto L_089C3C60;
    case 895u: goto L_089C3C6C;
    case 896u: goto L_089C3C7C;
    case 897u: goto L_089C3C88;
    case 898u: goto L_089C3C94;
    case 899u: goto L_089C3CA4;
    case 900u: goto L_089C3CB8;
    case 901u: goto L_089C3CC0;
    case 902u: goto L_089C3CC4;
    case 903u: goto L_089C3CE4;
    case 904u: goto L_089C3CF0;
    case 905u: goto L_089C3CFC;
    case 906u: goto L_089C3D08;
    case 907u: goto L_089C3D10;
    case 908u: goto L_089C3D14;
    case 909u: goto L_089C3D1C;
    case 910u: goto L_089C3D24;
    case 911u: goto L_089C3D34;
    case 912u: goto L_089C3D38;
    case 913u: goto L_089C3D44;
    case 914u: goto L_089C3D4C;
    case 915u: goto L_089C3D54;
    case 916u: goto L_089C3D78;
    case 917u: goto L_089C3D84;
    case 918u: goto L_089C3D90;
    case 919u: goto L_089C3D9C;
    case 920u: goto L_089C3DA4;
    case 921u: goto L_089C3DA8;
    case 922u: goto L_089C3DB0;
    case 923u: goto L_089C3DB8;
    case 924u: goto L_089C3DC8;
    case 925u: goto L_089C3DE0;
    case 926u: goto L_089C3DE8;
    case 927u: goto L_089C3DEC;
    case 928u: goto L_089C3E10;
    case 929u: goto L_089C3E1C;
    case 930u: goto L_089C3E28;
    case 931u: goto L_089C3E34;
    case 932u: goto L_089C3E3C;
    case 933u: goto L_089C3E40;
    case 934u: goto L_089C3E48;
    case 935u: goto L_089C3E50;
    case 936u: goto L_089C3E60;
    case 937u: goto L_089C3E68;
    case 938u: goto L_089C3E98;
    case 939u: goto L_089C3EA0;
    case 940u: goto L_089C3EA4;
    case 941u: goto L_089C3ED0;
    case 942u: goto L_089C3EDC;
    case 943u: goto L_089C3EE8;
    case 944u: goto L_089C3EF4;
    case 945u: goto L_089C3EFC;
    case 946u: goto L_089C3F00;
    case 947u: goto L_089C3F0C;
    case 948u: goto L_089C3F14;
    case 949u: goto L_089C3F24;
    case 950u: goto L_089C3F3C;
    case 951u: goto L_089C3F48;
    case 952u: goto L_089C3F54;
    case 953u: goto L_089C3F60;
    case 954u: goto L_089C3F68;
    case 955u: goto L_089C3F6C;
    case 956u: goto L_089C3F74;
    case 957u: goto L_089C3F80;
    case 958u: goto L_089C3F90;
    case 959u: goto L_089C3FA8;
    case 960u: goto L_089C3FB4;
    case 961u: goto L_089C3FC0;
    case 962u: goto L_089C3FCC;
    case 963u: goto L_089C3FD4;
    case 964u: goto L_089C3FD8;
    case 965u: goto L_089C3FE0;
    case 966u: goto L_089C3FEC;
    case 967u: goto L_089C3FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C0000:
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (17363u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(420));
    ctx.gpr[4] = (17362u << 16u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(436));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[28] | 0u);
    goto L_089C0024;
L_089C0024:
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(74)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C040C;
      }
      goto L_089C0038;
    }
L_089C0038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C0060;
      }
      goto L_089C0048;
    }
L_089C0048:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(9540))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0060;
      }
      goto L_089C0054;
    }
L_089C0054:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0400;
      }
      goto L_089C0060;
    }
L_089C0060:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089C016C;
      }
      goto L_089C006C;
    }
L_089C006C:
    ctx.gpr[31] = (0x089C0074u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 689u, 0x089BB298u>(ctx, &aot_mem) && ctx.pc == 0x089C0074u) goto L_089C0074;
    return;
L_089C0074:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C0080u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem) && ctx.pc == 0x089C0080u) goto L_089C0080;
    return;
L_089C0080:
    ctx.gpr[31] = (0x089C0088u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 78u, 0x08B0C5C8u>(ctx, &aot_mem) && ctx.pc == 0x089C0088u) goto L_089C0088;
    return;
L_089C0088:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(77)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(78)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11221)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[31] = (0x089C00C0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x089C00C0u) goto L_089C00C0;
    return;
L_089C00C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11236)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11237)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089C00F0u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 75u, 0x08B0C580u>(ctx, &aot_mem) && ctx.pc == 0x089C00F0u) goto L_089C00F0;
    return;
L_089C00F0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = ctx.fpr[20] + ctx.fpr[0];
    ctx.gpr[31] = (0x089C010Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x089C010Cu) goto L_089C010C;
    return;
L_089C010C:
    ctx.gpr[31] = (0x089C0114u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem) && ctx.pc == 0x089C0114u) goto L_089C0114;
    return;
L_089C0114:
    ctx.gpr[5] = (17391u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (17287u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089C0134u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x089C0134u) goto L_089C0134;
    return;
L_089C0134:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C014Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 90u, 0x08B0C660u>(ctx, &aot_mem) && ctx.pc == 0x089C014Cu) goto L_089C014C;
    return;
L_089C014C:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C0164u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C0164u) goto L_089C0164;
    return;
L_089C0164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
      if (branch_taken) {
          goto L_089C02E4;
      }
      goto L_089C016C;
    }
L_089C016C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x089C0180u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x089C0180u) goto L_089C0180;
    return;
L_089C0180:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11236)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11237)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17362u << 16u);
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16688u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[6] = (17386u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.fpr[30] = ctx.fpr[26] + ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[28];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[30] + ctx.fpr[28];
    ctx.gpr[31] = (0x089C01FCu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C01FCu) goto L_089C01FC;
    return;
L_089C01FC:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11221)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089C0218u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0218u) goto L_089C0218;
    return;
L_089C0218:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C0228u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x089C0228u) goto L_089C0228;
    return;
L_089C0228:
    ctx.gpr[5] = (17386u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089C0244u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0244u) goto L_089C0244;
    return;
L_089C0244:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(81)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(82)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11221)));
    ctx.gpr[31] = (0x089C0260u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0260u) goto L_089C0260;
    return;
L_089C0260:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C0270u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x089C0270u) goto L_089C0270;
    return;
L_089C0270:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (16952u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x089C02A8u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C02A8u) goto L_089C02A8;
    return;
L_089C02A8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(77)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(78)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11221)));
    ctx.gpr[31] = (0x089C02C4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089C02C4u) goto L_089C02C4;
    return;
L_089C02C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C02D4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x089C02D4u) goto L_089C02D4;
    return;
L_089C02D4:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    goto L_089C02E4;
L_089C02E4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0400;
      }
      goto L_089C02EC;
    }
L_089C02EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_089C0328;
    }
    goto L_089C02FC;
L_089C02FC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089C0308u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C0308u) goto L_089C0308;
    return;
L_089C0308:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0320;
      }
      goto L_089C0314;
    }
L_089C0314:
    ctx.gpr[31] = (0x089C031Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C031Cu) goto L_089C031C;
    return;
L_089C031C:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_089C0320;
L_089C0320:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_089C0328;
L_089C0328:
    ctx.gpr[31] = (0x089C0330u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C0330u) goto L_089C0330;
    return;
L_089C0330:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C033Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 689u, 0x089BB298u>(ctx, &aot_mem) && ctx.pc == 0x089C033Cu) goto L_089C033C;
    return;
L_089C033C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(77)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(78)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11221)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(440), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(441), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(442), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(440));
    ctx.gpr[31] = (0x089C0374u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(443), static_cast<std::uint8_t>(ctx.gpr[7]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x089C0374u) goto L_089C0374;
    return;
L_089C0374:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11236)));
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[20];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11237)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_089C03B4;
    }
    goto L_089C03B4;
L_089C03B4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089C03CCu);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 75u, 0x08B0C580u>(ctx, &aot_mem) && ctx.pc == 0x089C03CCu) goto L_089C03CC;
    return;
L_089C03CC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(444));
    ctx.fpr[15] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089C03E4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x089C03E4u) goto L_089C03E4;
    return;
L_089C03E4:
    ctx.gpr[31] = (0x089C03ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem) && ctx.pc == 0x089C03ECu) goto L_089C03EC;
    return;
L_089C03EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C03FCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C03FCu) goto L_089C03FC;
    return;
L_089C03FC:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    goto L_089C0400;
L_089C0400:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11236)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11236), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089C040C;
L_089C040C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C0024;
      }
      goto L_089C0420;
    }
L_089C0420:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0468:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (2238u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(112))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[6] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089C0614;
      }
      goto L_089C0500;
    }
L_089C0500:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_089C0614;
      }
      goto L_089C0538;
    }
L_089C0538:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_089C0614;
      }
      goto L_089C056C;
    }
L_089C056C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_089C0614;
      }
      goto L_089C05A0;
    }
L_089C05A0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_089C0614;
      }
      goto L_089C05D4;
    }
L_089C05D4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C0614;
      }
      goto L_089C0608;
    }
L_089C0608:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0650;
      }
      goto L_089C0614;
    }
L_089C0614:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11244)));
        goto L_089C0644;
    }
    goto L_089C061C;
L_089C061C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089C0638u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem) && ctx.pc == 0x089C0638u) goto L_089C0638;
    return;
L_089C0638:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C064C;
      }
      goto L_089C0640;
    }
L_089C0640:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11244)));
    goto L_089C0644;
L_089C0644:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0650;
      }
      goto L_089C064C;
    }
L_089C064C:
    ctx.gpr[19] = (0u | 1u);
    goto L_089C0650;
L_089C0650:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089C068C;
      }
      goto L_089C0658;
    }
L_089C0658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C068C;
      }
      goto L_089C0664;
    }
L_089C0664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 275u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_089C068C;
      }
      goto L_089C0678;
    }
L_089C0678:
    ctx.gpr[31] = (0x089C0680u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 63u, 0x08A1C6C0u>(ctx, &aot_mem) && ctx.pc == 0x089C0680u) goto L_089C0680;
    return;
L_089C0680:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C068C;
      }
      goto L_089C0688;
    }
L_089C0688:
    ctx.gpr[17] = (0u | 1u);
    goto L_089C068C;
L_089C068C:
    ctx.gpr[4] = (ctx.gpr[19] | ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1588;
      }
      goto L_089C0698;
    }
L_089C0698:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x089C06A4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C06A4u) goto L_089C06A4;
    return;
L_089C06A4:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089C06B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C06B0u) goto L_089C06B0;
    return;
L_089C06B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(11218))))));
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_089C06C8;
    }
    goto L_089C06C8;
L_089C06C8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(11218), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] & 1023u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_089C06EC;
      }
      goto L_089C06E0;
    }
L_089C06E0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089C06EC;
L_089C06EC:
    ctx.gpr[4] = (15304u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(11218))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[16];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (17232u << 16u);
      if (branch_taken) {
          goto L_089C07C0;
      }
      goto L_089C0784;
    }
L_089C0784:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_089C0840;
      }
      goto L_089C07BC;
    }
L_089C07BC:
    ctx.gpr[5] = (17232u << 16u);
    goto L_089C07C0;
L_089C07C0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(11180));
    ctx.gpr[5] = (17104u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (17288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17192u << 16u);
    ctx.gpr[31] = (0x089C07E8u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C07E8u) goto L_089C07E8;
    return;
L_089C07E8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C0804u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0804u) goto L_089C0804;
    return;
L_089C0804:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x089C0838u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem) && ctx.pc == 0x089C0838u) goto L_089C0838;
    return;
L_089C0838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C155C;
      }
      goto L_089C0840;
    }
L_089C0840:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_089C0A34;
      }
      goto L_089C0874;
    }
L_089C0874:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C0944;
      }
      goto L_089C089C;
    }
L_089C089C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (16928u << 16u);
      if (branch_taken) {
          goto L_089C08B4;
      }
      goto L_089C08A8;
    }
L_089C08A8:
    ctx.gpr[31] = (0x089C08B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C08B0u) goto L_089C08B0;
    return;
L_089C08B0:
    ctx.gpr[5] = (16928u << 16u);
    goto L_089C08B4;
L_089C08B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[31] = (0x089C08C0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 93u, 0x08810484u>(ctx, &aot_mem) && ctx.pc == 0x089C08C0u) goto L_089C08C0;
    return;
L_089C08C0:
    ctx.gpr[5] = (17232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(11180));
    ctx.gpr[5] = (17104u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (17288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17192u << 16u);
    ctx.gpr[31] = (0x089C08ECu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C08ECu) goto L_089C08EC;
    return;
L_089C08EC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C0908u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0908u) goto L_089C0908;
    return;
L_089C0908:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x089C093Cu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem) && ctx.pc == 0x089C093Cu) goto L_089C093C;
    return;
L_089C093C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C155C;
      }
      goto L_089C0944;
    }
L_089C0944:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089C0950u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C0950u) goto L_089C0950;
    return;
L_089C0950:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089C095Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C095Cu) goto L_089C095C;
    return;
L_089C095C:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x089C0968u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C0968u) goto L_089C0968;
    return;
L_089C0968:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x089C0974u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C0974u) goto L_089C0974;
    return;
L_089C0974:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13160)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089C0984u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C0984u) goto L_089C0984;
    return;
L_089C0984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[7] = (17096u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] >> 31u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (17224u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[31] = (0x089C0A14u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 68u, 0x08AA8C8Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0A14u) goto L_089C0A14;
    return;
L_089C0A14:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089C0A20u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C0A20u) goto L_089C0A20;
    return;
L_089C0A20:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089C0A2Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C0A2Cu) goto L_089C0A2C;
    return;
L_089C0A2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C155C;
      }
      goto L_089C0A34;
    }
L_089C0A34:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C0B20;
      }
      goto L_089C0A68;
    }
L_089C0A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (17154u << 16u);
      if (branch_taken) {
          goto L_089C0A80;
      }
      goto L_089C0A74;
    }
L_089C0A74:
    ctx.gpr[31] = (0x089C0A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C0A7Cu) goto L_089C0A7C;
    return;
L_089C0A7C:
    ctx.gpr[5] = (17154u << 16u);
    goto L_089C0A80;
L_089C0A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[31] = (0x089C0A8Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 93u, 0x08810484u>(ctx, &aot_mem) && ctx.pc == 0x089C0A8Cu) goto L_089C0A8C;
    return;
L_089C0A8C:
    ctx.gpr[5] = (17241u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17123u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(11180));
    ctx.gpr[5] = (17283u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (17182u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.gpr[31] = (0x089C0AC8u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0AC8u) goto L_089C0AC8;
    return;
L_089C0AC8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C0AE4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0AE4u) goto L_089C0AE4;
    return;
L_089C0AE4:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x089C0B18u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem) && ctx.pc == 0x089C0B18u) goto L_089C0B18;
    return;
L_089C0B18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C155C;
      }
      goto L_089C0B20;
    }
L_089C0B20:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_089C0B90;
      }
      goto L_089C0B28;
    }
L_089C0B28:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_089C0B90;
      }
      goto L_089C0B5C;
    }
L_089C0B5C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C0C80;
      }
      goto L_089C0B90;
    }
L_089C0B90:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089C0B9Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C0B9Cu) goto L_089C0B9C;
    return;
L_089C0B9C:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089C0BA8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C0BA8u) goto L_089C0BA8;
    return;
L_089C0BA8:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x089C0BB4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C0BB4u) goto L_089C0BB4;
    return;
L_089C0BB4:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x089C0BC0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C0BC0u) goto L_089C0BC0;
    return;
L_089C0BC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13160)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089C0BD0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C0BD0u) goto L_089C0BD0;
    return;
L_089C0BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[7] = (17096u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] >> 31u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (17224u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[31] = (0x089C0C60u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 68u, 0x08AA8C8Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0C60u) goto L_089C0C60;
    return;
L_089C0C60:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089C0C6Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C0C6Cu) goto L_089C0C6C;
    return;
L_089C0C6C:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089C0C78u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C0C78u) goto L_089C0C78;
    return;
L_089C0C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C155C;
      }
      goto L_089C0C80;
    }
L_089C0C80:
    ctx.gpr[4] = (17234u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 63u);
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17160u << 16u);
    ctx.gpr[31] = (0x089C0CA4u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089C0CA4u) goto L_089C0CA4;
    return;
L_089C0CA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C0CD4;
      }
      goto L_089C0CCC;
    }
L_089C0CCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 65u);
      if (branch_taken) {
          goto L_089C0D98;
      }
      goto L_089C0CD4;
    }
L_089C0CD4:
    ctx.gpr[31] = (0x089C0CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089C0CDCu) goto L_089C0CDC;
    return;
L_089C0CDC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_089C0D30;
      }
      goto L_089C0D04;
    }
L_089C0D04:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11232), ctx.gpr[4]);
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 67u);
    ctx.gpr[4] = (17160u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17262u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17158u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C0D98;
      }
      goto L_089C0D30;
    }
L_089C0D30:
    ctx.gpr[31] = (0x089C0D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089C0D38u) goto L_089C0D38;
    return;
L_089C0D38:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_089C0D70;
      }
      goto L_089C0D60;
    }
L_089C0D60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0D98;
      }
      goto L_089C0D6C;
    }
L_089C0D6C:
    ctx.gpr[4] = (0u | 5u);
    goto L_089C0D70;
L_089C0D70:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11232), ctx.gpr[4]);
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 71u);
    ctx.gpr[4] = (17160u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17265u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17161u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089C0D98;
L_089C0D98:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.fpr[30] = ctx.fpr[24] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(10924));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x089C0DCCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0DCCu) goto L_089C0DCC;
    return;
L_089C0DCC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C0DECu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0DECu) goto L_089C0DEC;
    return;
L_089C0DEC:
    ctx.gpr[7] = (15395u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (ctx.gpr[7] | 55050u);
    ctx.gpr[8] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x089C0E30u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem) && ctx.pc == 0x089C0E30u) goto L_089C0E30;
    return;
L_089C0E30:
    ctx.fpr[14] = ctx.fpr[22] + ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089C0E4Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0E4Cu) goto L_089C0E4C;
    return;
L_089C0E4C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C0E68u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0E68u) goto L_089C0E68;
    return;
L_089C0E68:
    ctx.gpr[7] = (16253u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (ctx.gpr[7] | 28836u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089C0EA4u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem) && ctx.pc == 0x089C0EA4u) goto L_089C0EA4;
    return;
L_089C0EA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (0x089C0EC4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0EC4u) goto L_089C0EC4;
    return;
L_089C0EC4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C0EE0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0EE0u) goto L_089C0EE0;
    return;
L_089C0EE0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x089C0F10u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem) && ctx.pc == 0x089C0F10u) goto L_089C0F10;
    return;
L_089C0F10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (0x089C0F28u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0F28u) goto L_089C0F28;
    return;
L_089C0F28:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C0F44u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0F44u) goto L_089C0F44;
    return;
L_089C0F44:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089C0F74u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem) && ctx.pc == 0x089C0F74u) goto L_089C0F74;
    return;
L_089C0F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (17154u << 16u);
      if (branch_taken) {
          goto L_089C0F8C;
      }
      goto L_089C0F80;
    }
L_089C0F80:
    ctx.gpr[31] = (0x089C0F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C0F88u) goto L_089C0F88;
    return;
L_089C0F88:
    ctx.gpr[5] = (17154u << 16u);
    goto L_089C0F8C;
L_089C0F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[31] = (0x089C0F98u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 93u, 0x08810484u>(ctx, &aot_mem) && ctx.pc == 0x089C0F98u) goto L_089C0F98;
    return;
L_089C0F98:
    ctx.gpr[31] = (0x089C0FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089C0FA0u) goto L_089C0FA0;
    return;
L_089C0FA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16448u << 16u);
      if (branch_taken) {
          goto L_089C11CC;
      }
      goto L_089C0FC8;
    }
L_089C0FC8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17280u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17184u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17076u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089C0FF8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089C0FF8u) goto L_089C0FF8;
    return;
L_089C0FF8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x089C101Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 356u, 0x08A41D88u>(ctx, &aot_mem) && ctx.pc == 0x089C101Cu) goto L_089C101C;
    return;
L_089C101C:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x089C1028u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C1028u) goto L_089C1028;
    return;
L_089C1028:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089C1034u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C1034u) goto L_089C1034;
    return;
L_089C1034:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089C1040u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C1040u) goto L_089C1040;
    return;
L_089C1040:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089C104Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C104Cu) goto L_089C104C;
    return;
L_089C104C:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x089C1058u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C1058u) goto L_089C1058;
    return;
L_089C1058:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13148)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089C1068u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C1068u) goto L_089C1068;
    return;
L_089C1068:
    ctx.gpr[4] = (16382u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 47186u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[4] = (16320u << 16u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[5] = (0u | 245u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[16] = (ctx.gpr[6] - ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[18] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[31] = (0x089C10C8u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089C10C8u) goto L_089C10C8;
    return;
L_089C10C8:
    ctx.gpr[6] = (ctx.gpr[16] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C10DCu);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C10DCu) goto L_089C10DC;
    return;
L_089C10DC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (17174u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089C113C;
      }
      goto L_089C1120;
    }
L_089C1120:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (17327u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C117C;
      }
      goto L_089C113C;
    }
L_089C113C:
    ctx.gpr[5] = (17280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17184u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16640u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089C117C;
L_089C117C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[9] = (16256u << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089C11B8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 68u, 0x08AA8C8Cu>(ctx, &aot_mem) && ctx.pc == 0x089C11B8u) goto L_089C11B8;
    return;
L_089C11B8:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089C11C4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C11C4u) goto L_089C11C4;
    return;
L_089C11C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C155C;
      }
      goto L_089C11CC;
    }
L_089C11CC:
    ctx.gpr[31] = (0x089C11D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089C11D4u) goto L_089C11D4;
    return;
L_089C11D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (17164u << 16u);
      if (branch_taken) {
          goto L_089C120C;
      }
      goto L_089C11FC;
    }
L_089C11FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C155C;
      }
      goto L_089C1208;
    }
L_089C1208:
    ctx.gpr[5] = (17164u << 16u);
    goto L_089C120C;
L_089C120C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (16792u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17322u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16808u << 16u);
    ctx.gpr[31] = (0x089C1230u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1230u) goto L_089C1230;
    return;
L_089C1230:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 220u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C124Cu);
    ctx.gpr[8] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089C124Cu) goto L_089C124C;
    return;
L_089C124C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C125Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x089C125Cu) goto L_089C125C;
    return;
L_089C125C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 41 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C13A4;
      }
      goto L_089C126C;
    }
L_089C126C:
    ctx.gpr[4] = (0u | 5u);
    goto L_089C1270;
L_089C1270:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
        goto L_089C128C;
    }
    goto L_089C1280;
L_089C1280:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C128C;
      }
      goto L_089C128C;
    }
L_089C128C:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
      if (branch_taken) {
          goto L_089C131C;
      }
      goto L_089C1298;
    }
L_089C1298:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (0u | 40u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[5] = (16840u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(140));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(141));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x089C12E8u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C12E8u) goto L_089C12E8;
    return;
L_089C12E8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 220u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C1304u);
    ctx.gpr[8] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1304u) goto L_089C1304;
    return;
L_089C1304:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C1314u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x089C1314u) goto L_089C1314;
    return;
L_089C1314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1394;
      }
      goto L_089C131C;
    }
L_089C131C:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (0u | 40u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(140));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(141));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x089C1368u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1368u) goto L_089C1368;
    return;
L_089C1368:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 220u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C1384u);
    ctx.gpr[8] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1384u) goto L_089C1384;
    return;
L_089C1384:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C1394u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x089C1394u) goto L_089C1394;
    return;
L_089C1394:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 41 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_089C1270;
      }
      goto L_089C13A4;
    }
L_089C13A4:
    ctx.gpr[4] = (2236u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.gpr[31] = (0x089C13CCu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 561u, 0x08A8EF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C13CCu) goto L_089C13CC;
    return;
L_089C13CC:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 360 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[22];
      if (branch_taken) {
          goto L_089C155C;
      }
      goto L_089C13E4;
    }
L_089C13E4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089C13E8;
L_089C13E8:
    ctx.gpr[5] = (17309u << 16u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[22] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1418;
      }
      goto L_089C140C;
    }
L_089C140C:
    ctx.gpr[5] = (17332u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    goto L_089C1418;
L_089C1418:
    ctx.gpr[5] = (49568u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (16800u << 16u);
      if (branch_taken) {
          goto L_089C154C;
      }
      goto L_089C1430;
    }
L_089C1430:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C154C;
      }
      goto L_089C1444;
    }
L_089C1444:
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17264u << 16u);
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (16880u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[16];
    ctx.gpr[31] = (0x089C1490u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1490u) goto L_089C1490;
    return;
L_089C1490:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 220u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C14ACu);
    ctx.gpr[8] = (0u | 150u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089C14ACu) goto L_089C14AC;
    return;
L_089C14AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C14BCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x089C14BCu) goto L_089C14BC;
    return;
L_089C14BC:
    ctx.gpr[4] = (17184u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17224u << 16u);
      if (branch_taken) {
          goto L_089C1544;
      }
      goto L_089C14D4;
    }
L_089C14D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1544;
      }
      goto L_089C14E8;
    }
L_089C14E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (17224u << 16u);
      if (branch_taken) {
          goto L_089C1500;
      }
      goto L_089C14F4;
    }
L_089C14F4:
    ctx.gpr[31] = (0x089C14FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C14FCu) goto L_089C14FC;
    return;
L_089C14FC:
    ctx.gpr[4] = (17224u << 16u);
    goto L_089C1500;
L_089C1500:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[10] = (17264u << 16u);
    ctx.gpr[11] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 150u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[31] = (0x089C1544u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C1544u) goto L_089C1544;
    return;
L_089C1544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C155C;
      }
      goto L_089C154C;
    }
L_089C154C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(45));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 360 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
        goto L_089C13E8;
    }
    goto L_089C155C;
L_089C155C:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089C1568u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C1568u) goto L_089C1568;
    return;
L_089C1568:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x089C1574u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C1574u) goto L_089C1574;
    return;
L_089C1574:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089C1580u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C1580u) goto L_089C1580;
    return;
L_089C1580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C158C;
      }
      goto L_089C1588;
    }
L_089C1588:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(11218), static_cast<std::uint16_t>(0u));
    goto L_089C158C;
L_089C158C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C15C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(9276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089C1C5C;
      }
      goto L_089C15E4;
    }
L_089C15E4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(9276));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(9788));
    ctx.gpr[31] = (0x089C15F4u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 155u, 0x08AB8ADCu>(ctx, &aot_mem) && ctx.pc == 0x089C15F4u) goto L_089C15F4;
    return;
L_089C15F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C1700;
      }
      goto L_089C15FC;
    }
L_089C15FC:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10820)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10812), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C16F0;
      }
      goto L_089C1618;
    }
L_089C1618:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C16C4;
      }
      goto L_089C1624;
    }
L_089C1624:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089C16D0;
      }
      goto L_089C162C;
    }
L_089C162C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C16DC;
      }
      goto L_089C1634;
    }
L_089C1634:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089C16E8;
      }
      goto L_089C163C;
    }
L_089C163C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10820), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10812), 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(9276));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10816), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(10300));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C1660u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 147u, 0x08AB8A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1660u) goto L_089C1660;
    return;
L_089C1660:
    ctx.gpr[31] = (0x089C1668u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 144u, 0x08AB8A34u>(ctx, &aot_mem) && ctx.pc == 0x089C1668u) goto L_089C1668;
    return;
L_089C1668:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16448u << 16u);
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32304));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10828), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2020)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[15])) && ctx.fpr[12] == ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C16BC;
      }
      goto L_089C16AC;
    }
L_089C16AC:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (0u | 180u);
    ctx.gpr[31] = (0x089C16BCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x089C16BCu) goto L_089C16BC;
    return;
L_089C16BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C16F0;
      }
      goto L_089C16C4;
    }
L_089C16C4:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10820), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C16F0;
      }
      goto L_089C16D0;
    }
L_089C16D0:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10820), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C16F0;
      }
      goto L_089C16DC;
    }
L_089C16DC:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10820), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C16F0;
      }
      goto L_089C16E8;
    }
L_089C16E8:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10820), ctx.gpr[4]);
    goto L_089C16F0;
L_089C16F0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(9788));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(9276));
    ctx.gpr[31] = (0x089C1700u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 147u, 0x08AB8A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1700u) goto L_089C1700;
    return;
L_089C1700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10820)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1C54;
      }
      goto L_089C170C;
    }
L_089C170C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10820)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C1734;
      }
      goto L_089C171C;
    }
L_089C171C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C1A80;
      }
      goto L_089C1724;
    }
L_089C1724:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C19FC;
      }
      goto L_089C172C;
    }
L_089C172C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C174C;
      }
      goto L_089C1734;
    }
L_089C1734:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C1838;
      }
      goto L_089C173C;
    }
L_089C173C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (16968u << 16u);
      if (branch_taken) {
          goto L_089C1924;
      }
      goto L_089C1744;
    }
L_089C1744:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1A80;
      }
      goto L_089C174C;
    }
L_089C174C:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16968u << 16u);
      if (branch_taken) {
          goto L_089C1770;
      }
      goto L_089C1760;
    }
L_089C1760:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9257)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1830;
      }
      goto L_089C176C;
    }
L_089C176C:
    ctx.gpr[4] = (16968u << 16u);
    goto L_089C1770;
L_089C1770:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10816)));
      if (branch_taken) {
          goto L_089C17C8;
      }
      goto L_089C17A0;
    }
L_089C17A0:
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089C1800;
      }
      goto L_089C17C8;
    }
L_089C17C8:
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_089C1800;
L_089C1800:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10816), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C1830;
      }
      goto L_089C1824;
    }
L_089C1824:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10816), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10820), ctx.gpr[4]);
    goto L_089C1830;
L_089C1830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1A80;
      }
      goto L_089C1838;
    }
L_089C1838:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10816)));
      if (branch_taken) {
          goto L_089C1894;
      }
      goto L_089C186C;
    }
L_089C186C:
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089C18CC;
      }
      goto L_089C1894;
    }
L_089C1894:
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_089C18CC;
L_089C18CC:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10816), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C1910;
      }
      goto L_089C18F0;
    }
L_089C18F0:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C191C;
      }
      goto L_089C1904;
    }
L_089C1904:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9257)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C191C;
      }
      goto L_089C1910;
    }
L_089C1910:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10816), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10820), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9257), static_cast<std::uint8_t>(0u));
    goto L_089C191C;
L_089C191C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1A80;
      }
      goto L_089C1924;
    }
L_089C1924:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10816)));
      if (branch_taken) {
          goto L_089C197C;
      }
      goto L_089C1954;
    }
L_089C1954:
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089C19B4;
      }
      goto L_089C197C;
    }
L_089C197C:
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_089C19B4;
L_089C19B4:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10816), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C19F4;
      }
      goto L_089C19D8;
    }
L_089C19D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10816), 0u);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10820), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(10300));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(9788));
    ctx.gpr[31] = (0x089C19F4u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 147u, 0x08AB8A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C19F4u) goto L_089C19F4;
    return;
L_089C19F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1A80;
      }
      goto L_089C19FC;
    }
L_089C19FC:
    ctx.gpr[4] = (0u | 600u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10816), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10825)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C1A80;
      }
      goto L_089C1A10;
    }
L_089C1A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10812)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10828)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1A70;
      }
      goto L_089C1A3C;
    }
L_089C1A3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10824)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1A80;
      }
      goto L_089C1A48;
    }
L_089C1A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10812)));
    ctx.gpr[5] = (17595u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1A80;
      }
      goto L_089C1A70;
    }
L_089C1A70:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10820), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 600u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10816), ctx.gpr[4]);
    goto L_089C1A80;
L_089C1A80:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16968u << 16u);
      if (branch_taken) {
          goto L_089C1AA4;
      }
      goto L_089C1A94;
    }
L_089C1A94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9257)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1C54;
      }
      goto L_089C1AA0;
    }
L_089C1AA0:
    ctx.gpr[4] = (16968u << 16u);
    goto L_089C1AA4;
L_089C1AA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10812)));
      if (branch_taken) {
          goto L_089C1AFC;
      }
      goto L_089C1AD4;
    }
L_089C1AD4:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089C1B34;
      }
      goto L_089C1AFC;
    }
L_089C1AFC:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_089C1B34;
L_089C1B34:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10812), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_089C1B58;
      }
      goto L_089C1B48;
    }
L_089C1B48:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C1C54;
      }
      goto L_089C1B58;
    }
L_089C1B58:
    ctx.gpr[31] = (0x089C1B60u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x089C1B60u) goto L_089C1B60;
    return;
L_089C1B60:
    ctx.gpr[31] = (0x089C1B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1B68u) goto L_089C1B68;
    return;
L_089C1B68:
    ctx.gpr[31] = (0x089C1B70u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem) && ctx.pc == 0x089C1B70u) goto L_089C1B70;
    return;
L_089C1B70:
    ctx.gpr[4] = (16156u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 10486u);
    ctx.gpr[31] = (0x089C1B80u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem) && ctx.pc == 0x089C1B80u) goto L_089C1B80;
    return;
L_089C1B80:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (0u | 128u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089C1BACu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 104u, 0x08B0C7E0u>(ctx, &aot_mem) && ctx.pc == 0x089C1BACu) goto L_089C1BAC;
    return;
L_089C1BAC:
    ctx.gpr[5] = (16640u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (17252u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[31] = (0x089C1BD8u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x089C1BD8u) goto L_089C1BD8;
    return;
L_089C1BD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(10300));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x089C1BF8u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 93u, 0x08B0C6DCu>(ctx, &aot_mem) && ctx.pc == 0x089C1BF8u) goto L_089C1BF8;
    return;
L_089C1BF8:
    ctx.gpr[31] = (0x089C1C00u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 75u, 0x08B0C580u>(ctx, &aot_mem) && ctx.pc == 0x089C1C00u) goto L_089C1C00;
    return;
L_089C1C00:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C1C54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 24u, 0x08B0C1B0u>(ctx, &aot_mem) && ctx.pc == 0x089C1C54u) goto L_089C1C54;
    return;
L_089C1C54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1C60;
      }
      goto L_089C1C5C;
    }
L_089C1C5C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10820), 0u);
    goto L_089C1C60;
L_089C1C60:
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
L_089C1C78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4203)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089C1E74;
      }
      goto L_089C1C98;
    }
L_089C1C98:
    ctx.gpr[31] = (0x089C1CA0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem) && ctx.pc == 0x089C1CA0u) goto L_089C1CA0;
    return;
L_089C1CA0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17392u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 180u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (17288u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089C1CD8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 63u, 0x08AF4574u>(ctx, &aot_mem) && ctx.pc == 0x089C1CD8u) goto L_089C1CD8;
    return;
L_089C1CD8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4204)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C1D3C;
      }
      goto L_089C1CE4;
    }
L_089C1CE4:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x089C1CF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem) && ctx.pc == 0x089C1CF0u) goto L_089C1CF0;
    return;
L_089C1CF0:
    ctx.gpr[6] = (17106u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (17282u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 220u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (17189u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089C1D30u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 63u, 0x08AF4574u>(ctx, &aot_mem) && ctx.pc == 0x089C1D30u) goto L_089C1D30;
    return;
L_089C1D30:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C1D3Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem) && ctx.pc == 0x089C1D3Cu) goto L_089C1D3C;
    return;
L_089C1D3C:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089C1D48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C1D48u) goto L_089C1D48;
    return;
L_089C1D48:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x089C1D54u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C1D54u) goto L_089C1D54;
    return;
L_089C1D54:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089C1D60u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C1D60u) goto L_089C1D60;
    return;
L_089C1D60:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089C1D6Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C1D6Cu) goto L_089C1D6C;
    return;
L_089C1D6C:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x089C1D78u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C1D78u) goto L_089C1D78;
    return;
L_089C1D78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7716)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089C1D88u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x089C1D88u) goto L_089C1D88;
    return;
L_089C1D88:
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4205))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089C1DB8;
      }
      goto L_089C1D9C;
    }
L_089C1D9C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C1E0C;
      }
      goto L_089C1DA8;
    }
L_089C1DA8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089C1DD4;
      }
      goto L_089C1DB0;
    }
L_089C1DB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1E0C;
      }
      goto L_089C1DB8;
    }
L_089C1DB8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C1DE8;
      }
      goto L_089C1DC4;
    }
L_089C1DC4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C1DFC;
      }
      goto L_089C1DCC;
    }
L_089C1DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1E0C;
      }
      goto L_089C1DD4;
    }
L_089C1DD4:
    ctx.gpr[4] = (17219u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17286u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C1E0C;
      }
      goto L_089C1DE8;
    }
L_089C1DE8:
    ctx.gpr[4] = (17219u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17295u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C1E0C;
      }
      goto L_089C1DFC;
    }
L_089C1DFC:
    ctx.gpr[4] = (17219u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17304u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089C1E0C;
L_089C1E0C:
    ctx.gpr[8] = (16640u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[9] = (16704u << 16u);
    ctx.gpr[8] = (15786u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[8] | 43691u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (0u | 255u);
    ctx.fpr[18] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[7] = (0u | 158u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[31] = (0x089C1E54u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 81u, 0x08AA9084u>(ctx, &aot_mem) && ctx.pc == 0x089C1E54u) goto L_089C1E54;
    return;
L_089C1E54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4208)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1E68;
      }
      goto L_089C1E60;
    }
L_089C1E60:
    ctx.gpr[31] = (0x089C1E68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C20E4;
L_089C1E68:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x089C1E74u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem) && ctx.pc == 0x089C1E74u) goto L_089C1E74;
    return;
L_089C1E74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4203)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C203C;
      }
      goto L_089C1E80;
    }
L_089C1E80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4206)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C203C;
      }
      goto L_089C1E8C;
    }
L_089C1E8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9256)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C203C;
      }
      goto L_089C1E98;
    }
L_089C1E98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4207)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C203C;
      }
      goto L_089C1EA4;
    }
L_089C1EA4:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x089C1EB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x089C1EB0u) goto L_089C1EB0;
    return;
L_089C1EB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_089C1ED4;
    }
    goto L_089C1EC0;
L_089C1EC0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1EE4;
      }
      goto L_089C1ECC;
    }
L_089C1ECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C203C;
      }
      goto L_089C1ED4;
    }
L_089C1ED4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1ECC;
      }
      goto L_089C1EDC;
    }
L_089C1EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1F6C;
      }
      goto L_089C1EE4;
    }
L_089C1EE4:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x089C1EF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 401u, 0x08ADD7A0u>(ctx, &aot_mem) && ctx.pc == 0x089C1EF4u) goto L_089C1EF4;
    return;
L_089C1EF4:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[31] = (0x089C1F04u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 154u, 0x08ADC7BCu>(ctx, &aot_mem) && ctx.pc == 0x089C1F04u) goto L_089C1F04;
    return;
L_089C1F04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C1F1C;
      }
      goto L_089C1F14;
    }
L_089C1F14:
    ctx.gpr[31] = (0x089C1F1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C1F1Cu) goto L_089C1F1C;
    return;
L_089C1F1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(6688));
    ctx.gpr[5] = (17371u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (17379u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17106u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17138u << 16u);
    ctx.gpr[31] = (0x089C1F54u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1F54u) goto L_089C1F54;
    return;
L_089C1F54:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C1F64u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 72u, 0x08AF4650u>(ctx, &aot_mem) && ctx.pc == 0x089C1F64u) goto L_089C1F64;
    return;
L_089C1F64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C203C;
      }
      goto L_089C1F6C;
    }
L_089C1F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_089C1F84;
    }
    goto L_089C1F78;
L_089C1F78:
    ctx.gpr[31] = (0x089C1F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C1F80u) goto L_089C1F80;
    return;
L_089C1F80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C1F84;
L_089C1F84:
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(6688));
    ctx.gpr[5] = (17358u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17366u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17108u << 16u);
    ctx.gpr[31] = (0x089C1FB0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1FB0u) goto L_089C1FB0;
    return;
L_089C1FB0:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C1FC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 154u, 0x08ADC7BCu>(ctx, &aot_mem) && ctx.pc == 0x089C1FC4u) goto L_089C1FC4;
    return;
L_089C1FC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C1FD4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 72u, 0x08AF4650u>(ctx, &aot_mem) && ctx.pc == 0x089C1FD4u) goto L_089C1FD4;
    return;
L_089C1FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_089C1FEC;
    }
    goto L_089C1FE0;
L_089C1FE0:
    ctx.gpr[31] = (0x089C1FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C1FE8u) goto L_089C1FE8;
    return;
L_089C1FE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C1FEC;
L_089C1FEC:
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(6688));
    ctx.gpr[5] = (17358u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (17158u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17366u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17174u << 16u);
    ctx.gpr[31] = (0x089C2018u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2018u) goto L_089C2018;
    return;
L_089C2018:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089C202Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 154u, 0x08ADC7BCu>(ctx, &aot_mem) && ctx.pc == 0x089C202Cu) goto L_089C202C;
    return;
L_089C202C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C203Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 72u, 0x08AF4650u>(ctx, &aot_mem) && ctx.pc == 0x089C203Cu) goto L_089C203C;
    return;
L_089C203C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C20CC;
      }
      goto L_089C2048;
    }
L_089C2048:
    ctx.gpr[31] = (0x089C2050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089C2050u) goto L_089C2050;
    return;
L_089C2050:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C20CC;
      }
      goto L_089C2058;
    }
L_089C2058:
    ctx.gpr[31] = (0x089C2060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089C2060u) goto L_089C2060;
    return;
L_089C2060:
    ctx.gpr[31] = (0x089C2068u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 108u, 0x089486DCu>(ctx, &aot_mem) && ctx.pc == 0x089C2068u) goto L_089C2068;
    return;
L_089C2068:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C20CC;
      }
      goto L_089C2070;
    }
L_089C2070:
    ctx.gpr[31] = (0x089C2078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089C2078u) goto L_089C2078;
    return;
L_089C2078:
    ctx.gpr[31] = (0x089C2080u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 115u, 0x0894873Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2080u) goto L_089C2080;
    return;
L_089C2080:
    ctx.gpr[4] = (17820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_089C20C0;
    }
    goto L_089C20C0;
L_089C20C0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089C20CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 698u, 0x089BB2F4u>(ctx, &aot_mem) && ctx.pc == 0x089C20CCu) goto L_089C20CC;
    return;
L_089C20CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C20E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (0u | 44u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C2134u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6896));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089C2134u) goto L_089C2134;
    return;
L_089C2134:
    ctx.gpr[31] = (0x089C213Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x089C213Cu) goto L_089C213C;
    return;
L_089C213C:
    ctx.gpr[31] = (0x089C2144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2144u) goto L_089C2144;
    return;
L_089C2144:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.gpr[31] = (0x089C2154u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem) && ctx.pc == 0x089C2154u) goto L_089C2154;
    return;
L_089C2154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12088)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(601) ? 1u : 0u);
    ctx.gpr[19] = (2237u << 16u);
    ctx.gpr[21] = (0u | 120u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12076)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_089C21DC;
      }
      goto L_089C2178;
    }
L_089C2178:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12080)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12080), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C2194;
      }
      goto L_089C2190;
    }
L_089C2190:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12080), 0u);
    goto L_089C2194;
L_089C2194:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12076), ctx.gpr[4]);
    ctx.gpr[31] = (0x089C21A4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 348u, 0x08ADD468u>(ctx, &aot_mem) && ctx.pc == 0x089C21A4u) goto L_089C21A4;
    return;
L_089C21A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12076)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
      if (branch_taken) {
          goto L_089C21BC;
      }
      goto L_089C21B4;
    }
L_089C21B4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12076), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089C21BC;
L_089C21BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[7] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12088), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089C21D4;
      }
      goto L_089C21CC;
    }
L_089C21CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084), 0u);
      if (branch_taken) {
          goto L_089C21DC;
      }
      goto L_089C21D4;
    }
L_089C21D4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084), ctx.gpr[5]);
    goto L_089C21DC;
L_089C21DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C2228;
      }
      goto L_089C21EC;
    }
L_089C21EC:
    ctx.gpr[31] = (0x089C21F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 348u, 0x08ADD468u>(ctx, &aot_mem) && ctx.pc == 0x089C21F4u) goto L_089C21F4;
    return;
L_089C21F4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C2228;
      }
      goto L_089C2200;
    }
L_089C2200:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12076)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x089C2214u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12076), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 348u, 0x08ADD468u>(ctx, &aot_mem) && ctx.pc == 0x089C2214u) goto L_089C2214;
    return;
L_089C2214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12076)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C2228;
      }
      goto L_089C2224;
    }
L_089C2224:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12076), 0u);
    goto L_089C2228;
L_089C2228:
    ctx.gpr[31] = (0x089C2230u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x089C2230u) goto L_089C2230;
    return;
L_089C2230:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 155u, 0x089C481Cu>(ctx, &aot_mem); return;
      }
      goto L_089C2240;
    }
L_089C2240:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-4080)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2258:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[30] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12072));
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12064));
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12056));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12048));
      if (branch_taken) {
          goto L_089C227C;
      }
      goto L_089C2270;
    }
L_089C2270:
    ctx.gpr[31] = (0x089C2278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C2278u) goto L_089C2278;
    return;
L_089C2278:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C227C;
L_089C227C:
    ctx.gpr[10] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (17185u << 16u);
    ctx.gpr[5] = (0u | 12u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x089C22A8u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C22A8u) goto L_089C22A8;
    return;
L_089C22A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C22E0;
      }
      goto L_089C22B4;
    }
L_089C22B4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C22C0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C22C0u) goto L_089C22C0;
    return;
L_089C22C0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C22D8;
      }
      goto L_089C22CC;
    }
L_089C22CC:
    ctx.gpr[31] = (0x089C22D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C22D4u) goto L_089C22D4;
    return;
L_089C22D4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C22D8;
L_089C22D8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C22E0;
L_089C22E0:
    ctx.gpr[31] = (0x089C22E8u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C22E8u) goto L_089C22E8;
    return;
L_089C22E8:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[6] = (0u | 154u);
    ctx.gpr[31] = (0x089C22F8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C22F8u) goto L_089C22F8;
    return;
L_089C22F8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[6] = (0u | 175u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C2310u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C2310u) goto L_089C2310;
    return;
L_089C2310:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[30] = (0u | 168u);
      if (branch_taken) {
          goto L_089C2344;
      }
      goto L_089C231C;
    }
L_089C231C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C2328u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C2328u) goto L_089C2328;
    return;
L_089C2328:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2340;
      }
      goto L_089C2334;
    }
L_089C2334:
    ctx.gpr[31] = (0x089C233Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C233Cu) goto L_089C233C;
    return;
L_089C233C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C2340;
L_089C2340:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089C2344;
L_089C2344:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2350u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C2350u) goto L_089C2350;
    return;
L_089C2350:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C2360u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C2360u) goto L_089C2360;
    return;
L_089C2360:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[6] = (0u | 189u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C2378u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C2378u) goto L_089C2378;
    return;
L_089C2378:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[30] = (0u | 182u);
      if (branch_taken) {
          goto L_089C23AC;
      }
      goto L_089C2384;
    }
L_089C2384:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C2390u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C2390u) goto L_089C2390;
    return;
L_089C2390:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C23A8;
      }
      goto L_089C239C;
    }
L_089C239C:
    ctx.gpr[31] = (0x089C23A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C23A4u) goto L_089C23A4;
    return;
L_089C23A4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C23A8;
L_089C23A8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089C23AC;
L_089C23AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C23B8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C23B8u) goto L_089C23B8;
    return;
L_089C23B8:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C23C8u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C23C8u) goto L_089C23C8;
    return;
L_089C23C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12080)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 240u);
    ctx.gpr[6] = (0u | 161u);
    ctx.gpr[31] = (0x089C23ECu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C23ECu) goto L_089C23EC;
    return;
L_089C23EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C2424;
      }
      goto L_089C23F8;
    }
L_089C23F8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C2404u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C2404u) goto L_089C2404;
    return;
L_089C2404:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C241C;
      }
      goto L_089C2410;
    }
L_089C2410:
    ctx.gpr[31] = (0x089C2418u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2418u) goto L_089C2418;
    return;
L_089C2418:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C241C;
L_089C241C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C2424;
L_089C2424:
    ctx.gpr[31] = (0x089C242Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C242Cu) goto L_089C242C;
    return;
L_089C242C:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[6] = (0u | 154u);
    ctx.gpr[31] = (0x089C243Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C243Cu) goto L_089C243C;
    return;
L_089C243C:
    ctx.gpr[31] = (0x089C2444u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 348u, 0x08ADD468u>(ctx, &aot_mem) && ctx.pc == 0x089C2444u) goto L_089C2444;
    return;
L_089C2444:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C26B0;
      }
      goto L_089C2450;
    }
L_089C2450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (17199u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (17264u << 16u);
    ctx.gpr[21] = (0u | 168u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12040));
      if (branch_taken) {
          goto L_089C2524;
      }
      goto L_089C247C;
    }
L_089C247C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12076)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C248Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 167u, 0x08ADC88Cu>(ctx, &aot_mem) && ctx.pc == 0x089C248Cu) goto L_089C248C;
    return;
L_089C248C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C24A8;
      }
      goto L_089C249C;
    }
L_089C249C:
    ctx.gpr[31] = (0x089C24A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C24A4u) goto L_089C24A4;
    return;
L_089C24A4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C24A8;
L_089C24A8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(47)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(45)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(46)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C24CCu);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C24CCu) goto L_089C24CC;
    return;
L_089C24CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C2504;
      }
      goto L_089C24D8;
    }
L_089C24D8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C24E4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C24E4u) goto L_089C24E4;
    return;
L_089C24E4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C24FC;
      }
      goto L_089C24F0;
    }
L_089C24F0:
    ctx.gpr[31] = (0x089C24F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C24F8u) goto L_089C24F8;
    return;
L_089C24F8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C24FC;
L_089C24FC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C2504;
L_089C2504:
    ctx.gpr[31] = (0x089C250Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C250Cu) goto L_089C250C;
    return;
L_089C250C:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C251Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C251Cu) goto L_089C251C;
    return;
L_089C251C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C26B0;
      }
      goto L_089C2524;
    }
L_089C2524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x089C2538u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem) && ctx.pc == 0x089C2538u) goto L_089C2538;
    return;
L_089C2538:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12032));
      if (branch_taken) {
          goto L_089C2544;
      }
      goto L_089C2540;
    }
L_089C2540:
    ctx.gpr[16] = (0u | 1u);
    goto L_089C2544;
L_089C2544:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C2550u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 154u, 0x08ADC7BCu>(ctx, &aot_mem) && ctx.pc == 0x089C2550u) goto L_089C2550;
    return;
L_089C2550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C256C;
      }
      goto L_089C2560;
    }
L_089C2560:
    ctx.gpr[31] = (0x089C2568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C2568u) goto L_089C2568;
    return;
L_089C2568:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C256C;
L_089C256C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(51)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(49)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(50)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2590u);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C2590u) goto L_089C2590;
    return;
L_089C2590:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C25C8;
      }
      goto L_089C259C;
    }
L_089C259C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C25A8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C25A8u) goto L_089C25A8;
    return;
L_089C25A8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C25C0;
      }
      goto L_089C25B4;
    }
L_089C25B4:
    ctx.gpr[31] = (0x089C25BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C25BCu) goto L_089C25BC;
    return;
L_089C25BC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C25C0;
L_089C25C0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C25C8;
L_089C25C8:
    ctx.gpr[31] = (0x089C25D0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C25D0u) goto L_089C25D0;
    return;
L_089C25D0:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C25E0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C25E0u) goto L_089C25E0;
    return;
L_089C25E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C25F0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem) && ctx.pc == 0x089C25F0u) goto L_089C25F0;
    return;
L_089C25F0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C25FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 154u, 0x08ADC7BCu>(ctx, &aot_mem) && ctx.pc == 0x089C25FCu) goto L_089C25FC;
    return;
L_089C25FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (17213u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[21] = (0u | 182u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089C263C;
      }
      goto L_089C2630;
    }
L_089C2630:
    ctx.gpr[31] = (0x089C2638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C2638u) goto L_089C2638;
    return;
L_089C2638:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C263C;
L_089C263C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(51)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(49)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(50)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C2660u);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C2660u) goto L_089C2660;
    return;
L_089C2660:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C2698;
      }
      goto L_089C266C;
    }
L_089C266C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C2678u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C2678u) goto L_089C2678;
    return;
L_089C2678:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2690;
      }
      goto L_089C2684;
    }
L_089C2684:
    ctx.gpr[31] = (0x089C268Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C268Cu) goto L_089C268C;
    return;
L_089C268C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C2690;
L_089C2690:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C2698;
L_089C2698:
    ctx.gpr[31] = (0x089C26A0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C26A0u) goto L_089C26A0;
    return;
L_089C26A0:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C26B0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C26B0u) goto L_089C26B0;
    return;
L_089C26B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 155u, 0x089C481Cu>(ctx, &aot_mem); return;
      }
      goto L_089C26B8;
    }
L_089C26B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12072));
      if (branch_taken) {
          goto L_089C26D0;
      }
      goto L_089C26C4;
    }
L_089C26C4:
    ctx.gpr[31] = (0x089C26CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C26CCu) goto L_089C26CC;
    return;
L_089C26CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C26D0;
L_089C26D0:
    ctx.gpr[9] = (17136u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[10] = (17185u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 14u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 237u);
    ctx.gpr[8] = (0u | 130u);
    ctx.gpr[31] = (0x089C2700u);
    ctx.gpr[9] = (0u | 180u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C2700u) goto L_089C2700;
    return;
L_089C2700:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12024));
      if (branch_taken) {
          goto L_089C2738;
      }
      goto L_089C270C;
    }
L_089C270C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C2718u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C2718u) goto L_089C2718;
    return;
L_089C2718:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2730;
      }
      goto L_089C2724;
    }
L_089C2724:
    ctx.gpr[31] = (0x089C272Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C272Cu) goto L_089C272C;
    return;
L_089C272C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C2730;
L_089C2730:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12024));
    goto L_089C2738;
L_089C2738:
    ctx.gpr[31] = (0x089C2740u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C2740u) goto L_089C2740;
    return;
L_089C2740:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[6] = (0u | 154u);
    ctx.gpr[31] = (0x089C2750u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C2750u) goto L_089C2750;
    return;
L_089C2750:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[4] = (17199u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[18] = (0u | 168u);
      if (branch_taken) {
          goto L_089C2770;
      }
      goto L_089C2764;
    }
L_089C2764:
    ctx.gpr[31] = (0x089C276Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C276Cu) goto L_089C276C;
    return;
L_089C276C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C2770;
L_089C2770:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 14u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 110u);
    ctx.gpr[8] = (0u | 16u);
    ctx.gpr[31] = (0x089C2794u);
    ctx.gpr[9] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C2794u) goto L_089C2794;
    return;
L_089C2794:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12016));
      if (branch_taken) {
          goto L_089C27CC;
      }
      goto L_089C27A0;
    }
L_089C27A0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C27ACu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C27ACu) goto L_089C27AC;
    return;
L_089C27AC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C27C4;
      }
      goto L_089C27B8;
    }
L_089C27B8:
    ctx.gpr[31] = (0x089C27C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C27C0u) goto L_089C27C0;
    return;
L_089C27C0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C27C4;
L_089C27C4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12016));
    goto L_089C27CC;
L_089C27CC:
    ctx.gpr[31] = (0x089C27D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C27D4u) goto L_089C27D4;
    return;
L_089C27D4:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C27E4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C27E4u) goto L_089C27E4;
    return;
L_089C27E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[4] = (17213u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[18] = (0u | 182u);
      if (branch_taken) {
          goto L_089C2804;
      }
      goto L_089C27F8;
    }
L_089C27F8:
    ctx.gpr[31] = (0x089C2800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C2800u) goto L_089C2800;
    return;
L_089C2800:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C2804;
L_089C2804:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 14u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 75u);
    ctx.gpr[8] = (0u | 151u);
    ctx.gpr[31] = (0x089C2828u);
    ctx.gpr[9] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C2828u) goto L_089C2828;
    return;
L_089C2828:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12008));
      if (branch_taken) {
          goto L_089C2860;
      }
      goto L_089C2834;
    }
L_089C2834:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C2840u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C2840u) goto L_089C2840;
    return;
L_089C2840:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2858;
      }
      goto L_089C284C;
    }
L_089C284C:
    ctx.gpr[31] = (0x089C2854u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2854u) goto L_089C2854;
    return;
L_089C2854:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C2858;
L_089C2858:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12008));
    goto L_089C2860;
L_089C2860:
    ctx.gpr[31] = (0x089C2868u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C2868u) goto L_089C2868;
    return;
L_089C2868:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C2878u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C2878u) goto L_089C2878;
    return;
L_089C2878:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[5] = (0u | 240u);
    ctx.gpr[6] = (0u | 161u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089C2890u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C2890u) goto L_089C2890;
    return;
L_089C2890:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C28C8;
      }
      goto L_089C289C;
    }
L_089C289C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C28A8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C28A8u) goto L_089C28A8;
    return;
L_089C28A8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C28C0;
      }
      goto L_089C28B4;
    }
L_089C28B4:
    ctx.gpr[31] = (0x089C28BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C28BCu) goto L_089C28BC;
    return;
L_089C28BC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C28C0;
L_089C28C0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C28C8;
L_089C28C8:
    ctx.gpr[31] = (0x089C28D0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C28D0u) goto L_089C28D0;
    return;
L_089C28D0:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[6] = (0u | 154u);
    ctx.gpr[31] = (0x089C28E0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C28E0u) goto L_089C28E0;
    return;
L_089C28E0:
    ctx.gpr[31] = (0x089C28E8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 348u, 0x08ADD468u>(ctx, &aot_mem) && ctx.pc == 0x089C28E8u) goto L_089C28E8;
    return;
L_089C28E8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C29A0;
      }
      goto L_089C28F4;
    }
L_089C28F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12076)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C2904u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 167u, 0x08ADC88Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2904u) goto L_089C2904;
    return;
L_089C2904:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (17199u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 168u);
      if (branch_taken) {
          goto L_089C292C;
      }
      goto L_089C2920;
    }
L_089C2920:
    ctx.gpr[31] = (0x089C2928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C2928u) goto L_089C2928;
    return;
L_089C2928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C292C;
L_089C292C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(55)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(53)));
    ctx.gpr[10] = (17264u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(54)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[31] = (0x089C2950u);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C2950u) goto L_089C2950;
    return;
L_089C2950:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12000));
      if (branch_taken) {
          goto L_089C2988;
      }
      goto L_089C295C;
    }
L_089C295C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C2968u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C2968u) goto L_089C2968;
    return;
L_089C2968:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2980;
      }
      goto L_089C2974;
    }
L_089C2974:
    ctx.gpr[31] = (0x089C297Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C297Cu) goto L_089C297C;
    return;
L_089C297C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C2980;
L_089C2980:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12000));
    goto L_089C2988;
L_089C2988:
    ctx.gpr[31] = (0x089C2990u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C2990u) goto L_089C2990;
    return;
L_089C2990:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C29A0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C29A0u) goto L_089C29A0;
    return;
L_089C29A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 155u, 0x089C481Cu>(ctx, &aot_mem); return;
      }
      goto L_089C29A8;
    }
L_089C29A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[30] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12072));
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12064));
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12056));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12048));
      if (branch_taken) {
          goto L_089C29CC;
      }
      goto L_089C29C0;
    }
L_089C29C0:
    ctx.gpr[31] = (0x089C29C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C29C8u) goto L_089C29C8;
    return;
L_089C29C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C29CC;
L_089C29CC:
    ctx.gpr[9] = (17185u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[10] = (17136u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 12u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x089C29FCu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C29FCu) goto L_089C29FC;
    return;
L_089C29FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C2A34;
      }
      goto L_089C2A08;
    }
L_089C2A08:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C2A14u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C2A14u) goto L_089C2A14;
    return;
L_089C2A14:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2A2C;
      }
      goto L_089C2A20;
    }
L_089C2A20:
    ctx.gpr[31] = (0x089C2A28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2A28u) goto L_089C2A28;
    return;
L_089C2A28:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C2A2C;
L_089C2A2C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C2A34;
L_089C2A34:
    ctx.gpr[31] = (0x089C2A3Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C2A3Cu) goto L_089C2A3C;
    return;
L_089C2A3C:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[6] = (0u | 154u);
    ctx.gpr[31] = (0x089C2A4Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C2A4Cu) goto L_089C2A4C;
    return;
L_089C2A4C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[6] = (0u | 175u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C2A64u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C2A64u) goto L_089C2A64;
    return;
L_089C2A64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[30] = (0u | 168u);
      if (branch_taken) {
          goto L_089C2A98;
      }
      goto L_089C2A70;
    }
L_089C2A70:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C2A7Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C2A7Cu) goto L_089C2A7C;
    return;
L_089C2A7C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2A94;
      }
      goto L_089C2A88;
    }
L_089C2A88:
    ctx.gpr[31] = (0x089C2A90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2A90u) goto L_089C2A90;
    return;
L_089C2A90:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C2A94;
L_089C2A94:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089C2A98;
L_089C2A98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2AA4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C2AA4u) goto L_089C2AA4;
    return;
L_089C2AA4:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C2AB4u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C2AB4u) goto L_089C2AB4;
    return;
L_089C2AB4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[6] = (0u | 189u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C2ACCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C2ACCu) goto L_089C2ACC;
    return;
L_089C2ACC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[30] = (0u | 182u);
      if (branch_taken) {
          goto L_089C2B00;
      }
      goto L_089C2AD8;
    }
L_089C2AD8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C2AE4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C2AE4u) goto L_089C2AE4;
    return;
L_089C2AE4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2AFC;
      }
      goto L_089C2AF0;
    }
L_089C2AF0:
    ctx.gpr[31] = (0x089C2AF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2AF8u) goto L_089C2AF8;
    return;
L_089C2AF8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C2AFC;
L_089C2AFC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089C2B00;
L_089C2B00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2B0Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C2B0Cu) goto L_089C2B0C;
    return;
L_089C2B0C:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C2B1Cu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C2B1Cu) goto L_089C2B1C;
    return;
L_089C2B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12080)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 203u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C2B40u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C2B40u) goto L_089C2B40;
    return;
L_089C2B40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[30] = (0u | 196u);
      if (branch_taken) {
          goto L_089C2B74;
      }
      goto L_089C2B4C;
    }
L_089C2B4C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C2B58u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C2B58u) goto L_089C2B58;
    return;
L_089C2B58:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2B70;
      }
      goto L_089C2B64;
    }
L_089C2B64:
    ctx.gpr[31] = (0x089C2B6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2B6Cu) goto L_089C2B6C;
    return;
L_089C2B6C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C2B70;
L_089C2B70:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089C2B74;
L_089C2B74:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2B80u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C2B80u) goto L_089C2B80;
    return;
L_089C2B80:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C2B90u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C2B90u) goto L_089C2B90;
    return;
L_089C2B90:
    ctx.gpr[31] = (0x089C2B98u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 348u, 0x08ADD468u>(ctx, &aot_mem) && ctx.pc == 0x089C2B98u) goto L_089C2B98;
    return;
L_089C2B98:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C2E08;
      }
      goto L_089C2BA4;
    }
L_089C2BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x089C2BB8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem) && ctx.pc == 0x089C2BB8u) goto L_089C2BB8;
    return;
L_089C2BB8:
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12040));
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12032));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11992));
      if (branch_taken) {
          goto L_089C2BCC;
      }
      goto L_089C2BC8;
    }
L_089C2BC8:
    ctx.gpr[16] = (0u | 1u);
    goto L_089C2BCC;
L_089C2BCC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C2BD8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 154u, 0x08ADC7BCu>(ctx, &aot_mem) && ctx.pc == 0x089C2BD8u) goto L_089C2BD8;
    return;
L_089C2BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C2BF4;
      }
      goto L_089C2BE8;
    }
L_089C2BE8:
    ctx.gpr[31] = (0x089C2BF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C2BF0u) goto L_089C2BF0;
    return;
L_089C2BF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C2BF4;
L_089C2BF4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(59)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[10] = (17264u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(57)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(58)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2C20u);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C2C20u) goto L_089C2C20;
    return;
L_089C2C20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C2C58;
      }
      goto L_089C2C2C;
    }
L_089C2C2C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C2C38u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C2C38u) goto L_089C2C38;
    return;
L_089C2C38:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2C50;
      }
      goto L_089C2C44;
    }
L_089C2C44:
    ctx.gpr[31] = (0x089C2C4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2C4Cu) goto L_089C2C4C;
    return;
L_089C2C4C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C2C50;
L_089C2C50:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C2C58;
L_089C2C58:
    ctx.gpr[31] = (0x089C2C60u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C2C60u) goto L_089C2C60;
    return;
L_089C2C60:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[6] = (0u | 154u);
    ctx.gpr[31] = (0x089C2C70u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C2C70u) goto L_089C2C70;
    return;
L_089C2C70:
    ctx.gpr[31] = (0x089C2C78u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 401u, 0x08ADD7A0u>(ctx, &aot_mem) && ctx.pc == 0x089C2C78u) goto L_089C2C78;
    return;
L_089C2C78:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[31] = (0x089C2C88u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 155u, 0x08ADC7D8u>(ctx, &aot_mem) && ctx.pc == 0x089C2C88u) goto L_089C2C88;
    return;
L_089C2C88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (17199u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[21] = (0u | 168u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089C2CC8;
      }
      goto L_089C2CBC;
    }
L_089C2CBC:
    ctx.gpr[31] = (0x089C2CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C2CC4u) goto L_089C2CC4;
    return;
L_089C2CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C2CC8;
L_089C2CC8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(59)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(57)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(58)));
    ctx.gpr[31] = (0x089C2CE8u);
    ctx.gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C2CE8u) goto L_089C2CE8;
    return;
L_089C2CE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C2D20;
      }
      goto L_089C2CF4;
    }
L_089C2CF4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C2D00u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C2D00u) goto L_089C2D00;
    return;
L_089C2D00:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2D18;
      }
      goto L_089C2D0C;
    }
L_089C2D0C:
    ctx.gpr[31] = (0x089C2D14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2D14u) goto L_089C2D14;
    return;
L_089C2D14:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C2D18;
L_089C2D18:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C2D20;
L_089C2D20:
    ctx.gpr[31] = (0x089C2D28u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C2D28u) goto L_089C2D28;
    return;
L_089C2D28:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C2D38u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C2D38u) goto L_089C2D38;
    return;
L_089C2D38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C2D48u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem) && ctx.pc == 0x089C2D48u) goto L_089C2D48;
    return;
L_089C2D48:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C2D54u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 154u, 0x08ADC7BCu>(ctx, &aot_mem) && ctx.pc == 0x089C2D54u) goto L_089C2D54;
    return;
L_089C2D54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (17213u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[21] = (0u | 182u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089C2D94;
      }
      goto L_089C2D88;
    }
L_089C2D88:
    ctx.gpr[31] = (0x089C2D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C2D90u) goto L_089C2D90;
    return;
L_089C2D90:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C2D94;
L_089C2D94:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(59)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(57)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(58)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C2DB8u);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C2DB8u) goto L_089C2DB8;
    return;
L_089C2DB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C2DF0;
      }
      goto L_089C2DC4;
    }
L_089C2DC4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C2DD0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C2DD0u) goto L_089C2DD0;
    return;
L_089C2DD0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2DE8;
      }
      goto L_089C2DDC;
    }
L_089C2DDC:
    ctx.gpr[31] = (0x089C2DE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2DE4u) goto L_089C2DE4;
    return;
L_089C2DE4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C2DE8;
L_089C2DE8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C2DF0;
L_089C2DF0:
    ctx.gpr[31] = (0x089C2DF8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C2DF8u) goto L_089C2DF8;
    return;
L_089C2DF8:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C2E08u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C2E08u) goto L_089C2E08;
    return;
L_089C2E08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 155u, 0x089C481Cu>(ctx, &aot_mem); return;
      }
      goto L_089C2E10;
    }
L_089C2E10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[30] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12072));
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12064));
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12056));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12048));
      if (branch_taken) {
          goto L_089C2E34;
      }
      goto L_089C2E28;
    }
L_089C2E28:
    ctx.gpr[31] = (0x089C2E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C2E30u) goto L_089C2E30;
    return;
L_089C2E30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C2E34;
L_089C2E34:
    ctx.gpr[9] = (17185u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[10] = (17136u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 12u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x089C2E64u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C2E64u) goto L_089C2E64;
    return;
L_089C2E64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C2E9C;
      }
      goto L_089C2E70;
    }
L_089C2E70:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C2E7Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C2E7Cu) goto L_089C2E7C;
    return;
L_089C2E7C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2E94;
      }
      goto L_089C2E88;
    }
L_089C2E88:
    ctx.gpr[31] = (0x089C2E90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2E90u) goto L_089C2E90;
    return;
L_089C2E90:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C2E94;
L_089C2E94:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C2E9C;
L_089C2E9C:
    ctx.gpr[31] = (0x089C2EA4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C2EA4u) goto L_089C2EA4;
    return;
L_089C2EA4:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[6] = (0u | 154u);
    ctx.gpr[31] = (0x089C2EB4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C2EB4u) goto L_089C2EB4;
    return;
L_089C2EB4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[6] = (0u | 175u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C2ECCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C2ECCu) goto L_089C2ECC;
    return;
L_089C2ECC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[30] = (0u | 168u);
      if (branch_taken) {
          goto L_089C2F00;
      }
      goto L_089C2ED8;
    }
L_089C2ED8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C2EE4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C2EE4u) goto L_089C2EE4;
    return;
L_089C2EE4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2EFC;
      }
      goto L_089C2EF0;
    }
L_089C2EF0:
    ctx.gpr[31] = (0x089C2EF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2EF8u) goto L_089C2EF8;
    return;
L_089C2EF8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C2EFC;
L_089C2EFC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089C2F00;
L_089C2F00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2F0Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C2F0Cu) goto L_089C2F0C;
    return;
L_089C2F0C:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C2F1Cu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C2F1Cu) goto L_089C2F1C;
    return;
L_089C2F1C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[6] = (0u | 189u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C2F34u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C2F34u) goto L_089C2F34;
    return;
L_089C2F34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[30] = (0u | 182u);
      if (branch_taken) {
          goto L_089C2F68;
      }
      goto L_089C2F40;
    }
L_089C2F40:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C2F4Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C2F4Cu) goto L_089C2F4C;
    return;
L_089C2F4C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2F64;
      }
      goto L_089C2F58;
    }
L_089C2F58:
    ctx.gpr[31] = (0x089C2F60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2F60u) goto L_089C2F60;
    return;
L_089C2F60:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C2F64;
L_089C2F64:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089C2F68;
L_089C2F68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2F74u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C2F74u) goto L_089C2F74;
    return;
L_089C2F74:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C2F84u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C2F84u) goto L_089C2F84;
    return;
L_089C2F84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12080)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 203u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C2FA8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C2FA8u) goto L_089C2FA8;
    return;
L_089C2FA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[30] = (0u | 196u);
      if (branch_taken) {
          goto L_089C2FDC;
      }
      goto L_089C2FB4;
    }
L_089C2FB4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C2FC0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C2FC0u) goto L_089C2FC0;
    return;
L_089C2FC0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2FD8;
      }
      goto L_089C2FCC;
    }
L_089C2FCC:
    ctx.gpr[31] = (0x089C2FD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2FD4u) goto L_089C2FD4;
    return;
L_089C2FD4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C2FD8;
L_089C2FD8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089C2FDC;
L_089C2FDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2FE8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C2FE8u) goto L_089C2FE8;
    return;
L_089C2FE8:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C2FF8u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C2FF8u) goto L_089C2FF8;
    return;
L_089C2FF8:
    ctx.gpr[31] = (0x089C3000u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 348u, 0x08ADD468u>(ctx, &aot_mem) && ctx.pc == 0x089C3000u) goto L_089C3000;
    return;
L_089C3000:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C334C;
      }
      goto L_089C300C;
    }
L_089C300C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x089C3020u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem) && ctx.pc == 0x089C3020u) goto L_089C3020;
    return;
L_089C3020:
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12040));
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12032));
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11992));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11984));
      if (branch_taken) {
          goto L_089C3038;
      }
      goto L_089C3034;
    }
L_089C3034:
    ctx.gpr[16] = (0u | 1u);
    goto L_089C3038;
L_089C3038:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C3044u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 154u, 0x08ADC7BCu>(ctx, &aot_mem) && ctx.pc == 0x089C3044u) goto L_089C3044;
    return;
L_089C3044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C3060;
      }
      goto L_089C3054;
    }
L_089C3054:
    ctx.gpr[31] = (0x089C305Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C305Cu) goto L_089C305C;
    return;
L_089C305C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C3060;
L_089C3060:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[10] = (17264u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(61)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(62)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C308Cu);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C308Cu) goto L_089C308C;
    return;
L_089C308C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C30C4;
      }
      goto L_089C3098;
    }
L_089C3098:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C30A4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C30A4u) goto L_089C30A4;
    return;
L_089C30A4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C30BC;
      }
      goto L_089C30B0;
    }
L_089C30B0:
    ctx.gpr[31] = (0x089C30B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C30B8u) goto L_089C30B8;
    return;
L_089C30B8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C30BC;
L_089C30BC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C30C4;
L_089C30C4:
    ctx.gpr[31] = (0x089C30CCu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C30CCu) goto L_089C30CC;
    return;
L_089C30CC:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[6] = (0u | 154u);
    ctx.gpr[31] = (0x089C30DCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C30DCu) goto L_089C30DC;
    return;
L_089C30DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C30ECu);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem) && ctx.pc == 0x089C30ECu) goto L_089C30EC;
    return;
L_089C30EC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C30F8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 154u, 0x08ADC7BCu>(ctx, &aot_mem) && ctx.pc == 0x089C30F8u) goto L_089C30F8;
    return;
L_089C30F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (17199u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[22] = (0u | 168u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089C3138;
      }
      goto L_089C312C;
    }
L_089C312C:
    ctx.gpr[31] = (0x089C3134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C3134u) goto L_089C3134;
    return;
L_089C3134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C3138;
L_089C3138:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(61)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(62)));
    ctx.gpr[31] = (0x089C3158u);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C3158u) goto L_089C3158;
    return;
L_089C3158:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C3190;
      }
      goto L_089C3164;
    }
L_089C3164:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C3170u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C3170u) goto L_089C3170;
    return;
L_089C3170:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3188;
      }
      goto L_089C317C;
    }
L_089C317C:
    ctx.gpr[31] = (0x089C3184u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3184u) goto L_089C3184;
    return;
L_089C3184:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C3188;
L_089C3188:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C3190;
L_089C3190:
    ctx.gpr[31] = (0x089C3198u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C3198u) goto L_089C3198;
    return;
L_089C3198:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C31A8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C31A8u) goto L_089C31A8;
    return;
L_089C31A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C31B8u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem) && ctx.pc == 0x089C31B8u) goto L_089C31B8;
    return;
L_089C31B8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C31C4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 155u, 0x08ADC7D8u>(ctx, &aot_mem) && ctx.pc == 0x089C31C4u) goto L_089C31C4;
    return;
L_089C31C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (17213u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[22] = (0u | 182u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089C3204;
      }
      goto L_089C31F8;
    }
L_089C31F8:
    ctx.gpr[31] = (0x089C3200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C3200u) goto L_089C3200;
    return;
L_089C3200:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C3204;
L_089C3204:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(61)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(62)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C3228u);
    ctx.gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C3228u) goto L_089C3228;
    return;
L_089C3228:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C3260;
      }
      goto L_089C3234;
    }
L_089C3234:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C3240u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C3240u) goto L_089C3240;
    return;
L_089C3240:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3258;
      }
      goto L_089C324C;
    }
L_089C324C:
    ctx.gpr[31] = (0x089C3254u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3254u) goto L_089C3254;
    return;
L_089C3254:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C3258;
L_089C3258:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C3260;
L_089C3260:
    ctx.gpr[31] = (0x089C3268u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C3268u) goto L_089C3268;
    return;
L_089C3268:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C3278u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C3278u) goto L_089C3278;
    return;
L_089C3278:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C3288u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem) && ctx.pc == 0x089C3288u) goto L_089C3288;
    return;
L_089C3288:
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[31] = (0x089C3298u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 155u, 0x08ADC7D8u>(ctx, &aot_mem) && ctx.pc == 0x089C3298u) goto L_089C3298;
    return;
L_089C3298:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (17227u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[22] = (0u | 196u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089C32D8;
      }
      goto L_089C32CC;
    }
L_089C32CC:
    ctx.gpr[31] = (0x089C32D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C32D4u) goto L_089C32D4;
    return;
L_089C32D4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C32D8;
L_089C32D8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(61)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(62)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C32FCu);
    ctx.gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C32FCu) goto L_089C32FC;
    return;
L_089C32FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C3334;
      }
      goto L_089C3308;
    }
L_089C3308:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C3314u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C3314u) goto L_089C3314;
    return;
L_089C3314:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C332C;
      }
      goto L_089C3320;
    }
L_089C3320:
    ctx.gpr[31] = (0x089C3328u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3328u) goto L_089C3328;
    return;
L_089C3328:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C332C;
L_089C332C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C3334;
L_089C3334:
    ctx.gpr[31] = (0x089C333Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C333Cu) goto L_089C333C;
    return;
L_089C333C:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C334Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C334Cu) goto L_089C334C;
    return;
L_089C334C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 155u, 0x089C481Cu>(ctx, &aot_mem); return;
      }
      goto L_089C3354;
    }
L_089C3354:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[4] = (17264u << 16u);
    ctx.gpr[30] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12072));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12064));
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12056));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12048));
      if (branch_taken) {
          goto L_089C3380;
      }
      goto L_089C3374;
    }
L_089C3374:
    ctx.gpr[31] = (0x089C337Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C337Cu) goto L_089C337C;
    return;
L_089C337C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C3380;
L_089C3380:
    ctx.gpr[10] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (17185u << 16u);
    ctx.gpr[5] = (0u | 12u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x089C33ACu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C33ACu) goto L_089C33AC;
    return;
L_089C33AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C33E4;
      }
      goto L_089C33B8;
    }
L_089C33B8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C33C4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C33C4u) goto L_089C33C4;
    return;
L_089C33C4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C33DC;
      }
      goto L_089C33D0;
    }
L_089C33D0:
    ctx.gpr[31] = (0x089C33D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C33D8u) goto L_089C33D8;
    return;
L_089C33D8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C33DC;
L_089C33DC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C33E4;
L_089C33E4:
    ctx.gpr[31] = (0x089C33ECu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C33ECu) goto L_089C33EC;
    return;
L_089C33EC:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[6] = (0u | 154u);
    ctx.gpr[31] = (0x089C33FCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C33FCu) goto L_089C33FC;
    return;
L_089C33FC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[6] = (0u | 175u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C3414u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C3414u) goto L_089C3414;
    return;
L_089C3414:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[30] = (0u | 168u);
      if (branch_taken) {
          goto L_089C3448;
      }
      goto L_089C3420;
    }
L_089C3420:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C342Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C342Cu) goto L_089C342C;
    return;
L_089C342C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3444;
      }
      goto L_089C3438;
    }
L_089C3438:
    ctx.gpr[31] = (0x089C3440u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3440u) goto L_089C3440;
    return;
L_089C3440:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C3444;
L_089C3444:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089C3448;
L_089C3448:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C3454u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C3454u) goto L_089C3454;
    return;
L_089C3454:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C3464u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C3464u) goto L_089C3464;
    return;
L_089C3464:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[6] = (0u | 189u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C347Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C347Cu) goto L_089C347C;
    return;
L_089C347C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[30] = (0u | 182u);
      if (branch_taken) {
          goto L_089C34B0;
      }
      goto L_089C3488;
    }
L_089C3488:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C3494u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C3494u) goto L_089C3494;
    return;
L_089C3494:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C34AC;
      }
      goto L_089C34A0;
    }
L_089C34A0:
    ctx.gpr[31] = (0x089C34A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C34A8u) goto L_089C34A8;
    return;
L_089C34A8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C34AC;
L_089C34AC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089C34B0;
L_089C34B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C34BCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C34BCu) goto L_089C34BC;
    return;
L_089C34BC:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C34CCu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C34CCu) goto L_089C34CC;
    return;
L_089C34CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12080)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 240u);
    ctx.gpr[6] = (0u | 161u);
    ctx.gpr[31] = (0x089C34F0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C34F0u) goto L_089C34F0;
    return;
L_089C34F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C3528;
      }
      goto L_089C34FC;
    }
L_089C34FC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C3508u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C3508u) goto L_089C3508;
    return;
L_089C3508:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3520;
      }
      goto L_089C3514;
    }
L_089C3514:
    ctx.gpr[31] = (0x089C351Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C351Cu) goto L_089C351C;
    return;
L_089C351C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C3520;
L_089C3520:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C3528;
L_089C3528:
    ctx.gpr[31] = (0x089C3530u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C3530u) goto L_089C3530;
    return;
L_089C3530:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[6] = (0u | 154u);
    ctx.gpr[31] = (0x089C3540u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C3540u) goto L_089C3540;
    return;
L_089C3540:
    ctx.gpr[31] = (0x089C3548u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 348u, 0x08ADD468u>(ctx, &aot_mem) && ctx.pc == 0x089C3548u) goto L_089C3548;
    return;
L_089C3548:
    ctx.gpr[5] = (17199u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 168u);
      if (branch_taken) {
          goto L_089C360C;
      }
      goto L_089C355C;
    }
L_089C355C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12076)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C356Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 167u, 0x08ADC88Cu>(ctx, &aot_mem) && ctx.pc == 0x089C356Cu) goto L_089C356C;
    return;
L_089C356C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12040));
      if (branch_taken) {
          goto L_089C358C;
      }
      goto L_089C3580;
    }
L_089C3580:
    ctx.gpr[31] = (0x089C3588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C3588u) goto L_089C3588;
    return;
L_089C3588:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C358C;
L_089C358C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(67)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(65)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(66)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C35B0u);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C35B0u) goto L_089C35B0;
    return;
L_089C35B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C35E8;
      }
      goto L_089C35BC;
    }
L_089C35BC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C35C8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C35C8u) goto L_089C35C8;
    return;
L_089C35C8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C35E0;
      }
      goto L_089C35D4;
    }
L_089C35D4:
    ctx.gpr[31] = (0x089C35DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C35DCu) goto L_089C35DC;
    return;
L_089C35DC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C35E0;
L_089C35E0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C35E8;
L_089C35E8:
    ctx.gpr[31] = (0x089C35F0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C35F0u) goto L_089C35F0;
    return;
L_089C35F0:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C3600u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C3600u) goto L_089C3600;
    return;
L_089C3600:
    ctx.gpr[4] = (17213u << 16u);
    ctx.gpr[18] = (0u | 182u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089C360C;
L_089C360C:
    ctx.gpr[31] = (0x089C3614u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x089C3614u) goto L_089C3614;
    return;
L_089C3614:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
      if (branch_taken) {
          goto L_089C36B0;
      }
      goto L_089C3620;
    }
L_089C3620:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089C3638;
      }
      goto L_089C3628;
    }
L_089C3628:
    ctx.gpr[31] = (0x089C3630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C3630u) goto L_089C3630;
    return;
L_089C3630:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089C3638;
L_089C3638:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 18u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x089C3658u);
    ctx.gpr[9] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C3658u) goto L_089C3658;
    return;
L_089C3658:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11976));
      if (branch_taken) {
          goto L_089C3690;
      }
      goto L_089C3664;
    }
L_089C3664:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C3670u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C3670u) goto L_089C3670;
    return;
L_089C3670:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3688;
      }
      goto L_089C367C;
    }
L_089C367C:
    ctx.gpr[31] = (0x089C3684u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3684u) goto L_089C3684;
    return;
L_089C3684:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C3688;
L_089C3688:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11976));
    goto L_089C3690;
L_089C3690:
    ctx.gpr[31] = (0x089C3698u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C3698u) goto L_089C3698;
    return;
L_089C3698:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C36A8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C36A8u) goto L_089C36A8;
    return;
L_089C36A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3738;
      }
      goto L_089C36B0;
    }
L_089C36B0:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089C36C8;
      }
      goto L_089C36B8;
    }
L_089C36B8:
    ctx.gpr[31] = (0x089C36C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C36C0u) goto L_089C36C0;
    return;
L_089C36C0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089C36C8;
L_089C36C8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 54u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x089C36E8u);
    ctx.gpr[9] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C36E8u) goto L_089C36E8;
    return;
L_089C36E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11968));
      if (branch_taken) {
          goto L_089C3720;
      }
      goto L_089C36F4;
    }
L_089C36F4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C3700u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C3700u) goto L_089C3700;
    return;
L_089C3700:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3718;
      }
      goto L_089C370C;
    }
L_089C370C:
    ctx.gpr[31] = (0x089C3714u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3714u) goto L_089C3714;
    return;
L_089C3714:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C3718;
L_089C3718:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11968));
    goto L_089C3720;
L_089C3720:
    ctx.gpr[31] = (0x089C3728u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C3728u) goto L_089C3728;
    return;
L_089C3728:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C3738u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C3738u) goto L_089C3738;
    return;
L_089C3738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 155u, 0x089C481Cu>(ctx, &aot_mem); return;
      }
      goto L_089C3740;
    }
L_089C3740:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[30] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12072));
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12064));
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12056));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12048));
      if (branch_taken) {
          goto L_089C3764;
      }
      goto L_089C3758;
    }
L_089C3758:
    ctx.gpr[31] = (0x089C3760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C3760u) goto L_089C3760;
    return;
L_089C3760:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C3764;
L_089C3764:
    ctx.gpr[10] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (17185u << 16u);
    ctx.gpr[5] = (0u | 12u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x089C3790u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C3790u) goto L_089C3790;
    return;
L_089C3790:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C37C8;
      }
      goto L_089C379C;
    }
L_089C379C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C37A8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C37A8u) goto L_089C37A8;
    return;
L_089C37A8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C37C0;
      }
      goto L_089C37B4;
    }
L_089C37B4:
    ctx.gpr[31] = (0x089C37BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C37BCu) goto L_089C37BC;
    return;
L_089C37BC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C37C0;
L_089C37C0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C37C8;
L_089C37C8:
    ctx.gpr[31] = (0x089C37D0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C37D0u) goto L_089C37D0;
    return;
L_089C37D0:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[6] = (0u | 154u);
    ctx.gpr[31] = (0x089C37E0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C37E0u) goto L_089C37E0;
    return;
L_089C37E0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[6] = (0u | 175u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C37F8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C37F8u) goto L_089C37F8;
    return;
L_089C37F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[30] = (0u | 168u);
      if (branch_taken) {
          goto L_089C382C;
      }
      goto L_089C3804;
    }
L_089C3804:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C3810u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C3810u) goto L_089C3810;
    return;
L_089C3810:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3828;
      }
      goto L_089C381C;
    }
L_089C381C:
    ctx.gpr[31] = (0x089C3824u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3824u) goto L_089C3824;
    return;
L_089C3824:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C3828;
L_089C3828:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089C382C;
L_089C382C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C3838u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C3838u) goto L_089C3838;
    return;
L_089C3838:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C3848u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C3848u) goto L_089C3848;
    return;
L_089C3848:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[6] = (0u | 189u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C3860u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C3860u) goto L_089C3860;
    return;
L_089C3860:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[30] = (0u | 182u);
      if (branch_taken) {
          goto L_089C3894;
      }
      goto L_089C386C;
    }
L_089C386C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C3878u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C3878u) goto L_089C3878;
    return;
L_089C3878:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3890;
      }
      goto L_089C3884;
    }
L_089C3884:
    ctx.gpr[31] = (0x089C388Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C388Cu) goto L_089C388C;
    return;
L_089C388C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C3890;
L_089C3890:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089C3894;
L_089C3894:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C38A0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C38A0u) goto L_089C38A0;
    return;
L_089C38A0:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C38B0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C38B0u) goto L_089C38B0;
    return;
L_089C38B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12080)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 240u);
    ctx.gpr[6] = (0u | 161u);
    ctx.gpr[31] = (0x089C38D4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C38D4u) goto L_089C38D4;
    return;
L_089C38D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C390C;
      }
      goto L_089C38E0;
    }
L_089C38E0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C38ECu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C38ECu) goto L_089C38EC;
    return;
L_089C38EC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3904;
      }
      goto L_089C38F8;
    }
L_089C38F8:
    ctx.gpr[31] = (0x089C3900u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3900u) goto L_089C3900;
    return;
L_089C3900:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C3904;
L_089C3904:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C390C;
L_089C390C:
    ctx.gpr[31] = (0x089C3914u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C3914u) goto L_089C3914;
    return;
L_089C3914:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[6] = (0u | 154u);
    ctx.gpr[31] = (0x089C3924u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C3924u) goto L_089C3924;
    return;
L_089C3924:
    ctx.gpr[31] = (0x089C392Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 395u, 0x08ADD768u>(ctx, &aot_mem) && ctx.pc == 0x089C392Cu) goto L_089C392C;
    return;
L_089C392C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C3A84;
      }
      goto L_089C393C;
    }
L_089C393C:
    ctx.gpr[31] = (0x089C3944u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 395u, 0x08ADD768u>(ctx, &aot_mem) && ctx.pc == 0x089C3944u) goto L_089C3944;
    return;
L_089C3944:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C3950u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 167u, 0x08ADC88Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3950u) goto L_089C3950;
    return;
L_089C3950:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[5] = (17199u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 168u);
      if (branch_taken) {
          goto L_089C3978;
      }
      goto L_089C396C;
    }
L_089C396C:
    ctx.gpr[31] = (0x089C3974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C3974u) goto L_089C3974;
    return;
L_089C3974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C3978;
L_089C3978:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(71)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[10] = (17264u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(69)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(70)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089C39A0u);
    ctx.gpr[5] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C39A0u) goto L_089C39A0;
    return;
L_089C39A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11960));
      if (branch_taken) {
          goto L_089C39D8;
      }
      goto L_089C39AC;
    }
L_089C39AC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C39B8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C39B8u) goto L_089C39B8;
    return;
L_089C39B8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C39D0;
      }
      goto L_089C39C4;
    }
L_089C39C4:
    ctx.gpr[31] = (0x089C39CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C39CCu) goto L_089C39CC;
    return;
L_089C39CC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C39D0;
L_089C39D0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11960));
    goto L_089C39D8;
L_089C39D8:
    ctx.gpr[31] = (0x089C39E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C39E0u) goto L_089C39E0;
    return;
L_089C39E0:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C39F0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C39F0u) goto L_089C39F0;
    return;
L_089C39F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[4] = (17213u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[19] = (0u | 182u);
      if (branch_taken) {
          goto L_089C3A10;
      }
      goto L_089C3A04;
    }
L_089C3A04:
    ctx.gpr[31] = (0x089C3A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C3A0Cu) goto L_089C3A0C;
    return;
L_089C3A0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C3A10;
L_089C3A10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 15u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 75u);
    ctx.gpr[8] = (0u | 151u);
    ctx.gpr[31] = (0x089C3A34u);
    ctx.gpr[9] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C3A34u) goto L_089C3A34;
    return;
L_089C3A34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11952));
      if (branch_taken) {
          goto L_089C3A6C;
      }
      goto L_089C3A40;
    }
L_089C3A40:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C3A4Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C3A4Cu) goto L_089C3A4C;
    return;
L_089C3A4C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3A64;
      }
      goto L_089C3A58;
    }
L_089C3A58:
    ctx.gpr[31] = (0x089C3A60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3A60u) goto L_089C3A60;
    return;
L_089C3A60:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C3A64;
L_089C3A64:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11952));
    goto L_089C3A6C;
L_089C3A6C:
    ctx.gpr[31] = (0x089C3A74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C3A74u) goto L_089C3A74;
    return;
L_089C3A74:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C3A84u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C3A84u) goto L_089C3A84;
    return;
L_089C3A84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 155u, 0x089C481Cu>(ctx, &aot_mem); return;
      }
      goto L_089C3A8C;
    }
L_089C3A8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[4] = (17264u << 16u);
    ctx.gpr[30] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12072));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12064));
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12056));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12048));
      if (branch_taken) {
          goto L_089C3AB8;
      }
      goto L_089C3AAC;
    }
L_089C3AAC:
    ctx.gpr[31] = (0x089C3AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C3AB4u) goto L_089C3AB4;
    return;
L_089C3AB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C3AB8;
L_089C3AB8:
    ctx.gpr[9] = (17185u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[10] = (17136u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 12u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x089C3AE8u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C3AE8u) goto L_089C3AE8;
    return;
L_089C3AE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C3B20;
      }
      goto L_089C3AF4;
    }
L_089C3AF4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C3B00u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C3B00u) goto L_089C3B00;
    return;
L_089C3B00:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3B18;
      }
      goto L_089C3B0C;
    }
L_089C3B0C:
    ctx.gpr[31] = (0x089C3B14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3B14u) goto L_089C3B14;
    return;
L_089C3B14:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C3B18;
L_089C3B18:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C3B20;
L_089C3B20:
    ctx.gpr[31] = (0x089C3B28u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C3B28u) goto L_089C3B28;
    return;
L_089C3B28:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[6] = (0u | 154u);
    ctx.gpr[31] = (0x089C3B38u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C3B38u) goto L_089C3B38;
    return;
L_089C3B38:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[6] = (0u | 175u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C3B50u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C3B50u) goto L_089C3B50;
    return;
L_089C3B50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[30] = (0u | 168u);
      if (branch_taken) {
          goto L_089C3B84;
      }
      goto L_089C3B5C;
    }
L_089C3B5C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C3B68u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C3B68u) goto L_089C3B68;
    return;
L_089C3B68:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3B80;
      }
      goto L_089C3B74;
    }
L_089C3B74:
    ctx.gpr[31] = (0x089C3B7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3B7Cu) goto L_089C3B7C;
    return;
L_089C3B7C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C3B80;
L_089C3B80:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089C3B84;
L_089C3B84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C3B90u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C3B90u) goto L_089C3B90;
    return;
L_089C3B90:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C3BA0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C3BA0u) goto L_089C3BA0;
    return;
L_089C3BA0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[6] = (0u | 189u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C3BB8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C3BB8u) goto L_089C3BB8;
    return;
L_089C3BB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[30] = (0u | 182u);
      if (branch_taken) {
          goto L_089C3BEC;
      }
      goto L_089C3BC4;
    }
L_089C3BC4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C3BD0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C3BD0u) goto L_089C3BD0;
    return;
L_089C3BD0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3BE8;
      }
      goto L_089C3BDC;
    }
L_089C3BDC:
    ctx.gpr[31] = (0x089C3BE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3BE4u) goto L_089C3BE4;
    return;
L_089C3BE4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C3BE8;
L_089C3BE8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089C3BEC;
L_089C3BEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C3BF8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C3BF8u) goto L_089C3BF8;
    return;
L_089C3BF8:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C3C08u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C3C08u) goto L_089C3C08;
    return;
L_089C3C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12080)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 203u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C3C2Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C3C2Cu) goto L_089C3C2C;
    return;
L_089C3C2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[30] = (0u | 196u);
      if (branch_taken) {
          goto L_089C3C60;
      }
      goto L_089C3C38;
    }
L_089C3C38:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C3C44u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C3C44u) goto L_089C3C44;
    return;
L_089C3C44:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3C5C;
      }
      goto L_089C3C50;
    }
L_089C3C50:
    ctx.gpr[31] = (0x089C3C58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3C58u) goto L_089C3C58;
    return;
L_089C3C58:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C3C5C;
L_089C3C5C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089C3C60;
L_089C3C60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C3C6Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C3C6Cu) goto L_089C3C6C;
    return;
L_089C3C6C:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C3C7Cu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C3C7Cu) goto L_089C3C7C;
    return;
L_089C3C7C:
    ctx.gpr[18] = (0u | 161u);
    ctx.gpr[31] = (0x089C3C88u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 348u, 0x08ADD468u>(ctx, &aot_mem) && ctx.pc == 0x089C3C88u) goto L_089C3C88;
    return;
L_089C3C88:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C3D38;
      }
      goto L_089C3C94;
    }
L_089C3C94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12076)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C3CA4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 167u, 0x08ADC88Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3CA4u) goto L_089C3CA4;
    return;
L_089C3CA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12040));
      if (branch_taken) {
          goto L_089C3CC4;
      }
      goto L_089C3CB8;
    }
L_089C3CB8:
    ctx.gpr[31] = (0x089C3CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C3CC0u) goto L_089C3CC0;
    return;
L_089C3CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C3CC4;
L_089C3CC4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(75)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(73)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(74)));
    ctx.gpr[31] = (0x089C3CE4u);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C3CE4u) goto L_089C3CE4;
    return;
L_089C3CE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C3D1C;
      }
      goto L_089C3CF0;
    }
L_089C3CF0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C3CFCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C3CFCu) goto L_089C3CFC;
    return;
L_089C3CFC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3D14;
      }
      goto L_089C3D08;
    }
L_089C3D08:
    ctx.gpr[31] = (0x089C3D10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3D10u) goto L_089C3D10;
    return;
L_089C3D10:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C3D14;
L_089C3D14:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C3D1C;
L_089C3D1C:
    ctx.gpr[31] = (0x089C3D24u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C3D24u) goto L_089C3D24;
    return;
L_089C3D24:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[6] = (0u | 154u);
    ctx.gpr[31] = (0x089C3D34u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C3D34u) goto L_089C3D34;
    return;
L_089C3D34:
    ctx.gpr[18] = (0u | 175u);
    goto L_089C3D38;
L_089C3D38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[16] != 0u) {
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[18]);
        goto L_089C3D54;
    }
    goto L_089C3D44;
L_089C3D44:
    ctx.gpr[31] = (0x089C3D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C3D4Cu) goto L_089C3D4C;
    return;
L_089C3D4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[18]);
    goto L_089C3D54;
L_089C3D54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (0u | 255u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (0u | 75u);
    ctx.gpr[8] = (0u | 151u);
    ctx.gpr[31] = (0x089C3D78u);
    ctx.gpr[9] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C3D78u) goto L_089C3D78;
    return;
L_089C3D78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11944));
      if (branch_taken) {
          goto L_089C3DB0;
      }
      goto L_089C3D84;
    }
L_089C3D84:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C3D90u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C3D90u) goto L_089C3D90;
    return;
L_089C3D90:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3DA8;
      }
      goto L_089C3D9C;
    }
L_089C3D9C:
    ctx.gpr[31] = (0x089C3DA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3DA4u) goto L_089C3DA4;
    return;
L_089C3DA4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C3DA8;
L_089C3DA8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11944));
    goto L_089C3DB0;
L_089C3DB0:
    ctx.gpr[31] = (0x089C3DB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C3DB8u) goto L_089C3DB8;
    return;
L_089C3DB8:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-7));
    ctx.gpr[31] = (0x089C3DC8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C3DC8u) goto L_089C3DC8;
    return;
L_089C3DC8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-7));
      if (branch_taken) {
          goto L_089C3DEC;
      }
      goto L_089C3DE0;
    }
L_089C3DE0:
    ctx.gpr[31] = (0x089C3DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C3DE8u) goto L_089C3DE8;
    return;
L_089C3DE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C3DEC;
L_089C3DEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 19u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x089C3E10u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C3E10u) goto L_089C3E10;
    return;
L_089C3E10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11936));
      if (branch_taken) {
          goto L_089C3E48;
      }
      goto L_089C3E1C;
    }
L_089C3E1C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C3E28u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C3E28u) goto L_089C3E28;
    return;
L_089C3E28:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3E40;
      }
      goto L_089C3E34;
    }
L_089C3E34:
    ctx.gpr[31] = (0x089C3E3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3E3Cu) goto L_089C3E3C;
    return;
L_089C3E3C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C3E40;
L_089C3E40:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11936));
    goto L_089C3E48;
L_089C3E48:
    ctx.gpr[31] = (0x089C3E50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C3E50u) goto L_089C3E50;
    return;
L_089C3E50:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C3E60u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C3E60u) goto L_089C3E60;
    return;
L_089C3E60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 155u, 0x089C481Cu>(ctx, &aot_mem); return;
      }
      goto L_089C3E68;
    }
L_089C3E68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11984));
    ctx.gpr[4] = (17264u << 16u);
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12072));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12064));
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12056));
    ctx.gpr[30] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12048));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C3EA4;
      }
      goto L_089C3E98;
    }
L_089C3E98:
    ctx.gpr[31] = (0x089C3EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089C3EA0u) goto L_089C3EA0;
    return;
L_089C3EA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089C3EA4;
L_089C3EA4:
    ctx.gpr[10] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (17185u << 16u);
    ctx.gpr[5] = (0u | 12u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x089C3ED0u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem) && ctx.pc == 0x089C3ED0u) goto L_089C3ED0;
    return;
L_089C3ED0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C3F0C;
      }
      goto L_089C3EDC;
    }
L_089C3EDC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C3EE8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C3EE8u) goto L_089C3EE8;
    return;
L_089C3EE8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3F00;
      }
      goto L_089C3EF4;
    }
L_089C3EF4:
    ctx.gpr[31] = (0x089C3EFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3EFCu) goto L_089C3EFC;
    return;
L_089C3EFC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089C3F00;
L_089C3F00:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C3F0C;
L_089C3F0C:
    ctx.gpr[31] = (0x089C3F14u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C3F14u) goto L_089C3F14;
    return;
L_089C3F14:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[6] = (0u | 154u);
    ctx.gpr[31] = (0x089C3F24u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C3F24u) goto L_089C3F24;
    return;
L_089C3F24:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[6] = (0u | 175u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C3F3Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C3F3Cu) goto L_089C3F3C;
    return;
L_089C3F3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[18] = (0u | 168u);
      if (branch_taken) {
          goto L_089C3F74;
      }
      goto L_089C3F48;
    }
L_089C3F48:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C3F54u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C3F54u) goto L_089C3F54;
    return;
L_089C3F54:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3F6C;
      }
      goto L_089C3F60;
    }
L_089C3F60:
    ctx.gpr[31] = (0x089C3F68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3F68u) goto L_089C3F68;
    return;
L_089C3F68:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089C3F6C;
L_089C3F6C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C3F74;
L_089C3F74:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C3F80u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C3F80u) goto L_089C3F80;
    return;
L_089C3F80:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C3F90u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C3F90u) goto L_089C3F90;
    return;
L_089C3F90:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12084)));
    ctx.gpr[6] = (0u | 189u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C3FA8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 156u, 0x089BCC20u>(ctx, &aot_mem) && ctx.pc == 0x089C3FA8u) goto L_089C3FA8;
    return;
L_089C3FA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[18] = (0u | 182u);
      if (branch_taken) {
          goto L_089C3FE0;
      }
      goto L_089C3FB4;
    }
L_089C3FB4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C3FC0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089C3FC0u) goto L_089C3FC0;
    return;
L_089C3FC0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3FD8;
      }
      goto L_089C3FCC;
    }
L_089C3FCC:
    ctx.gpr[31] = (0x089C3FD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3FD4u) goto L_089C3FD4;
    return;
L_089C3FD4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089C3FD8;
L_089C3FD8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089C3FE0;
L_089C3FE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C3FECu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089C3FECu) goto L_089C3FEC;
    return;
L_089C3FEC:
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C3FFCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x089C3FFCu) goto L_089C3FFC;
    return;
L_089C3FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12080)));
    ctx.pc = 0x089C4000u; return;
}

void recomp_unit_0111(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0111_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_111(Runtime &runtime) {
    runtime.register_generated_unit(111u, 0x089C0000u, 16384u, &recomp_unit_0111, &recomp_unit_0111_entry);
    runtime.register_function(0x089C0000u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0024u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0038u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0048u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0054u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0060u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C006Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0074u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0080u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0088u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C00C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C00F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C010Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0114u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0134u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C014Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0164u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C016Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0180u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C01FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0218u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0228u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0244u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0260u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0270u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0308u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0314u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C031Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0320u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0328u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0330u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C033Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0374u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0400u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C040Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0420u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0468u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0500u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0538u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C056Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C05A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C05D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0608u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0614u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C061Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0638u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0640u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0644u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C064Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0650u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0658u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0664u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0678u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0680u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0688u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C068Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0698u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C06A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C06B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C06C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C06E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C06ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0784u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C07BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C07C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C07E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0804u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0838u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0840u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0874u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C089Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C08A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C08B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C08B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C08C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C08ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0908u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C093Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0944u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0950u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C095Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0968u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0974u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0984u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0AC8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0AE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B18u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BB4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BC0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C6Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C78u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CCCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D04u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D38u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D6Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DCCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0EA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0EC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0EE0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0FA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0FC8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0FF8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C101Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1028u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1034u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1040u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C104Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1058u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1068u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1120u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C113Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C117Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C11B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C11C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C11CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C11D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C11FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1208u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C120Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1230u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C124Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C125Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C126Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1270u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1280u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C128Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1298u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C12E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1304u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1314u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C131Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1368u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1384u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1394u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C13A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C13CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C13E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C13E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C140Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1418u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1430u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1444u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1490u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1500u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1544u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C154Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C155Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1568u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1574u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1580u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1588u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C158Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1618u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1624u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C162Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1634u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C163Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1660u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1668u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1700u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C170Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C171Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1724u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C172Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1734u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C173Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1744u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C174Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1760u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C176Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1770u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1800u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1824u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1830u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1838u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C186Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1894u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1904u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1910u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C191Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1924u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1954u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C197Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C19B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C19D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C19F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C19FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A94u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1AA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1AA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1AD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1AFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1BACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1BD8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1BF8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1C00u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1C54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1C5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1C60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1C78u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1C98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1CA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1CD8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1CE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1CF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D6Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D78u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1DA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1DB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1DB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1DC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1DCCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1DD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1DE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1DFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1EA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1EB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1EC0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1ECCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1ED4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1EDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1EE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1EF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F04u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F6Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F78u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F84u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FE0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2018u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C202Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C203Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2048u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2050u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2058u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2060u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2068u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2070u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2078u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2080u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2134u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C213Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2144u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2154u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2178u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2190u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2194u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2200u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2214u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2224u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2228u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2230u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2240u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2258u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2270u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2278u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C227Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2310u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C231Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2328u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2334u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C233Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2340u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2344u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2350u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2360u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2378u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2384u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2390u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C239Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2404u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2410u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2418u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C241Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2424u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C242Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C243Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2444u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2450u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C247Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C248Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C249Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2504u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C250Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C251Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2524u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2538u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2540u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2544u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2550u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2560u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2568u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C256Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2590u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C259Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2630u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2638u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C263Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2660u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C266Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2678u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2684u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C268Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2690u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2698u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2700u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C270Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2718u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2724u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C272Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2730u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2738u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2740u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2750u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2764u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C276Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2770u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2794u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2800u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2804u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2828u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2834u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2840u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C284Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2854u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2858u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2860u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2868u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2878u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2890u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C289Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2904u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2920u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2928u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C292Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2950u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C295Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2968u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2974u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C297Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2980u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2988u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2990u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A94u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AB4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2ACCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AD8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AF8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B00u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B40u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B6Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BC8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BCCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BD8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C38u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C78u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2CBCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2CC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2CC8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2CE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2CF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D00u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D18u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D38u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D94u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DF8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E94u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EB4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2ECCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2ED8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EF8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F00u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F40u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F84u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FB4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FC0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FCCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FD8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FF8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3000u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C300Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3020u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3034u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3038u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3044u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3054u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C305Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3060u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C308Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3098u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C312Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3134u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3138u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3158u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3164u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3170u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C317Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3184u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3188u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3190u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3198u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3200u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3204u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3228u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3234u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3240u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C324Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3254u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3258u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3260u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3268u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3278u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3288u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3298u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3308u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3314u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3320u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3328u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C332Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3334u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C333Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C334Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3354u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3374u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C337Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3380u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3414u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3420u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C342Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3438u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3440u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3444u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3448u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3454u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3464u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C347Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3488u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3494u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3508u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3514u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C351Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3520u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3528u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3530u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3540u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3548u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C355Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C356Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3580u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3588u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C358Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3600u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C360Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3614u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3620u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3628u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3630u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3638u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3658u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3664u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3670u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C367Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3684u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3688u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3690u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3698u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3700u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C370Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3714u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3718u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3720u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3728u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3738u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3740u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3758u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3760u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3764u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3790u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C379Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3804u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3810u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C381Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3824u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3828u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C382Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3838u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3848u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3860u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C386Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3878u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3884u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C388Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3890u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3894u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3900u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3904u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C390Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3914u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3924u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C392Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C393Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3944u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3950u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C396Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3974u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3978u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A04u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A40u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A6Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A84u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AB4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B00u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B18u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B38u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B84u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BF8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C38u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C6Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C94u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CC0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D24u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D38u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D78u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D84u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DC8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DE0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E40u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3EA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3EA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3ED0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3EDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3EE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3EF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3EFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F00u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F24u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F6Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3FA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3FB4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3FC0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3FCCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3FD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3FD8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3FE0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3FECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3FFCu, &recomp_unit_0111, "recomp_unit_0111");
}
} // namespace psprecomp
