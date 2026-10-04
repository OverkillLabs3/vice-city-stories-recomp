#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0084[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0,
    5, 0, 6, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 9, 0, 10, 0, 11, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 15,
    0, 16, 0, 17, 0, 0, 18, 0, 0, 19, 0, 20, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 24, 25, 26, 0, 27, 0, 0, 28, 0, 29,
    0, 30, 0, 31, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 35, 36, 37, 0, 38, 0, 0, 39, 0, 40, 0, 0, 0, 41,
    0, 0, 42, 43, 44, 0, 45, 0, 0, 46, 0, 0, 47, 0, 48, 0, 49, 0, 0, 50, 51, 0, 0, 52, 0, 53, 54, 0, 0, 55, 0, 56,
    0, 57, 0, 58, 0, 59, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 64, 65, 66, 0, 67, 0, 0, 68, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0,
    75, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 80, 0, 0, 0,
    0, 81, 0, 0, 82, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0,
    0, 89, 0, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107,
    0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0,
    0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 119, 120, 0, 0, 0, 0, 121, 0,
    0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 124, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0,
    0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 143, 0, 0, 0, 144, 0,
    145, 0, 0, 0, 146, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 149, 150, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 163,
    0, 0, 0, 164, 0, 165, 166, 0, 0, 0, 167, 168, 0, 0, 169, 0, 170, 0, 0, 0, 171, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0,
    0, 174, 0, 0, 0, 175, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 179, 0, 180, 0, 0, 0, 181, 182, 0, 183, 0,
    0, 184, 0, 0, 185, 186, 0, 187, 0, 0, 0, 188, 189, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214,
    0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 224, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 228, 229, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0,
    0, 239, 240, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0,
    0, 245, 246, 0, 247, 0, 0, 248, 0, 0, 0, 249, 0, 250, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 258, 259, 0, 260, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    264, 0, 0, 0, 0, 0, 265, 266, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 272, 0, 0,
    0, 0, 0, 0, 273, 0, 274, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 280,
    0, 281, 0, 0, 0, 282, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297,
    0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301,
    0, 302, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0,
    0, 305, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 315, 0, 316, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0,
    0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0,
    343, 0, 0, 0, 344, 0, 345, 0, 346, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 353,
    0, 0, 354, 0, 355, 0, 356, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360,
    0, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0,
    0, 0, 368, 0, 369, 0, 370, 0, 0, 0, 371, 0, 372, 373, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 377, 0,
    0, 0, 378, 0, 379, 0, 380, 0, 0, 381, 0, 382, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 0, 0, 0, 396, 0, 0, 397, 0, 398, 0, 0, 0,
    0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 403, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406,
    0, 0, 407, 0, 0, 408, 0, 409, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 0,
    418, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0,
    0, 424, 0, 425, 0, 0, 426, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 429, 430, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 432, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0,
    438, 0, 439, 0, 0, 0, 0, 0, 440, 0, 441, 0, 442, 0, 0, 0, 0, 443, 444, 0, 0, 0, 445, 0, 446, 0, 447, 0, 448, 0, 449, 0,
    0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 454, 0, 455, 0, 456, 0,
    457, 0, 458, 0, 459, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 465, 0, 466, 0,
    467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 471, 0, 472, 0, 0, 473, 0, 474, 0, 475, 0, 476, 0,
    477, 0, 0, 0, 478, 0, 479, 0, 480, 0, 481, 0, 482, 0, 483, 0, 0, 484, 485, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0,
    487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 491, 0, 492, 0, 0, 0, 0, 0, 493, 0,
    0, 494, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 499, 500, 0, 0, 501, 0,
    0, 502, 503, 504, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509,
    0, 0, 510, 0, 0, 511, 0, 0, 0, 512, 0, 513, 0, 514, 0, 0, 515, 0, 516, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0,
    519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 522, 523, 0, 0, 0, 0, 524, 0, 0, 525, 0, 526, 0, 527, 0, 528, 0,
    0, 529, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0, 0, 536,
    0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 0, 543, 0, 0,
    544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 547, 0, 0, 548, 0, 0, 0, 549, 0, 550, 0, 0, 0,
    551, 0, 552, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 557, 0, 558, 0,
    559, 0, 560, 0, 561, 0, 562, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 567, 0, 0, 0, 568, 569, 0, 570, 0, 0,
    571, 0, 0, 0, 0, 0, 572, 573, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 577, 0, 0,
    0, 578, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0,
    0, 0, 0, 582, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0,
    0, 0, 588, 0, 0, 589, 0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 0,
    0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 598, 0, 0, 599, 0, 0, 0, 600, 0, 601, 602, 0, 0,
    0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 607,
    0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 613, 0, 0,
    0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 616, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0,
    0, 619, 620, 621, 0, 622, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 625, 0, 0, 0, 626, 0, 627, 0, 628, 0, 629, 0, 0,
    630, 0, 631, 0, 632, 0, 0, 633, 0, 634, 0, 635, 0, 0, 0, 636, 0, 637, 0, 638, 0, 639, 0, 0, 640, 0, 641, 0, 642, 0, 0, 643,
    644, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 647, 0, 648, 0, 649, 0, 650, 0, 0, 0, 0, 651, 0,
    0, 652, 0, 0, 653, 0, 0, 654, 0, 655, 0, 0, 0, 656, 657, 0, 658, 0, 0, 0, 659, 0, 660, 0, 661, 0, 0, 662, 0, 663, 0, 664,
    0, 0, 0, 665, 0, 666, 0, 667, 0, 0, 668, 0, 669, 0, 670, 0, 671, 0, 672, 0, 0, 0, 673, 0, 674, 0, 675, 0, 676, 0, 0, 677,
    0, 678, 0, 679, 680, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0,
    683, 0, 0, 0, 0, 0, 0, 684, 685, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 688, 0, 0, 0, 0, 689, 0, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 0, 695, 0, 0, 0, 0, 696, 0, 697, 0, 0, 698, 0, 699, 0, 0,
    700, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 702, 0, 703, 0, 704, 0, 705, 706, 0, 707, 0, 708, 0, 0, 0, 0, 709, 0, 0, 0, 0,
    710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 719, 0, 0, 720,
    0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0,
    726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 728, 0, 0, 0, 0, 0, 729, 0, 0, 0, 730, 0, 0, 0, 0,
    731, 732, 0, 0, 0, 0, 733, 0, 734, 0, 0, 0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 0, 0, 738, 0, 0, 0,
    0, 739, 0, 0, 740, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 0, 0, 744, 0,
    745, 0, 0, 0, 0, 746, 0, 747, 0, 0, 0, 0, 0, 748, 0, 0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 0,
    0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 755,
    0, 0, 0, 0, 0, 756, 0, 757, 0, 0, 0, 0, 0, 758, 0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 762, 0,
    763, 0, 0, 764, 0, 0, 0, 0, 0, 765, 0, 766, 0, 0, 0, 0, 767, 0, 0, 768, 769, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0,
    771, 0, 772, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 774, 0, 775, 0, 0, 0, 776, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 0,
    0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 781, 0, 0, 0, 0, 0, 0, 782, 783, 0, 784, 0, 0, 785, 0, 0, 0, 0,
    786, 0, 0, 0, 0, 787, 788, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    790, 0, 791, 0, 0, 0, 0, 0, 0, 792, 0, 0, 793, 0, 0, 0, 0, 0, 0, 794, 0, 795, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 797, 0, 0, 0, 798, 0, 0, 0, 0, 799, 0, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 801, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 805, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 807, 0, 808, 0, 809, 0, 810, 0, 0, 0, 0, 811, 0, 0, 0, 0, 812, 0, 0, 0,
    0, 813, 0, 0, 814, 0, 0, 0, 815, 816, 0, 817, 0, 0, 0, 818, 0, 0, 819, 820, 821, 0, 822, 0, 823, 0, 824, 0, 0, 0, 825, 0,
    0, 826, 827, 828, 0, 829, 0, 0, 0, 830, 0, 0, 0, 0, 0, 831, 0, 0, 0, 832, 0, 833, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0,
    0, 0, 0, 835, 0, 0, 0, 836, 0, 0, 837, 0, 0, 838, 0, 0, 839, 0, 840, 0, 841, 0, 0, 842, 0, 0, 0, 0, 843, 0, 0, 844,
};
void recomp_unit_0084_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08954000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0084[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08954000;
    case 2u: goto L_08954048;
    case 3u: goto L_08954050;
    case 4u: goto L_08954074;
    case 5u: goto L_08954080;
    case 6u: goto L_08954088;
    case 7u: goto L_089540A0;
    case 8u: goto L_089540A8;
    case 9u: goto L_089540C0;
    case 10u: goto L_089540C8;
    case 11u: goto L_089540D0;
    case 12u: goto L_089540E0;
    case 13u: goto L_089540E8;
    case 14u: goto L_089540F0;
    case 15u: goto L_089540FC;
    case 16u: goto L_08954104;
    case 17u: goto L_0895410C;
    case 18u: goto L_08954118;
    case 19u: goto L_08954124;
    case 20u: goto L_0895412C;
    case 21u: goto L_08954134;
    case 22u: goto L_0895413C;
    case 23u: goto L_0895414C;
    case 24u: goto L_08954158;
    case 25u: goto L_0895415C;
    case 26u: goto L_08954160;
    case 27u: goto L_08954168;
    case 28u: goto L_08954174;
    case 29u: goto L_0895417C;
    case 30u: goto L_08954184;
    case 31u: goto L_0895418C;
    case 32u: goto L_08954194;
    case 33u: goto L_089541AC;
    case 34u: goto L_089541BC;
    case 35u: goto L_089541C8;
    case 36u: goto L_089541CC;
    case 37u: goto L_089541D0;
    case 38u: goto L_089541D8;
    case 39u: goto L_089541E4;
    case 40u: goto L_089541EC;
    case 41u: goto L_089541FC;
    case 42u: goto L_08954208;
    case 43u: goto L_0895420C;
    case 44u: goto L_08954210;
    case 45u: goto L_08954218;
    case 46u: goto L_08954224;
    case 47u: goto L_08954230;
    case 48u: goto L_08954238;
    case 49u: goto L_08954240;
    case 50u: goto L_0895424C;
    case 51u: goto L_08954250;
    case 52u: goto L_0895425C;
    case 53u: goto L_08954264;
    case 54u: goto L_08954268;
    case 55u: goto L_08954274;
    case 56u: goto L_0895427C;
    case 57u: goto L_08954284;
    case 58u: goto L_0895428C;
    case 59u: goto L_08954294;
    case 60u: goto L_0895429C;
    case 61u: goto L_089542A8;
    case 62u: goto L_089542B0;
    case 63u: goto L_089542C0;
    case 64u: goto L_089542CC;
    case 65u: goto L_089542D0;
    case 66u: goto L_089542D4;
    case 67u: goto L_089542DC;
    case 68u: goto L_089542E8;
    case 69u: goto L_089542F0;
    case 70u: goto L_08954310;
    case 71u: goto L_08954334;
    case 72u: goto L_08954348;
    case 73u: goto L_08954370;
    case 74u: goto L_08954378;
    case 75u: goto L_08954380;
    case 76u: goto L_08954384;
    case 77u: goto L_0895439C;
    case 78u: goto L_089543D4;
    case 79u: goto L_089543EC;
    case 80u: goto L_089543F0;
    case 81u: goto L_08954404;
    case 82u: goto L_08954410;
    case 83u: goto L_08954418;
    case 84u: goto L_08954428;
    case 85u: goto L_08954440;
    case 86u: goto L_08954450;
    case 87u: goto L_0895445C;
    case 88u: goto L_0895446C;
    case 89u: goto L_08954484;
    case 90u: goto L_08954494;
    case 91u: goto L_0895449C;
    case 92u: goto L_089544AC;
    case 93u: goto L_089544B4;
    case 94u: goto L_089544BC;
    case 95u: goto L_089544E4;
    case 96u: goto L_08954510;
    case 97u: goto L_08954528;
    case 98u: goto L_08954540;
    case 99u: goto L_08954558;
    case 100u: goto L_08954570;
    case 101u: goto L_08954594;
    case 102u: goto L_08954600;
    case 103u: goto L_08954608;
    case 104u: goto L_08954624;
    case 105u: goto L_08954640;
    case 106u: goto L_08954658;
    case 107u: goto L_0895467C;
    case 108u: goto L_089546A0;
    case 109u: goto L_089546B8;
    case 110u: goto L_089546C0;
    case 111u: goto L_089546E8;
    case 112u: goto L_089546F0;
    case 113u: goto L_08954704;
    case 114u: goto L_0895471C;
    case 115u: goto L_08954728;
    case 116u: goto L_08954730;
    case 117u: goto L_08954740;
    case 118u: goto L_08954758;
    case 119u: goto L_08954760;
    case 120u: goto L_08954764;
    case 121u: goto L_08954778;
    case 122u: goto L_0895479C;
    case 123u: goto L_089547A4;
    case 124u: goto L_089547B0;
    case 125u: goto L_089547B4;
    case 126u: goto L_089547C8;
    case 127u: goto L_08954810;
    case 128u: goto L_0895485C;
    case 129u: goto L_08954870;
    case 130u: goto L_089548AC;
    case 131u: goto L_089548D4;
    case 132u: goto L_08954950;
    case 133u: goto L_0895495C;
    case 134u: goto L_08954964;
    case 135u: goto L_08954988;
    case 136u: goto L_08954998;
    case 137u: goto L_089549A0;
    case 138u: goto L_089549B0;
    case 139u: goto L_089549B8;
    case 140u: goto L_089549C8;
    case 141u: goto L_089549D0;
    case 142u: goto L_089549E0;
    case 143u: goto L_089549E8;
    case 144u: goto L_089549F8;
    case 145u: goto L_08954A00;
    case 146u: goto L_08954A10;
    case 147u: goto L_08954A18;
    case 148u: goto L_08954A20;
    case 149u: goto L_08954A3C;
    case 150u: goto L_08954A40;
    case 151u: goto L_08954A48;
    case 152u: goto L_08954A50;
    case 153u: goto L_08954A60;
    case 154u: goto L_08954A74;
    case 155u: goto L_08954A98;
    case 156u: goto L_08954AA8;
    case 157u: goto L_08954AB0;
    case 158u: goto L_08954AB8;
    case 159u: goto L_08954ACC;
    case 160u: goto L_08954AE0;
    case 161u: goto L_08954AE8;
    case 162u: goto L_08954AF4;
    case 163u: goto L_08954AFC;
    case 164u: goto L_08954B0C;
    case 165u: goto L_08954B14;
    case 166u: goto L_08954B18;
    case 167u: goto L_08954B28;
    case 168u: goto L_08954B2C;
    case 169u: goto L_08954B38;
    case 170u: goto L_08954B40;
    case 171u: goto L_08954B50;
    case 172u: goto L_08954B54;
    case 173u: goto L_08954B68;
    case 174u: goto L_08954B84;
    case 175u: goto L_08954B94;
    case 176u: goto L_08954B98;
    case 177u: goto L_08954BC0;
    case 178u: goto L_08954BD0;
    case 179u: goto L_08954BD4;
    case 180u: goto L_08954BDC;
    case 181u: goto L_08954BEC;
    case 182u: goto L_08954BF0;
    case 183u: goto L_08954BF8;
    case 184u: goto L_08954C04;
    case 185u: goto L_08954C10;
    case 186u: goto L_08954C14;
    case 187u: goto L_08954C1C;
    case 188u: goto L_08954C2C;
    case 189u: goto L_08954C30;
    case 190u: goto L_08954C3C;
    case 191u: goto L_08954C44;
    case 192u: goto L_08954C70;
    case 193u: goto L_08954CD4;
    case 194u: goto L_08954D24;
    case 195u: goto L_08954D2C;
    case 196u: goto L_08954D34;
    case 197u: goto L_08954D58;
    case 198u: goto L_08954D64;
    case 199u: goto L_08954D74;
    case 200u: goto L_08954DD0;
    case 201u: goto L_08954DE8;
    case 202u: goto L_08954E00;
    case 203u: goto L_08954E2C;
    case 204u: goto L_08954E34;
    case 205u: goto L_08954E3C;
    case 206u: goto L_08954E4C;
    case 207u: goto L_08954E64;
    case 208u: goto L_08954EA4;
    case 209u: goto L_08954EAC;
    case 210u: goto L_08954EB4;
    case 211u: goto L_08954EBC;
    case 212u: goto L_08954ED0;
    case 213u: goto L_08954EF4;
    case 214u: goto L_08954EFC;
    case 215u: goto L_08954F14;
    case 216u: goto L_08954F1C;
    case 217u: goto L_08954F30;
    case 218u: goto L_08954F3C;
    case 219u: goto L_08954F44;
    case 220u: goto L_08954F64;
    case 221u: goto L_08954F80;
    case 222u: goto L_08954FA4;
    case 223u: goto L_08954FB0;
    case 224u: goto L_08954FB8;
    case 225u: goto L_08954FC0;
    case 226u: goto L_08954FD4;
    case 227u: goto L_08954FE8;
    case 228u: goto L_08954FF0;
    case 229u: goto L_08954FF4;
    case 230u: goto L_08955008;
    case 231u: goto L_08955020;
    case 232u: goto L_08955050;
    case 233u: goto L_08955084;
    case 234u: goto L_089550A0;
    case 235u: goto L_089550C0;
    case 236u: goto L_08955118;
    case 237u: goto L_08955134;
    case 238u: goto L_08955160;
    case 239u: goto L_08955184;
    case 240u: goto L_08955188;
    case 241u: goto L_08955194;
    case 242u: goto L_089551A0;
    case 243u: goto L_089551EC;
    case 244u: goto L_089551F8;
    case 245u: goto L_08955204;
    case 246u: goto L_08955208;
    case 247u: goto L_08955210;
    case 248u: goto L_0895521C;
    case 249u: goto L_0895522C;
    case 250u: goto L_08955234;
    case 251u: goto L_0895523C;
    case 252u: goto L_08955248;
    case 253u: goto L_08955250;
    case 254u: goto L_08955260;
    case 255u: goto L_08955280;
    case 256u: goto L_08955288;
    case 257u: goto L_08955290;
    case 258u: goto L_089552AC;
    case 259u: goto L_089552B0;
    case 260u: goto L_089552B8;
    case 261u: goto L_089552C8;
    case 262u: goto L_089552D0;
    case 263u: goto L_089552D8;
    case 264u: goto L_08955300;
    case 265u: goto L_08955318;
    case 266u: goto L_0895531C;
    case 267u: goto L_08955330;
    case 268u: goto L_08955340;
    case 269u: goto L_08955348;
    case 270u: goto L_0895535C;
    case 271u: goto L_08955364;
    case 272u: goto L_08955374;
    case 273u: goto L_08955390;
    case 274u: goto L_08955398;
    case 275u: goto L_089553A4;
    case 276u: goto L_089553AC;
    case 277u: goto L_089553CC;
    case 278u: goto L_089553E8;
    case 279u: goto L_089553F4;
    case 280u: goto L_089553FC;
    case 281u: goto L_08955404;
    case 282u: goto L_08955414;
    case 283u: goto L_08955418;
    case 284u: goto L_0895543C;
    case 285u: goto L_08955444;
    case 286u: goto L_08955474;
    case 287u: goto L_089554A0;
    case 288u: goto L_089554A8;
    case 289u: goto L_089554E0;
    case 290u: goto L_089554EC;
    case 291u: goto L_08955518;
    case 292u: goto L_08955534;
    case 293u: goto L_0895553C;
    case 294u: goto L_08955544;
    case 295u: goto L_0895554C;
    case 296u: goto L_08955570;
    case 297u: goto L_0895557C;
    case 298u: goto L_08955588;
    case 299u: goto L_08955594;
    case 300u: goto L_089555F4;
    case 301u: goto L_089555FC;
    case 302u: goto L_08955604;
    case 303u: goto L_08955608;
    case 304u: goto L_08955674;
    case 305u: goto L_08955684;
    case 306u: goto L_0895568C;
    case 307u: goto L_0895569C;
    case 308u: goto L_089556B4;
    case 309u: goto L_089556D0;
    case 310u: goto L_089556D4;
    case 311u: goto L_08955700;
    case 312u: goto L_0895570C;
    case 313u: goto L_08955744;
    case 314u: goto L_08955758;
    case 315u: goto L_08955764;
    case 316u: goto L_0895576C;
    case 317u: goto L_089557B4;
    case 318u: goto L_089557E8;
    case 319u: goto L_089557F4;
    case 320u: goto L_0895580C;
    case 321u: goto L_08955870;
    case 322u: goto L_089558B0;
    case 323u: goto L_089558F0;
    case 324u: goto L_089558F8;
    case 325u: goto L_08955900;
    case 326u: goto L_08955980;
    case 327u: goto L_08955A58;
    case 328u: goto L_08955AC4;
    case 329u: goto L_08955ACC;
    case 330u: goto L_08955AD8;
    case 331u: goto L_08955AF0;
    case 332u: goto L_08955B54;
    case 333u: goto L_08955B90;
    case 334u: goto L_08955BCC;
    case 335u: goto L_08955BD4;
    case 336u: goto L_08955BDC;
    case 337u: goto L_08955C58;
    case 338u: goto L_08955D2C;
    case 339u: goto L_08955D48;
    case 340u: goto L_08955D50;
    case 341u: goto L_08955D68;
    case 342u: goto L_08955D78;
    case 343u: goto L_08955D80;
    case 344u: goto L_08955D90;
    case 345u: goto L_08955D98;
    case 346u: goto L_08955DA0;
    case 347u: goto L_08955DA8;
    case 348u: goto L_08955DB8;
    case 349u: goto L_08955DC0;
    case 350u: goto L_08955DCC;
    case 351u: goto L_08955DE8;
    case 352u: goto L_08955DF4;
    case 353u: goto L_08955DFC;
    case 354u: goto L_08955E08;
    case 355u: goto L_08955E10;
    case 356u: goto L_08955E18;
    case 357u: goto L_08955E20;
    case 358u: goto L_08955E2C;
    case 359u: goto L_08955E58;
    case 360u: goto L_08955E7C;
    case 361u: goto L_08955E8C;
    case 362u: goto L_08955E98;
    case 363u: goto L_08955EA4;
    case 364u: goto L_08955EAC;
    case 365u: goto L_08955EC0;
    case 366u: goto L_08955EF0;
    case 367u: goto L_08955EF8;
    case 368u: goto L_08955F08;
    case 369u: goto L_08955F10;
    case 370u: goto L_08955F18;
    case 371u: goto L_08955F28;
    case 372u: goto L_08955F30;
    case 373u: goto L_08955F34;
    case 374u: goto L_08955F3C;
    case 375u: goto L_08955F68;
    case 376u: goto L_08955F70;
    case 377u: goto L_08955F78;
    case 378u: goto L_08955F88;
    case 379u: goto L_08955F90;
    case 380u: goto L_08955F98;
    case 381u: goto L_08955FA4;
    case 382u: goto L_08955FAC;
    case 383u: goto L_08955FB4;
    case 384u: goto L_08955FC4;
    case 385u: goto L_08955FD0;
    case 386u: goto L_08955FD8;
    case 387u: goto L_08955FE8;
    case 388u: goto L_08955FF8;
    case 389u: goto L_08956038;
    case 390u: goto L_08956040;
    case 391u: goto L_0895604C;
    case 392u: goto L_08956080;
    case 393u: goto L_089560B8;
    case 394u: goto L_089560C0;
    case 395u: goto L_089560C8;
    case 396u: goto L_089560DC;
    case 397u: goto L_089560E8;
    case 398u: goto L_089560F0;
    case 399u: goto L_08956108;
    case 400u: goto L_08956110;
    case 401u: goto L_08956128;
    case 402u: goto L_08956130;
    case 403u: goto L_0895613C;
    case 404u: goto L_08956140;
    case 405u: goto L_08956160;
    case 406u: goto L_0895617C;
    case 407u: goto L_08956188;
    case 408u: goto L_08956194;
    case 409u: goto L_0895619C;
    case 410u: goto L_089561A4;
    case 411u: goto L_089561BC;
    case 412u: goto L_089561C8;
    case 413u: goto L_089561D0;
    case 414u: goto L_089561FC;
    case 415u: goto L_08956258;
    case 416u: goto L_08956268;
    case 417u: goto L_08956274;
    case 418u: goto L_08956280;
    case 419u: goto L_08956288;
    case 420u: goto L_0895629C;
    case 421u: goto L_089562C8;
    case 422u: goto L_089562EC;
    case 423u: goto L_089562F4;
    case 424u: goto L_08956304;
    case 425u: goto L_0895630C;
    case 426u: goto L_08956318;
    case 427u: goto L_08956328;
    case 428u: goto L_08956334;
    case 429u: goto L_08956348;
    case 430u: goto L_0895634C;
    case 431u: goto L_08956354;
    case 432u: goto L_08956384;
    case 433u: goto L_08956394;
    case 434u: goto L_0895639C;
    case 435u: goto L_089563C0;
    case 436u: goto L_089563EC;
    case 437u: goto L_089563F8;
    case 438u: goto L_08956400;
    case 439u: goto L_08956408;
    case 440u: goto L_08956420;
    case 441u: goto L_08956428;
    case 442u: goto L_08956430;
    case 443u: goto L_08956444;
    case 444u: goto L_08956448;
    case 445u: goto L_08956458;
    case 446u: goto L_08956460;
    case 447u: goto L_08956468;
    case 448u: goto L_08956470;
    case 449u: goto L_08956478;
    case 450u: goto L_08956488;
    case 451u: goto L_089564BC;
    case 452u: goto L_089564D0;
    case 453u: goto L_089564E0;
    case 454u: goto L_089564E8;
    case 455u: goto L_089564F0;
    case 456u: goto L_089564F8;
    case 457u: goto L_08956500;
    case 458u: goto L_08956508;
    case 459u: goto L_08956510;
    case 460u: goto L_0895651C;
    case 461u: goto L_0895652C;
    case 462u: goto L_08956540;
    case 463u: goto L_0895655C;
    case 464u: goto L_08956568;
    case 465u: goto L_08956570;
    case 466u: goto L_08956578;
    case 467u: goto L_08956580;
    case 468u: goto L_08956594;
    case 469u: goto L_089565AC;
    case 470u: goto L_089565BC;
    case 471u: goto L_089565CC;
    case 472u: goto L_089565D4;
    case 473u: goto L_089565E0;
    case 474u: goto L_089565E8;
    case 475u: goto L_089565F0;
    case 476u: goto L_089565F8;
    case 477u: goto L_08956600;
    case 478u: goto L_08956610;
    case 479u: goto L_08956618;
    case 480u: goto L_08956620;
    case 481u: goto L_08956628;
    case 482u: goto L_08956630;
    case 483u: goto L_08956638;
    case 484u: goto L_08956644;
    case 485u: goto L_08956648;
    case 486u: goto L_08956668;
    case 487u: goto L_08956680;
    case 488u: goto L_08956690;
    case 489u: goto L_089566BC;
    case 490u: goto L_089566D0;
    case 491u: goto L_089566D8;
    case 492u: goto L_089566E0;
    case 493u: goto L_089566F8;
    case 494u: goto L_08956704;
    case 495u: goto L_0895670C;
    case 496u: goto L_08956724;
    case 497u: goto L_08956750;
    case 498u: goto L_08956760;
    case 499u: goto L_08956768;
    case 500u: goto L_0895676C;
    case 501u: goto L_08956778;
    case 502u: goto L_08956784;
    case 503u: goto L_08956788;
    case 504u: goto L_0895678C;
    case 505u: goto L_08956794;
    case 506u: goto L_089567B8;
    case 507u: goto L_089567C0;
    case 508u: goto L_089567E8;
    case 509u: goto L_089567FC;
    case 510u: goto L_08956808;
    case 511u: goto L_08956814;
    case 512u: goto L_08956824;
    case 513u: goto L_0895682C;
    case 514u: goto L_08956834;
    case 515u: goto L_08956840;
    case 516u: goto L_08956848;
    case 517u: goto L_08956850;
    case 518u: goto L_08956868;
    case 519u: goto L_08956880;
    case 520u: goto L_08956898;
    case 521u: goto L_089568B0;
    case 522u: goto L_089568BC;
    case 523u: goto L_089568C0;
    case 524u: goto L_089568D4;
    case 525u: goto L_089568E0;
    case 526u: goto L_089568E8;
    case 527u: goto L_089568F0;
    case 528u: goto L_089568F8;
    case 529u: goto L_08956904;
    case 530u: goto L_0895690C;
    case 531u: goto L_08956924;
    case 532u: goto L_08956940;
    case 533u: goto L_08956958;
    case 534u: goto L_08956964;
    case 535u: goto L_08956970;
    case 536u: goto L_0895697C;
    case 537u: goto L_08956994;
    case 538u: goto L_089569A0;
    case 539u: goto L_089569B4;
    case 540u: goto L_089569C0;
    case 541u: goto L_089569D4;
    case 542u: goto L_089569E0;
    case 543u: goto L_089569F4;
    case 544u: goto L_08956A00;
    case 545u: goto L_08956A34;
    case 546u: goto L_08956A44;
    case 547u: goto L_08956A4C;
    case 548u: goto L_08956A58;
    case 549u: goto L_08956A68;
    case 550u: goto L_08956A70;
    case 551u: goto L_08956A80;
    case 552u: goto L_08956A88;
    case 553u: goto L_08956A90;
    case 554u: goto L_08956AA0;
    case 555u: goto L_08956ADC;
    case 556u: goto L_08956AE4;
    case 557u: goto L_08956AF0;
    case 558u: goto L_08956AF8;
    case 559u: goto L_08956B00;
    case 560u: goto L_08956B08;
    case 561u: goto L_08956B10;
    case 562u: goto L_08956B18;
    case 563u: goto L_08956B2C;
    case 564u: goto L_08956B38;
    case 565u: goto L_08956B44;
    case 566u: goto L_08956B50;
    case 567u: goto L_08956B58;
    case 568u: goto L_08956B68;
    case 569u: goto L_08956B6C;
    case 570u: goto L_08956B74;
    case 571u: goto L_08956B80;
    case 572u: goto L_08956B98;
    case 573u: goto L_08956B9C;
    case 574u: goto L_08956BB8;
    case 575u: goto L_08956BD8;
    case 576u: goto L_08956BE4;
    case 577u: goto L_08956BF4;
    case 578u: goto L_08956C04;
    case 579u: goto L_08956C14;
    case 580u: goto L_08956C3C;
    case 581u: goto L_08956C6C;
    case 582u: goto L_08956C8C;
    case 583u: goto L_08956C98;
    case 584u: goto L_08956CA8;
    case 585u: goto L_08956CB8;
    case 586u: goto L_08956CC8;
    case 587u: goto L_08956CF0;
    case 588u: goto L_08956D08;
    case 589u: goto L_08956D14;
    case 590u: goto L_08956D20;
    case 591u: goto L_08956D34;
    case 592u: goto L_08956D40;
    case 593u: goto L_08956D48;
    case 594u: goto L_08956D60;
    case 595u: goto L_08956D68;
    case 596u: goto L_08956D88;
    case 597u: goto L_08956DC8;
    case 598u: goto L_08956DCC;
    case 599u: goto L_08956DD8;
    case 600u: goto L_08956DE8;
    case 601u: goto L_08956DF0;
    case 602u: goto L_08956DF4;
    case 603u: goto L_08956E0C;
    case 604u: goto L_08956E24;
    case 605u: goto L_08956E48;
    case 606u: goto L_08956E6C;
    case 607u: goto L_08956E7C;
    case 608u: goto L_08956E9C;
    case 609u: goto L_08956EB4;
    case 610u: goto L_08956EC8;
    case 611u: goto L_08956ED8;
    case 612u: goto L_08956EF0;
    case 613u: goto L_08956EF4;
    case 614u: goto L_08956F08;
    case 615u: goto L_08956F20;
    case 616u: goto L_08956F40;
    case 617u: goto L_08956F48;
    case 618u: goto L_08956F78;
    case 619u: goto L_08956F84;
    case 620u: goto L_08956F88;
    case 621u: goto L_08956F8C;
    case 622u: goto L_08956F94;
    case 623u: goto L_08956FA0;
    case 624u: goto L_08956FC4;
    case 625u: goto L_08956FCC;
    case 626u: goto L_08956FDC;
    case 627u: goto L_08956FE4;
    case 628u: goto L_08956FEC;
    case 629u: goto L_08956FF4;
    case 630u: goto L_08957000;
    case 631u: goto L_08957008;
    case 632u: goto L_08957010;
    case 633u: goto L_0895701C;
    case 634u: goto L_08957024;
    case 635u: goto L_0895702C;
    case 636u: goto L_0895703C;
    case 637u: goto L_08957044;
    case 638u: goto L_0895704C;
    case 639u: goto L_08957054;
    case 640u: goto L_08957060;
    case 641u: goto L_08957068;
    case 642u: goto L_08957070;
    case 643u: goto L_0895707C;
    case 644u: goto L_08957080;
    case 645u: goto L_08957098;
    case 646u: goto L_089570C0;
    case 647u: goto L_089570CC;
    case 648u: goto L_089570D4;
    case 649u: goto L_089570DC;
    case 650u: goto L_089570E4;
    case 651u: goto L_089570F8;
    case 652u: goto L_08957104;
    case 653u: goto L_08957110;
    case 654u: goto L_0895711C;
    case 655u: goto L_08957124;
    case 656u: goto L_08957134;
    case 657u: goto L_08957138;
    case 658u: goto L_08957140;
    case 659u: goto L_08957150;
    case 660u: goto L_08957158;
    case 661u: goto L_08957160;
    case 662u: goto L_0895716C;
    case 663u: goto L_08957174;
    case 664u: goto L_0895717C;
    case 665u: goto L_0895718C;
    case 666u: goto L_08957194;
    case 667u: goto L_0895719C;
    case 668u: goto L_089571A8;
    case 669u: goto L_089571B0;
    case 670u: goto L_089571B8;
    case 671u: goto L_089571C0;
    case 672u: goto L_089571C8;
    case 673u: goto L_089571D8;
    case 674u: goto L_089571E0;
    case 675u: goto L_089571E8;
    case 676u: goto L_089571F0;
    case 677u: goto L_089571FC;
    case 678u: goto L_08957204;
    case 679u: goto L_0895720C;
    case 680u: goto L_08957210;
    case 681u: goto L_08957228;
    case 682u: goto L_089572E8;
    case 683u: goto L_08957300;
    case 684u: goto L_0895731C;
    case 685u: goto L_08957320;
    case 686u: goto L_08957344;
    case 687u: goto L_08957350;
    case 688u: goto L_08957388;
    case 689u: goto L_0895739C;
    case 690u: goto L_089573A8;
    case 691u: goto L_089573B0;
    case 692u: goto L_089573F8;
    case 693u: goto L_0895742C;
    case 694u: goto L_08957434;
    case 695u: goto L_08957444;
    case 696u: goto L_08957458;
    case 697u: goto L_08957460;
    case 698u: goto L_0895746C;
    case 699u: goto L_08957474;
    case 700u: goto L_08957480;
    case 701u: goto L_0895749C;
    case 702u: goto L_089574AC;
    case 703u: goto L_089574B4;
    case 704u: goto L_089574BC;
    case 705u: goto L_089574C4;
    case 706u: goto L_089574C8;
    case 707u: goto L_089574D0;
    case 708u: goto L_089574D8;
    case 709u: goto L_089574EC;
    case 710u: goto L_08957500;
    case 711u: goto L_089575B0;
    case 712u: goto L_089575DC;
    case 713u: goto L_08957608;
    case 714u: goto L_08957634;
    case 715u: goto L_08957660;
    case 716u: goto L_0895768C;
    case 717u: goto L_089576B8;
    case 718u: goto L_089576E4;
    case 719u: goto L_089576F0;
    case 720u: goto L_089576FC;
    case 721u: goto L_08957710;
    case 722u: goto L_0895773C;
    case 723u: goto L_0895774C;
    case 724u: goto L_08957754;
    case 725u: goto L_0895776C;
    case 726u: goto L_08957780;
    case 727u: goto L_089577B8;
    case 728u: goto L_089577C4;
    case 729u: goto L_089577DC;
    case 730u: goto L_089577EC;
    case 731u: goto L_08957800;
    case 732u: goto L_08957804;
    case 733u: goto L_08957818;
    case 734u: goto L_08957820;
    case 735u: goto L_08957838;
    case 736u: goto L_08957848;
    case 737u: goto L_08957858;
    case 738u: goto L_08957870;
    case 739u: goto L_08957884;
    case 740u: goto L_08957890;
    case 741u: goto L_08957898;
    case 742u: goto L_089578D8;
    case 743u: goto L_089578E4;
    case 744u: goto L_089578F8;
    case 745u: goto L_08957900;
    case 746u: goto L_08957914;
    case 747u: goto L_0895791C;
    case 748u: goto L_08957934;
    case 749u: goto L_08957944;
    case 750u: goto L_08957958;
    case 751u: goto L_08957970;
    case 752u: goto L_08957994;
    case 753u: goto L_089579B4;
    case 754u: goto L_089579F0;
    case 755u: goto L_089579FC;
    case 756u: goto L_08957A14;
    case 757u: goto L_08957A1C;
    case 758u: goto L_08957A34;
    case 759u: goto L_08957A40;
    case 760u: goto L_08957A48;
    case 761u: goto L_08957A60;
    case 762u: goto L_08957A78;
    case 763u: goto L_08957A80;
    case 764u: goto L_08957A8C;
    case 765u: goto L_08957AA4;
    case 766u: goto L_08957AAC;
    case 767u: goto L_08957AC0;
    case 768u: goto L_08957ACC;
    case 769u: goto L_08957AD0;
    case 770u: goto L_08957AF4;
    case 771u: goto L_08957B00;
    case 772u: goto L_08957B08;
    case 773u: goto L_08957B20;
    case 774u: goto L_08957B38;
    case 775u: goto L_08957B40;
    case 776u: goto L_08957B50;
    case 777u: goto L_08957B58;
    case 778u: goto L_08957B6C;
    case 779u: goto L_08957B8C;
    case 780u: goto L_08957BAC;
    case 781u: goto L_08957BB8;
    case 782u: goto L_08957BD4;
    case 783u: goto L_08957BD8;
    case 784u: goto L_08957BE0;
    case 785u: goto L_08957BEC;
    case 786u: goto L_08957C00;
    case 787u: goto L_08957C14;
    case 788u: goto L_08957C18;
    case 789u: goto L_08957C1C;
    case 790u: goto L_08957C80;
    case 791u: goto L_08957C88;
    case 792u: goto L_08957CA4;
    case 793u: goto L_08957CB0;
    case 794u: goto L_08957CCC;
    case 795u: goto L_08957CD4;
    case 796u: goto L_08957CE8;
    case 797u: goto L_08957D10;
    case 798u: goto L_08957D20;
    case 799u: goto L_08957D34;
    case 800u: goto L_08957D48;
    case 801u: goto L_08957D74;
    case 802u: goto L_08957DB0;
    case 803u: goto L_08957DB8;
    case 804u: goto L_08957DDC;
    case 805u: goto L_08957DF4;
    case 806u: goto L_08957E24;
    case 807u: goto L_08957E30;
    case 808u: goto L_08957E38;
    case 809u: goto L_08957E40;
    case 810u: goto L_08957E48;
    case 811u: goto L_08957E5C;
    case 812u: goto L_08957E70;
    case 813u: goto L_08957E84;
    case 814u: goto L_08957E90;
    case 815u: goto L_08957EA0;
    case 816u: goto L_08957EA4;
    case 817u: goto L_08957EAC;
    case 818u: goto L_08957EBC;
    case 819u: goto L_08957EC8;
    case 820u: goto L_08957ECC;
    case 821u: goto L_08957ED0;
    case 822u: goto L_08957ED8;
    case 823u: goto L_08957EE0;
    case 824u: goto L_08957EE8;
    case 825u: goto L_08957EF8;
    case 826u: goto L_08957F04;
    case 827u: goto L_08957F08;
    case 828u: goto L_08957F0C;
    case 829u: goto L_08957F14;
    case 830u: goto L_08957F24;
    case 831u: goto L_08957F3C;
    case 832u: goto L_08957F4C;
    case 833u: goto L_08957F54;
    case 834u: goto L_08957F74;
    case 835u: goto L_08957F8C;
    case 836u: goto L_08957F9C;
    case 837u: goto L_08957FA8;
    case 838u: goto L_08957FB4;
    case 839u: goto L_08957FC0;
    case 840u: goto L_08957FC8;
    case 841u: goto L_08957FD0;
    case 842u: goto L_08957FDC;
    case 843u: goto L_08957FF0;
    case 844u: goto L_08957FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08954000:
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08954050;
      }
      goto L_08954048;
    }
L_08954048:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    goto L_08954050;
L_08954050:
    ctx.gpr[5] = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08954080;
      }
      goto L_08954074;
    }
L_08954074:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[17] << 3u);
      if (branch_taken) {
          goto L_08954088;
      }
      goto L_08954080;
    }
L_08954080:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089540C8;
      }
      goto L_08954088;
    }
L_08954088:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[18] - ctx.gpr[5]);
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_089540A8;
    }
    goto L_089540A0;
L_089540A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089540C8;
      }
      goto L_089540A8;
    }
L_089540A8:
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089540C8;
      }
      goto L_089540C0;
    }
L_089540C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089540C8;
      }
      goto L_089540C8;
    }
L_089540C8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089540E8;
      }
      goto L_089540D0;
    }
L_089540D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[18];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089540F0;
      }
      goto L_089540E0;
    }
L_089540E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08954104;
      }
      goto L_089540E8;
    }
L_089540E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089542F0;
      }
      goto L_089540F0;
    }
L_089540F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08954104;
      }
      goto L_089540FC;
    }
L_089540FC:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08954104;
L_08954104:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954134;
      }
      goto L_0895410C;
    }
L_0895410C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08954134;
      }
      goto L_08954118;
    }
L_08954118:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08954124u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08957098;
L_08954124:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954134;
      }
      goto L_0895412C;
    }
L_0895412C:
    ctx.gpr[31] = (0x08954134u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08957D74;
L_08954134:
    ctx.gpr[31] = (0x0895413Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08956690;
L_0895413C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0895415C;
      }
      goto L_0895414C;
    }
L_0895414C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08954160;
      }
      goto L_08954158;
    }
L_08954158:
    ctx.gpr[5] = (0u | 1u);
    goto L_0895415C;
L_0895415C:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08954160;
L_08954160:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954174;
      }
      goto L_08954168;
    }
L_08954168:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895418C;
      }
      goto L_08954174;
    }
L_08954174:
    ctx.gpr[31] = (0x0895417Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08954778;
L_0895417C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954194;
      }
      goto L_08954184;
    }
L_08954184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895424C;
      }
      goto L_0895418C;
    }
L_0895418C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089542F0;
      }
      goto L_08954194;
    }
L_08954194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089541EC;
      }
      goto L_089541AC;
    }
L_089541AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[20];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089541CC;
      }
      goto L_089541BC;
    }
L_089541BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089541D0;
      }
      goto L_089541C8;
    }
L_089541C8:
    ctx.gpr[5] = (0u | 1u);
    goto L_089541CC;
L_089541CC:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_089541D0;
L_089541D0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954230;
      }
      goto L_089541D8;
    }
L_089541D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089541E4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08956594;
L_089541E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954230;
      }
      goto L_089541EC;
    }
L_089541EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0895420C;
      }
      goto L_089541FC;
    }
L_089541FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08954210;
      }
      goto L_08954208;
    }
L_08954208:
    ctx.gpr[5] = (0u | 1u);
    goto L_0895420C;
L_0895420C:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08954210;
L_08954210:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954224;
      }
      goto L_08954218;
    }
L_08954218:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954230;
      }
      goto L_08954224;
    }
L_08954224:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08954230u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08956594;
L_08954230:
    ctx.gpr[31] = (0x08954238u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08954778;
L_08954238:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895424C;
      }
      goto L_08954240;
    }
L_08954240:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895424Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_089567C0;
L_0895424C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08954250;
L_08954250:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0895425Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08956F48;
L_0895425C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089542B0;
      }
      goto L_08954264;
    }
L_08954264:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08954268;
L_08954268:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08954274u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08955EC0;
L_08954274:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895428C;
      }
      goto L_0895427C;
    }
L_0895427C:
    ctx.gpr[31] = (0x08954284u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08954A20;
L_08954284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08954268;
      }
      goto L_0895428C;
    }
L_0895428C:
    ctx.gpr[31] = (0x08954294u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08954778;
L_08954294:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089542A8;
      }
      goto L_0895429C;
    }
L_0895429C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089542A8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089567C0;
L_089542A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08954250;
      }
      goto L_089542B0;
    }
L_089542B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089542D0;
      }
      goto L_089542C0;
    }
L_089542C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089542D4;
      }
      goto L_089542CC;
    }
L_089542CC:
    ctx.gpr[5] = (0u | 1u);
    goto L_089542D0;
L_089542D0:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_089542D4;
L_089542D4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089542E8;
      }
      goto L_089542DC;
    }
L_089542DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), ctx.gpr[5]);
    goto L_089542E8;
L_089542E8:
    ctx.gpr[31] = (0x089542F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08957D74;
L_089542F0:
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
L_08954310:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08954334u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_0895742C;
L_08954334:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1040)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08954380;
      }
      goto L_08954348;
    }
L_08954348:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1040), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(588)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(580)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08954370u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08955398;
L_08954370:
    ctx.gpr[31] = (0x08954378u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0895742C;
L_08954378:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08954384;
      }
      goto L_08954380;
    }
L_08954380:
    ctx.gpr[2] = (0u | 0u);
    goto L_08954384;
L_08954384:
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
L_0895439C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089543D4u);
    ctx.gpr[19] = (0u | 0u);
    goto L_0895742C;
L_089543D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_089544AC;
      }
      goto L_089543EC;
    }
L_089543EC:
    ctx.gpr[21] = (0u | 0u);
    goto L_089543F0;
L_089543F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[21]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895449C;
      }
      goto L_08954404;
    }
L_08954404:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08954494;
      }
      goto L_08954410;
    }
L_08954410:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954450;
      }
      goto L_08954418;
    }
L_08954418:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08954428u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08954310;
L_08954428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08954440u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 164u, 0x08A3CC2Cu>(ctx, &aot_mem) && ctx.pc == 0x08954440u) goto L_08954440;
    return;
L_08954440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
      if (branch_taken) {
          goto L_0895449C;
      }
      goto L_08954450;
    }
L_08954450:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0895449C;
      }
      goto L_0895445C;
    }
L_0895445C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895446Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08954310;
L_0895446C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08954484u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 164u, 0x08A3CC2Cu>(ctx, &aot_mem) && ctx.pc == 0x08954484u) goto L_08954484;
    return;
L_08954484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
      if (branch_taken) {
          goto L_0895449C;
      }
      goto L_08954494;
    }
L_08954494:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089544B4;
      }
      goto L_0895449C;
    }
L_0895449C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089543F0;
      }
      goto L_089544AC;
    }
L_089544AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089544BC;
      }
      goto L_089544B4;
    }
L_089544B4:
    ctx.gpr[31] = (0x089544BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0895742C;
L_089544BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089544E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08954510u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    goto L_0895742C;
L_08954510:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08954570;
      }
      goto L_08954528;
    }
L_08954528:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(692)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954558;
      }
      goto L_08954540;
    }
L_08954540:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(692)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08954594;
      }
      goto L_08954558;
    }
L_08954558:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(688)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08954528;
      }
      goto L_08954570;
    }
L_08954570:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08954608;
      }
      goto L_08954594;
    }
L_08954594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08954600u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x08953954u>(ctx, &aot_mem) && ctx.pc == 0x08954600u) goto L_08954600;
    return;
L_08954600:
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
    goto L_08954608;
L_08954608:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08954624:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08954640u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_0895742C;
L_08954640:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089546B8;
      }
      goto L_08954658;
    }
L_08954658:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(692)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089546A0;
      }
      goto L_0895467C;
    }
L_0895467C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(692)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089546C0;
      }
      goto L_089546A0;
    }
L_089546A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(688)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954658;
      }
      goto L_089546B8;
    }
L_089546B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089546F0;
      }
      goto L_089546C0;
    }
L_089546C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15968)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089546E8u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 748u, 0x08B6BC84u>(ctx, &aot_mem) && ctx.pc == 0x089546E8u) goto L_089546E8;
    return;
L_089546E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089546F0;
      }
      goto L_089546F0;
    }
L_089546F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08954704:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895471Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0895742C;
L_0895471C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(608)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954730;
      }
      goto L_08954728;
    }
L_08954728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08954764;
      }
      goto L_08954730;
    }
L_08954730:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08954740u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08956594;
L_08954740:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(612), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08954758u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_08955EC0;
L_08954758:
    ctx.gpr[31] = (0x08954760u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0895742C;
L_08954760:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08954764;
L_08954764:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08954778:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895479Cu);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B73484u;
    return;
L_0895479C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089547B4;
      }
      goto L_089547A4;
    }
L_089547A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089547B4;
      }
      goto L_089547B0;
    }
L_089547B0:
    ctx.gpr[4] = (0u | 1u);
    goto L_089547B4;
L_089547B4:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089547C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[31] = (0x08954810u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 823u, 0x08953A08u>(ctx, &aot_mem) && ctx.pc == 0x08954810u) goto L_08954810;
    return;
L_08954810:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7744));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29552));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-56));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1464), ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0895485Cu);
    ctx.gpr[6] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 498u, 0x088DF9D0u>(ctx, &aot_mem) && ctx.pc == 0x0895485Cu) goto L_0895485C;
    return;
L_0895485C:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1408));
    ctx.gpr[31] = (0x08954870u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem) && ctx.pc == 0x08954870u) goto L_08954870;
    return;
L_08954870:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089548ACu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x089548ACu) goto L_089548AC;
    return;
L_089548AC:
    ctx.gpr[4] = (15360u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 61u);
    ctx.gpr[31] = (0x089548D4u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 830u, 0x08953B30u>(ctx, &aot_mem) && ctx.pc == 0x089548D4u) goto L_089548D4;
    return;
L_089548D4:
    ctx.gpr[4] = (2816u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1464)));
    ctx.gpr[5] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (2560u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954964;
      }
      goto L_08954950;
    }
L_08954950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954964;
      }
      goto L_0895495C;
    }
L_0895495C:
    ctx.gpr[31] = (0x08954964u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08954964u) goto L_08954964;
    return;
L_08954964:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08954988:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(580)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089549A0;
      }
      goto L_08954998;
    }
L_08954998:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_089549A0;
L_089549A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089549B8;
      }
      goto L_089549B0;
    }
L_089549B0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_089549B8;
L_089549B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089549D0;
      }
      goto L_089549C8;
    }
L_089549C8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_089549D0;
L_089549D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(584)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089549E8;
      }
      goto L_089549E0;
    }
L_089549E0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_089549E8;
L_089549E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954A00;
      }
      goto L_089549F8;
    }
L_089549F8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08954A00;
L_08954A00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954A18;
      }
      goto L_08954A10;
    }
L_08954A10:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08954A18;
L_08954A18:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08954A20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08954A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 787u, 0x08A07508u>(ctx, &aot_mem) && ctx.pc == 0x08954A3Cu) goto L_08954A3C;
    return;
L_08954A3C:
    ctx.gpr[17] = (0u | 0u);
    goto L_08954A40;
L_08954A40:
    ctx.gpr[31] = (0x08954A48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08954988;
L_08954A48:
    ctx.gpr[31] = (0x08954A50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08954A74;
L_08954A50:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954A40;
      }
      goto L_08954A60;
    }
L_08954A60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08954A74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(608)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08954AB0;
      }
      goto L_08954A98;
    }
L_08954A98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1444)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1448)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08954AB8;
      }
      goto L_08954AA8;
    }
L_08954AA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954B54;
      }
      goto L_08954AB0;
    }
L_08954AB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954B68;
      }
      goto L_08954AB8;
    }
L_08954AB8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[17] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[19] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08954B18;
      }
      goto L_08954ACC;
    }
L_08954ACC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1460)));
    ctx.gpr[18] = (ctx.gpr[5] << 2u);
    ctx.gpr[18] = (ctx.gpr[19] + ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08954B14;
      }
      goto L_08954AE0;
    }
L_08954AE0:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(29232));
    goto L_08954AE8;
L_08954AE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08954AFC;
      }
      goto L_08954AF4;
    }
L_08954AF4:
    ctx.gpr[31] = (0x08954AFCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08954AFCu) goto L_08954AFC;
    return;
L_08954AFC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08954AE8;
      }
      goto L_08954B0C;
    }
L_08954B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1448)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1440)));
    goto L_08954B14;
L_08954B14:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08954B18;
L_08954B18:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    ctx.gpr[18] = (2236u << 16u);
      if (branch_taken) {
          goto L_08954B54;
      }
      goto L_08954B28;
    }
L_08954B28:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(29232));
    goto L_08954B2C;
L_08954B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08954B40;
      }
      goto L_08954B38;
    }
L_08954B38:
    ctx.gpr[31] = (0x08954B40u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08954B40u) goto L_08954B40;
    return;
L_08954B40:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08954B2C;
      }
      goto L_08954B50;
    }
L_08954B50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1448)));
    goto L_08954B54;
L_08954B54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1452)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1444), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1456)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1448), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1452), ctx.gpr[4]);
    goto L_08954B68;
L_08954B68:
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
L_08954B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(716)));
      if (branch_taken) {
          goto L_08954BF8;
      }
      goto L_08954B94;
    }
L_08954B94:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    goto L_08954B98;
L_08954B98:
    ctx.gpr[8] = (ctx.gpr[8] >> 31u);
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    ctx.gpr[8] = (ctx.gpr[10] << 4u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[8] != ctx.gpr[5]) {
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
        goto L_08954BD4;
    }
    goto L_08954BC0;
L_08954BC0:
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954BDC;
      }
      goto L_08954BD0;
    }
L_08954BD0:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    goto L_08954BD4;
L_08954BD4:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954BEC;
      }
      goto L_08954BDC;
    }
L_08954BDC:
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08954BF0;
      }
      goto L_08954BEC;
    }
L_08954BEC:
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
    goto L_08954BF0;
L_08954BF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
      if (branch_taken) {
          goto L_08954B98;
      }
      goto L_08954BF8;
    }
L_08954BF8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08954C14;
      }
      goto L_08954C04;
    }
L_08954C04:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08954C14;
      }
      goto L_08954C10;
    }
L_08954C10:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_08954C14;
L_08954C14:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08954C1C:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(11748));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(11764));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08954C3C;
      }
      goto L_08954C2C;
    }
L_08954C2C:
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    goto L_08954C30;
L_08954C30:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    if (ctx.gpr[7] != ctx.gpr[5]) {
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
        goto L_08954C30;
    }
    goto L_08954C3C;
L_08954C3C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8144), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08954C44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 300 ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08954D2C;
      }
      goto L_08954C70;
    }
L_08954C70:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8144)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8148));
    ctx.gpr[6] = (2236u << 16u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(29552));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-56));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (14848u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(7744));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08954CD4u);
    ctx.gpr[8] = (0u | 59u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 527u, 0x0895BAA4u>(ctx, &aot_mem) && ctx.pc == 0x08954CD4u) goto L_08954CD4;
    return;
L_08954CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2816u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11748))))));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8144));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(29)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(11748), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(29)));
    ctx.gpr[6] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08954D34;
      }
      goto L_08954D24;
    }
L_08954D24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954D58;
      }
      goto L_08954D2C;
    }
L_08954D2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954DD0;
      }
      goto L_08954D34;
    }
L_08954D34:
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<27u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<0u, 27u, 27u, 3u>();
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<0u>());
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954DD0;
      }
      goto L_08954D58;
    }
L_08954D58:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954DD0;
      }
      goto L_08954D64;
    }
L_08954D64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8144)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 300 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954DD0;
      }
      goto L_08954D74;
    }
L_08954D74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8144)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8148));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(11762))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<27u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<0u, 27u, 27u, 3u>();
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<0u>());
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(11762), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08954DD0;
L_08954DD0:
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
L_08954DE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08954E00u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08956594;
L_08954E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954E34;
      }
      goto L_08954E2C;
    }
L_08954E2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954E3C;
      }
      goto L_08954E34;
    }
L_08954E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08954E3C;
L_08954E3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08954E4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08954E64u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08956594;
L_08954E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954EBC;
      }
      goto L_08954EA4;
    }
L_08954EA4:
    ctx.gpr[31] = (0x08954EACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08956C14;
L_08954EAC:
    ctx.gpr[31] = (0x08954EB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08956690;
L_08954EB4:
    ctx.gpr[31] = (0x08954EBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08956C6C;
L_08954EBC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08954ED0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08954EF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08956690;
L_08954EF4:
    ctx.gpr[31] = (0x08954EFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08954A20;
L_08954EFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(300)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2236u << 16u);
      if (branch_taken) {
          goto L_08954F64;
      }
      goto L_08954F14;
    }
L_08954F14:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29232));
    goto L_08954F1C;
L_08954F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08954F44;
    }
    goto L_08954F30;
L_08954F30:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08954F3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08954F3Cu) goto L_08954F3C;
    return;
L_08954F3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08954F44;
L_08954F44:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(300)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08954F1C;
      }
      goto L_08954F64;
    }
L_08954F64:
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
L_08954F80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954FB8;
      }
      goto L_08954FA4;
    }
L_08954FA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954FC0;
      }
      goto L_08954FB0;
    }
L_08954FB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955008;
      }
      goto L_08954FB8;
    }
L_08954FB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955008;
      }
      goto L_08954FC0;
    }
L_08954FC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08955008;
      }
      goto L_08954FD4;
    }
L_08954FD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954FF4;
      }
      goto L_08954FE8;
    }
L_08954FE8:
    ctx.gpr[31] = (0x08954FF0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 167u, 0x08A3CC80u>(ctx, &aot_mem) && ctx.pc == 0x08954FF0u) goto L_08954FF0;
    return;
L_08954FF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08954FF4;
L_08954FF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08954FD4;
      }
      goto L_08955008;
    }
L_08955008:
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
L_08955020:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1460)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1456), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955050:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(176), 0u);
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955084:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089550A0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089550C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27284));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (2197u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 160u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08955118u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(20640));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08955118u) goto L_08955118;
    return;
L_08955118:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(520));
    ctx.gpr[7] = (2197u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[31] = (0x08955134u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(20612));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08955134u) goto L_08955134;
    return;
L_08955134:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(612), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (2197u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(628), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1488));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (0u | 208u);
    ctx.gpr[31] = (0x08955160u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(20560));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08955160u) goto L_08955160;
    return;
L_08955160:
    ctx.gpr[4] = (0u | 8192u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1460), ctx.gpr[4]);
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1040));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1440));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(29232));
      if (branch_taken) {
          goto L_08955194;
      }
      goto L_08955184;
    }
L_08955184:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08955188;
L_08955188:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] != ctx.gpr[6]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
        goto L_08955188;
    }
    goto L_08955194;
L_08955194:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1036), 0u);
    ctx.gpr[31] = (0x089551A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08954C1C;
L_089551A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(580), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(200));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(360));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(584), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(540));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(560));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17824)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17820)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089551ECu);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089551ECu) goto L_089551EC;
    return;
L_089551EC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08955208;
      }
      goto L_089551F8;
    }
L_089551F8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08955204u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 749u, 0x08B6BCA0u>(ctx, &aot_mem) && ctx.pc == 0x08955204u) goto L_08955204;
    return;
L_08955204:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08955208;
L_08955208:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0895521C;
      }
      goto L_08955210;
    }
L_08955210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0895521C;
L_0895521C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(308)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08955260;
      }
      goto L_0895522C;
    }
L_0895522C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08955250;
      }
      goto L_08955234;
    }
L_08955234:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08955248;
      }
      goto L_0895523C;
    }
L_0895523C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08955248;
L_08955248:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(308)));
    goto L_08955250;
L_08955250:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(301)));
      if (branch_taken) {
          goto L_08955288;
      }
      goto L_08955260;
    }
L_08955260:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(304));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08955280u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 831u, 0x08953BD4u>(ctx, &aot_mem) && ctx.pc == 0x08955280u) goto L_08955280;
    return;
L_08955280:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(301)));
    goto L_08955288;
L_08955288:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089552B0;
      }
      goto L_08955290;
    }
L_08955290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089552ACu);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089552ACu) goto L_089552AC;
    return;
L_089552AC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089552B0;
L_089552B0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089552D0;
      }
      goto L_089552B8;
    }
L_089552B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089552D0;
      }
      goto L_089552C8;
    }
L_089552C8:
    ctx.gpr[31] = (0x089552D0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x089552D0u) goto L_089552D0;
    return;
L_089552D0:
    ctx.gpr[31] = (0x089552D8u);
    ctx.gpr[4] = (0u | 12288u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem) && ctx.pc == 0x089552D8u) goto L_089552D8;
    return;
L_089552D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11764), ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955300:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(688)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15968)));
      if (branch_taken) {
          goto L_08955390;
      }
      goto L_08955318;
    }
L_08955318:
    ctx.gpr[7] = (0u | 0u);
    goto L_0895531C;
L_0895531C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(692)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08955340;
      }
      goto L_08955330;
    }
L_08955330:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
        goto L_08955348;
    }
    goto L_08955340;
L_08955340:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08955374;
      }
      goto L_08955348;
    }
L_08955348:
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] & 128u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
      if (branch_taken) {
          goto L_08955364;
      }
      goto L_0895535C;
    }
L_0895535C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08955374;
      }
      goto L_08955364;
    }
L_08955364:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[5]);
    goto L_08955374;
L_08955374:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(688)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0895531C;
      }
      goto L_08955390;
    }
L_08955390:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955398:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[9] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(604), 0u);
        goto L_089553AC;
    }
    goto L_089553A4;
L_089553A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895543C;
      }
      goto L_089553AC;
    }
L_089553AC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(708)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(704)));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0895543C;
      }
      goto L_089553CC;
    }
L_089553CC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (ctx.gpr[6] << 2u);
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(1040)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08955418;
      }
      goto L_089553E8;
    }
L_089553E8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089553FC;
      }
      goto L_089553F4;
    }
L_089553F4:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08955418;
      }
      goto L_089553FC;
    }
L_089553FC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955414;
      }
      goto L_08955404;
    }
L_08955404:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1040), 0u);
    goto L_08955414;
L_08955414:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(604), ctx.gpr[7]);
    goto L_08955418;
L_08955418:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(704)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(708)));
    ctx.gpr[10] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089553CC;
      }
      goto L_0895543C;
    }
L_0895543C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955444:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11768)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17792));
    ctx.set_vfpu_scalar_bits_ct<76u>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.execute_vfpu_vh2f(21u, 12u, 2u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<76u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<117u, 1u>(vfpu_d); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_089554A0;
      }
      goto L_08955474;
    }
L_08955474:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 13u, 13u, 3u>();
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11768)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(11768), ctx.gpr[5]);
    goto L_089554A0;
L_089554A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089554A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08955544;
      }
      goto L_089554E0;
    }
L_089554E0:
    ctx.gpr[20] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955544;
      }
      goto L_089554EC;
    }
L_089554EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[6] << 2u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(29552));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895553C;
      }
      goto L_08955518;
    }
L_08955518:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8408)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0895554C;
      }
      goto L_08955534;
    }
L_08955534:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08955608;
      }
      goto L_0895553C;
    }
L_0895553C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089557B4;
      }
      goto L_08955544;
    }
L_08955544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089557B4;
      }
      goto L_0895554C;
    }
L_0895554C:
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 40u, 4u);
      ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[0u] = 0x00000FE4u;
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<131u>());
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955604;
      }
      goto L_08955570;
    }
L_08955570:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x0895557Cu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(7744));
    goto L_08957500;
L_0895557C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089555FC;
      }
      goto L_08955588;
    }
L_08955588:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08955604;
      }
      goto L_08955594;
    }
L_08955594:
    ctx.gpr[4] = (ctx.gpr[21] >> 8u);
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[21] & ctx.gpr[5]);
    ctx.gpr[6] = (2560u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089555F4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 362u, 0x0895A760u>(ctx, &aot_mem) && ctx.pc == 0x089555F4u) goto L_089555F4;
    return;
L_089555F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089557B4;
      }
      goto L_089555FC;
    }
L_089555FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089557B4;
      }
      goto L_08955604;
    }
L_08955604:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08955608;
L_08955608:
    ctx.gpr[4] = (ctx.gpr[21] >> 8u);
    ctx.gpr[30] = (15u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[23] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[22] = (256u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[21] & ctx.gpr[22]);
    ctx.gpr[21] = (2560u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16976)));
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895568C;
      }
      goto L_08955674;
    }
L_08955674:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08955684u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 362u, 0x0895A760u>(ctx, &aot_mem) && ctx.pc == 0x08955684u) goto L_08955684;
    return;
L_08955684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089557B4;
      }
      goto L_0895568C;
    }
L_0895568C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08955764;
      }
      goto L_0895569C;
    }
L_0895569C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] >> 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089556D4;
      }
      goto L_089556B4;
    }
L_089556B4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[4] >> 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089556B4;
      }
      goto L_089556D0;
    }
L_089556D0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089556D4;
L_089556D4:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8412)));
    ctx.gpr[4] = (14929u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8412), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08955700u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 362u, 0x0895A760u>(ctx, &aot_mem) && ctx.pc == 0x08955700u) goto L_08955700;
    return;
L_08955700:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8412), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08955764;
      }
      goto L_0895570C;
    }
L_0895570C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2816u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29232));
    ctx.gpr[31] = (0x08955744u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08955744u) goto L_08955744;
    return;
L_08955744:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08955758u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08955758u) goto L_08955758;
    return;
L_08955758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08955764;
L_08955764:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089557B4;
      }
      goto L_0895576C;
    }
L_0895576C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[23]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_089557B4;
L_089557B4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089557E8:
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955AC4;
      }
      goto L_089557F4;
    }
L_089557F4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-8760)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895580C:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1472), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (7424u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (18176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955AC4;
      }
      goto L_08955870;
    }
L_08955870:
    ctx.gpr[6] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (18176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955AC4;
      }
      goto L_089558B0;
    }
L_089558B0:
    ctx.gpr[6] = (49152u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (18176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955AC4;
      }
      goto L_089558F0;
    }
L_089558F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955AC4;
      }
      goto L_089558F8;
    }
L_089558F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955AC4;
      }
      goto L_08955900;
    }
L_08955900:
    ctx.gpr[6] = (59136u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (18176u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1472), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (7424u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955AC4;
      }
      goto L_08955980;
    }
L_08955980:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1472), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (7424u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (56319u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(7));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (57088u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(162));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (57856u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (18176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (59136u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955AC4;
      }
      goto L_08955A58;
    }
L_08955A58:
    ctx.gpr[6] = (57088u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(50));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (57600u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1472), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (7424u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08955AC4;
L_08955AC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955ACC:
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955D48;
      }
      goto L_08955AD8;
    }
L_08955AD8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-8728)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955AF0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1472), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (7424u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (18176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955D48;
      }
      goto L_08955B54;
    }
L_08955B54:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (18176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955D48;
      }
      goto L_08955B90;
    }
L_08955B90:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (18176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955D48;
      }
      goto L_08955BCC;
    }
L_08955BCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955D48;
      }
      goto L_08955BD4;
    }
L_08955BD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955D48;
      }
      goto L_08955BDC;
    }
L_08955BDC:
    ctx.gpr[6] = (59136u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (18176u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1472), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (7424u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955D48;
      }
      goto L_08955C58;
    }
L_08955C58:
    ctx.gpr[6] = (56319u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4103));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (57088u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (57600u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1472), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (7424u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (18176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (59136u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955D48;
      }
      goto L_08955D2C;
    }
L_08955D2C:
    ctx.gpr[4] = (56319u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4103));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08955D48;
L_08955D48:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955D50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08955D98;
      }
      goto L_08955D68;
    }
L_08955D68:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
        goto L_08955DA0;
    }
    goto L_08955D78;
L_08955D78:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08955DC0;
      }
      goto L_08955D80;
    }
L_08955D80:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08955D90u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08956160;
L_08955D90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955DC0;
      }
      goto L_08955D98;
    }
L_08955D98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955DC0;
      }
      goto L_08955DA0;
    }
L_08955DA0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955DC0;
      }
      goto L_08955DA8;
    }
L_08955DA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08955DB8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08955DCC;
L_08955DB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955DC0;
      }
      goto L_08955DC0;
    }
L_08955DC0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955DCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08955E18;
      }
      goto L_08955DE8;
    }
L_08955DE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955E10;
      }
      goto L_08955DF4;
    }
L_08955DF4:
    ctx.gpr[31] = (0x08955DFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0895697C;
L_08955DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955E20;
      }
      goto L_08955E08;
    }
L_08955E08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955E2C;
      }
      goto L_08955E10;
    }
L_08955E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955EAC;
      }
      goto L_08955E18;
    }
L_08955E18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955EAC;
      }
      goto L_08955E20;
    }
L_08955E20:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08955E2Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_089567C0;
L_08955E2C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(636), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(644), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(648), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(624)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(644)));
    ctx.gpr[31] = (0x08955E58u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08955E58u) goto L_08955E58;
    return;
L_08955E58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(624)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(648)));
    ctx.gpr[8] = (2197u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(14736));
    ctx.gpr[7] = (0u | 500u);
    ctx.gpr[31] = (0x08955E7Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 274u, 0x089390ACu>(ctx, &aot_mem) && ctx.pc == 0x08955E7Cu) goto L_08955E7C;
    return;
L_08955E7C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(628), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17760));
    ctx.gpr[31] = (0x08955E8Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 314u, 0x08939328u>(ctx, &aot_mem) && ctx.pc == 0x08955E8Cu) goto L_08955E8C;
    return;
L_08955E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(616)));
    ctx.gpr[31] = (0x08955E98u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B734FCu;
    return;
L_08955E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(616)));
    ctx.gpr[31] = (0x08955EA4u);
    ctx.gpr[5] = (0u | 4u);
    ctx.pc = 0x08B73424u;
    return;
L_08955EA4:
    ctx.gpr[31] = (0x08955EACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089569A0;
L_08955EAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955EC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08955EF0u);
    // nop
    goto L_08956F48;
L_08955EF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955F10;
      }
      goto L_08955EF8;
    }
L_08955EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[19] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08955F18;
      }
      goto L_08955F08;
    }
L_08955F08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08955F34;
      }
      goto L_08955F10;
    }
L_08955F10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08956140;
      }
      goto L_08955F18;
    }
L_08955F18:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08955F28u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08955F28u) goto L_08955F28;
    return;
L_08955F28:
    ctx.gpr[31] = (0x08955F30u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17788));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08955F30u) goto L_08955F30;
    return;
L_08955F30:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08955F34;
L_08955F34:
    ctx.gpr[31] = (0x08955F3Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 424u, 0x0882DFD0u>(ctx, &aot_mem) && ctx.pc == 0x08955F3Cu) goto L_08955F3C;
    return;
L_08955F3C:
    ctx.gpr[4] = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08955F68u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08956A00;
L_08955F68:
    ctx.gpr[31] = (0x08955F70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08954778;
L_08955F70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955F90;
      }
      goto L_08955F78;
    }
L_08955F78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08955F98;
      }
      goto L_08955F88;
    }
L_08955F88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08955FAC;
      }
      goto L_08955F90;
    }
L_08955F90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08956140;
      }
      goto L_08955F98;
    }
L_08955F98:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[20];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08955FAC;
      }
      goto L_08955FA4;
    }
L_08955FA4:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08955FAC;
L_08955FAC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955FD8;
      }
      goto L_08955FB4;
    }
L_08955FB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955FD0;
      }
      goto L_08955FC4;
    }
L_08955FC4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08955FD8;
      }
      goto L_08955FD0;
    }
L_08955FD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08956140;
      }
      goto L_08955FD8;
    }
L_08955FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956040;
      }
      goto L_08955FE8;
    }
L_08955FE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956038;
      }
      goto L_08955FF8;
    }
L_08955FF8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
      if (branch_taken) {
          goto L_08956040;
      }
      goto L_08956038;
    }
L_08956038:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08956140;
      }
      goto L_08956040;
    }
L_08956040:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089560C0;
      }
      goto L_0895604C;
    }
L_0895604C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(632), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1036), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
      if (branch_taken) {
          goto L_089560C8;
      }
      goto L_08956080;
    }
L_08956080:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089560B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08956160;
L_089560B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895613C;
      }
      goto L_089560C0;
    }
L_089560C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08956140;
      }
      goto L_089560C8;
    }
L_089560C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089560E8;
      }
      goto L_089560DC;
    }
L_089560DC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
      if (branch_taken) {
          goto L_089560F0;
      }
      goto L_089560E8;
    }
L_089560E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08956130;
      }
      goto L_089560F0;
    }
L_089560F0:
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08956110;
    }
    goto L_08956108;
L_08956108:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08956130;
      }
      goto L_08956110;
    }
L_08956110:
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956130;
      }
      goto L_08956128;
    }
L_08956128:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08956130;
      }
      goto L_08956130;
    }
L_08956130:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0895613Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08956160;
L_0895613C:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08956140;
L_08956140:
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
L_08956160:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089561A4;
      }
      goto L_0895617C;
    }
L_0895617C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895619C;
      }
      goto L_08956188;
    }
L_08956188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089561BC;
      }
      goto L_08956194;
    }
L_08956194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089561C8;
      }
      goto L_0895619C;
    }
L_0895619C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956288;
      }
      goto L_089561A4;
    }
L_089561A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956288;
      }
      goto L_089561BC;
    }
L_089561BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089561C8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089567C0;
L_089561C8:
    ctx.gpr[31] = (0x089561D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0895697C;
L_089561D0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(636), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(644), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(648), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(624)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(644)));
    ctx.gpr[31] = (0x089561FCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x089561FCu) goto L_089561FC;
    return;
L_089561FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(632)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(596)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(632)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(15));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(632), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(624)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(648)));
    ctx.gpr[8] = (2197u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(14796));
    ctx.gpr[7] = (0u | 500u);
    ctx.gpr[31] = (0x08956258u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 274u, 0x089390ACu>(ctx, &aot_mem) && ctx.pc == 0x08956258u) goto L_08956258;
    return;
L_08956258:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(628), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17748));
    ctx.gpr[31] = (0x08956268u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 314u, 0x08939328u>(ctx, &aot_mem) && ctx.pc == 0x08956268u) goto L_08956268;
    return;
L_08956268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(616)));
    ctx.gpr[31] = (0x08956274u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B734FCu;
    return;
L_08956274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(616)));
    ctx.gpr[31] = (0x08956280u);
    ctx.gpr[5] = (0u | 4u);
    ctx.pc = 0x08B73424u;
    return;
L_08956280:
    ctx.gpr[31] = (0x08956288u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089569A0;
L_08956288:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895629C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089562C8u);
    // nop
    goto L_0895742C;
L_089562C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08956394;
      }
      goto L_089562EC;
    }
L_089562EC:
    ctx.gpr[18] = (0u | 255u);
    ctx.gpr[17] = (0u | 1u);
    goto L_089562F4;
L_089562F4:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0895630C;
      }
      goto L_08956304;
    }
L_08956304:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0895634C;
      }
      goto L_0895630C;
    }
L_0895630C:
    ctx.gpr[7] = (ctx.gpr[5] & 128u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1)));
      if (branch_taken) {
          goto L_08956334;
      }
      goto L_08956318;
    }
L_08956318:
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08956328u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 248u, 0x08941B38u>(ctx, &aot_mem) && ctx.pc == 0x08956328u) goto L_08956328;
    return;
L_08956328:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895634C;
      }
      goto L_08956334;
    }
L_08956334:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1040)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895634C;
      }
      goto L_08956348;
    }
L_08956348:
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_0895634C;
L_0895634C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956384;
      }
      goto L_08956354;
    }
L_08956354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1036)));
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(652), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (ctx.gpr[7] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(656), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1036), ctx.gpr[4]);
    goto L_08956384;
L_08956384:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089562F4;
      }
      goto L_08956394;
    }
L_08956394:
    ctx.gpr[31] = (0x0895639Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0895742C;
L_0895639C:
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
L_089563C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089563ECu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 282u, 0x08939174u>(ctx, &aot_mem) && ctx.pc == 0x089563ECu) goto L_089563EC;
    return;
L_089563EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08956428;
      }
      goto L_089563F8;
    }
L_089563F8:
    ctx.gpr[31] = (0x08956400u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08954778;
L_08956400:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956428;
      }
      goto L_08956408;
    }
L_08956408:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(628), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(648)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    ctx.gpr[17] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
        goto L_08956430;
    }
    goto L_08956420;
L_08956420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956448;
      }
      goto L_08956428;
    }
L_08956428:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956580;
      }
      goto L_08956430;
    }
L_08956430:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (116u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(25976));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08956448;
      }
      goto L_08956444;
    }
L_08956444:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    goto L_08956448;
L_08956448:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956468;
      }
      goto L_08956458;
    }
L_08956458:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08956478;
      }
      goto L_08956460;
    }
L_08956460:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956510;
      }
      goto L_08956468;
    }
L_08956468:
    ctx.gpr[31] = (0x08956470u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089569C0;
L_08956470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956580;
      }
      goto L_08956478;
    }
L_08956478:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089564F8;
      }
      goto L_08956488;
    }
L_08956488:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x089564BCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 291u, 0x08A313ECu>(ctx, &aot_mem) && ctx.pc == 0x089564BCu) goto L_089564BC;
    return;
L_089564BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089564E8;
      }
      goto L_089564D0;
    }
L_089564D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08956500;
      }
      goto L_089564E0;
    }
L_089564E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956508;
      }
      goto L_089564E8;
    }
L_089564E8:
    ctx.gpr[31] = (0x089564F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089569C0;
L_089564F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956580;
      }
      goto L_089564F8;
    }
L_089564F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956580;
      }
      goto L_08956500;
    }
L_08956500:
    ctx.gpr[31] = (0x08956508u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0895629C;
L_08956508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895652C;
      }
      goto L_08956510;
    }
L_08956510:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895652C;
      }
      goto L_0895651C;
    }
L_0895651C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0895652Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08956E48;
L_0895652C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(640), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1036)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956578;
      }
      goto L_08956540;
    }
L_08956540:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1036), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(652));
    ctx.gpr[31] = (0x0895655Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08955D50;
L_0895655C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956570;
      }
      goto L_08956568;
    }
L_08956568:
    ctx.gpr[31] = (0x08956570u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089569C0;
L_08956570:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956580;
      }
      goto L_08956578;
    }
L_08956578:
    ctx.gpr[31] = (0x08956580u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089569E0;
L_08956580:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956594:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089565E8;
      }
      goto L_089565AC;
    }
L_089565AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089565CC;
      }
      goto L_089565BC;
    }
L_089565BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089565D4;
      }
      goto L_089565CC;
    }
L_089565CC:
    ctx.gpr[31] = (0x089565D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08954A20;
L_089565D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(608)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089565E8;
      }
      goto L_089565E0;
    }
L_089565E0:
    ctx.gpr[31] = (0x089565E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08956690;
L_089565E8:
    ctx.gpr[31] = (0x089565F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08954778;
L_089565F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956668;
      }
      goto L_089565F8;
    }
L_089565F8:
    ctx.gpr[31] = (0x08956600u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0895697C;
L_08956600:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08956610u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 278u, 0x08939138u>(ctx, &aot_mem) && ctx.pc == 0x08956610u) goto L_08956610;
    return;
L_08956610:
    ctx.gpr[31] = (0x08956618u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089569A0;
L_08956618:
    ctx.gpr[31] = (0x08956620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 733u, 0x08B3AAE8u>(ctx, &aot_mem) && ctx.pc == 0x08956620u) goto L_08956620;
    return;
L_08956620:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956638;
      }
      goto L_08956628;
    }
L_08956628:
    ctx.gpr[31] = (0x08956630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 310u, 0x089392F8u>(ctx, &aot_mem) && ctx.pc == 0x08956630u) goto L_08956630;
    return;
L_08956630:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
      if (branch_taken) {
          goto L_08956648;
      }
      goto L_08956638;
    }
L_08956638:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08956644u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089567C0;
L_08956644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    goto L_08956648;
L_08956648:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08956668;
L_08956668:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(640), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1036), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[31] = (0x08956680u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B734FCu;
    return;
L_08956680:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956690:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089566D8;
      }
      goto L_089566BC;
    }
L_089566BC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089566E0;
      }
      goto L_089566D0;
    }
L_089566D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895678C;
      }
      goto L_089566D8;
    }
L_089566D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956794;
      }
      goto L_089566E0;
    }
L_089566E0:
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (ctx.gpr[5] << 2u);
    ctx.gpr[17] = (ctx.gpr[18] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08956788;
      }
      goto L_089566F8;
    }
L_089566F8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895670C;
      }
      goto L_08956704;
    }
L_08956704:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956778;
      }
      goto L_0895670C;
    }
L_0895670C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[4] << 3u);
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08956778;
      }
      goto L_08956724;
    }
L_08956724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895676C;
      }
      goto L_08956750;
    }
L_08956750:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0895676C;
      }
      goto L_08956760;
    }
L_08956760:
    ctx.gpr[31] = (0x08956768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08955020;
L_08956768:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), 0u);
    goto L_0895676C;
L_0895676C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08956724;
      }
      goto L_08956778;
    }
L_08956778:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089566F8;
      }
      goto L_08956784;
    }
L_08956784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    goto L_08956788;
L_08956788:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0895678C;
L_0895678C:
    ctx.gpr[31] = (0x08956794u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08956BB8;
L_08956794:
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
L_089567B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089567C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[17] = (32770u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(431));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08956834;
      }
      goto L_089567E8;
    }
L_089567E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[31] = (0x089567FCu);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B73484u;
    return;
L_089567FC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0895682C;
      }
      goto L_08956808;
    }
L_08956808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[31] = (0x08956814u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B734FCu;
    return;
L_08956814:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956904;
      }
      goto L_08956824;
    }
L_08956824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089568F8;
      }
      goto L_0895682C;
    }
L_0895682C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895690C;
      }
      goto L_08956834;
    }
L_08956834:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8707), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08956840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x08956840u) goto L_08956840;
    return;
L_08956840:
    ctx.gpr[31] = (0x08956848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x08956848u) goto L_08956848;
    return;
L_08956848:
    ctx.gpr[31] = (0x08956850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 206u, 0x08934DB0u>(ctx, &aot_mem) && ctx.pc == 0x08956850u) goto L_08956850;
    return;
L_08956850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
      if (branch_taken) {
          goto L_08956880;
      }
      goto L_08956868;
    }
L_08956868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089568B0;
      }
      goto L_08956880;
    }
L_08956880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089568C0;
      }
      goto L_08956898;
    }
L_08956898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089568C0;
      }
      goto L_089568B0;
    }
L_089568B0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089568BCu);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = 0x08B73424u;
    return;
L_089568BC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    goto L_089568C0;
L_089568C0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[31] = (0x089568D4u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B73484u;
    return;
L_089568D4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089568E8;
      }
      goto L_089568E0;
    }
L_089568E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956808;
      }
      goto L_089568E8;
    }
L_089568E8:
    ctx.gpr[31] = (0x089568F0u);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08B7340Cu;
    return;
L_089568F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956840;
      }
      goto L_089568F8;
    }
L_089568F8:
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895690C;
      }
      goto L_08956904;
    }
L_08956904:
    ctx.gpr[31] = (0x0895690Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08956924;
L_0895690C:
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
L_08956924:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1036), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08956958;
      }
      goto L_08956940;
    }
L_08956940:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(632), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08956964;
      }
      goto L_08956958;
    }
L_08956958:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08956964;
L_08956964:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(636), 0u);
    ctx.gpr[31] = (0x08956970u);
    // nop
    goto L_089567B8;
L_08956970:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895697C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(620)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08956994u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B734BCu;
    return;
L_08956994:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089569A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(620)));
    ctx.gpr[31] = (0x089569B4u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B734A4u;
    return;
L_089569B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089569C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(616)));
    ctx.gpr[31] = (0x089569D4u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = 0x08B73424u;
    return;
L_089569D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089569E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(616)));
    ctx.gpr[31] = (0x089569F4u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B73424u;
    return;
L_089569F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956A00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[19] = (2237u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28416));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08956A4C;
      }
      goto L_08956A34;
    }
L_08956A34:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08956A44u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08956A44u) goto L_08956A44;
    return;
L_08956A44:
    ctx.gpr[31] = (0x08956A4Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17788));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08956A4Cu) goto L_08956A4C;
    return;
L_08956A4C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08956A58u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 424u, 0x0882DFD0u>(ctx, &aot_mem) && ctx.pc == 0x08956A58u) goto L_08956A58;
    return;
L_08956A58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08956A68u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08957098;
L_08956A68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956A88;
      }
      goto L_08956A70;
    }
L_08956A70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956A90;
      }
      goto L_08956A80;
    }
L_08956A80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956AE4;
      }
      goto L_08956A88;
    }
L_08956A88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08956B9C;
      }
      goto L_08956A90;
    }
L_08956A90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956ADC;
      }
      goto L_08956AA0;
    }
L_08956AA0:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08956AE4;
      }
      goto L_08956ADC;
    }
L_08956ADC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08956B9C;
      }
      goto L_08956AE4;
    }
L_08956AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956B98;
      }
      goto L_08956AF0;
    }
L_08956AF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 11 ? 1u : 0u);
      if (branch_taken) {
          goto L_08956B10;
      }
      goto L_08956AF8;
    }
L_08956AF8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956B10;
      }
      goto L_08956B00;
    }
L_08956B00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 13 ? 1u : 0u);
      if (branch_taken) {
          goto L_08956B10;
      }
      goto L_08956B08;
    }
L_08956B08:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956B18;
      }
      goto L_08956B10;
    }
L_08956B10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08956B6C;
      }
      goto L_08956B18;
    }
L_08956B18:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956B68;
      }
      goto L_08956B2C;
    }
L_08956B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    goto L_08956B38;
L_08956B38:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[17]) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_08956B58;
    }
    goto L_08956B44;
L_08956B44:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08956B58;
      }
      goto L_08956B50;
    }
L_08956B50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08956B6C;
      }
      goto L_08956B58;
    }
L_08956B58:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08956B38;
      }
      goto L_08956B68;
    }
L_08956B68:
    ctx.gpr[4] = (0u | 0u);
    goto L_08956B6C;
L_08956B6C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956B98;
      }
      goto L_08956B74;
    }
L_08956B74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08956B98;
      }
      goto L_08956B80;
    }
L_08956B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[31] = (0x08956B98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08955DCC;
L_08956B98:
    ctx.gpr[2] = (0u | 1u);
    goto L_08956B9C;
L_08956B9C:
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
L_08956BB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956C04;
      }
      goto L_08956BD8;
    }
L_08956BD8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956C04;
      }
      goto L_08956BE4;
    }
L_08956BE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08956BF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08956CC8;
L_08956BF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08956C04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0895742C;
L_08956C04:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956C14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(580), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), ctx.gpr[4]);
    ctx.gpr[31] = (0x08956C3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08956690;
L_08956C3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(580), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956C6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956CB8;
      }
      goto L_08956C8C;
    }
L_08956C8C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956CB8;
      }
      goto L_08956C98;
    }
L_08956C98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08956CA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08956CC8;
L_08956CA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08956CB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0895742C;
L_08956CB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956CC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08956D60;
      }
      goto L_08956CF0;
    }
L_08956CF0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956D60;
      }
      goto L_08956D08;
    }
L_08956D08:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08956D14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08956F20;
L_08956D14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08956D20u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08956F40;
L_08956D20:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08956D48;
      }
      goto L_08956D34;
    }
L_08956D34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08956D40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08955020;
L_08956D40:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    goto L_08956D48;
L_08956D48:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956D08;
      }
      goto L_08956D60;
    }
L_08956D60:
    ctx.gpr[31] = (0x08956D68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0895742C;
L_08956D68:
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
L_08956D88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (32768u << 16u);
      if (branch_taken) {
          goto L_08956E24;
      }
      goto L_08956DC8;
    }
L_08956DC8:
    ctx.gpr[18] = (ctx.gpr[6] | ctx.gpr[18]);
    goto L_08956DCC;
L_08956DCC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08956DD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08956F20;
L_08956DD8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08956DF4;
      }
      goto L_08956DE8;
    }
L_08956DE8:
    ctx.gpr[31] = (0x08956DF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08955020;
L_08956DF0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    goto L_08956DF4;
L_08956DF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08956E0Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08956F40;
L_08956E0C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956DCC;
      }
      goto L_08956E24;
    }
L_08956E24:
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
L_08956E48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (16722u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17729));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08956E6Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 285u, 0x08A3137Cu>(ctx, &aot_mem) && ctx.pc == 0x08956E6Cu) goto L_08956E6C;
    return;
L_08956E6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956E7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08956E9Cu);
    // nop
    goto L_0895742C;
L_08956E9C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08956F08;
      }
      goto L_08956EB4;
    }
L_08956EB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956EF4;
      }
      goto L_08956EC8;
    }
L_08956EC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08956ED8u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08954310;
L_08956ED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08956EF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 164u, 0x08A3CC2Cu>(ctx, &aot_mem) && ctx.pc == 0x08956EF0u) goto L_08956EF0;
    return;
L_08956EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08956EF4;
L_08956EF4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08956EB4;
      }
      goto L_08956F08;
    }
L_08956F08:
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
L_08956F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956F40:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956F48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(580)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[17];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08956F88;
      }
      goto L_08956F78;
    }
L_08956F78:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08956F8C;
      }
      goto L_08956F84;
    }
L_08956F84:
    ctx.gpr[4] = (0u | 1u);
    goto L_08956F88;
L_08956F88:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08956F8C;
L_08956F8C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956FA0;
      }
      goto L_08956F94;
    }
L_08956F94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956FEC;
      }
      goto L_08956FA0;
    }
L_08956FA0:
    ctx.gpr[4] = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[31] = (0x08956FC4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08957098;
L_08956FC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956FE4;
      }
      goto L_08956FCC;
    }
L_08956FCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(588)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08956FF4;
      }
      goto L_08956FDC;
    }
L_08956FDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08957008;
      }
      goto L_08956FE4;
    }
L_08956FE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08957080;
      }
      goto L_08956FEC;
    }
L_08956FEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08957080;
      }
      goto L_08956FF4;
    }
L_08956FF4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08957008;
      }
      goto L_08957000;
    }
L_08957000:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08957008;
L_08957008:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895701C;
      }
      goto L_08957010;
    }
L_08957010:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895704C;
      }
      goto L_0895701C;
    }
L_0895701C:
    ctx.gpr[31] = (0x08957024u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08954778;
L_08957024:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957044;
      }
      goto L_0895702C;
    }
L_0895702C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08957054;
      }
      goto L_0895703C;
    }
L_0895703C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08957068;
      }
      goto L_08957044;
    }
L_08957044:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08957080;
      }
      goto L_0895704C;
    }
L_0895704C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08957080;
      }
      goto L_08957054;
    }
L_08957054:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08957068;
      }
      goto L_08957060;
    }
L_08957060:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
    goto L_08957068;
L_08957068:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957044;
      }
      goto L_08957070;
    }
L_08957070:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957044;
      }
      goto L_0895707C;
    }
L_0895707C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08957080;
L_08957080:
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
L_08957098:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089570DC;
      }
      goto L_089570C0;
    }
L_089570C0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089570DC;
      }
      goto L_089570CC;
    }
L_089570CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 13 ? 1u : 0u);
      if (branch_taken) {
          goto L_089570DC;
      }
      goto L_089570D4;
    }
L_089570D4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089570E4;
      }
      goto L_089570DC;
    }
L_089570DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08957138;
      }
      goto L_089570E4;
    }
L_089570E4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957134;
      }
      goto L_089570F8;
    }
L_089570F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    goto L_08957104;
L_08957104:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[17]) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_08957124;
    }
    goto L_08957110;
L_08957110:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08957124;
      }
      goto L_0895711C;
    }
L_0895711C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08957138;
      }
      goto L_08957124;
    }
L_08957124:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08957104;
      }
      goto L_08957134;
    }
L_08957134:
    ctx.gpr[4] = (0u | 0u);
    goto L_08957138;
L_08957138:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957158;
      }
      goto L_08957140;
    }
L_08957140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08957160;
      }
      goto L_08957150;
    }
L_08957150:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08957174;
      }
      goto L_08957158;
    }
L_08957158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08957210;
      }
      goto L_08957160;
    }
L_08957160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08957174;
      }
      goto L_0895716C;
    }
L_0895716C:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08957174;
L_08957174:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957194;
      }
      goto L_0895717C;
    }
L_0895717C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0895719C;
      }
      goto L_0895718C;
    }
L_0895718C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089571B0;
      }
      goto L_08957194;
    }
L_08957194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08957210;
      }
      goto L_0895719C;
    }
L_0895719C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089571B0;
      }
      goto L_089571A8;
    }
L_089571A8:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_089571B0;
L_089571B0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089571E8;
      }
      goto L_089571B8;
    }
L_089571B8:
    ctx.gpr[31] = (0x089571C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08954778;
L_089571C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089571E0;
      }
      goto L_089571C8;
    }
L_089571C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089571F0;
      }
      goto L_089571D8;
    }
L_089571D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08957204;
      }
      goto L_089571E0;
    }
L_089571E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08957210;
      }
      goto L_089571E8;
    }
L_089571E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08957210;
      }
      goto L_089571F0;
    }
L_089571F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08957204;
      }
      goto L_089571FC;
    }
L_089571FC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08957204;
L_08957204:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089571E0;
      }
      goto L_0895720C;
    }
L_0895720C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08957210;
L_08957210:
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
L_08957228:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29552));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[30] = (4096u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[30]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[23] = (256u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[23]);
    ctx.gpr[22] = (2560u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[20] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089573A8;
      }
      goto L_089572E8;
    }
L_089572E8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] >> 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08957320;
      }
      goto L_08957300;
    }
L_08957300:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[5] >> 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08957300;
      }
      goto L_0895731C;
    }
L_0895731C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08957320;
L_08957320:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8412)));
    ctx.gpr[5] = (14929u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8412), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08957344u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 362u, 0x0895A760u>(ctx, &aot_mem) && ctx.pc == 0x08957344u) goto L_08957344;
    return;
L_08957344:
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8412), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089573A8;
      }
      goto L_08957350;
    }
L_08957350:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2816u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[4] - ctx.gpr[18]);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29232));
    ctx.gpr[31] = (0x08957388u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08957388u) goto L_08957388;
    return;
L_08957388:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0895739Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0895739Cu) goto L_0895739C;
    return;
L_0895739C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089573A8;
L_089573A8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089573F8;
      }
      goto L_089573B0;
    }
L_089573B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    goto L_089573F8;
L_089573F8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
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
L_0895742C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957434:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2235u << 16u);
      if (branch_taken) {
          goto L_08957474;
      }
      goto L_08957444;
    }
L_08957444:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-27300));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5864), 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2235u << 16u);
      if (branch_taken) {
          goto L_08957460;
      }
      goto L_08957458;
    }
L_08957458:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08957460;
L_08957460:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957474;
      }
      goto L_0895746C;
    }
L_0895746C:
    ctx.gpr[31] = (0x08957474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08957474u) goto L_08957474;
    return;
L_08957474:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957480:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089574D8;
      }
      goto L_0895749C;
    }
L_0895749C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_089574C8;
    }
    goto L_089574AC;
L_089574AC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_089574C8;
    }
    goto L_089574B4;
L_089574B4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_089574C8;
    }
    goto L_089574BC;
L_089574BC:
    ctx.gpr[31] = (0x089574C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x089574C4u) goto L_089574C4;
    return;
L_089574C4:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_089574C8;
L_089574C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089574D8;
      }
      goto L_089574D0;
    }
L_089574D0:
    ctx.gpr[31] = (0x089574D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x089574D8u) goto L_089574D8;
    return;
L_089574D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089574EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957500:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(2), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(6), ctx.gpr[9]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(10), ctx.gpr[10]));
    ctx.gpr[11] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(14), ctx.gpr[11]));
    ctx.gpr[12] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(18), ctx.gpr[12]));
    ctx.gpr[13] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(22), ctx.gpr[13]));
    ctx.gpr[14] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(26), ctx.gpr[14]));
    ctx.gpr[15] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(30), ctx.gpr[15]));
    ctx.gpr[24] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(34), ctx.gpr[24]));
    ctx.gpr[25] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(38), ctx.gpr[25]));
    ctx.gpr[2] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(42), ctx.gpr[2]));
    ctx.gpr[3] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(46), ctx.gpr[3]));
    ctx.set_vfpu_scalar_bits_ct<24u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<56u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<88u>(ctx.gpr[10]);
    ctx.set_vfpu_scalar_bits_ct<25u>(ctx.gpr[11]);
    ctx.set_vfpu_scalar_bits_ct<57u>(ctx.gpr[12]);
    ctx.set_vfpu_scalar_bits_ct<89u>(ctx.gpr[13]);
    ctx.set_vfpu_scalar_bits_ct<26u>(ctx.gpr[14]);
    ctx.set_vfpu_scalar_bits_ct<58u>(ctx.gpr[15]);
    ctx.set_vfpu_scalar_bits_ct<90u>(ctx.gpr[24]);
    ctx.set_vfpu_scalar_bits_ct<27u>(ctx.gpr[25]);
    ctx.set_vfpu_scalar_bits_ct<59u>(ctx.gpr[2]);
    ctx.set_vfpu_scalar_bits_ct<91u>(ctx.gpr[3]);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<27u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<59u, 4u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<31u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 2u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 3u>(vfpu_d); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 36u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 24u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 20u, 4u);
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 40u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 24u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 16u, 4u);
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vcmp_ct<52u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(34u, 1u, 52u, 4u);
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_089576F0;
      }
      goto L_089575B0;
    }
L_089575B0:
    ctx.execute_vfpu_vcmp_ct<53u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(34u, 1u, 53u, 4u);
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_089576F0;
      }
      goto L_089575DC;
    }
L_089575DC:
    ctx.execute_vfpu_vcmp_ct<54u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(34u, 1u, 54u, 4u);
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_089576F0;
      }
      goto L_08957608;
    }
L_08957608:
    ctx.execute_vfpu_vcmp_ct<55u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(34u, 1u, 55u, 4u);
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_089576F0;
      }
      goto L_08957634;
    }
L_08957634:
    ctx.execute_vfpu_vcmp_ct<48u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 48u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_089576FC;
      }
      goto L_08957660;
    }
L_08957660:
    ctx.execute_vfpu_vcmp_ct<49u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 49u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_089576FC;
      }
      goto L_0895768C;
    }
L_0895768C:
    ctx.execute_vfpu_vcmp_ct<50u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 50u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_089576FC;
      }
      goto L_089576B8;
    }
L_089576B8:
    ctx.execute_vfpu_vcmp_ct<51u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 51u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_089576FC;
      }
      goto L_089576E4;
    }
L_089576E4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089576F0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(0));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089576FC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957710:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0895773Cu);
    // nop
    ctx.pc = 0x08B7326Cu;
    return;
L_0895773C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08957754;
      }
      goto L_0895774C;
    }
L_0895774C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957884;
      }
      goto L_08957754;
    }
L_08957754:
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(29232));
    ctx.gpr[5] = (47u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15808));
    ctx.gpr[31] = (0x0895776Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x0895776Cu) goto L_0895776C;
    return;
L_0895776C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089577B8;
      }
      goto L_08957780;
    }
L_08957780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[5] = (12u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12432));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), ctx.gpr[5]);
    ctx.gpr[5] = (24u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24864));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(376), ctx.gpr[5]);
    ctx.gpr[5] = (35u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(556), ctx.gpr[4]);
    goto L_089577B8;
L_089577B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957848;
      }
      goto L_089577C4;
    }
L_089577C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957804;
      }
      goto L_089577DC;
    }
L_089577DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08957804;
      }
      goto L_089577EC;
    }
L_089577EC:
    ctx.gpr[6] = (12u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12432));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08957800u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08957800u) goto L_08957800;
    return;
L_08957800:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
    goto L_08957804;
L_08957804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957848;
      }
      goto L_08957818;
    }
L_08957818:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08957848;
      }
      goto L_08957820;
    }
L_08957820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (12u << 16u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12432));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08957838u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08957838u) goto L_08957838;
    return;
L_08957838:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08957848u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08957848u) goto L_08957848;
    return;
L_08957848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1460)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[31] = (0x08957858u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08957858u) goto L_08957858;
    return;
L_08957858:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1440), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1460)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08957870u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08957870u) goto L_08957870;
    return;
L_08957870:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1444), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1448), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1452), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1456), 0u);
      if (branch_taken) {
          goto L_08957994;
      }
      goto L_08957884;
    }
L_08957884:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08957890u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08956594;
L_08957890:
    ctx.gpr[31] = (0x08957898u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08956690;
L_08957898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957994;
      }
      goto L_089578D8;
    }
L_089578D8:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
      if (branch_taken) {
          goto L_08957900;
      }
      goto L_089578E4;
    }
L_089578E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (12u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12432));
    ctx.gpr[31] = (0x089578F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089578F8u) goto L_089578F8;
    return;
L_089578F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895791C;
      }
      goto L_08957900;
    }
L_08957900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895791C;
      }
      goto L_08957914;
    }
L_08957914:
    ctx.gpr[31] = (0x0895791Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08956C14;
L_0895791C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957958;
      }
      goto L_08957934;
    }
L_08957934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08957958;
      }
      goto L_08957944;
    }
L_08957944:
    ctx.gpr[6] = (12u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12432));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08957958u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08957958u) goto L_08957958;
    return;
L_08957958:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08957994;
      }
      goto L_08957970;
    }
L_08957970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08957970;
      }
      goto L_08957994;
    }
L_08957994:
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
L_089579B4:
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
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x089579F0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08956594;
L_089579F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08957D48;
      }
      goto L_089579FC;
    }
L_089579FC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08957A34;
      }
      goto L_08957A14;
    }
L_08957A14:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08957A78;
      }
      goto L_08957A1C;
    }
L_08957A1C:
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-9016));
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8972));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957A78;
      }
      goto L_08957A34;
    }
L_08957A34:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08957A60;
      }
      goto L_08957A40;
    }
L_08957A40:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957A78;
      }
      goto L_08957A48;
    }
L_08957A48:
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-8840));
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8800));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957A78;
      }
      goto L_08957A60;
    }
L_08957A60:
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-8928));
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8884));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957A78;
      }
      goto L_08957A78;
    }
L_08957A78:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957B00;
      }
      goto L_08957A80;
    }
L_08957A80:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), 0u);
    ctx.gpr[31] = (0x08957A8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08954A20;
L_08957A8C:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(300)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (2236u << 16u);
      if (branch_taken) {
          goto L_08957AF4;
      }
      goto L_08957AA4;
    }
L_08957AA4:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(29232));
    ctx.gpr[22] = (0u | 0u);
    goto L_08957AAC;
L_08957AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957AD0;
      }
      goto L_08957AC0;
    }
L_08957AC0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08957ACCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08957ACCu) goto L_08957ACC;
    return;
L_08957ACC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08957AD0;
L_08957AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(300)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08957AAC;
      }
      goto L_08957AF4;
    }
L_08957AF4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[31] = (0x08957B00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(624)));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x08957B00u) goto L_08957B00;
    return;
L_08957B00:
    ctx.gpr[31] = (0x08957B08u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x08957B08u) goto L_08957B08;
    return;
L_08957B08:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08957B20u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 262u, 0x08938FD8u>(ctx, &aot_mem) && ctx.pc == 0x08957B20u) goto L_08957B20;
    return;
L_08957B20:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(15));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[21] - ctx.gpr[4]);
    ctx.gpr[31] = (0x08957B38u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 262u, 0x08938FD8u>(ctx, &aot_mem) && ctx.pc == 0x08957B38u) goto L_08957B38;
    return;
L_08957B38:
    ctx.gpr[31] = (0x08957B40u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 262u, 0x08938FD8u>(ctx, &aot_mem) && ctx.pc == 0x08957B40u) goto L_08957B40;
    return;
L_08957B40:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08957B50u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem) && ctx.pc == 0x08957B50u) goto L_08957B50;
    return;
L_08957B50:
    ctx.gpr[31] = (0x08957B58u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x08957B58u) goto L_08957B58;
    return;
L_08957B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08957B6Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 694u, 0x0893681Cu>(ctx, &aot_mem) && ctx.pc == 0x08957B6Cu) goto L_08957B6C;
    return;
L_08957B6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (22354u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19524));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08957B8Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 285u, 0x08A3137Cu>(ctx, &aot_mem) && ctx.pc == 0x08957B8Cu) goto L_08957B8C;
    return;
L_08957B8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(300)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
        goto L_08957BD8;
    }
    goto L_08957BAC;
L_08957BAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08957BB8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08956F40;
L_08957BB8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957BAC;
      }
      goto L_08957BD4;
    }
L_08957BD4:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08957BD8;
L_08957BD8:
    ctx.gpr[31] = (0x08957BE0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x08957BE0u) goto L_08957BE0;
    return;
L_08957BE0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(624), ctx.gpr[2]);
    ctx.gpr[31] = (0x08957BECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08955300;
L_08957BEC:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08957C18;
      }
      goto L_08957C00;
    }
L_08957C00:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08957C1C;
      }
      goto L_08957C14;
    }
L_08957C14:
    ctx.gpr[20] = (0u | 1u);
    goto L_08957C18;
L_08957C18:
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08957C1C;
L_08957C1C:
    ctx.gpr[19] = (ctx.gpr[20] & 255u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08957C80u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08955398;
L_08957C80:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CB0;
      }
      goto L_08957C88;
    }
L_08957C88:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[31] = (0x08957CA4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 823u, 0x08953A08u>(ctx, &aot_mem) && ctx.pc == 0x08957CA4u) goto L_08957CA4;
    return;
L_08957CA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08957CB0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 887u, 0x08953F94u>(ctx, &aot_mem) && ctx.pc == 0x08957CB0u) goto L_08957CB0;
    return;
L_08957CB0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_08957D48;
      }
      goto L_08957CCC;
    }
L_08957CCC:
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08957CD4;
L_08957CD4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[11] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08957D34;
      }
      goto L_08957CE8;
    }
L_08957CE8:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (ctx.gpr[9] & 15u);
    ctx.gpr[7] = (ctx.gpr[8] << (ctx.gpr[7] & 31u));
    ctx.gpr[9] = (ctx.gpr[9] & 240u);
    ctx.gpr[9] = (ctx.gpr[9] >> 4u);
    ctx.gpr[9] = (ctx.gpr[8] << (ctx.gpr[9] & 31u));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (ctx.gpr[11] & 7u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08957D20;
      }
      goto L_08957D10;
    }
L_08957D10:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.gpr[11] = (ctx.gpr[11] >> 31u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    goto L_08957D20;
L_08957D20:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_08957D34;
L_08957D34:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08957CD4;
      }
      goto L_08957D48;
    }
L_08957D48:
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
L_08957D74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[31]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08957DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 747u, 0x08A0721Cu>(ctx, &aot_mem) && ctx.pc == 0x08957DB0u) goto L_08957DB0;
    return;
L_08957DB0:
    ctx.gpr[31] = (0x08957DB8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_0895742C;
L_08957DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(588)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[31] = (0x08957DDCu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 823u, 0x08953A08u>(ctx, &aot_mem) && ctx.pc == 0x08957DDCu) goto L_08957DDC;
    return;
L_08957DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(588)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(580), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(588), ctx.gpr[4]);
    ctx.gpr[31] = (0x08957DF4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_089567B8;
L_08957DF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[23] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[22] = (ctx.lo);
    ctx.gpr[30] = (0u | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) < 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08957E40;
      }
      goto L_08957E24;
    }
L_08957E24:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957E40;
      }
      goto L_08957E30;
    }
L_08957E30:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < 13 ? 1u : 0u);
      if (branch_taken) {
          goto L_08957E40;
      }
      goto L_08957E38;
    }
L_08957E38:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957E48;
      }
      goto L_08957E40;
    }
L_08957E40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08957EA4;
      }
      goto L_08957E48;
    }
L_08957E48:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08957EA0;
      }
      goto L_08957E5C;
    }
L_08957E5C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[23]) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_08957E90;
    }
    goto L_08957E70;
L_08957E70:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[22];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08957E90;
      }
      goto L_08957E84;
    }
L_08957E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08957EA4;
      }
      goto L_08957E90;
    }
L_08957E90:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08957E5C;
      }
      goto L_08957EA0;
    }
L_08957EA0:
    ctx.gpr[4] = (0u | 0u);
    goto L_08957EA4;
L_08957EA4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957F54;
      }
      goto L_08957EAC;
    }
L_08957EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(584)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[23];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08957ECC;
      }
      goto L_08957EBC;
    }
L_08957EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08957ED0;
      }
      goto L_08957EC8;
    }
L_08957EC8:
    ctx.gpr[5] = (0u | 1u);
    goto L_08957ECC;
L_08957ECC:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08957ED0;
L_08957ED0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957F3C;
      }
      goto L_08957ED8;
    }
L_08957ED8:
    ctx.gpr[31] = (0x08957EE0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08954778;
L_08957EE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957F24;
      }
      goto L_08957EE8;
    }
L_08957EE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(600)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[23];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08957F08;
      }
      goto L_08957EF8;
    }
L_08957EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08957F0C;
      }
      goto L_08957F04;
    }
L_08957F04:
    ctx.gpr[5] = (0u | 1u);
    goto L_08957F08;
L_08957F08:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08957F0C;
L_08957F0C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957F24;
      }
      goto L_08957F14;
    }
L_08957F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(592), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(600), ctx.gpr[4]);
    goto L_08957F24;
L_08957F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(584)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(584), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(592), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (0u | 1u);
      if (branch_taken) {
          goto L_08957F74;
      }
      goto L_08957F3C;
    }
L_08957F3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(584)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957F74;
      }
      goto L_08957F4C;
    }
L_08957F4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (0u | 1u);
      if (branch_taken) {
          goto L_08957F74;
      }
      goto L_08957F54;
    }
L_08957F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(584)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(584), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(592), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(584)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08957F74;
L_08957F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(588)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957FFC;
      }
      goto L_08957F8C;
    }
L_08957F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(588)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957FFC;
      }
      goto L_08957F9C;
    }
L_08957F9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2236u << 16u);
      if (branch_taken) {
          goto L_08957FFC;
      }
      goto L_08957FA8;
    }
L_08957FA8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32304));
    ctx.gpr[31] = (0x08957FB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 74u, 0x08A1C770u>(ctx, &aot_mem) && ctx.pc == 0x08957FB4u) goto L_08957FB4;
    return;
L_08957FB4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08957FFC;
      }
      goto L_08957FC0;
    }
L_08957FC0:
    ctx.gpr[31] = (0x08957FC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 55u, 0x08A1C650u>(ctx, &aot_mem) && ctx.pc == 0x08957FC8u) goto L_08957FC8;
    return;
L_08957FC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957FFC;
      }
      goto L_08957FD0;
    }
L_08957FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(608)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08957FF0;
      }
      goto L_08957FDC;
    }
L_08957FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(608)));
    ctx.gpr[5] = (0u | 510u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(608), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 1u, 0x08958004u>(ctx, &aot_mem); return;
      }
      goto L_08957FF0;
    }
L_08957FF0:
    ctx.gpr[4] = (0u | 479u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(608), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 1u, 0x08958004u>(ctx, &aot_mem); return;
      }
      goto L_08957FFC;
    }
L_08957FFC:
    ctx.gpr[31] = (0x08958004u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08956690;
}

void recomp_unit_0084(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0084_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_84(Runtime &runtime) {
    runtime.register_generated_unit(84u, 0x08954000u, 16384u, &recomp_unit_0084, &recomp_unit_0084_entry);
    runtime.register_function(0x08954000u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954048u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954050u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954074u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954080u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954088u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954104u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895410Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954118u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954124u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895412Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954134u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895413Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895414Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954158u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895415Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954160u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954168u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954174u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895417Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954184u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895418Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954194u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954208u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895420Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954210u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954218u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954224u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954230u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954238u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954240u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895424Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954250u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895425Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954264u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954268u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954274u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895427Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954284u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895428Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954294u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895429Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954310u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954334u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954348u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954370u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954378u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954380u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954384u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895439Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954404u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954410u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954418u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954428u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954440u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954450u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895445Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895446Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954484u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954494u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895449Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954510u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954528u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954540u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954558u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954570u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954594u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954600u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954608u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954624u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954640u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954658u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895467Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089546A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089546B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089546C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089546E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089546F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954704u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895471Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954728u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954730u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954740u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954758u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954760u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954764u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954778u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895479Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089547A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089547B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089547B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089547C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954810u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895485Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954870u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954950u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895495Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954964u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954988u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954998u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A00u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A40u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A98u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954AA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954AB0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954AB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954ACCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954AE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954AE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954AF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954AFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B0Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B28u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B40u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B54u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B84u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B98u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BD0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BD4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BDCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954CD4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D64u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954DD0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954DE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E00u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E4Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E64u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EBCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954ED0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F64u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FB0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FD4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955008u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955020u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955050u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955084u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955118u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955134u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955160u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955184u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955188u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955194u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089551A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089551ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089551F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955204u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955208u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955210u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895521Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895522Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955234u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895523Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955248u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955250u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955260u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955280u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955288u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955290u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955300u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955318u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895531Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955330u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955340u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955348u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895535Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955364u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955374u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955390u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955398u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955404u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955414u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955418u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895543Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955444u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955474u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955518u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955534u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895553Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955544u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895554Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955570u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895557Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955588u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955594u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089555F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089555FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955604u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955608u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955674u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955684u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895568Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895569Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089556B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089556D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089556D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955700u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895570Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955744u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955758u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955764u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895576Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089557B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089557E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089557F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895580Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955870u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955900u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955980u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955ACCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AD8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B54u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BD4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BDCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D78u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D98u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955DA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955DA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955DB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955DC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955DCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955DE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955DF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955DFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E98u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955EA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955EACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955EC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955EF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955EF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F28u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F78u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F98u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FD0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FD8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956038u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956040u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895604Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956080u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089560B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089560C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089560C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089560DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089560E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089560F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956108u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956110u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956128u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956130u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895613Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956140u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956160u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895617Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956188u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956194u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895619Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089561A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089561BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089561C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089561D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089561FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956258u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956268u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956274u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956280u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956288u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895629Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089562C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089562ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089562F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956304u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895630Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956318u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956328u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956334u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956348u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895634Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956354u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956384u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956394u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895639Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089563C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089563ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089563F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956400u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956408u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956420u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956428u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956430u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956444u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956448u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956458u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956460u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956468u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956470u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956478u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956488u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089564BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089564D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089564E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089564E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089564F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089564F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956500u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956508u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956510u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895651Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895652Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956540u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895655Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956568u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956570u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956578u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956580u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956594u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089565ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089565BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089565CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089565D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089565E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089565E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089565F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089565F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956600u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956610u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956618u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956620u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956628u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956630u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956638u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956644u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956648u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956668u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956680u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956690u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956704u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895670Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956724u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956750u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956760u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956768u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895676Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956778u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956784u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956788u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895678Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956794u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956808u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956814u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956824u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895682Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956834u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956840u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956848u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956850u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956868u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956880u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956898u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956904u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895690Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956924u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956940u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956958u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956964u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956970u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895697Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956994u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A00u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A4Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956AA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956ADCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956AE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956AF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956AF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B00u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B6Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B98u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B9Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956BB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956BD8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956BE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956BF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C6Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C98u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D40u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DD8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E0Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E6Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E9Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956EB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956EC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956ED8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956EF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956EF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F40u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F78u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F84u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FDCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957000u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957008u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957010u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895701Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957024u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895702Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895703Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957044u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895704Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957054u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957060u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957068u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957070u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895707Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957080u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957098u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957104u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957110u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895711Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957124u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957134u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957138u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957140u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957150u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957158u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957160u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895716Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957174u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895717Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895718Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957194u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895719Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957204u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895720Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957210u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957228u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089572E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957300u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895731Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957320u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957344u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957350u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957388u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895739Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895742Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957434u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957444u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957458u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957460u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895746Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957474u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957480u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895749Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957500u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089575B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089575DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957608u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957634u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957660u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895768Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957710u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895773Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895774Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957754u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895776Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957780u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957800u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957804u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957818u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957820u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957838u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957848u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957858u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957870u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957884u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957890u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957898u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957900u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957914u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895791Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957934u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957944u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957958u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957970u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957994u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A40u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A78u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957ACCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AD0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B00u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B40u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B6Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BD4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BD8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C00u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CB0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CD4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DB0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DDCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E40u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E5Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E84u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EBCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957ECCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957ED0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957ED8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F0Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F4Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F54u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F9Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FD0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FDCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FFCu, &recomp_unit_0084, "recomp_unit_0084");
}
} // namespace psprecomp
