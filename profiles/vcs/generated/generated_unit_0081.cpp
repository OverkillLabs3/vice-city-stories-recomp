#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0081[4096] = {
    1, 0, 2, 0, 0, 3, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0,
    0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14,
    0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 26, 27, 0, 0,
    28, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0,
    0, 37, 0, 38, 0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 48, 0, 49, 0, 50, 0, 51, 0, 0,
    0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0,
    0, 0, 0, 60, 61, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69,
    0, 0, 0, 0, 70, 0, 0, 0, 71, 72, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 80, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 0, 84,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0,
    91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 97, 0, 0, 0, 98, 99, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 110, 0, 111, 0, 112, 0, 113, 114, 0, 0, 115, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    119, 0, 120, 0, 0, 121, 122, 0, 123, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 153, 0,
    154, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 162, 0, 163, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 172, 0, 173, 174, 0,
    0, 0, 175, 0, 0, 0, 176, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 183, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 193, 0, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 198, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 206, 0, 207, 0, 208, 0, 209,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 212, 0, 0, 213, 0, 214, 0, 215, 0, 216, 0,
    217, 0, 218, 0, 0, 219, 0, 0, 220, 0, 221, 0, 0, 222, 0, 223, 0, 224, 0, 225, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 0, 228, 0, 229, 0, 0, 230, 0, 231, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 236, 0, 237, 0,
    0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0,
    244, 0, 0, 245, 0, 246, 0, 0, 247, 248, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 251, 0, 252, 0, 253, 0, 254, 255, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0,
    0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 274, 0,
    0, 0, 0, 275, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 289, 0, 0, 0, 290, 0,
    0, 291, 0, 0, 292, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0,
    0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 308, 0, 0, 0, 0,
    0, 309, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 317, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0,
    336, 0, 0, 0, 337, 0, 0, 0, 338, 339, 340, 0, 341, 0, 0, 0, 342, 0, 343, 0, 0, 344, 0, 345, 0, 0, 346, 0, 0, 347, 0, 0,
    348, 0, 349, 0, 0, 0, 0, 350, 0, 351, 0, 0, 352, 0, 353, 0, 354, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0,
    0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0,
    372, 0, 0, 373, 0, 0, 0, 374, 0, 375, 0, 376, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 382, 0, 383, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0,
    392, 0, 393, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0,
    397, 0, 398, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 408, 409, 0, 0, 0,
    410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 413, 0, 414, 0, 0, 415, 0, 0, 0, 416,
    0, 417, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0,
    429, 0, 430, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 445, 446, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0,
    0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0,
    0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0,
    0, 473, 0, 0, 0, 0, 474, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 484, 0, 485, 0, 0, 486, 0, 487, 0, 0, 488, 0, 0, 0,
    489, 0, 0, 490, 0, 491, 0, 492, 0, 0, 493, 0, 0, 494, 495, 0, 0, 496, 0, 0, 0, 497, 0, 0, 498, 0, 499, 0, 500, 0, 0, 501,
    0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0,
    512, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 518, 0, 519,
    0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 522, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 527, 0, 0,
    0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 532, 0,
    0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 536, 0, 537, 0, 538, 0, 0, 0,
    0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 544, 0, 0, 0,
    0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 547, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 550, 551, 0,
    0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 554, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 558, 0, 559, 0, 560,
    0, 561, 0, 562, 0, 563, 0, 564, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 577, 0, 0, 578, 0, 579, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 585, 0, 0, 586, 587, 0, 0, 0,
    0, 588, 0, 589, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 592, 0, 593, 594, 0, 595, 0, 596, 0, 0, 0, 0, 0, 0, 0,
    597, 0, 0, 598, 0, 599, 600, 0, 601, 0, 602, 0, 603, 0, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0,
    608, 0, 609, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 612, 0, 0, 0, 613, 0, 614, 0, 0, 615, 0, 616, 0, 0, 617, 0, 0, 0, 0,
    0, 618, 0, 619, 0, 620, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 625, 0, 0, 0, 0, 626, 0,
    627, 0, 0, 0, 628, 0, 0, 0, 0, 629, 0, 630, 0, 0, 0, 631, 0, 0, 632, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 636,
    0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 0, 0, 0, 639, 640, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 642, 0, 643, 0,
    0, 0, 0, 644, 645, 0, 0, 0, 646, 0, 647, 0, 648, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 651, 0, 652, 0, 0, 653, 0, 0, 654, 0, 655, 0, 0, 0, 656, 0, 0, 657, 0, 658, 0, 659, 0, 660, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 661, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 665, 0, 0, 0, 666, 0, 667, 0, 0, 668, 0, 0, 0, 669, 0, 0, 670,
    0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 673, 0, 674, 0, 675, 0, 676, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 678, 0, 0, 679, 0, 680, 0, 0, 681, 0, 682, 0, 683, 0, 0, 684, 0, 685, 0, 686, 0, 687, 0, 0, 688, 0, 689,
    0, 690, 0, 691, 0, 0, 692, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 0, 695, 0, 696, 0, 697, 0, 698, 0, 0,
    0, 699, 0, 0, 0, 700, 0, 0, 0, 0, 701, 0, 702, 0, 703, 0, 704, 0, 705, 0, 706, 0, 0, 707, 0, 708, 0, 0, 709, 0, 0, 0,
    0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 712, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 714, 715, 0, 716, 0, 0, 717, 0, 718, 0, 719, 0, 0, 720, 0, 0, 721, 0, 0, 722, 723, 724, 0, 725, 0, 726, 0, 0,
    727, 0, 0, 728, 0, 0, 729, 730, 731, 732, 0, 733, 0, 0, 734, 0, 0, 735, 0, 0, 736, 737, 738, 0, 739, 0, 740, 0, 0, 741, 0, 0,
    742, 0, 0, 743, 744, 745, 746, 0, 747, 0, 748, 0, 0, 0, 749, 0, 0, 0, 750, 0, 751, 0, 0, 752, 0, 753, 0, 754, 0, 0, 755, 0,
    0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0,
    0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 763, 764, 765,
    0, 766, 0, 0, 0, 767, 0, 0, 768, 0, 769, 0, 0, 0, 770, 0, 0, 0, 771, 0, 0, 0, 772, 0, 0, 0, 773, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 774, 0, 0, 775, 0, 0, 0, 776, 0, 0, 0, 777, 0, 778, 0, 779, 0, 0, 780, 0, 781, 0, 782, 0, 783, 0, 784, 0,
    0, 785, 0, 786, 0, 0, 0, 787, 0, 788, 0, 789, 0, 790, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 792, 0, 0, 793, 0, 794, 0,
    0, 795, 0, 796, 0, 0, 0, 797, 0, 0, 0, 798, 0, 0, 0, 799, 0, 0, 0, 800, 0, 0, 801, 0, 0, 0, 802, 0, 0, 0, 803, 0,
    0, 804, 0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 807, 0, 0, 808, 0, 809, 0, 810, 0, 0,
    0, 811, 0, 0, 812, 0, 0, 813, 0, 814, 0, 815, 0, 0, 0, 816, 0, 817, 0, 0, 818, 0, 819, 0, 0, 0, 0, 0, 820, 0, 0, 821,
    0, 822, 0, 823, 0, 0, 824, 0, 0, 0, 825, 0, 0, 0, 826, 0, 0, 827, 0, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 829,
    0, 0, 0, 830, 0, 0, 0, 0, 0, 831, 0, 832, 0, 0, 0, 0, 833, 0, 834, 0, 835, 0, 836, 0, 0, 0, 837, 838, 0, 0, 839, 0,
    0, 840, 0, 0, 0, 0, 0, 0, 0, 0, 841, 0, 842, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 845, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 846, 0, 0, 0, 847, 0, 0, 848, 0, 849,
    0, 850, 0, 0, 0, 0, 0, 0, 0, 851, 0, 0, 0, 852, 0, 0, 0, 853, 0, 0, 0, 854, 0, 855, 0, 856, 0, 0, 0, 0, 0, 0,
    857, 0, 0, 0, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 0, 0, 0, 0, 0, 860, 0, 0, 0, 861, 0, 0, 0, 862,
    0, 0, 0, 0, 0, 0, 0, 863, 0, 864, 0, 0, 0, 0, 0, 0, 0, 0, 865, 0, 866, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0,
    868, 0, 0, 0, 0, 0, 0, 0, 869, 0, 0, 0, 0, 0, 0, 0, 0, 870, 0, 871, 0, 0, 0, 872, 0, 0, 0, 0, 0, 873, 0, 0,
    874, 0, 0, 0, 875, 0, 0, 876, 0, 877, 0, 878, 0, 0, 879, 0, 0, 0, 880, 0, 881, 0, 0, 882, 883, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 884, 0, 0, 885, 0, 0, 0, 886, 0, 0, 0, 0, 887, 0, 0,
    0, 888, 0, 0, 0, 0, 889, 0, 0, 890, 0, 891, 0, 892, 0, 893, 0, 894, 0, 895, 896, 0, 0, 897, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 898, 0, 0, 0, 899, 0, 900, 0, 0, 0, 901, 0, 902, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 903, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 904, 0, 905, 0, 0, 0, 0, 0, 906, 0, 907, 0, 908, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 909, 0, 0, 0, 910, 0, 0, 0, 0, 911, 0, 0, 0, 0, 912, 0, 0, 0, 0, 913, 0, 0, 0, 0, 914, 0, 0, 915,
};
void recomp_unit_0081_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08948000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0081[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08948000;
    case 2u: goto L_08948008;
    case 3u: goto L_08948014;
    case 4u: goto L_0894801C;
    case 5u: goto L_08948020;
    case 6u: goto L_08948040;
    case 7u: goto L_08948048;
    case 8u: goto L_08948068;
    case 9u: goto L_08948074;
    case 10u: goto L_08948084;
    case 11u: goto L_089480BC;
    case 12u: goto L_089480C0;
    case 13u: goto L_089480DC;
    case 14u: goto L_089480FC;
    case 15u: goto L_08948104;
    case 16u: goto L_08948114;
    case 17u: goto L_08948134;
    case 18u: goto L_08948150;
    case 19u: goto L_08948168;
    case 20u: goto L_08948180;
    case 21u: goto L_08948198;
    case 22u: goto L_089481BC;
    case 23u: goto L_089481C8;
    case 24u: goto L_089481D0;
    case 25u: goto L_089481D8;
    case 26u: goto L_089481F0;
    case 27u: goto L_089481F4;
    case 28u: goto L_08948200;
    case 29u: goto L_08948210;
    case 30u: goto L_08948224;
    case 31u: goto L_08948244;
    case 32u: goto L_08948250;
    case 33u: goto L_08948260;
    case 34u: goto L_08948268;
    case 35u: goto L_08948270;
    case 36u: goto L_08948278;
    case 37u: goto L_08948284;
    case 38u: goto L_0894828C;
    case 39u: goto L_0894829C;
    case 40u: goto L_089482A4;
    case 41u: goto L_089482AC;
    case 42u: goto L_089482C4;
    case 43u: goto L_089482F8;
    case 44u: goto L_08948328;
    case 45u: goto L_08948330;
    case 46u: goto L_08948344;
    case 47u: goto L_08948358;
    case 48u: goto L_0894835C;
    case 49u: goto L_08948364;
    case 50u: goto L_0894836C;
    case 51u: goto L_08948374;
    case 52u: goto L_08948394;
    case 53u: goto L_0894839C;
    case 54u: goto L_089483A4;
    case 55u: goto L_089483AC;
    case 56u: goto L_089483B4;
    case 57u: goto L_089483D4;
    case 58u: goto L_089483DC;
    case 59u: goto L_089483EC;
    case 60u: goto L_0894840C;
    case 61u: goto L_08948410;
    case 62u: goto L_08948428;
    case 63u: goto L_08948434;
    case 64u: goto L_08948444;
    case 65u: goto L_0894844C;
    case 66u: goto L_08948454;
    case 67u: goto L_08948464;
    case 68u: goto L_08948474;
    case 69u: goto L_0894847C;
    case 70u: goto L_08948490;
    case 71u: goto L_089484A0;
    case 72u: goto L_089484A4;
    case 73u: goto L_089484A8;
    case 74u: goto L_089484D0;
    case 75u: goto L_089484E8;
    case 76u: goto L_08948508;
    case 77u: goto L_08948528;
    case 78u: goto L_08948538;
    case 79u: goto L_08948544;
    case 80u: goto L_0894854C;
    case 81u: goto L_08948554;
    case 82u: goto L_0894855C;
    case 83u: goto L_08948568;
    case 84u: goto L_0894857C;
    case 85u: goto L_089485B0;
    case 86u: goto L_089485C0;
    case 87u: goto L_089485C8;
    case 88u: goto L_089485D8;
    case 89u: goto L_089485E8;
    case 90u: goto L_089485F8;
    case 91u: goto L_08948600;
    case 92u: goto L_08948610;
    case 93u: goto L_08948620;
    case 94u: goto L_08948628;
    case 95u: goto L_08948638;
    case 96u: goto L_08948648;
    case 97u: goto L_08948650;
    case 98u: goto L_08948660;
    case 99u: goto L_08948664;
    case 100u: goto L_08948670;
    case 101u: goto L_0894868C;
    case 102u: goto L_08948698;
    case 103u: goto L_089486A0;
    case 104u: goto L_089486AC;
    case 105u: goto L_089486B4;
    case 106u: goto L_089486BC;
    case 107u: goto L_089486C8;
    case 108u: goto L_089486DC;
    case 109u: goto L_089486F0;
    case 110u: goto L_08948714;
    case 111u: goto L_0894871C;
    case 112u: goto L_08948724;
    case 113u: goto L_0894872C;
    case 114u: goto L_08948730;
    case 115u: goto L_0894873C;
    case 116u: goto L_08948744;
    case 117u: goto L_08948758;
    case 118u: goto L_08948770;
    case 119u: goto L_08948780;
    case 120u: goto L_08948788;
    case 121u: goto L_08948794;
    case 122u: goto L_08948798;
    case 123u: goto L_089487A0;
    case 124u: goto L_089487AC;
    case 125u: goto L_089487C0;
    case 126u: goto L_089487DC;
    case 127u: goto L_0894880C;
    case 128u: goto L_0894881C;
    case 129u: goto L_08948844;
    case 130u: goto L_0894885C;
    case 131u: goto L_08948880;
    case 132u: goto L_08948890;
    case 133u: goto L_08948898;
    case 134u: goto L_089488A4;
    case 135u: goto L_089488BC;
    case 136u: goto L_089488D0;
    case 137u: goto L_089488EC;
    case 138u: goto L_089488F4;
    case 139u: goto L_08948920;
    case 140u: goto L_08948930;
    case 141u: goto L_08948950;
    case 142u: goto L_0894897C;
    case 143u: goto L_089489B0;
    case 144u: goto L_089489B8;
    case 145u: goto L_089489CC;
    case 146u: goto L_089489DC;
    case 147u: goto L_089489F4;
    case 148u: goto L_08948A0C;
    case 149u: goto L_08948A20;
    case 150u: goto L_08948A40;
    case 151u: goto L_08948A58;
    case 152u: goto L_08948A70;
    case 153u: goto L_08948A78;
    case 154u: goto L_08948A80;
    case 155u: goto L_08948A8C;
    case 156u: goto L_08948A98;
    case 157u: goto L_08948AA8;
    case 158u: goto L_08948AB4;
    case 159u: goto L_08948AC4;
    case 160u: goto L_08948AD0;
    case 161u: goto L_08948ADC;
    case 162u: goto L_08948AE0;
    case 163u: goto L_08948AE8;
    case 164u: goto L_08948AF0;
    case 165u: goto L_08948B10;
    case 166u: goto L_08948B54;
    case 167u: goto L_08948B64;
    case 168u: goto L_08948BA0;
    case 169u: goto L_08948BA8;
    case 170u: goto L_08948BD8;
    case 171u: goto L_08948BE8;
    case 172u: goto L_08948BEC;
    case 173u: goto L_08948BF4;
    case 174u: goto L_08948BF8;
    case 175u: goto L_08948C08;
    case 176u: goto L_08948C18;
    case 177u: goto L_08948C20;
    case 178u: goto L_08948C28;
    case 179u: goto L_08948C38;
    case 180u: goto L_08948C50;
    case 181u: goto L_08948C60;
    case 182u: goto L_08948C70;
    case 183u: goto L_08948C8C;
    case 184u: goto L_08948C94;
    case 185u: goto L_08948CA4;
    case 186u: goto L_08948CB8;
    case 187u: goto L_08948CCC;
    case 188u: goto L_08948CD4;
    case 189u: goto L_08948D04;
    case 190u: goto L_08948DA4;
    case 191u: goto L_08948DAC;
    case 192u: goto L_08948DBC;
    case 193u: goto L_08948DC0;
    case 194u: goto L_08948DCC;
    case 195u: goto L_08948DDC;
    case 196u: goto L_08948DE8;
    case 197u: goto L_08948DF0;
    case 198u: goto L_08948DF8;
    case 199u: goto L_08948E04;
    case 200u: goto L_08948E2C;
    case 201u: goto L_08948E64;
    case 202u: goto L_08948E78;
    case 203u: goto L_08948E88;
    case 204u: goto L_08948ED0;
    case 205u: goto L_08948ED8;
    case 206u: goto L_08948EE4;
    case 207u: goto L_08948EEC;
    case 208u: goto L_08948EF4;
    case 209u: goto L_08948EFC;
    case 210u: goto L_08948F2C;
    case 211u: goto L_08948F50;
    case 212u: goto L_08948F54;
    case 213u: goto L_08948F60;
    case 214u: goto L_08948F68;
    case 215u: goto L_08948F70;
    case 216u: goto L_08948F78;
    case 217u: goto L_08948F80;
    case 218u: goto L_08948F88;
    case 219u: goto L_08948F94;
    case 220u: goto L_08948FA0;
    case 221u: goto L_08948FA8;
    case 222u: goto L_08948FB4;
    case 223u: goto L_08948FBC;
    case 224u: goto L_08948FC4;
    case 225u: goto L_08948FCC;
    case 226u: goto L_08948FD0;
    case 227u: goto L_08948FF8;
    case 228u: goto L_0894900C;
    case 229u: goto L_08949014;
    case 230u: goto L_08949020;
    case 231u: goto L_08949028;
    case 232u: goto L_08949038;
    case 233u: goto L_08949040;
    case 234u: goto L_08949054;
    case 235u: goto L_08949064;
    case 236u: goto L_08949070;
    case 237u: goto L_08949078;
    case 238u: goto L_0894908C;
    case 239u: goto L_089490AC;
    case 240u: goto L_089490B8;
    case 241u: goto L_089490BC;
    case 242u: goto L_089490E8;
    case 243u: goto L_089490F8;
    case 244u: goto L_08949100;
    case 245u: goto L_0894910C;
    case 246u: goto L_08949114;
    case 247u: goto L_08949120;
    case 248u: goto L_08949124;
    case 249u: goto L_0894913C;
    case 250u: goto L_08949144;
    case 251u: goto L_08949150;
    case 252u: goto L_08949158;
    case 253u: goto L_08949160;
    case 254u: goto L_08949168;
    case 255u: goto L_0894916C;
    case 256u: goto L_08949198;
    case 257u: goto L_089491B8;
    case 258u: goto L_089491C4;
    case 259u: goto L_089491E4;
    case 260u: goto L_08949210;
    case 261u: goto L_08949228;
    case 262u: goto L_08949238;
    case 263u: goto L_08949248;
    case 264u: goto L_08949258;
    case 265u: goto L_08949268;
    case 266u: goto L_08949278;
    case 267u: goto L_08949288;
    case 268u: goto L_089492A4;
    case 269u: goto L_089492B4;
    case 270u: goto L_089492C0;
    case 271u: goto L_089492C8;
    case 272u: goto L_089492E0;
    case 273u: goto L_089492E8;
    case 274u: goto L_089492F8;
    case 275u: goto L_0894930C;
    case 276u: goto L_08949314;
    case 277u: goto L_08949320;
    case 278u: goto L_0894933C;
    case 279u: goto L_0894934C;
    case 280u: goto L_08949354;
    case 281u: goto L_08949364;
    case 282u: goto L_08949374;
    case 283u: goto L_0894938C;
    case 284u: goto L_089493A0;
    case 285u: goto L_089493A8;
    case 286u: goto L_089493B4;
    case 287u: goto L_089493D0;
    case 288u: goto L_089493E0;
    case 289u: goto L_089493E8;
    case 290u: goto L_089493F8;
    case 291u: goto L_08949404;
    case 292u: goto L_08949410;
    case 293u: goto L_08949420;
    case 294u: goto L_0894942C;
    case 295u: goto L_08949440;
    case 296u: goto L_08949470;
    case 297u: goto L_08949478;
    case 298u: goto L_08949488;
    case 299u: goto L_08949490;
    case 300u: goto L_089494C0;
    case 301u: goto L_089494D4;
    case 302u: goto L_089494F0;
    case 303u: goto L_0894951C;
    case 304u: goto L_08949528;
    case 305u: goto L_08949540;
    case 306u: goto L_0894955C;
    case 307u: goto L_08949564;
    case 308u: goto L_0894956C;
    case 309u: goto L_08949584;
    case 310u: goto L_0894958C;
    case 311u: goto L_089495A4;
    case 312u: goto L_089495B8;
    case 313u: goto L_089495E0;
    case 314u: goto L_089495F4;
    case 315u: goto L_0894961C;
    case 316u: goto L_08949628;
    case 317u: goto L_08949630;
    case 318u: goto L_08949638;
    case 319u: goto L_08949640;
    case 320u: goto L_0894965C;
    case 321u: goto L_08949680;
    case 322u: goto L_0894968C;
    case 323u: goto L_08949694;
    case 324u: goto L_0894969C;
    case 325u: goto L_089496A4;
    case 326u: goto L_089496AC;
    case 327u: goto L_089496BC;
    case 328u: goto L_089496F4;
    case 329u: goto L_0894972C;
    case 330u: goto L_0894973C;
    case 331u: goto L_08949774;
    case 332u: goto L_089497A8;
    case 333u: goto L_089497B0;
    case 334u: goto L_089497E0;
    case 335u: goto L_089497F0;
    case 336u: goto L_08949800;
    case 337u: goto L_08949810;
    case 338u: goto L_08949820;
    case 339u: goto L_08949824;
    case 340u: goto L_08949828;
    case 341u: goto L_08949830;
    case 342u: goto L_08949840;
    case 343u: goto L_08949848;
    case 344u: goto L_08949854;
    case 345u: goto L_0894985C;
    case 346u: goto L_08949868;
    case 347u: goto L_08949874;
    case 348u: goto L_08949880;
    case 349u: goto L_08949888;
    case 350u: goto L_0894989C;
    case 351u: goto L_089498A4;
    case 352u: goto L_089498B0;
    case 353u: goto L_089498B8;
    case 354u: goto L_089498C0;
    case 355u: goto L_089498CC;
    case 356u: goto L_089498DC;
    case 357u: goto L_08949910;
    case 358u: goto L_08949928;
    case 359u: goto L_08949938;
    case 360u: goto L_08949950;
    case 361u: goto L_0894996C;
    case 362u: goto L_08949978;
    case 363u: goto L_089499AC;
    case 364u: goto L_089499B8;
    case 365u: goto L_089499D0;
    case 366u: goto L_089499F0;
    case 367u: goto L_089499F8;
    case 368u: goto L_08949A08;
    case 369u: goto L_08949A24;
    case 370u: goto L_08949A38;
    case 371u: goto L_08949A68;
    case 372u: goto L_08949A80;
    case 373u: goto L_08949A8C;
    case 374u: goto L_08949A9C;
    case 375u: goto L_08949AA4;
    case 376u: goto L_08949AAC;
    case 377u: goto L_08949AB0;
    case 378u: goto L_08949AC0;
    case 379u: goto L_08949AE8;
    case 380u: goto L_08949B1C;
    case 381u: goto L_08949B30;
    case 382u: goto L_08949B38;
    case 383u: goto L_08949B40;
    case 384u: goto L_08949B44;
    case 385u: goto L_08949B54;
    case 386u: goto L_08949B80;
    case 387u: goto L_08949B9C;
    case 388u: goto L_08949BA8;
    case 389u: goto L_08949BB4;
    case 390u: goto L_08949BCC;
    case 391u: goto L_08949BE4;
    case 392u: goto L_08949C00;
    case 393u: goto L_08949C08;
    case 394u: goto L_08949C10;
    case 395u: goto L_08949C28;
    case 396u: goto L_08949C70;
    case 397u: goto L_08949C80;
    case 398u: goto L_08949C88;
    case 399u: goto L_08949C8C;
    case 400u: goto L_08949CA8;
    case 401u: goto L_08949CC8;
    case 402u: goto L_08949CD4;
    case 403u: goto L_08949CE4;
    case 404u: goto L_08949CFC;
    case 405u: goto L_08949D24;
    case 406u: goto L_08949D48;
    case 407u: goto L_08949D68;
    case 408u: goto L_08949D6C;
    case 409u: goto L_08949D70;
    case 410u: goto L_08949D80;
    case 411u: goto L_08949DB8;
    case 412u: goto L_08949DD0;
    case 413u: goto L_08949DD8;
    case 414u: goto L_08949DE0;
    case 415u: goto L_08949DEC;
    case 416u: goto L_08949DFC;
    case 417u: goto L_08949E04;
    case 418u: goto L_08949E14;
    case 419u: goto L_08949E20;
    case 420u: goto L_08949E34;
    case 421u: goto L_08949E74;
    case 422u: goto L_08949F1C;
    case 423u: goto L_08949F28;
    case 424u: goto L_08949F38;
    case 425u: goto L_08949F44;
    case 426u: goto L_08949F50;
    case 427u: goto L_08949F64;
    case 428u: goto L_08949F74;
    case 429u: goto L_08949F80;
    case 430u: goto L_08949F88;
    case 431u: goto L_08949F98;
    case 432u: goto L_08949FA8;
    case 433u: goto L_08949FC4;
    case 434u: goto L_08949FE0;
    case 435u: goto L_08949FE8;
    case 436u: goto L_0894A010;
    case 437u: goto L_0894A01C;
    case 438u: goto L_0894A0A0;
    case 439u: goto L_0894A0B4;
    case 440u: goto L_0894A0C0;
    case 441u: goto L_0894A110;
    case 442u: goto L_0894A118;
    case 443u: goto L_0894A134;
    case 444u: goto L_0894A148;
    case 445u: goto L_0894A150;
    case 446u: goto L_0894A154;
    case 447u: goto L_0894A15C;
    case 448u: goto L_0894A18C;
    case 449u: goto L_0894A1A8;
    case 450u: goto L_0894A1B0;
    case 451u: goto L_0894A1B8;
    case 452u: goto L_0894A1F0;
    case 453u: goto L_0894A214;
    case 454u: goto L_0894A238;
    case 455u: goto L_0894A268;
    case 456u: goto L_0894A284;
    case 457u: goto L_0894A290;
    case 458u: goto L_0894A2B0;
    case 459u: goto L_0894A2E4;
    case 460u: goto L_0894A2EC;
    case 461u: goto L_0894A320;
    case 462u: goto L_0894A328;
    case 463u: goto L_0894A330;
    case 464u: goto L_0894A33C;
    case 465u: goto L_0894A348;
    case 466u: goto L_0894A354;
    case 467u: goto L_0894A388;
    case 468u: goto L_0894A3B0;
    case 469u: goto L_0894A3C0;
    case 470u: goto L_0894A3CC;
    case 471u: goto L_0894A3EC;
    case 472u: goto L_0894A3F8;
    case 473u: goto L_0894A404;
    case 474u: goto L_0894A418;
    case 475u: goto L_0894A41C;
    case 476u: goto L_0894A430;
    case 477u: goto L_0894A458;
    case 478u: goto L_0894A464;
    case 479u: goto L_0894A4BC;
    case 480u: goto L_0894A4C8;
    case 481u: goto L_0894A4D0;
    case 482u: goto L_0894A4F0;
    case 483u: goto L_0894A53C;
    case 484u: goto L_0894A548;
    case 485u: goto L_0894A550;
    case 486u: goto L_0894A55C;
    case 487u: goto L_0894A564;
    case 488u: goto L_0894A570;
    case 489u: goto L_0894A580;
    case 490u: goto L_0894A58C;
    case 491u: goto L_0894A594;
    case 492u: goto L_0894A59C;
    case 493u: goto L_0894A5A8;
    case 494u: goto L_0894A5B4;
    case 495u: goto L_0894A5B8;
    case 496u: goto L_0894A5C4;
    case 497u: goto L_0894A5D4;
    case 498u: goto L_0894A5E0;
    case 499u: goto L_0894A5E8;
    case 500u: goto L_0894A5F0;
    case 501u: goto L_0894A5FC;
    case 502u: goto L_0894A61C;
    case 503u: goto L_0894A630;
    case 504u: goto L_0894A640;
    case 505u: goto L_0894A664;
    case 506u: goto L_0894A6A4;
    case 507u: goto L_0894A6B0;
    case 508u: goto L_0894A6C0;
    case 509u: goto L_0894A6D0;
    case 510u: goto L_0894A6E0;
    case 511u: goto L_0894A6F0;
    case 512u: goto L_0894A700;
    case 513u: goto L_0894A714;
    case 514u: goto L_0894A728;
    case 515u: goto L_0894A734;
    case 516u: goto L_0894A740;
    case 517u: goto L_0894A76C;
    case 518u: goto L_0894A774;
    case 519u: goto L_0894A77C;
    case 520u: goto L_0894A784;
    case 521u: goto L_0894A7A0;
    case 522u: goto L_0894A7A8;
    case 523u: goto L_0894A7B4;
    case 524u: goto L_0894A7BC;
    case 525u: goto L_0894A7E4;
    case 526u: goto L_0894A7EC;
    case 527u: goto L_0894A7F4;
    case 528u: goto L_0894A814;
    case 529u: goto L_0894A83C;
    case 530u: goto L_0894A84C;
    case 531u: goto L_0894A858;
    case 532u: goto L_0894A878;
    case 533u: goto L_0894A888;
    case 534u: goto L_0894A8B0;
    case 535u: goto L_0894A8DC;
    case 536u: goto L_0894A8E0;
    case 537u: goto L_0894A8E8;
    case 538u: goto L_0894A8F0;
    case 539u: goto L_0894A914;
    case 540u: goto L_0894A92C;
    case 541u: goto L_0894A944;
    case 542u: goto L_0894A94C;
    case 543u: goto L_0894A968;
    case 544u: goto L_0894A970;
    case 545u: goto L_0894A988;
    case 546u: goto L_0894A9A8;
    case 547u: goto L_0894A9C4;
    case 548u: goto L_0894A9C8;
    case 549u: goto L_0894A9F0;
    case 550u: goto L_0894A9F4;
    case 551u: goto L_0894A9F8;
    case 552u: goto L_0894AA1C;
    case 553u: goto L_0894AA2C;
    case 554u: goto L_0894AA34;
    case 555u: goto L_0894AA3C;
    case 556u: goto L_0894AA58;
    case 557u: goto L_0894AA64;
    case 558u: goto L_0894AA6C;
    case 559u: goto L_0894AA74;
    case 560u: goto L_0894AA7C;
    case 561u: goto L_0894AA84;
    case 562u: goto L_0894AA8C;
    case 563u: goto L_0894AA94;
    case 564u: goto L_0894AA9C;
    case 565u: goto L_0894AAA4;
    case 566u: goto L_0894AAB4;
    case 567u: goto L_0894AAD0;
    case 568u: goto L_0894AADC;
    case 569u: goto L_0894AAEC;
    case 570u: goto L_0894AB1C;
    case 571u: goto L_0894AB34;
    case 572u: goto L_0894AB54;
    case 573u: goto L_0894AB60;
    case 574u: goto L_0894AB8C;
    case 575u: goto L_0894ABA0;
    case 576u: goto L_0894ABB4;
    case 577u: goto L_0894ABB8;
    case 578u: goto L_0894ABC4;
    case 579u: goto L_0894ABCC;
    case 580u: goto L_0894ABD4;
    case 581u: goto L_0894AC08;
    case 582u: goto L_0894AC28;
    case 583u: goto L_0894AC50;
    case 584u: goto L_0894AC58;
    case 585u: goto L_0894AC60;
    case 586u: goto L_0894AC6C;
    case 587u: goto L_0894AC70;
    case 588u: goto L_0894AC84;
    case 589u: goto L_0894AC8C;
    case 590u: goto L_0894AC94;
    case 591u: goto L_0894ACB8;
    case 592u: goto L_0894ACC4;
    case 593u: goto L_0894ACCC;
    case 594u: goto L_0894ACD0;
    case 595u: goto L_0894ACD8;
    case 596u: goto L_0894ACE0;
    case 597u: goto L_0894AD00;
    case 598u: goto L_0894AD0C;
    case 599u: goto L_0894AD14;
    case 600u: goto L_0894AD18;
    case 601u: goto L_0894AD20;
    case 602u: goto L_0894AD28;
    case 603u: goto L_0894AD30;
    case 604u: goto L_0894AD3C;
    case 605u: goto L_0894AD50;
    case 606u: goto L_0894AD60;
    case 607u: goto L_0894AD70;
    case 608u: goto L_0894AD80;
    case 609u: goto L_0894AD88;
    case 610u: goto L_0894AD94;
    case 611u: goto L_0894ADA8;
    case 612u: goto L_0894ADB4;
    case 613u: goto L_0894ADC4;
    case 614u: goto L_0894ADCC;
    case 615u: goto L_0894ADD8;
    case 616u: goto L_0894ADE0;
    case 617u: goto L_0894ADEC;
    case 618u: goto L_0894AE04;
    case 619u: goto L_0894AE0C;
    case 620u: goto L_0894AE14;
    case 621u: goto L_0894AE24;
    case 622u: goto L_0894AE34;
    case 623u: goto L_0894AE44;
    case 624u: goto L_0894AE58;
    case 625u: goto L_0894AE64;
    case 626u: goto L_0894AE78;
    case 627u: goto L_0894AE80;
    case 628u: goto L_0894AE90;
    case 629u: goto L_0894AEA4;
    case 630u: goto L_0894AEAC;
    case 631u: goto L_0894AEBC;
    case 632u: goto L_0894AEC8;
    case 633u: goto L_0894AED0;
    case 634u: goto L_0894AED8;
    case 635u: goto L_0894AEF4;
    case 636u: goto L_0894AEFC;
    case 637u: goto L_0894AF14;
    case 638u: goto L_0894AF1C;
    case 639u: goto L_0894AF34;
    case 640u: goto L_0894AF38;
    case 641u: goto L_0894AF5C;
    case 642u: goto L_0894AF70;
    case 643u: goto L_0894AF78;
    case 644u: goto L_0894AF8C;
    case 645u: goto L_0894AF90;
    case 646u: goto L_0894AFA0;
    case 647u: goto L_0894AFA8;
    case 648u: goto L_0894AFB0;
    case 649u: goto L_0894AFBC;
    case 650u: goto L_0894AFDC;
    case 651u: goto L_0894B004;
    case 652u: goto L_0894B00C;
    case 653u: goto L_0894B018;
    case 654u: goto L_0894B024;
    case 655u: goto L_0894B02C;
    case 656u: goto L_0894B03C;
    case 657u: goto L_0894B048;
    case 658u: goto L_0894B050;
    case 659u: goto L_0894B058;
    case 660u: goto L_0894B060;
    case 661u: goto L_0894B088;
    case 662u: goto L_0894B090;
    case 663u: goto L_0894B0A8;
    case 664u: goto L_0894B0B4;
    case 665u: goto L_0894B0BC;
    case 666u: goto L_0894B0CC;
    case 667u: goto L_0894B0D4;
    case 668u: goto L_0894B0E0;
    case 669u: goto L_0894B0F0;
    case 670u: goto L_0894B0FC;
    case 671u: goto L_0894B104;
    case 672u: goto L_0894B11C;
    case 673u: goto L_0894B13C;
    case 674u: goto L_0894B144;
    case 675u: goto L_0894B14C;
    case 676u: goto L_0894B154;
    case 677u: goto L_0894B15C;
    case 678u: goto L_0894B194;
    case 679u: goto L_0894B1A0;
    case 680u: goto L_0894B1A8;
    case 681u: goto L_0894B1B4;
    case 682u: goto L_0894B1BC;
    case 683u: goto L_0894B1C4;
    case 684u: goto L_0894B1D0;
    case 685u: goto L_0894B1D8;
    case 686u: goto L_0894B1E0;
    case 687u: goto L_0894B1E8;
    case 688u: goto L_0894B1F4;
    case 689u: goto L_0894B1FC;
    case 690u: goto L_0894B204;
    case 691u: goto L_0894B20C;
    case 692u: goto L_0894B218;
    case 693u: goto L_0894B234;
    case 694u: goto L_0894B24C;
    case 695u: goto L_0894B25C;
    case 696u: goto L_0894B264;
    case 697u: goto L_0894B26C;
    case 698u: goto L_0894B274;
    case 699u: goto L_0894B284;
    case 700u: goto L_0894B294;
    case 701u: goto L_0894B2A8;
    case 702u: goto L_0894B2B0;
    case 703u: goto L_0894B2B8;
    case 704u: goto L_0894B2C0;
    case 705u: goto L_0894B2C8;
    case 706u: goto L_0894B2D0;
    case 707u: goto L_0894B2DC;
    case 708u: goto L_0894B2E4;
    case 709u: goto L_0894B2F0;
    case 710u: goto L_0894B30C;
    case 711u: goto L_0894B344;
    case 712u: goto L_0894B354;
    case 713u: goto L_0894B360;
    case 714u: goto L_0894B390;
    case 715u: goto L_0894B394;
    case 716u: goto L_0894B39C;
    case 717u: goto L_0894B3A8;
    case 718u: goto L_0894B3B0;
    case 719u: goto L_0894B3B8;
    case 720u: goto L_0894B3C4;
    case 721u: goto L_0894B3D0;
    case 722u: goto L_0894B3DC;
    case 723u: goto L_0894B3E0;
    case 724u: goto L_0894B3E4;
    case 725u: goto L_0894B3EC;
    case 726u: goto L_0894B3F4;
    case 727u: goto L_0894B400;
    case 728u: goto L_0894B40C;
    case 729u: goto L_0894B418;
    case 730u: goto L_0894B41C;
    case 731u: goto L_0894B420;
    case 732u: goto L_0894B424;
    case 733u: goto L_0894B42C;
    case 734u: goto L_0894B438;
    case 735u: goto L_0894B444;
    case 736u: goto L_0894B450;
    case 737u: goto L_0894B454;
    case 738u: goto L_0894B458;
    case 739u: goto L_0894B460;
    case 740u: goto L_0894B468;
    case 741u: goto L_0894B474;
    case 742u: goto L_0894B480;
    case 743u: goto L_0894B48C;
    case 744u: goto L_0894B490;
    case 745u: goto L_0894B494;
    case 746u: goto L_0894B498;
    case 747u: goto L_0894B4A0;
    case 748u: goto L_0894B4A8;
    case 749u: goto L_0894B4B8;
    case 750u: goto L_0894B4C8;
    case 751u: goto L_0894B4D0;
    case 752u: goto L_0894B4DC;
    case 753u: goto L_0894B4E4;
    case 754u: goto L_0894B4EC;
    case 755u: goto L_0894B4F8;
    case 756u: goto L_0894B510;
    case 757u: goto L_0894B534;
    case 758u: goto L_0894B544;
    case 759u: goto L_0894B564;
    case 760u: goto L_0894B588;
    case 761u: goto L_0894B5AC;
    case 762u: goto L_0894B5D0;
    case 763u: goto L_0894B5F4;
    case 764u: goto L_0894B5F8;
    case 765u: goto L_0894B5FC;
    case 766u: goto L_0894B604;
    case 767u: goto L_0894B614;
    case 768u: goto L_0894B620;
    case 769u: goto L_0894B628;
    case 770u: goto L_0894B638;
    case 771u: goto L_0894B648;
    case 772u: goto L_0894B658;
    case 773u: goto L_0894B668;
    case 774u: goto L_0894B690;
    case 775u: goto L_0894B69C;
    case 776u: goto L_0894B6AC;
    case 777u: goto L_0894B6BC;
    case 778u: goto L_0894B6C4;
    case 779u: goto L_0894B6CC;
    case 780u: goto L_0894B6D8;
    case 781u: goto L_0894B6E0;
    case 782u: goto L_0894B6E8;
    case 783u: goto L_0894B6F0;
    case 784u: goto L_0894B6F8;
    case 785u: goto L_0894B704;
    case 786u: goto L_0894B70C;
    case 787u: goto L_0894B71C;
    case 788u: goto L_0894B724;
    case 789u: goto L_0894B72C;
    case 790u: goto L_0894B734;
    case 791u: goto L_0894B74C;
    case 792u: goto L_0894B764;
    case 793u: goto L_0894B770;
    case 794u: goto L_0894B778;
    case 795u: goto L_0894B784;
    case 796u: goto L_0894B78C;
    case 797u: goto L_0894B79C;
    case 798u: goto L_0894B7AC;
    case 799u: goto L_0894B7BC;
    case 800u: goto L_0894B7CC;
    case 801u: goto L_0894B7D8;
    case 802u: goto L_0894B7E8;
    case 803u: goto L_0894B7F8;
    case 804u: goto L_0894B804;
    case 805u: goto L_0894B82C;
    case 806u: goto L_0894B850;
    case 807u: goto L_0894B858;
    case 808u: goto L_0894B864;
    case 809u: goto L_0894B86C;
    case 810u: goto L_0894B874;
    case 811u: goto L_0894B884;
    case 812u: goto L_0894B890;
    case 813u: goto L_0894B89C;
    case 814u: goto L_0894B8A4;
    case 815u: goto L_0894B8AC;
    case 816u: goto L_0894B8BC;
    case 817u: goto L_0894B8C4;
    case 818u: goto L_0894B8D0;
    case 819u: goto L_0894B8D8;
    case 820u: goto L_0894B8F0;
    case 821u: goto L_0894B8FC;
    case 822u: goto L_0894B904;
    case 823u: goto L_0894B90C;
    case 824u: goto L_0894B918;
    case 825u: goto L_0894B928;
    case 826u: goto L_0894B938;
    case 827u: goto L_0894B944;
    case 828u: goto L_0894B960;
    case 829u: goto L_0894B97C;
    case 830u: goto L_0894B98C;
    case 831u: goto L_0894B9A4;
    case 832u: goto L_0894B9AC;
    case 833u: goto L_0894B9C0;
    case 834u: goto L_0894B9C8;
    case 835u: goto L_0894B9D0;
    case 836u: goto L_0894B9D8;
    case 837u: goto L_0894B9E8;
    case 838u: goto L_0894B9EC;
    case 839u: goto L_0894B9F8;
    case 840u: goto L_0894BA04;
    case 841u: goto L_0894BA28;
    case 842u: goto L_0894BA30;
    case 843u: goto L_0894BA38;
    case 844u: goto L_0894BA6C;
    case 845u: goto L_0894BA98;
    case 846u: goto L_0894BAD8;
    case 847u: goto L_0894BAE8;
    case 848u: goto L_0894BAF4;
    case 849u: goto L_0894BAFC;
    case 850u: goto L_0894BB04;
    case 851u: goto L_0894BB24;
    case 852u: goto L_0894BB34;
    case 853u: goto L_0894BB44;
    case 854u: goto L_0894BB54;
    case 855u: goto L_0894BB5C;
    case 856u: goto L_0894BB64;
    case 857u: goto L_0894BB80;
    case 858u: goto L_0894BB98;
    case 859u: goto L_0894BBC0;
    case 860u: goto L_0894BBDC;
    case 861u: goto L_0894BBEC;
    case 862u: goto L_0894BBFC;
    case 863u: goto L_0894BC1C;
    case 864u: goto L_0894BC24;
    case 865u: goto L_0894BC48;
    case 866u: goto L_0894BC50;
    case 867u: goto L_0894BC64;
    case 868u: goto L_0894BC80;
    case 869u: goto L_0894BCA0;
    case 870u: goto L_0894BCC4;
    case 871u: goto L_0894BCCC;
    case 872u: goto L_0894BCDC;
    case 873u: goto L_0894BCF4;
    case 874u: goto L_0894BD00;
    case 875u: goto L_0894BD10;
    case 876u: goto L_0894BD1C;
    case 877u: goto L_0894BD24;
    case 878u: goto L_0894BD2C;
    case 879u: goto L_0894BD38;
    case 880u: goto L_0894BD48;
    case 881u: goto L_0894BD50;
    case 882u: goto L_0894BD5C;
    case 883u: goto L_0894BD60;
    case 884u: goto L_0894BDC4;
    case 885u: goto L_0894BDD0;
    case 886u: goto L_0894BDE0;
    case 887u: goto L_0894BDF4;
    case 888u: goto L_0894BE04;
    case 889u: goto L_0894BE18;
    case 890u: goto L_0894BE24;
    case 891u: goto L_0894BE2C;
    case 892u: goto L_0894BE34;
    case 893u: goto L_0894BE3C;
    case 894u: goto L_0894BE44;
    case 895u: goto L_0894BE4C;
    case 896u: goto L_0894BE50;
    case 897u: goto L_0894BE5C;
    case 898u: goto L_0894BE84;
    case 899u: goto L_0894BE94;
    case 900u: goto L_0894BE9C;
    case 901u: goto L_0894BEAC;
    case 902u: goto L_0894BEB4;
    case 903u: goto L_0894BEF4;
    case 904u: goto L_0894BF30;
    case 905u: goto L_0894BF38;
    case 906u: goto L_0894BF50;
    case 907u: goto L_0894BF58;
    case 908u: goto L_0894BF60;
    case 909u: goto L_0894BF90;
    case 910u: goto L_0894BFA0;
    case 911u: goto L_0894BFB4;
    case 912u: goto L_0894BFC8;
    case 913u: goto L_0894BFDC;
    case 914u: goto L_0894BFF0;
    case 915u: goto L_0894BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08948000:
    ctx.gpr[31] = (0x08948008u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08948008u) goto L_08948008;
    return;
L_08948008:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(62)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    goto L_08948014;
L_08948014:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 842u, 0x08947EB8u>(ctx, &aot_mem); return;
      }
      goto L_0894801C;
    }
L_0894801C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08948020;
L_08948020:
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
L_08948040:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3304)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948048:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089480FC;
      }
      goto L_08948068;
    }
L_08948068:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (2236u << 16u);
      if (branch_taken) {
          goto L_089480C0;
      }
      goto L_08948074;
    }
L_08948074:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (2236u << 16u);
      if (branch_taken) {
          goto L_089480C0;
      }
      goto L_08948084;
    }
L_08948084:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32304));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[7] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08948104;
      }
      goto L_089480BC;
    }
L_089480BC:
    ctx.gpr[16] = (2236u << 16u);
    goto L_089480C0;
L_089480C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (7168u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089480DCu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 518u, 0x08926088u>(ctx, &aot_mem) && ctx.pc == 0x089480DCu) goto L_089480DC;
    return;
L_089480DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (7168u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08948104;
      }
      goto L_089480FC;
    }
L_089480FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948104;
      }
      goto L_08948104;
    }
L_08948104:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948114:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089481D0;
      }
      goto L_08948134;
    }
L_08948134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08948150u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948150u) goto L_08948150;
    return;
L_08948150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08948168u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948168u) goto L_08948168;
    return;
L_08948168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089481BC;
      }
      goto L_08948180;
    }
L_08948180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08948198u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948198u) goto L_08948198;
    return;
L_08948198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x089481BCu);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089481BCu) goto L_089481BC;
    return;
L_089481BC:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x089481C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 588u, 0x08A1BE00u>(ctx, &aot_mem) && ctx.pc == 0x089481C8u) goto L_089481C8;
    return;
L_089481C8:
    ctx.gpr[31] = (0x089481D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 606u, 0x08A17A04u>(ctx, &aot_mem) && ctx.pc == 0x089481D0u) goto L_089481D0;
    return;
L_089481D0:
    ctx.gpr[31] = (0x089481D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 438u, 0x088E34ECu>(ctx, &aot_mem) && ctx.pc == 0x089481D8u) goto L_089481D8;
    return;
L_089481D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
      if (branch_taken) {
          goto L_089481F4;
      }
      goto L_089481F0;
    }
L_089481F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3332), 0u);
    goto L_089481F4;
L_089481F4:
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948210;
      }
      goto L_08948200;
    }
L_08948200:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1716), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    goto L_08948210;
L_08948210:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948224:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08948244;
L_08948244:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3176)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08948268;
      }
      goto L_08948250;
    }
L_08948250:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08948244;
      }
      goto L_08948260;
    }
L_08948260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948270;
      }
      goto L_08948268;
    }
L_08948268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089482AC;
      }
      goto L_08948270;
    }
L_08948270:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08948278;
L_08948278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[31] = (0x08948284u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3176)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem) && ctx.pc == 0x08948284u) goto L_08948284;
    return;
L_08948284:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089482A4;
      }
      goto L_0894828C;
    }
L_0894828C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08948278;
      }
      goto L_0894829C;
    }
L_0894829C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089482AC;
      }
      goto L_089482A4;
    }
L_089482A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3176), ctx.gpr[16]);
      if (branch_taken) {
          goto L_089482AC;
      }
      goto L_089482AC;
    }
L_089482AC:
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
L_089482C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089482F8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 519u, 0x08946B3Cu>(ctx, &aot_mem) && ctx.pc == 0x089482F8u) goto L_089482F8;
    return;
L_089482F8:
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2288));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08948330;
      }
      goto L_08948328;
    }
L_08948328:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0894835C;
      }
      goto L_08948330;
    }
L_08948330:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1272)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948358;
      }
      goto L_08948344;
    }
L_08948344:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3264)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894835C;
      }
      goto L_08948358;
    }
L_08948358:
    ctx.gpr[18] = (0u | 1u);
    goto L_0894835C;
L_0894835C:
    ctx.gpr[31] = (0x08948364u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 434u, 0x0898D300u>(ctx, &aot_mem) && ctx.pc == 0x08948364u) goto L_08948364;
    return;
L_08948364:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894839C;
      }
      goto L_0894836C;
    }
L_0894836C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894839C;
      }
      goto L_08948374;
    }
L_08948374:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1272)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08948394;
    }
    goto L_08948394;
L_08948394:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08948410;
      }
      goto L_0894839C;
    }
L_0894839C:
    ctx.gpr[31] = (0x089483A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 543u, 0x0898D7C0u>(ctx, &aot_mem) && ctx.pc == 0x089483A4u) goto L_089483A4;
    return;
L_089483A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1272)));
      if (branch_taken) {
          goto L_089483DC;
      }
      goto L_089483AC;
    }
L_089483AC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089483DC;
      }
      goto L_089483B4;
    }
L_089483B4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_089483D4;
    }
    goto L_089483D4;
L_089483D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08948410;
      }
      goto L_089483DC;
    }
L_089483DC:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948410;
      }
      goto L_089483EC;
    }
L_089483EC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_0894840C;
    }
    goto L_0894840C;
L_0894840C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08948410;
L_08948410:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08948434;
      }
      goto L_08948428;
    }
L_08948428:
    ctx.fpr[24] = ctx.fpr[12] / ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08948454;
      }
      goto L_08948434;
    }
L_08948434:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948454;
      }
      goto L_08948444;
    }
L_08948444:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948454;
      }
      goto L_0894844C;
    }
L_0894844C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08948454;
L_08948454:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089484A4;
      }
      goto L_08948464;
    }
L_08948464:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08948474u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 597u, 0x089470B0u>(ctx, &aot_mem) && ctx.pc == 0x08948474u) goto L_08948474;
    return;
L_08948474:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089484A0;
      }
      goto L_0894847C;
    }
L_0894847C:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08948490;
    }
    goto L_08948490;
L_08948490:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[22];
      if (branch_taken) {
          goto L_089484A8;
      }
      goto L_089484A0;
    }
L_089484A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1272), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089484A4;
L_089484A4:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089484A8;
L_089484A8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
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
L_089484D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1272)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17968)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08948528;
      }
      goto L_089484E8;
    }
L_089484E8:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
        goto L_08948508;
    }
    goto L_08948508;
L_08948508:
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2288));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08948544;
      }
      goto L_08948528;
    }
L_08948528:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948544;
      }
      goto L_08948538;
    }
L_08948538:
    ctx.gpr[4] = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08948544;
      }
      goto L_08948544;
    }
L_08948544:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894854C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08948554;
      }
      goto L_08948554;
    }
L_08948554:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894855C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948568:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894857C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1396));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 32u);
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
      if (branch_taken) {
          goto L_089485C8;
      }
      goto L_089485B0;
    }
L_089485B0:
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089485C0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 167u, 0x08A1D018u>(ctx, &aot_mem) && ctx.pc == 0x089485C0u) goto L_089485C0;
    return;
L_089485C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08948664;
      }
      goto L_089485C8;
    }
L_089485C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089485E8;
      }
      goto L_089485D8;
    }
L_089485D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08948600;
      }
      goto L_089485E8;
    }
L_089485E8:
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089485F8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 167u, 0x08A1D018u>(ctx, &aot_mem) && ctx.pc == 0x089485F8u) goto L_089485F8;
    return;
L_089485F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08948664;
      }
      goto L_08948600;
    }
L_08948600:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08948628;
      }
      goto L_08948610;
    }
L_08948610:
    ctx.gpr[5] = (0u | 46u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08948620u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 167u, 0x08A1D018u>(ctx, &aot_mem) && ctx.pc == 0x08948620u) goto L_08948620;
    return;
L_08948620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08948664;
      }
      goto L_08948628;
    }
L_08948628:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08948650;
      }
      goto L_08948638;
    }
L_08948638:
    ctx.gpr[5] = (0u | 47u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08948648u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 167u, 0x08A1D018u>(ctx, &aot_mem) && ctx.pc == 0x08948648u) goto L_08948648;
    return;
L_08948648:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08948664;
      }
      goto L_08948650;
    }
L_08948650:
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08948660u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 167u, 0x08A1D018u>(ctx, &aot_mem) && ctx.pc == 0x08948660u) goto L_08948660;
    return;
L_08948660:
    ctx.gpr[2] = (0u | 0u);
    goto L_08948664;
L_08948664:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948670:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894868Cu);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 846u, 0x08907B5Cu>(ctx, &aot_mem) && ctx.pc == 0x0894868Cu) goto L_0894868C;
    return;
L_0894868C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089486C8;
      }
      goto L_08948698;
    }
L_08948698:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089486C8;
      }
      goto L_089486A0;
    }
L_089486A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089486B4;
      }
      goto L_089486AC;
    }
L_089486AC:
    ctx.gpr[31] = (0x089486B4u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(3332));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x089486B4u) goto L_089486B4;
    return;
L_089486B4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3332), ctx.gpr[16]);
      if (branch_taken) {
          goto L_089486C8;
      }
      goto L_089486BC;
    }
L_089486BC:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(3332));
    ctx.gpr[31] = (0x089486C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x089486C8u) goto L_089486C8;
    return;
L_089486C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089486DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894872C;
      }
      goto L_089486F0;
    }
L_089486F0:
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
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
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08948714u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 121u, 0x08804E00u>(ctx, &aot_mem) && ctx.pc == 0x08948714u) goto L_08948714;
    return;
L_08948714:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948724;
      }
      goto L_0894871C;
    }
L_0894871C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08948730;
      }
      goto L_08948724;
    }
L_08948724:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08948730;
      }
      goto L_0894872C;
    }
L_0894872C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08948730;
L_08948730:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894873C:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3340)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (4u << 16u);
      if (branch_taken) {
          goto L_08948794;
      }
      goto L_08948758;
    }
L_08948758:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 16u);
      if (branch_taken) {
          goto L_08948788;
      }
      goto L_08948770;
    }
L_08948770:
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948788;
      }
      goto L_08948780;
    }
L_08948780:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08948798;
      }
      goto L_08948788;
    }
L_08948788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948758;
      }
      goto L_08948794;
    }
L_08948794:
    ctx.gpr[2] = (0u | 0u);
    goto L_08948798;
L_08948798:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089487A0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089487C0;
      }
      goto L_089487AC;
    }
L_089487AC:
    ctx.gpr[5] = (17658u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08948890;
      }
      goto L_089487C0;
    }
L_089487C0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3264)));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3268)));
      if (branch_taken) {
          goto L_08948844;
      }
      goto L_089487DC;
    }
L_089487DC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(333)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948844;
      }
      goto L_0894880C;
    }
L_0894880C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3261))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948844;
      }
      goto L_0894881C;
    }
L_0894881C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3264), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08948844;
L_08948844:
    ctx.gpr[5] = (17402u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948890;
      }
      goto L_0894885C;
    }
L_0894885C:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3160)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3268), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (17658u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948890;
      }
      goto L_08948880;
    }
L_08948880:
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08948890;
L_08948890:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948898:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24920)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3264)));
      if (branch_taken) {
          goto L_089488BC;
      }
      goto L_089488A4;
    }
L_089488A4:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    goto L_089488BC;
L_089488BC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3160)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089488EC;
      }
      goto L_089488D0;
    }
L_089488D0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[5] = (16128u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089488EC;
L_089488EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089488F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08948920u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 114u, 0x0898C4ECu>(ctx, &aot_mem) && ctx.pc == 0x08948920u) goto L_08948920;
    return;
L_08948920:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08948930u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 124u, 0x0898C578u>(ctx, &aot_mem) && ctx.pc == 0x08948930u) goto L_08948930;
    return;
L_08948930:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08948950u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 561u, 0x08A8EF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08948950u) goto L_08948950;
    return;
L_08948950:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = ctx.fpr[14] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16457u << 16u);
      if (branch_taken) {
          goto L_089489DC;
      }
      goto L_0894897C;
    }
L_0894897C:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1968)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[31] = (0x089489B0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 543u, 0x0898D7C0u>(ctx, &aot_mem) && ctx.pc == 0x089489B0u) goto L_089489B0;
    return;
L_089489B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (17008u << 16u);
      if (branch_taken) {
          goto L_089489DC;
      }
      goto L_089489B8;
    }
L_089489B8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089489DC;
      }
      goto L_089489CC;
    }
L_089489CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_089489DC;
L_089489DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089489F4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089489F4u) goto L_089489F4;
    return;
L_089489F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08948A0Cu);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948A0Cu) goto L_08948A0C;
    return;
L_08948A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08948AF0;
      }
      goto L_08948A20;
    }
L_08948A20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x08948A40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08948A40u) goto L_08948A40;
    return;
L_08948A40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948A70;
      }
      goto L_08948A58;
    }
L_08948A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948AF0;
      }
      goto L_08948A70;
    }
L_08948A70:
    ctx.gpr[31] = (0x08948A78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 508u, 0x0898D640u>(ctx, &aot_mem) && ctx.pc == 0x08948A78u) goto L_08948A78;
    return;
L_08948A78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948AF0;
      }
      goto L_08948A80;
    }
L_08948A80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3257)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08948AB4;
      }
      goto L_08948A8C;
    }
L_08948A8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3172)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948AB4;
      }
      goto L_08948A98;
    }
L_08948A98:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08948AA8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 550u, 0x0891ECB8u>(ctx, &aot_mem) && ctx.pc == 0x08948AA8u) goto L_08948AA8;
    return;
L_08948AA8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3257), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3172), 0u);
      if (branch_taken) {
          goto L_08948AF0;
      }
      goto L_08948AB4;
    }
L_08948AB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08948AE0;
      }
      goto L_08948AC4;
    }
L_08948AC4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08948AD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 765u, 0x0892FCA4u>(ctx, &aot_mem) && ctx.pc == 0x08948AD0u) goto L_08948AD0;
    return;
L_08948AD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948AE0;
      }
      goto L_08948ADC;
    }
L_08948ADC:
    ctx.gpr[17] = (0u | 0u);
    goto L_08948AE0;
L_08948AE0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948AF0;
      }
      goto L_08948AE8;
    }
L_08948AE8:
    ctx.gpr[31] = (0x08948AF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 513u, 0x0890E2FCu>(ctx, &aot_mem) && ctx.pc == 0x08948AF0u) goto L_08948AF0;
    return;
L_08948AF0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948B10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1968)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08948B54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 114u, 0x0898C4ECu>(ctx, &aot_mem) && ctx.pc == 0x08948B54u) goto L_08948B54;
    return;
L_08948B54:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08948B64u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 124u, 0x0898C578u>(ctx, &aot_mem) && ctx.pc == 0x08948B64u) goto L_08948B64;
    return;
L_08948B64:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[20] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948BF4;
      }
      goto L_08948BA0;
    }
L_08948BA0:
    ctx.gpr[31] = (0x08948BA8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x08948BA8u) goto L_08948BA8;
    return;
L_08948BA8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3156)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948BE8;
      }
      goto L_08948BD8;
    }
L_08948BD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3156)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08948BEC;
      }
      goto L_08948BE8;
    }
L_08948BE8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08948BEC;
L_08948BEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948BF8;
      }
      goto L_08948BF4;
    }
L_08948BF4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08948BF8;
L_08948BF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08948C18;
      }
      goto L_08948C08;
    }
L_08948C08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08948C20;
      }
      goto L_08948C18;
    }
L_08948C18:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08948C20;
L_08948C20:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948DC0;
      }
      goto L_08948C28;
    }
L_08948C28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948DAC;
      }
      goto L_08948C38;
    }
L_08948C38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948DC0;
      }
      goto L_08948C50;
    }
L_08948C50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948DC0;
      }
      goto L_08948C60;
    }
L_08948C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_08948C8C;
      }
      goto L_08948C70;
    }
L_08948C70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948DC0;
      }
      goto L_08948C8C;
    }
L_08948C8C:
    ctx.gpr[31] = (0x08948C94u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(264)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08948C94u) goto L_08948C94;
    return;
L_08948C94:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08948CA4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08948CA4u) goto L_08948CA4;
    return;
L_08948CA4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17956)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17960)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08948CB8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08948CB8u) goto L_08948CB8;
    return;
L_08948CB8:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08948CCCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08948CCCu) goto L_08948CCC;
    return;
L_08948CCC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08948DC0;
      }
      goto L_08948CD4;
    }
L_08948CD4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
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
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948DC0;
      }
      goto L_08948D04;
    }
L_08948D04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2256)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (15502u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64012u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49216u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08948DA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x08948DA4u) goto L_08948DA4;
    return;
L_08948DA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948DC0;
      }
      goto L_08948DAC;
    }
L_08948DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948DC0;
      }
      goto L_08948DBC;
    }
L_08948DBC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08948DC0;
L_08948DC0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08948DCCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08949D80;
L_08948DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08948DF8;
      }
      goto L_08948DDC;
    }
L_08948DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[31] = (0x08948DE8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 302u, 0x0881DF8Cu>(ctx, &aot_mem) && ctx.pc == 0x08948DE8u) goto L_08948DE8;
    return;
L_08948DE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948DF8;
      }
      goto L_08948DF0;
    }
L_08948DF0:
    ctx.gpr[31] = (0x08948DF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0894BEF4;
L_08948DF8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08948E04u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 548u, 0x0894ECE8u>(ctx, &aot_mem) && ctx.pc == 0x08948E04u) goto L_08948E04;
    return;
L_08948E04:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948E2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08948EE4;
      }
      goto L_08948E64;
    }
L_08948E64:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948ED8;
      }
      goto L_08948E78;
    }
L_08948E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 224u);
      if (branch_taken) {
          goto L_08948ED8;
      }
      goto L_08948E88;
    }
L_08948E88:
    ctx.gpr[5] = (0u | 27u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 225u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 226u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 227u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 148u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948EEC;
      }
      goto L_08948ED0;
    }
L_08948ED0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08948EFC;
      }
      goto L_08948ED8;
    }
L_08948ED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894916C;
      }
      goto L_08948EE4;
    }
L_08948EE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894916C;
      }
      goto L_08948EEC;
    }
L_08948EEC:
    ctx.gpr[31] = (0x08948EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08948EF4u) goto L_08948EF4;
    return;
L_08948EF4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08948EFC;
L_08948EFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17984)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08948F2Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 952u, 0x0898BB24u>(ctx, &aot_mem) && ctx.pc == 0x08948F2Cu) goto L_08948F2C;
    return;
L_08948F2C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1396));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08948F54;
      }
      goto L_08948F50;
    }
L_08948F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08948F54;
L_08948F54:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 30001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949100;
      }
      goto L_08948F60;
    }
L_08948F60:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08948F88;
      }
      goto L_08948F68;
    }
L_08948F68:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_08948F88;
      }
      goto L_08948F70;
    }
L_08948F70:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 13u);
      if (branch_taken) {
          goto L_08948F88;
      }
      goto L_08948F78;
    }
L_08948F78:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 14u);
      if (branch_taken) {
          goto L_08948F88;
      }
      goto L_08948F80;
    }
L_08948F80:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949100;
      }
      goto L_08948F88;
    }
L_08948F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17984)));
    ctx.gpr[31] = (0x08948F94u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 556u, 0x08AD3328u>(ctx, &aot_mem) && ctx.pc == 0x08948F94u) goto L_08948F94;
    return;
L_08948F94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894916C;
      }
      goto L_08948FA0;
    }
L_08948FA0:
    ctx.gpr[31] = (0x08948FA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem) && ctx.pc == 0x08948FA8u) goto L_08948FA8;
    return;
L_08948FA8:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[22] = (0u | 40u);
      if (branch_taken) {
          goto L_08949020;
      }
      goto L_08948FB4;
    }
L_08948FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[21] = (1u << 16u);
    goto L_08948FBC;
L_08948FBC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08948FD0;
      }
      goto L_08948FC4;
    }
L_08948FC4:
    ctx.gpr[31] = (0x08948FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08948FCCu) goto L_08948FCC;
    return;
L_08948FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08948FD0;
L_08948FD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(316)));
    ctx.gpr[5] = (ctx.gpr[20] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949014;
      }
      goto L_08948FF8;
    }
L_08948FF8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949014;
      }
      goto L_0894900C;
    }
L_0894900C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08949020;
      }
      goto L_08949014;
    }
L_08949014:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948FBC;
      }
      goto L_08949020;
    }
L_08949020:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894916C;
      }
      goto L_08949028;
    }
L_08949028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
      if (branch_taken) {
          goto L_0894916C;
      }
      goto L_08949038;
    }
L_08949038:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894916C;
      }
      goto L_08949040;
    }
L_08949040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17952)));
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 25001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894916C;
      }
      goto L_08949054;
    }
L_08949054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089490F8;
      }
      goto L_08949064;
    }
L_08949064:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17940)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17944)));
    goto L_08949070;
L_08949070:
    ctx.gpr[31] = (0x08949078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08949078u) goto L_08949078;
    return;
L_08949078:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0894908Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0894908Cu) goto L_0894908C;
    return;
L_0894908C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17948)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
      if (branch_taken) {
          goto L_089490BC;
      }
      goto L_089490AC;
    }
L_089490AC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08949070;
      }
      goto L_089490B8;
    }
L_089490B8:
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
    goto L_089490BC;
L_089490BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (16640u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089490E8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x089490E8u) goto L_089490E8;
    return;
L_089490E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17948), ctx.gpr[18]);
    goto L_089490F8;
L_089490F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17952), ctx.gpr[19]);
      if (branch_taken) {
          goto L_0894916C;
      }
      goto L_08949100;
    }
L_08949100:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949168;
      }
      goto L_0894910C;
    }
L_0894910C:
    ctx.gpr[31] = (0x08949114u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem) && ctx.pc == 0x08949114u) goto L_08949114;
    return;
L_08949114:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (49408u << 16u);
      if (branch_taken) {
          goto L_08949150;
      }
      goto L_08949120;
    }
L_08949120:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08949124;
L_08949124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949144;
      }
      goto L_0894913C;
    }
L_0894913C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (0u | 1u);
    goto L_08949144;
L_08949144:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949124;
      }
      goto L_08949150;
    }
L_08949150:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894916C;
      }
      goto L_08949158;
    }
L_08949158:
    ctx.gpr[31] = (0x08949160u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17984)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 570u, 0x08AD3464u>(ctx, &aot_mem) && ctx.pc == 0x08949160u) goto L_08949160;
    return;
L_08949160:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894916C;
      }
      goto L_08949168;
    }
L_08949168:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17952), 0u);
    goto L_0894916C;
L_0894916C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949198:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08949410;
      }
      goto L_089491B8;
    }
L_089491B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949410;
      }
      goto L_089491C4;
    }
L_089491C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x089491E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x089491E4u) goto L_089491E4;
    return;
L_089491E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08949404;
      }
      goto L_08949210;
    }
L_08949210:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-9448)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949228:
    ctx.gpr[4] = (15589u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51450u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_08949238;
    }
L_08949238:
    ctx.gpr[4] = (15589u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51450u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_08949248;
    }
L_08949248:
    ctx.gpr[4] = (15589u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51450u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_08949258;
    }
L_08949258:
    ctx.gpr[4] = (15589u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51450u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_08949268;
    }
L_08949268:
    ctx.gpr[4] = (15506u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14868u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_08949278;
    }
L_08949278:
    ctx.gpr[4] = (15648u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55676u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_08949288;
    }
L_08949288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089492C8;
      }
      goto L_089492A4;
    }
L_089492A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 216u);
        goto L_089492B4;
    }
    goto L_089492B4;
L_089492B4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089492C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x089492C0u) goto L_089492C0;
    return;
L_089492C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089492E8;
      }
      goto L_089492C8;
    }
L_089492C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] & 8192u);
    ctx.gpr[17] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089492F8;
      }
      goto L_089492E0;
    }
L_089492E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894930C;
      }
      goto L_089492E8;
    }
L_089492E8:
    ctx.gpr[4] = (15561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_089492F8;
    }
L_089492F8:
    ctx.gpr[4] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_0894930C;
L_0894930C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949364;
      }
      goto L_08949314;
    }
L_08949314:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (0u | 215u);
      if (branch_taken) {
          goto L_0894933C;
      }
      goto L_08949320;
    }
L_08949320:
    ctx.gpr[4] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 218u);
        goto L_0894933C;
    }
    goto L_0894933C;
L_0894933C:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0894934Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0894934Cu) goto L_0894934C;
    return;
L_0894934C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949364;
      }
      goto L_08949354;
    }
L_08949354:
    ctx.gpr[4] = (15506u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14868u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_08949364;
    }
L_08949364:
    ctx.gpr[4] = (15648u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55676u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_08949374;
    }
L_08949374:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] & 8192u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_089493A0;
      }
      goto L_0894938C;
    }
L_0894938C:
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] & ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    goto L_089493A0;
L_089493A0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089493F8;
      }
      goto L_089493A8;
    }
L_089493A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 215u);
      if (branch_taken) {
          goto L_089493D0;
      }
      goto L_089493B4;
    }
L_089493B4:
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[6] = (ctx.gpr[17] & ctx.gpr[5]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 218u);
        goto L_089493D0;
    }
    goto L_089493D0;
L_089493D0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089493E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x089493E0u) goto L_089493E0;
    return;
L_089493E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089493F8;
      }
      goto L_089493E8;
    }
L_089493E8:
    ctx.gpr[4] = (15506u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14868u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_089493F8;
    }
L_089493F8:
    ctx.gpr[4] = (49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_08949404;
    }
L_08949404:
    ctx.gpr[4] = (49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_08949410;
    }
L_08949410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949404;
      }
      goto L_08949420;
    }
L_08949420:
    ctx.gpr[4] = (15589u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51450u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0894942C;
L_0894942C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949440:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1914)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_089494D4;
      }
      goto L_08949470;
    }
L_08949470:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08949478;
L_08949478:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08949488u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 571u, 0x089068C8u>(ctx, &aot_mem) && ctx.pc == 0x08949488u) goto L_08949488;
    return;
L_08949488:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089494C0;
      }
      goto L_08949490;
    }
L_08949490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
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
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 56u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089494C0u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 670u, 0x08A17F78u>(ctx, &aot_mem) && ctx.pc == 0x089494C0u) goto L_089494C0;
    return;
L_089494C0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08949478;
      }
      goto L_089494D4;
    }
L_089494D4:
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
L_089494F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894951Cu);
    ctx.gpr[6] = (0u | 141u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0894951Cu) goto L_0894951C;
    return;
L_0894951C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949640;
      }
      goto L_08949528;
    }
L_08949528:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949640;
      }
      goto L_08949540;
    }
L_08949540:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3156)));
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949640;
      }
      goto L_0894955C;
    }
L_0894955C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949640;
      }
      goto L_08949564;
    }
L_08949564:
    ctx.gpr[31] = (0x0894956Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 114u, 0x0898C4ECu>(ctx, &aot_mem) && ctx.pc == 0x0894956Cu) goto L_0894956C;
    return;
L_0894956C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089495A4;
      }
      goto L_08949584;
    }
L_08949584:
    ctx.gpr[31] = (0x0894958Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 124u, 0x0898C578u>(ctx, &aot_mem) && ctx.pc == 0x0894958Cu) goto L_0894958C;
    return;
L_0894958C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949640;
      }
      goto L_089495A4;
    }
L_089495A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089495B8u);
    ctx.gpr[7] = (0u | 138u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x089495B8u) goto L_089495B8;
    return;
L_089495B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[31] = (0x089495E0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 89u, 0x0889057Cu>(ctx, &aot_mem) && ctx.pc == 0x089495E0u) goto L_089495E0;
    return;
L_089495E0:
    ctx.gpr[5] = (2193u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089495F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6296));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x089495F4u) goto L_089495F4;
    return;
L_089495F4:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 43u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08949628;
      }
      goto L_0894961C;
    }
L_0894961C:
    ctx.gpr[5] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08949630;
      }
      goto L_08949628;
    }
L_08949628:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08949630;
L_08949630:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949640;
      }
      goto L_08949638;
    }
L_08949638:
    ctx.gpr[31] = (0x08949640u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08949640u) goto L_08949640;
    return;
L_08949640:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
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
L_0894965C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089497A8;
      }
      goto L_08949680;
    }
L_08949680:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089496BC;
      }
      goto L_0894968C;
    }
L_0894968C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089496F4;
      }
      goto L_08949694;
    }
L_08949694:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0894972C;
      }
      goto L_0894969C;
    }
L_0894969C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0894973C;
      }
      goto L_089496A4;
    }
L_089496A4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08949774;
      }
      goto L_089496AC;
    }
L_089496AC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089497A8;
      }
      goto L_089496BC;
    }
L_089496BC:
    ctx.gpr[4] = (16221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46039u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089497A8;
      }
      goto L_089496F4;
    }
L_089496F4:
    ctx.gpr[4] = (16221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46039u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089497A8;
      }
      goto L_0894972C;
    }
L_0894972C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089497A8;
      }
      goto L_0894973C;
    }
L_0894973C:
    ctx.gpr[4] = (16221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46039u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089497A8;
      }
      goto L_08949774;
    }
L_08949774:
    ctx.gpr[4] = (16221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46039u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089497A8;
L_089497A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089497B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08949824;
      }
      goto L_089497E0;
    }
L_089497E0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 24u);
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08949824;
    }
    goto L_089497F0;
L_089497F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 25u);
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08949824;
    }
    goto L_08949800;
L_08949800:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 26u);
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08949824;
    }
    goto L_08949810;
L_08949810:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 27u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08949828;
      }
      goto L_08949820;
    }
L_08949820:
    ctx.gpr[4] = (0u | 1u);
    goto L_08949824;
L_08949824:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08949828;
L_08949828:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949888;
      }
      goto L_08949830;
    }
L_08949830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949880;
      }
      goto L_08949840;
    }
L_08949840:
    ctx.gpr[31] = (0x08949848u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 575u, 0x0891241Cu>(ctx, &aot_mem) && ctx.pc == 0x08949848u) goto L_08949848;
    return;
L_08949848:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08949854u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08948114;
L_08949854:
    ctx.gpr[31] = (0x0894985Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0894985Cu) goto L_0894985C;
    return;
L_0894985C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08949868u);
    ctx.gpr[5] = (0u | 51u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08949868u) goto L_08949868;
    return;
L_08949868:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08949874u);
    ctx.gpr[5] = (0u | 51u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x08949874u) goto L_08949874;
    return;
L_08949874:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08949880u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 110u, 0x08A1CA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08949880u) goto L_08949880;
    return;
L_08949880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089498CC;
      }
      goto L_08949888;
    }
L_08949888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089498B8;
      }
      goto L_0894989C;
    }
L_0894989C:
    ctx.gpr[31] = (0x089498A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08948040;
L_089498A4:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089498B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 529u, 0x08911F98u>(ctx, &aot_mem) && ctx.pc == 0x089498B0u) goto L_089498B0;
    return;
L_089498B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089498CC;
      }
      goto L_089498B8;
    }
L_089498B8:
    ctx.gpr[31] = (0x089498C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08948040;
L_089498C0:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089498CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 20u, 0x08930380u>(ctx, &aot_mem) && ctx.pc == 0x089498CCu) goto L_089498CC;
    return;
L_089498CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089498DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08949910u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08949910u) goto L_08949910;
    return;
L_08949910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949A24;
      }
      goto L_08949928;
    }
L_08949928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949A24;
      }
      goto L_08949938;
    }
L_08949938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08949950u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08949950u) goto L_08949950;
    return;
L_08949950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0894996Cu);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894996Cu) goto L_0894996C;
    return;
L_0894996C:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089499F0;
      }
      goto L_08949978;
    }
L_08949978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (16095u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089499ACu);
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089499ACu) goto L_089499AC;
    return;
L_089499AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    ctx.gpr[31] = (0x089499B8u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x089499B8u) goto L_089499B8;
    return;
L_089499B8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089499F8;
      }
      goto L_089499D0;
    }
L_089499D0:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08949A24;
      }
      goto L_089499F0;
    }
L_089499F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949A24;
      }
      goto L_089499F8;
    }
L_089499F8:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949A24;
      }
      goto L_08949A08;
    }
L_08949A08:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08949A24;
L_08949A24:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949A38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08949A68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08949A68u) goto L_08949A68;
    return;
L_08949A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949A8C;
      }
      goto L_08949A80;
    }
L_08949A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949AA4;
      }
      goto L_08949A8C;
    }
L_08949A8C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949AAC;
      }
      goto L_08949A9C;
    }
L_08949A9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08949AB0;
      }
      goto L_08949AA4;
    }
L_08949AA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08949AB0;
      }
      goto L_08949AAC;
    }
L_08949AAC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08949AB0;
L_08949AB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949AC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08949B38;
      }
      goto L_08949AE8;
    }
L_08949AE8:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08949B1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08949B1Cu) goto L_08949B1C;
    return;
L_08949B1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949B40;
      }
      goto L_08949B30;
    }
L_08949B30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08949B44;
      }
      goto L_08949B38;
    }
L_08949B38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08949B44;
      }
      goto L_08949B40;
    }
L_08949B40:
    ctx.gpr[2] = (0u | 0u);
    goto L_08949B44;
L_08949B44:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949B54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08949C08;
      }
      goto L_08949B80;
    }
L_08949B80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x08949B9Cu);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08949B9Cu) goto L_08949B9C;
    return;
L_08949B9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2256)));
    ctx.gpr[31] = (0x08949BA8u);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x08949BA8u) goto L_08949BA8;
    return;
L_08949BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08949BB4u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08949BB4u) goto L_08949BB4;
    return;
L_08949BB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949C08;
      }
      goto L_08949BCC;
    }
L_08949BCC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
        goto L_08949BE4;
    }
    goto L_08949BE4;
L_08949BE4:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949C08;
      }
      goto L_08949C00;
    }
L_08949C00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08949C8C;
      }
      goto L_08949C08;
    }
L_08949C08:
    ctx.gpr[31] = (0x08949C10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08949C10u) goto L_08949C10;
    return;
L_08949C10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949C88;
      }
      goto L_08949C28;
    }
L_08949C28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08949C70;
    }
    goto L_08949C70;
L_08949C70:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949C88;
      }
      goto L_08949C80;
    }
L_08949C80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08949C8C;
      }
      goto L_08949C88;
    }
L_08949C88:
    ctx.gpr[2] = (0u | 1u);
    goto L_08949C8C;
L_08949C8C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949CA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08949CC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 427u, 0x08A39C74u>(ctx, &aot_mem) && ctx.pc == 0x08949CC8u) goto L_08949CC8;
    return;
L_08949CC8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2016));
    ctx.gpr[31] = (0x08949CD4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 455u, 0x08AD99CCu>(ctx, &aot_mem) && ctx.pc == 0x08949CD4u) goto L_08949CD4;
    return;
L_08949CD4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949CE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2076)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08949D70;
      }
      goto L_08949CFC;
    }
L_08949CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08949D24u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08949D24u) goto L_08949D24;
    return;
L_08949D24:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
        goto L_08949D48;
    }
    goto L_08949D48;
L_08949D48:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949D6C;
      }
      goto L_08949D68;
    }
L_08949D68:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_08949D6C;
L_08949D6C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08949D70;
L_08949D70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949D80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08949DB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08949DB8u) goto L_08949DB8;
    return;
L_08949DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949E20;
      }
      goto L_08949DD0;
    }
L_08949DD0:
    ctx.gpr[31] = (0x08949DD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 543u, 0x0898D7C0u>(ctx, &aot_mem) && ctx.pc == 0x08949DD8u) goto L_08949DD8;
    return;
L_08949DD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949E20;
      }
      goto L_08949DE0;
    }
L_08949DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949E04;
      }
      goto L_08949DEC;
    }
L_08949DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_08949E04;
      }
      goto L_08949DFC;
    }
L_08949DFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949E20;
      }
      goto L_08949E04;
    }
L_08949E04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949E20;
      }
      goto L_08949E14;
    }
L_08949E14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08949E20u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08949E20u) goto L_08949E20;
    return;
L_08949E20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949E34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x08949E74u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 838u, 0x08913670u>(ctx, &aot_mem) && ctx.pc == 0x08949E74u) goto L_08949E74;
    return;
L_08949E74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23360));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3261))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3232), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3236), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3312), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3316), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3320), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3332), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3336), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(2288));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(3200));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3340), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08949F1Cu);
    ctx.gpr[4] = (0u | 6320u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08949F1Cu) goto L_08949F1C;
    return;
L_08949F1C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08949F98;
      }
      goto L_08949F28;
    }
L_08949F28:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08949F38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 448u, 0x08A39E34u>(ctx, &aot_mem) && ctx.pc == 0x08949F38u) goto L_08949F38;
    return;
L_08949F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08949F44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 768u, 0x08887688u>(ctx, &aot_mem) && ctx.pc == 0x08949F44u) goto L_08949F44;
    return;
L_08949F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08949F50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 387u, 0x089F2360u>(ctx, &aot_mem) && ctx.pc == 0x08949F50u) goto L_08949F50;
    return;
L_08949F50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6000), 0u);
    ctx.gpr[31] = (0x08949F64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08949F64u) goto L_08949F64;
    return;
L_08949F64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08949F88;
      }
      goto L_08949F74;
    }
L_08949F74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[31] = (0x08949F80u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08949F80u) goto L_08949F80;
    return;
L_08949F80:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08949F88;
L_08949F88:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(6000), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    goto L_08949F98;
L_08949F98:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3292), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08949FA8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 390u, 0x089F23ACu>(ctx, &aot_mem) && ctx.pc == 0x08949FA8u) goto L_08949FA8;
    return;
L_08949FA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08949FC4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08949FC4u) goto L_08949FC4;
    return;
L_08949FC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-9));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3304), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08949FE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0894A1F0;
L_08949FE0:
    ctx.gpr[31] = (0x08949FE8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 890u, 0x08AB36D8u>(ctx, &aot_mem) && ctx.pc == 0x08949FE8u) goto L_08949FE8;
    return;
L_08949FE8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3152), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1929), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3261))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3272), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A010u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08948670;
L_0894A010:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A01Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0894A01Cu) goto L_0894A01C;
    return;
L_0894A01C:
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3261))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3268), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3257), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3172), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3164), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3261))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3261))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3228), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3240), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3244), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3248), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3252), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0894A0A0;
L_0894A0A0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3176), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0894A0A0;
      }
      goto L_0894A0B4;
    }
L_0894A0B4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 0u);
    goto L_0894A0C0;
L_0894A0C0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6096));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(6112), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(6116))))));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(6116), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0894A0C0;
      }
      goto L_0894A110;
    }
L_0894A110:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0894A118;
L_0894A118:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(6288), 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0894A118;
      }
      goto L_0894A134;
    }
L_0894A134:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(3328), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3280), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0894A154;
    }
    goto L_0894A148;
L_0894A148:
    ctx.gpr[31] = (0x0894A150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0894A150u) goto L_0894A150;
    return;
L_0894A150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0894A154;
L_0894A154:
    ctx.gpr[31] = (0x0894A15Cu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17904));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 690u, 0x0893ED4Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A15Cu) goto L_0894A15C;
    return;
L_0894A15C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17984), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3296), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3330), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3300), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3260), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0894A18Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 558u, 0x08946D54u>(ctx, &aot_mem) && ctx.pc == 0x0894A18Cu) goto L_0894A18C;
    return;
L_0894A18C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0894A1A8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894A1A8u) goto L_0894A1A8;
    return;
L_0894A1A8:
    ctx.gpr[31] = (0x0894A1B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08949CA8;
L_0894A1B0:
    ctx.gpr[31] = (0x0894A1B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 14u, 0x08B141E4u>(ctx, &aot_mem) && ctx.pc == 0x0894A1B8u) goto L_0894A1B8;
    return;
L_0894A1B8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894A1F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894A214u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08949CA8;
L_0894A214:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3261))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3258), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[31] = (0x0894A238u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2856));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 517u, 0x088BA728u>(ctx, &aot_mem) && ctx.pc == 0x0894A238u) goto L_0894A238;
    return;
L_0894A238:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3261))))));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-9));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3259), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3192), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0894A268u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A268u) goto L_0894A268;
    return;
L_0894A268:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0894A284u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x0894A284u) goto L_0894A284;
    return;
L_0894A284:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A290u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 60u, 0x089103CCu>(ctx, &aot_mem) && ctx.pc == 0x0894A290u) goto L_0894A290;
    return;
L_0894A290:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0894A2B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 44u, 0x089102D4u>(ctx, &aot_mem) && ctx.pc == 0x0894A2B0u) goto L_0894A2B0;
    return;
L_0894A2B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1368), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(304))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2196), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(640), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x0894A2E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 410u, 0x08909880u>(ctx, &aot_mem) && ctx.pc == 0x0894A2E4u) goto L_0894A2E4;
    return;
L_0894A2E4:
    ctx.gpr[31] = (0x0894A2ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0894A2ECu) goto L_0894A2EC;
    return;
L_0894A2EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A328;
      }
      goto L_0894A320;
    }
L_0894A320:
    ctx.gpr[31] = (0x0894A328u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem) && ctx.pc == 0x0894A328u) goto L_0894A328;
    return;
L_0894A328:
    ctx.gpr[31] = (0x0894A330u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 195u, 0x0886D420u>(ctx, &aot_mem) && ctx.pc == 0x0894A330u) goto L_0894A330;
    return;
L_0894A330:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A33Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0894A33Cu) goto L_0894A33C;
    return;
L_0894A33C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A348u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x0894A348u) goto L_0894A348;
    return;
L_0894A348:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A354u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x0894A354u) goto L_0894A354;
    return;
L_0894A354:
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(776), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (57344u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3257), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3172), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x0894A388u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0894BEF4;
L_0894A388:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3261))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A3CC;
      }
      goto L_0894A3B0;
    }
L_0894A3B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A3CC;
      }
      goto L_0894A3C0;
    }
L_0894A3C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_0894A3CC;
L_0894A3CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2120), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1892), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3304)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A430;
      }
      goto L_0894A3EC;
    }
L_0894A3EC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0894A3F8u);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 392u, 0x0882B994u>(ctx, &aot_mem) && ctx.pc == 0x0894A3F8u) goto L_0894A3F8;
    return;
L_0894A3F8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A41C;
      }
      goto L_0894A404;
    }
L_0894A404:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(134)));
    ctx.gpr[31] = (0x0894A418u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 351u, 0x0882B688u>(ctx, &aot_mem) && ctx.pc == 0x0894A418u) goto L_0894A418;
    return;
L_0894A418:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_0894A41C;
L_0894A41C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3304), ctx.gpr[19]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0894A430u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3304)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A430u) goto L_0894A430;
    return;
L_0894A430:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(3312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0894A458u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem) && ctx.pc == 0x0894A458u) goto L_0894A458;
    return;
L_0894A458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3304)));
    ctx.gpr[31] = (0x0894A464u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem) && ctx.pc == 0x0894A464u) goto L_0894A464;
    return;
L_0894A464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3304)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (65528u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3304)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3304)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A4D0;
      }
      goto L_0894A4BC;
    }
L_0894A4BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A4D0;
      }
      goto L_0894A4C8;
    }
L_0894A4C8:
    ctx.gpr[31] = (0x0894A4D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x0894A4D0u) goto L_0894A4D0;
    return;
L_0894A4D0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894A4F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (8u << 16u);
      if (branch_taken) {
          goto L_0894A564;
      }
      goto L_0894A53C;
    }
L_0894A53C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4203)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A564;
      }
      goto L_0894A548;
    }
L_0894A548:
    ctx.gpr[31] = (0x0894A550u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 519u, 0x08946B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A550u) goto L_0894A550;
    return;
L_0894A550:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A564;
      }
      goto L_0894A55C;
    }
L_0894A55C:
    ctx.gpr[31] = (0x0894A564u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 941u, 0x0898BA34u>(ctx, &aot_mem) && ctx.pc == 0x0894A564u) goto L_0894A564;
    return;
L_0894A564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[31] = (0x0894A570u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 391u, 0x089F23B4u>(ctx, &aot_mem) && ctx.pc == 0x0894A570u) goto L_0894A570;
    return;
L_0894A570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A594;
      }
      goto L_0894A580;
    }
L_0894A580:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3257)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0894A59C;
      }
      goto L_0894A58C;
    }
L_0894A58C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A5A8;
      }
      goto L_0894A594;
    }
L_0894A594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BEB4;
      }
      goto L_0894A59C;
    }
L_0894A59C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3257)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3257), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894A5A8;
L_0894A5A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3257)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A5B8;
      }
      goto L_0894A5B4;
    }
L_0894A5B4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3172), 0u);
    goto L_0894A5B8;
L_0894A5B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A5D4;
      }
      goto L_0894A5C4;
    }
L_0894A5C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_0894A5D4;
L_0894A5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0894A5E8;
      }
      goto L_0894A5E0;
    }
L_0894A5E0:
    ctx.gpr[31] = (0x0894A5E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894D4DCu>(ctx, &aot_mem) && ctx.pc == 0x0894A5E8u) goto L_0894A5E8;
    return;
L_0894A5E8:
    ctx.gpr[31] = (0x0894A5F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 653u, 0x08952DF0u>(ctx, &aot_mem) && ctx.pc == 0x0894A5F0u) goto L_0894A5F0;
    return;
L_0894A5F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A640;
      }
      goto L_0894A5FC;
    }
L_0894A5FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A640;
      }
      goto L_0894A61C;
    }
L_0894A61C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A640;
      }
      goto L_0894A630;
    }
L_0894A630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894A6E0;
      }
      goto L_0894A640;
    }
L_0894A640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[4] = (ctx.gpr[4] >> 22u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A6E0;
      }
      goto L_0894A664;
    }
L_0894A664:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (16608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0894A6A4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem) && ctx.pc == 0x0894A6A4u) goto L_0894A6A4;
    return;
L_0894A6A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A6D0;
      }
      goto L_0894A6B0;
    }
L_0894A6B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A6D0;
      }
      goto L_0894A6C0;
    }
L_0894A6C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894A6E0;
      }
      goto L_0894A6D0;
    }
L_0894A6D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    goto L_0894A6E0;
L_0894A6E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3261))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A734;
      }
      goto L_0894A6F0;
    }
L_0894A6F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3258)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0894A728;
      }
      goto L_0894A700;
    }
L_0894A700:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3258), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0894A714u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2856));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 517u, 0x088BA728u>(ctx, &aot_mem) && ctx.pc == 0x0894A714u) goto L_0894A714;
    return;
L_0894A714:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3261))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0894A734;
      }
      goto L_0894A728;
    }
L_0894A728:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3258)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3258), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894A734;
L_0894A734:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3258)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A76C;
      }
      goto L_0894A740;
    }
L_0894A740:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3258)));
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32304));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(2856));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x0894A76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 514u, 0x088BA6F0u>(ctx, &aot_mem) && ctx.pc == 0x0894A76Cu) goto L_0894A76C;
    return;
L_0894A76C:
    ctx.gpr[31] = (0x0894A774u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 832u, 0x0891FD10u>(ctx, &aot_mem) && ctx.pc == 0x0894A774u) goto L_0894A774;
    return;
L_0894A774:
    ctx.gpr[31] = (0x0894A77Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 687u, 0x08953184u>(ctx, &aot_mem) && ctx.pc == 0x0894A77Cu) goto L_0894A77C;
    return;
L_0894A77C:
    ctx.gpr[31] = (0x0894A784u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 402u, 0x0894DF44u>(ctx, &aot_mem) && ctx.pc == 0x0894A784u) goto L_0894A784;
    return;
L_0894A784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A7EC;
      }
      goto L_0894A7A0;
    }
L_0894A7A0:
    ctx.gpr[31] = (0x0894A7A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 519u, 0x08946B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A7A8u) goto L_0894A7A8;
    return;
L_0894A7A8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0894A7B4u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 897u, 0x08AB37C8u>(ctx, &aot_mem) && ctx.pc == 0x0894A7B4u) goto L_0894A7B4;
    return;
L_0894A7B4:
    ctx.gpr[31] = (0x0894A7BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 450u, 0x08A930F8u>(ctx, &aot_mem) && ctx.pc == 0x0894A7BCu) goto L_0894A7BC;
    return;
L_0894A7BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[22] = (0u | 58u);
      if (branch_taken) {
          goto L_0894A7F4;
      }
      goto L_0894A7E4;
    }
L_0894A7E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
      if (branch_taken) {
          goto L_0894A9F8;
      }
      goto L_0894A7EC;
    }
L_0894A7EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BEB4;
      }
      goto L_0894A7F4;
    }
L_0894A7F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x0894A814u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x0894A814u) goto L_0894A814;
    return;
L_0894A814:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (32u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 214u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 55u);
        goto L_0894A83C;
    }
    goto L_0894A83C;
L_0894A83C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A84Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0894A84Cu) goto L_0894A84C;
    return;
L_0894A84C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A970;
      }
      goto L_0894A858;
    }
L_0894A858:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894A970;
      }
      goto L_0894A878;
    }
L_0894A878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A970;
      }
      goto L_0894A888;
    }
L_0894A888:
    ctx.gpr[4] = (16102u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3244)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894A8E0;
      }
      goto L_0894A8B0;
    }
L_0894A8B0:
    ctx.gpr[4] = (15444u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (ctx.gpr[4] | 65012u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3244)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894A8E0;
      }
      goto L_0894A8DC;
    }
L_0894A8DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3244), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0894A8E0;
L_0894A8E0:
    ctx.gpr[31] = (0x0894A8E8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 412u, 0x0898D22Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A8E8u) goto L_0894A8E8;
    return;
L_0894A8E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A94C;
      }
      goto L_0894A8F0;
    }
L_0894A8F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0894A94C;
      }
      goto L_0894A914;
    }
L_0894A914:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894A94C;
      }
      goto L_0894A92C;
    }
L_0894A92C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0894A944u);
    ctx.gpr[6] = (0u | 191u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x0894A944u) goto L_0894A944;
    return;
L_0894A944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A9F4;
      }
      goto L_0894A94C;
    }
L_0894A94C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3244)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0894A968u);
    ctx.gpr[6] = (0u | 192u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x0894A968u) goto L_0894A968;
    return;
L_0894A968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A9F4;
      }
      goto L_0894A970;
    }
L_0894A970:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3244)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894A9F4;
      }
      goto L_0894A988;
    }
L_0894A988:
    ctx.gpr[4] = (16102u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3244)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (15172u << 16u);
      if (branch_taken) {
          goto L_0894A9C8;
      }
      goto L_0894A9A8;
    }
L_0894A9A8:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x0894A9C4u);
    ctx.gpr[6] = (0u | 193u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x0894A9C4u) goto L_0894A9C4;
    return;
L_0894A9C4:
    ctx.gpr[4] = (15172u << 16u);
    goto L_0894A9C8;
L_0894A9C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3244)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894A9F4;
      }
      goto L_0894A9F0;
    }
L_0894A9F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3244), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0894A9F4;
L_0894A9F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    goto L_0894A9F8;
L_0894A9F8:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894AA58;
      }
      goto L_0894AA1C;
    }
L_0894AA1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894AA58;
      }
      goto L_0894AA2C;
    }
L_0894AA2C:
    ctx.gpr[31] = (0x0894AA34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0894AA34u) goto L_0894AA34;
    return;
L_0894AA34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AA58;
      }
      goto L_0894AA3C;
    }
L_0894AA3C:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x0894AA58u);
    ctx.gpr[6] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x0894AA58u) goto L_0894AA58;
    return;
L_0894AA58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894ABB8;
      }
      goto L_0894AA64;
    }
L_0894AA64:
    ctx.gpr[31] = (0x0894AA6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 695u, 0x0894763Cu>(ctx, &aot_mem) && ctx.pc == 0x0894AA6Cu) goto L_0894AA6C;
    return;
L_0894AA6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894ABB8;
      }
      goto L_0894AA74;
    }
L_0894AA74:
    ctx.gpr[31] = (0x0894AA7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 739u, 0x089478B4u>(ctx, &aot_mem) && ctx.pc == 0x0894AA7Cu) goto L_0894AA7C;
    return;
L_0894AA7C:
    ctx.gpr[31] = (0x0894AA84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 743u, 0x08947928u>(ctx, &aot_mem) && ctx.pc == 0x0894AA84u) goto L_0894AA84;
    return;
L_0894AA84:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_0894AA94;
      }
      goto L_0894AA8C;
    }
L_0894AA8C:
    ctx.gpr[31] = (0x0894AA94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 745u, 0x08947944u>(ctx, &aot_mem) && ctx.pc == 0x0894AA94u) goto L_0894AA94;
    return;
L_0894AA94:
    ctx.gpr[31] = (0x0894AA9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 709u, 0x089476D8u>(ctx, &aot_mem) && ctx.pc == 0x0894AA9Cu) goto L_0894AA9C;
    return;
L_0894AA9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894ABB8;
      }
      goto L_0894AAA4;
    }
L_0894AAA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894ABB8;
      }
      goto L_0894AAB4;
    }
L_0894AAB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894ABB8;
      }
      goto L_0894AAD0;
    }
L_0894AAD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0894ABB8;
      }
      goto L_0894AADC;
    }
L_0894AADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (16968u << 16u);
      if (branch_taken) {
          goto L_0894ABB8;
      }
      goto L_0894AAEC;
    }
L_0894AAEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3300)));
      if (branch_taken) {
          goto L_0894AB34;
      }
      goto L_0894AB1C;
    }
L_0894AB1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894AB54;
      }
      goto L_0894AB34;
    }
L_0894AB34:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_0894AB54;
L_0894AB54:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3300), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894ABB8;
      }
      goto L_0894AB60;
    }
L_0894AB60:
    ctx.gpr[4] = (0u | 2000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3300), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17988)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0894ABA0;
      }
      goto L_0894AB8C;
    }
L_0894AB8C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0894ABB4;
      }
      goto L_0894ABA0;
    }
L_0894ABA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_0894ABB4;
L_0894ABB4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894ABB8;
L_0894ABB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AD20;
      }
      goto L_0894ABC4;
    }
L_0894ABC4:
    ctx.gpr[31] = (0x0894ABCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089486DC;
L_0894ABCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[16] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0894AC6C;
      }
      goto L_0894ABD4;
    }
L_0894ABD4:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3340)));
      if (branch_taken) {
          goto L_0894AC28;
      }
      goto L_0894AC08;
    }
L_0894AC08:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0894AC50;
      }
      goto L_0894AC28;
    }
L_0894AC28:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = ctx.fpr[17] / ctx.fpr[15];
    ctx.gpr[4] = (32768u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    goto L_0894AC50;
L_0894AC50:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (20352u << 16u);
      if (branch_taken) {
          goto L_0894AC60;
      }
      goto L_0894AC58;
    }
L_0894AC58:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0894AC60;
L_0894AC60:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894AC70;
      }
      goto L_0894AC6C;
    }
L_0894AC6C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3340), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_0894AC70;
L_0894AC70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3340)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894AD20;
      }
      goto L_0894AC84;
    }
L_0894AC84:
    ctx.gpr[31] = (0x0894AC8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0894AC8Cu) goto L_0894AC8C;
    return;
L_0894AC8C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
        goto L_0894ACE0;
    }
    goto L_0894AC94;
L_0894AC94:
    ctx.gpr[10] = (17530u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 47u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x0894ACB8u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem) && ctx.pc == 0x0894ACB8u) goto L_0894ACB8;
    return;
L_0894ACB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_0894ACD0;
    }
    goto L_0894ACC4;
L_0894ACC4:
    ctx.gpr[31] = (0x0894ACCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0894ACCCu) goto L_0894ACCC;
    return;
L_0894ACCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0894ACD0;
L_0894ACD0:
    ctx.gpr[31] = (0x0894ACD8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 698u, 0x089BB2F4u>(ctx, &aot_mem) && ctx.pc == 0x0894ACD8u) goto L_0894ACD8;
    return;
L_0894ACD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AD20;
      }
      goto L_0894ACE0;
    }
L_0894ACE0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(328));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x0894AD00u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894AD00u) goto L_0894AD00;
    return;
L_0894AD00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_0894AD18;
    }
    goto L_0894AD0C;
L_0894AD0C:
    ctx.gpr[31] = (0x0894AD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0894AD14u) goto L_0894AD14;
    return;
L_0894AD14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0894AD18;
L_0894AD18:
    ctx.gpr[31] = (0x0894AD20u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 698u, 0x089BB2F4u>(ctx, &aot_mem) && ctx.pc == 0x0894AD20u) goto L_0894AD20;
    return;
L_0894AD20:
    ctx.gpr[31] = (0x0894AD28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0894AD28u) goto L_0894AD28;
    return;
L_0894AD28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AD50;
      }
      goto L_0894AD30;
    }
L_0894AD30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AD50;
      }
      goto L_0894AD3C;
    }
L_0894AD3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894ADA8;
      }
      goto L_0894AD50;
    }
L_0894AD50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894AD88;
      }
      goto L_0894AD60;
    }
L_0894AD60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894AD88;
      }
      goto L_0894AD70;
    }
L_0894AD70:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894AD80u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08948898;
L_0894AD80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894ADA8;
      }
      goto L_0894AD88;
    }
L_0894AD88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894ADA8;
      }
      goto L_0894AD94;
    }
L_0894AD94:
    ctx.gpr[5] = (16025u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894ADA8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08948898;
L_0894ADA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0894ADCC;
      }
      goto L_0894ADB4;
    }
L_0894ADB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894ADE0;
      }
      goto L_0894ADC4;
    }
L_0894ADC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AE14;
      }
      goto L_0894ADCC;
    }
L_0894ADCC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894ADD8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08948114;
L_0894ADD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BEB4;
      }
      goto L_0894ADE0;
    }
L_0894ADE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894ADECu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08948114;
L_0894ADEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1768)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4000));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AE0C;
      }
      goto L_0894AE04;
    }
L_0894AE04:
    ctx.gpr[31] = (0x0894AE0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 854u, 0x0890B608u>(ctx, &aot_mem) && ctx.pc == 0x0894AE0Cu) goto L_0894AE0C;
    return;
L_0894AE0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BEB4;
      }
      goto L_0894AE14;
    }
L_0894AE14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B00C;
      }
      goto L_0894AE24;
    }
L_0894AE24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B00C;
      }
      goto L_0894AE34;
    }
L_0894AE34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AE58;
      }
      goto L_0894AE44;
    }
L_0894AE44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B004;
      }
      goto L_0894AE58;
    }
L_0894AE58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B004;
      }
      goto L_0894AE64;
    }
L_0894AE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(944));
    ctx.gpr[31] = (0x0894AE78u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 382u, 0x08B0D940u>(ctx, &aot_mem) && ctx.pc == 0x0894AE78u) goto L_0894AE78;
    return;
L_0894AE78:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0894B004;
      }
      goto L_0894AE80;
    }
L_0894AE80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894AE90u);
    ctx.gpr[6] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0894AE90u) goto L_0894AE90;
    return;
L_0894AE90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(564)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0894AFA8;
      }
      goto L_0894AEA4;
    }
L_0894AEA4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AFA8;
      }
      goto L_0894AEAC;
    }
L_0894AEAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894AEBCu);
    ctx.gpr[6] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0894AEBCu) goto L_0894AEBC;
    return;
L_0894AEBC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AFA8;
      }
      goto L_0894AEC8;
    }
L_0894AEC8:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
        goto L_0894AF38;
    }
    goto L_0894AED0;
L_0894AED0:
    ctx.gpr[31] = (0x0894AED8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem) && ctx.pc == 0x0894AED8u) goto L_0894AED8;
    return;
L_0894AED8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894AFA8;
      }
      goto L_0894AEF4;
    }
L_0894AEF4:
    ctx.gpr[31] = (0x0894AEFCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem) && ctx.pc == 0x0894AEFCu) goto L_0894AEFC;
    return;
L_0894AEFC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894AFA8;
      }
      goto L_0894AF14;
    }
L_0894AF14:
    ctx.gpr[31] = (0x0894AF1Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem) && ctx.pc == 0x0894AF1Cu) goto L_0894AF1C;
    return;
L_0894AF1C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894AFA8;
      }
      goto L_0894AF34;
    }
L_0894AF34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    goto L_0894AF38;
L_0894AF38:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(564));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AF78;
      }
      goto L_0894AF5C;
    }
L_0894AF5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0894AF70u);
    ctx.gpr[7] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x0894AF70u) goto L_0894AF70;
    return;
L_0894AF70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0894AF90;
      }
      goto L_0894AF78;
    }
L_0894AF78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0894AF8Cu);
    ctx.gpr[7] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x0894AF8Cu) goto L_0894AF8C;
    return;
L_0894AF8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0894AF90;
L_0894AF90:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894AFA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20648));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0894AFA0u) goto L_0894AFA0;
    return;
L_0894AFA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BEB4;
      }
      goto L_0894AFA8;
    }
L_0894AFA8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B004;
      }
      goto L_0894AFB0;
    }
L_0894AFB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B004;
      }
      goto L_0894AFBC;
    }
L_0894AFBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B004;
      }
      goto L_0894AFDC;
    }
L_0894AFDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(272));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (0u | 10u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0894B004u);
    ctx.gpr[6] = (0u | 75u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894B004u) goto L_0894B004;
    return;
L_0894B004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BEB4;
      }
      goto L_0894B00C;
    }
L_0894B00C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B024;
      }
      goto L_0894B018;
    }
L_0894B018:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B024u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x0894B024u) goto L_0894B024;
    return;
L_0894B024:
    ctx.gpr[31] = (0x0894B02Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08949440;
L_0894B02C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B048;
      }
      goto L_0894B03C;
    }
L_0894B03C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B048u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089494F0;
L_0894B048:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B0F0;
      }
      goto L_0894B050;
    }
L_0894B050:
    ctx.gpr[31] = (0x0894B058u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 419u, 0x0898D270u>(ctx, &aot_mem) && ctx.pc == 0x0894B058u) goto L_0894B058;
    return;
L_0894B058:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B0F0;
      }
      goto L_0894B060;
    }
L_0894B060:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x0894B088u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 274u, 0x08A1D7C4u>(ctx, &aot_mem) && ctx.pc == 0x0894B088u) goto L_0894B088;
    return;
L_0894B088:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B0F0;
      }
      goto L_0894B090;
    }
L_0894B090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B0F0;
      }
      goto L_0894B0A8;
    }
L_0894B0A8:
    ctx.gpr[4] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 30u);
      if (branch_taken) {
          goto L_0894B0BC;
      }
      goto L_0894B0B4;
    }
L_0894B0B4:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894B0D4;
      }
      goto L_0894B0BC;
    }
L_0894B0BC:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[31] = (0x0894B0CCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x0894B0CCu) goto L_0894B0CC;
    return;
L_0894B0CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B0F0;
      }
      goto L_0894B0D4;
    }
L_0894B0D4:
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894B0F0;
      }
      goto L_0894B0E0;
    }
L_0894B0E0:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (0u | 60u);
    ctx.gpr[31] = (0x0894B0F0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x0894B0F0u) goto L_0894B0F0;
    return;
L_0894B0F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 66 ? 1u : 0u);
      if (branch_taken) {
          goto L_0894B9AC;
      }
      goto L_0894B0FC;
    }
L_0894B0FC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B9AC;
      }
      goto L_0894B104;
    }
L_0894B104:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-9304)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B11C:
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2232)));
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.gpr[5] = (0u | 60u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[19] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_0894B154;
      }
      goto L_0894B13C;
    }
L_0894B13C:
    ctx.gpr[31] = (0x0894B144u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0894B144u) goto L_0894B144;
    return;
L_0894B144:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B154;
      }
      goto L_0894B14C;
    }
L_0894B14C:
    ctx.gpr[31] = (0x0894B154u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 610u, 0x089AE7A0u>(ctx, &aot_mem) && ctx.pc == 0x0894B154u) goto L_0894B154;
    return;
L_0894B154:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B9C0;
      }
      goto L_0894B15C;
    }
L_0894B15C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[6] = (0u | 30u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_0894B1BC;
      }
      goto L_0894B194;
    }
L_0894B194:
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B1BC;
      }
      goto L_0894B1A0;
    }
L_0894B1A0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B1D0;
      }
      goto L_0894B1A8;
    }
L_0894B1A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B1B4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 726u, 0x0894F970u>(ctx, &aot_mem) && ctx.pc == 0x0894B1B4u) goto L_0894B1B4;
    return;
L_0894B1B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B1D0;
      }
      goto L_0894B1BC;
    }
L_0894B1BC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B1D0;
      }
      goto L_0894B1C4;
    }
L_0894B1C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B1D0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 671u, 0x0894F578u>(ctx, &aot_mem) && ctx.pc == 0x0894B1D0u) goto L_0894B1D0;
    return;
L_0894B1D0:
    ctx.gpr[31] = (0x0894B1D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0894B1D8u) goto L_0894B1D8;
    return;
L_0894B1D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B1F4;
      }
      goto L_0894B1E0;
    }
L_0894B1E0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B1F4;
      }
      goto L_0894B1E8;
    }
L_0894B1E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B1F4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 79u, 0x08950880u>(ctx, &aot_mem) && ctx.pc == 0x0894B1F4u) goto L_0894B1F4;
    return;
L_0894B1F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B9C0;
      }
      goto L_0894B1FC;
    }
L_0894B1FC:
    ctx.gpr[31] = (0x0894B204u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x0894B204u) goto L_0894B204;
    return;
L_0894B204:
    ctx.gpr[31] = (0x0894B20Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x0894B20Cu) goto L_0894B20C;
    return;
L_0894B20C:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0894B218u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x0894B218u) goto L_0894B218;
    return;
L_0894B218:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[19] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_0894B24C;
      }
      goto L_0894B234;
    }
L_0894B234:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[19] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[21] = (0u | 12u);
    goto L_0894B24C;
L_0894B24C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B274;
      }
      goto L_0894B25C;
    }
L_0894B25C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_0894B284;
      }
      goto L_0894B264;
    }
L_0894B264:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_0894B294;
      }
      goto L_0894B26C;
    }
L_0894B26C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B2A8;
      }
      goto L_0894B274;
    }
L_0894B274:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894B2B0;
      }
      goto L_0894B284;
    }
L_0894B284:
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894B2B0;
      }
      goto L_0894B294;
    }
L_0894B294:
    ctx.gpr[4] = (16358u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894B2B0;
      }
      goto L_0894B2A8;
    }
L_0894B2A8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894B2B0;
L_0894B2B0:
    ctx.gpr[31] = (0x0894B2B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0894BEF4;
L_0894B2B8:
    ctx.gpr[31] = (0x0894B2C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 461u, 0x08916ABCu>(ctx, &aot_mem) && ctx.pc == 0x0894B2C0u) goto L_0894B2C0;
    return;
L_0894B2C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B2C8;
    }
L_0894B2C8:
    ctx.gpr[31] = (0x0894B2D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0894B2D0u) goto L_0894B2D0;
    return;
L_0894B2D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B2DCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x0894B2DCu) goto L_0894B2DC;
    return;
L_0894B2DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B9C0;
      }
      goto L_0894B2E4;
    }
L_0894B2E4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x0894B2F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x0894B2F0u) goto L_0894B2F0;
    return;
L_0894B2F0:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[31] = (0x0894B30Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x0894B30Cu) goto L_0894B30C;
    return;
L_0894B30C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[19] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_0894B354;
      }
      goto L_0894B344;
    }
L_0894B344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
        goto L_0894B360;
    }
    goto L_0894B354;
L_0894B354:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894B394;
      }
      goto L_0894B360;
    }
L_0894B360:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_0894B394;
      }
      goto L_0894B390;
    }
L_0894B390:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894B394;
L_0894B394:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B4D0;
      }
      goto L_0894B39C;
    }
L_0894B39C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B4D0;
      }
      goto L_0894B3A8;
    }
L_0894B3A8:
    ctx.gpr[31] = (0x0894B3B0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 489u, 0x0898D560u>(ctx, &aot_mem) && ctx.pc == 0x0894B3B0u) goto L_0894B3B0;
    return;
L_0894B3B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B4A0;
      }
      goto L_0894B3B8;
    }
L_0894B3B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
        goto L_0894B3EC;
    }
    goto L_0894B3C4;
L_0894B3C4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0894B3E0;
      }
      goto L_0894B3D0;
    }
L_0894B3D0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0894B3E4;
      }
      goto L_0894B3DC;
    }
L_0894B3DC:
    ctx.gpr[4] = (0u | 1u);
    goto L_0894B3E0;
L_0894B3E0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0894B3E4;
L_0894B3E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0894B424;
      }
      goto L_0894B3EC;
    }
L_0894B3EC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0894B400;
      }
      goto L_0894B3F4;
    }
L_0894B3F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(68))))));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0894B41C;
    }
    goto L_0894B400;
L_0894B400:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20))))));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_0894B420;
    }
    goto L_0894B40C;
L_0894B40C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(70))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0894B420;
      }
      goto L_0894B418;
    }
L_0894B418:
    ctx.gpr[4] = (0u | 1u);
    goto L_0894B41C;
L_0894B41C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0894B420;
L_0894B420:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0894B424;
L_0894B424:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B4A0;
      }
      goto L_0894B42C;
    }
L_0894B42C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(22))))));
        goto L_0894B460;
    }
    goto L_0894B438;
L_0894B438:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0894B454;
      }
      goto L_0894B444;
    }
L_0894B444:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(54))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0894B458;
      }
      goto L_0894B450;
    }
L_0894B450:
    ctx.gpr[4] = (0u | 1u);
    goto L_0894B454;
L_0894B454:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0894B458;
L_0894B458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0894B498;
      }
      goto L_0894B460;
    }
L_0894B460:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0894B474;
      }
      goto L_0894B468;
    }
L_0894B468:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(72))))));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0894B490;
    }
    goto L_0894B474;
L_0894B474:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_0894B494;
    }
    goto L_0894B480;
L_0894B480:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(74))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0894B494;
      }
      goto L_0894B48C;
    }
L_0894B48C:
    ctx.gpr[4] = (0u | 1u);
    goto L_0894B490;
L_0894B490:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0894B494;
L_0894B494:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0894B498;
L_0894B498:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B4D0;
      }
      goto L_0894B4A0;
    }
L_0894B4A0:
    ctx.gpr[31] = (0x0894B4A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0894B4A8u) goto L_0894B4A8;
    return;
L_0894B4A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B4C8;
      }
      goto L_0894B4B8;
    }
L_0894B4B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B4D0;
      }
      goto L_0894B4C8;
    }
L_0894B4C8:
    ctx.gpr[31] = (0x0894B4D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x0894B4D0u) goto L_0894B4D0;
    return;
L_0894B4D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B4DCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08949D80;
L_0894B4DC:
    ctx.gpr[31] = (0x0894B4E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0894BEF4;
L_0894B4E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B9C0;
      }
      goto L_0894B4EC;
    }
L_0894B4EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B4F8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08948114;
L_0894B4F8:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[19] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_0894B9C0;
      }
      goto L_0894B510;
    }
L_0894B510:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[19] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[20] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_0894B638;
      }
      goto L_0894B534;
    }
L_0894B534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 51u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B638;
      }
      goto L_0894B544;
    }
L_0894B544:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1396));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0894B5F8;
      }
      goto L_0894B564;
    }
L_0894B564:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 24u);
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[5] = (0u | 1u);
        goto L_0894B5F8;
    }
    goto L_0894B588;
L_0894B588:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 25u);
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[5] = (0u | 1u);
        goto L_0894B5F8;
    }
    goto L_0894B5AC;
L_0894B5AC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 26u);
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[5] = (0u | 1u);
        goto L_0894B5F8;
    }
    goto L_0894B5D0;
L_0894B5D0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 27u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0894B5FC;
      }
      goto L_0894B5F4;
    }
L_0894B5F4:
    ctx.gpr[5] = (0u | 1u);
    goto L_0894B5F8;
L_0894B5F8:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_0894B5FC;
L_0894B5FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B638;
      }
      goto L_0894B604;
    }
L_0894B604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B638;
      }
      goto L_0894B614;
    }
L_0894B614:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B620u);
    ctx.gpr[5] = (0u | 50u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0894B620u) goto L_0894B620;
    return;
L_0894B620:
    ctx.gpr[31] = (0x0894B628u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 261u, 0x0894D1B8u>(ctx, &aot_mem) && ctx.pc == 0x0894B628u) goto L_0894B628;
    return;
L_0894B628:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894B638;
L_0894B638:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B690;
      }
      goto L_0894B648;
    }
L_0894B648:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B690;
      }
      goto L_0894B658;
    }
L_0894B658:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3304)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0894B668u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 507u, 0x0894E79Cu>(ctx, &aot_mem) && ctx.pc == 0x0894B668u) goto L_0894B668;
    return;
L_0894B668:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894B690;
L_0894B690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B6AC;
      }
      goto L_0894B69C;
    }
L_0894B69C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B6AC;
    }
L_0894B6AC:
    ctx.gpr[22] = (2236u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(32304));
    ctx.gpr[31] = (0x0894B6BCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 274u, 0x08A1D7C4u>(ctx, &aot_mem) && ctx.pc == 0x0894B6BCu) goto L_0894B6BC;
    return;
L_0894B6BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B6E0;
      }
      goto L_0894B6C4;
    }
L_0894B6C4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B6CC;
    }
L_0894B6CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B6D8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 671u, 0x0894F578u>(ctx, &aot_mem) && ctx.pc == 0x0894B6D8u) goto L_0894B6D8;
    return;
L_0894B6D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B6E0;
    }
L_0894B6E0:
    ctx.gpr[31] = (0x0894B6E8u);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 124u, 0x08999134u>(ctx, &aot_mem) && ctx.pc == 0x0894B6E8u) goto L_0894B6E8;
    return;
L_0894B6E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B70C;
      }
      goto L_0894B6F0;
    }
L_0894B6F0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B6F8;
    }
L_0894B6F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B704u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08948B10;
L_0894B704:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B70C;
    }
L_0894B70C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B78C;
      }
      goto L_0894B71C;
    }
L_0894B71C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B724;
    }
L_0894B724:
    ctx.gpr[31] = (0x0894B72Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0894854C;
L_0894B72C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B764;
      }
      goto L_0894B734;
    }
L_0894B734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0894B74Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894B74Cu) goto L_0894B74C;
    return;
L_0894B74C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B778;
      }
      goto L_0894B764;
    }
L_0894B764:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B770u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089488F4;
L_0894B770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B778;
    }
L_0894B778:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B784u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 608u, 0x0894F028u>(ctx, &aot_mem) && ctx.pc == 0x0894B784u) goto L_0894B784;
    return;
L_0894B784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B78C;
    }
L_0894B78C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B86C;
      }
      goto L_0894B79C;
    }
L_0894B79C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B850;
      }
      goto L_0894B7AC;
    }
L_0894B7AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B850;
      }
      goto L_0894B7BC;
    }
L_0894B7BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 51u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B850;
      }
      goto L_0894B7CC;
    }
L_0894B7CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0894B850;
      }
      goto L_0894B7D8;
    }
L_0894B7D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B86C;
      }
      goto L_0894B7E8;
    }
L_0894B7E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B86C;
      }
      goto L_0894B7F8;
    }
L_0894B7F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B86C;
      }
      goto L_0894B804;
    }
L_0894B804:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B850;
      }
      goto L_0894B82C;
    }
L_0894B82C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B86C;
      }
      goto L_0894B850;
    }
L_0894B850:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B858;
    }
L_0894B858:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B864u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 778u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x0894B864u) goto L_0894B864;
    return;
L_0894B864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B86C;
    }
L_0894B86C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B874;
    }
L_0894B874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 51u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B884;
    }
L_0894B884:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B890u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 608u, 0x0894F028u>(ctx, &aot_mem) && ctx.pc == 0x0894B890u) goto L_0894B890;
    return;
L_0894B890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0894B8BC;
      }
      goto L_0894B89C;
    }
L_0894B89C:
    ctx.gpr[31] = (0x0894B8A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0894B8A4u) goto L_0894B8A4;
    return;
L_0894B8A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B8D0;
      }
      goto L_0894B8AC;
    }
L_0894B8AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B8D0;
      }
      goto L_0894B8BC;
    }
L_0894B8BC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B8D0;
      }
      goto L_0894B8C4;
    }
L_0894B8C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B8D0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 79u, 0x08950880u>(ctx, &aot_mem) && ctx.pc == 0x0894B8D0u) goto L_0894B8D0;
    return;
L_0894B8D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B9C0;
      }
      goto L_0894B8D8;
    }
L_0894B8D8:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[19] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_0894B8FC;
      }
      goto L_0894B8F0;
    }
L_0894B8F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B8FCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 608u, 0x0894F028u>(ctx, &aot_mem) && ctx.pc == 0x0894B8FCu) goto L_0894B8FC;
    return;
L_0894B8FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B9C0;
      }
      goto L_0894B904;
    }
L_0894B904:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B918;
      }
      goto L_0894B90C;
    }
L_0894B90C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B918u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 608u, 0x0894F028u>(ctx, &aot_mem) && ctx.pc == 0x0894B918u) goto L_0894B918;
    return;
L_0894B918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B97C;
      }
      goto L_0894B928;
    }
L_0894B928:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B938u);
    ctx.gpr[6] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0894B938u) goto L_0894B938;
    return;
L_0894B938:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B97C;
      }
      goto L_0894B944;
    }
L_0894B944:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894B97C;
      }
      goto L_0894B960;
    }
L_0894B960:
    ctx.gpr[8] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0894B97Cu);
    ctx.gpr[7] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0894B97Cu) goto L_0894B97C;
    return;
L_0894B97C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B9A4;
      }
      goto L_0894B98C;
    }
L_0894B98C:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[19] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_0894B9C0;
      }
      goto L_0894B9A4;
    }
L_0894B9A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BEB4;
      }
      goto L_0894B9AC;
    }
L_0894B9AC:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[19] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 12u);
    goto L_0894B9C0;
L_0894B9C0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BA28;
      }
      goto L_0894B9C8;
    }
L_0894B9C8:
    ctx.gpr[31] = (0x0894B9D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 627u, 0x08906E38u>(ctx, &aot_mem) && ctx.pc == 0x0894B9D0u) goto L_0894B9D0;
    return;
L_0894B9D0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
        goto L_0894B9EC;
    }
    goto L_0894B9D8;
L_0894B9D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894BA28;
      }
      goto L_0894B9E8;
    }
L_0894B9E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    goto L_0894B9EC;
L_0894B9EC:
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894BA28;
      }
      goto L_0894B9F8;
    }
L_0894B9F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BA04u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 469u, 0x0895238Cu>(ctx, &aot_mem) && ctx.pc == 0x0894BA04u) goto L_0894BA04;
    return;
L_0894BA04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x0894BA28u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 382u, 0x08A45F20u>(ctx, &aot_mem) && ctx.pc == 0x0894BA28u) goto L_0894BA28;
    return;
L_0894BA28:
    ctx.gpr[31] = (0x0894BA30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 581u, 0x08952994u>(ctx, &aot_mem) && ctx.pc == 0x0894BA30u) goto L_0894BA30;
    return;
L_0894BA30:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_0894BD2C;
      }
      goto L_0894BA38;
    }
L_0894BA38:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894BD2C;
      }
      goto L_0894BA6C;
    }
L_0894BA6C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BD2C;
      }
      goto L_0894BA98;
    }
L_0894BA98:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1736), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_0894BAE8;
      }
      goto L_0894BAD8;
    }
L_0894BAD8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894BAFC;
      }
      goto L_0894BAE8;
    }
L_0894BAE8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x0894BAF4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x0894BAF4u) goto L_0894BAF4;
    return;
L_0894BAF4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0894BAFC;
      }
      goto L_0894BAFC;
    }
L_0894BAFC:
    ctx.gpr[31] = (0x0894BB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0894BB04u) goto L_0894BB04;
    return;
L_0894BB04:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894BB54;
      }
      goto L_0894BB24;
    }
L_0894BB24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894BB54;
      }
      goto L_0894BB34;
    }
L_0894BB34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894BB54;
      }
      goto L_0894BB44;
    }
L_0894BB44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 63u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894BB64;
      }
      goto L_0894BB54;
    }
L_0894BB54:
    ctx.gpr[31] = (0x0894BB5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0894BB5Cu) goto L_0894BB5C;
    return;
L_0894BB5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BD2C;
      }
      goto L_0894BB64;
    }
L_0894BB64:
    ctx.gpr[4] = (16134u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16568u << 16u);
      if (branch_taken) {
          goto L_0894BD24;
      }
      goto L_0894BB80;
    }
L_0894BB80:
    ctx.gpr[4] = (ctx.gpr[4] | 20105u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16423u << 16u);
      if (branch_taken) {
          goto L_0894BD24;
      }
      goto L_0894BB98;
    }
L_0894BB98:
    ctx.gpr[4] = (ctx.gpr[4] | 36151u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[26]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894BC50;
      }
      goto L_0894BBC0;
    }
L_0894BBC0:
    ctx.gpr[4] = (16490u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 37504u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894BC50;
      }
      goto L_0894BBDC;
    }
L_0894BBDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0894BBECu);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0894BBECu) goto L_0894BBEC;
    return;
L_0894BBEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0894BBFCu);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0894BBFCu) goto L_0894BBFC;
    return;
L_0894BBFC:
    ctx.gpr[4] = (18804u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1720)));
    ctx.gpr[4] = (ctx.gpr[4] | 9200u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0894BC24;
      }
      goto L_0894BC1C;
    }
L_0894BC1C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_0894BC50;
      }
      goto L_0894BC24;
    }
L_0894BC24:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1720)));
    ctx.fpr[14] = ctx.fpr[26] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894BC50;
      }
      goto L_0894BC48;
    }
L_0894BC48:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_0894BC50;
      }
      goto L_0894BC50;
    }
L_0894BC50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0894BC64u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 430u, 0x08909990u>(ctx, &aot_mem) && ctx.pc == 0x0894BC64u) goto L_0894BC64;
    return;
L_0894BC64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
        goto L_0894BCA0;
    }
    goto L_0894BC80;
L_0894BC80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_0894BCC4;
      }
      goto L_0894BCA0;
    }
L_0894BCA0:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (32768u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    goto L_0894BCC4;
L_0894BCC4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_0894BCDC;
      }
      goto L_0894BCCC;
    }
L_0894BCCC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (16544u << 16u);
    goto L_0894BCDC;
L_0894BCDC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[24];
        goto L_0894BD00;
    }
    goto L_0894BCF4;
L_0894BCF4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894BD10;
      }
      goto L_0894BD00;
    }
L_0894BD00:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0894BD10;
L_0894BD10:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0894BD1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x0894BD1Cu) goto L_0894BD1C;
    return;
L_0894BD1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BD2C;
      }
      goto L_0894BD24;
    }
L_0894BD24:
    ctx.gpr[31] = (0x0894BD2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0894BD2Cu) goto L_0894BD2C;
    return;
L_0894BD2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(320)));
        goto L_0894BD60;
    }
    goto L_0894BD38;
L_0894BD38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(320)));
        goto L_0894BD60;
    }
    goto L_0894BD48;
L_0894BD48:
    ctx.gpr[31] = (0x0894BD50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0894BD50u) goto L_0894BD50;
    return;
L_0894BD50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BD5Cu);
    ctx.gpr[5] = (0u | 250u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x0894BD5Cu) goto L_0894BD5C;
    return;
L_0894BD5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(320)));
    goto L_0894BD60;
L_0894BD60:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(324)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[17];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894BE04;
      }
      goto L_0894BDC4;
    }
L_0894BDC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3272)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BDE0;
      }
      goto L_0894BDD0;
    }
L_0894BDD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3272), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894BE18;
      }
      goto L_0894BDE0;
    }
L_0894BDE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3272)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BE18;
      }
      goto L_0894BDF4;
    }
L_0894BDF4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3261))))));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0894BE18;
      }
      goto L_0894BE04;
    }
L_0894BE04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3261))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3272), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894BE18;
L_0894BE18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17963)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BE50;
      }
      goto L_0894BE24;
    }
L_0894BE24:
    ctx.gpr[31] = (0x0894BE2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0894BE2Cu) goto L_0894BE2C;
    return;
L_0894BE2C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0894BE50;
      }
      goto L_0894BE34;
    }
L_0894BE34:
    ctx.gpr[31] = (0x0894BE3Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0894BE3Cu) goto L_0894BE3C;
    return;
L_0894BE3C:
    ctx.gpr[31] = (0x0894BE44u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 489u, 0x0898D560u>(ctx, &aot_mem) && ctx.pc == 0x0894BE44u) goto L_0894BE44;
    return;
L_0894BE44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BE50;
      }
      goto L_0894BE4C;
    }
L_0894BE4C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17963), static_cast<std::uint8_t>(0u));
    goto L_0894BE50;
L_0894BE50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0894BE9C;
      }
      goto L_0894BE5C;
    }
L_0894BE5C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894BE94;
      }
      goto L_0894BE84;
    }
L_0894BE84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894BE9C;
      }
      goto L_0894BE94;
    }
L_0894BE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3252), ctx.gpr[4]);
    goto L_0894BE9C;
L_0894BE9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BEB4;
      }
      goto L_0894BEAC;
    }
L_0894BEAC:
    ctx.gpr[31] = (0x0894BEB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 73u, 0x08AD06ACu>(ctx, &aot_mem) && ctx.pc == 0x0894BEB4u) goto L_0894BEB4;
    return;
L_0894BEB4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894BEF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894BF30u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08948744;
L_0894BF30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BF58;
      }
      goto L_0894BF38;
    }
L_0894BF38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (14336u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] >> 27u);
    if (static_cast<std::int32_t>(ctx.gpr[5]) > 0) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
        goto L_0894BF60;
    }
    goto L_0894BF50;
L_0894BF50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BF90;
      }
      goto L_0894BF58;
    }
L_0894BF58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 220u, 0x0894CE08u>(ctx, &aot_mem); return;
      }
      goto L_0894BF60;
    }
L_0894BF60:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (51200u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] >> 27u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 27u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894BF90;
L_0894BF90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BFA0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0894BFA0u) goto L_0894BFA0;
    return;
L_0894BFA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BFB4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0894BFB4u) goto L_0894BFB4;
    return;
L_0894BFB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BFC8u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0894BFC8u) goto L_0894BFC8;
    return;
L_0894BFC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BFDCu);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0894BFDCu) goto L_0894BFDC;
    return;
L_0894BFDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BFF0u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0894BFF0u) goto L_0894BFF0;
    return;
L_0894BFF0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 3u, 0x0894C010u>(ctx, &aot_mem); return;
      }
      goto L_0894BFFC;
    }
L_0894BFFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x0894C000u; return;
}

void recomp_unit_0081(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0081_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_81(Runtime &runtime) {
    runtime.register_generated_unit(81u, 0x08948000u, 16384u, &recomp_unit_0081, &recomp_unit_0081_entry);
    runtime.register_function(0x08948000u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948008u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948014u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894801Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948020u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948040u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948048u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948068u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948074u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948084u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089480BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089480C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089480DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089480FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948104u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948114u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948134u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948150u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948168u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948180u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948198u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948200u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948210u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948224u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948244u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948250u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948260u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948268u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948270u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948278u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948284u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894828Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894829Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948328u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948330u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948344u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948358u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894835Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948364u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894836Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948374u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948394u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894839Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894840Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948410u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948428u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948434u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948444u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894844Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948454u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948464u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948474u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894847Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948490u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948508u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948528u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948538u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948544u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894854Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948554u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894855Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948568u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894857Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948600u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948610u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948620u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948628u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948638u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948648u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948650u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948660u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948664u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948670u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894868Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948698u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948714u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894871Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948724u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894872Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948730u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894873Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948744u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948758u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948770u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948780u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948788u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948794u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948798u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894880Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894881Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948844u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894885Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948880u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948890u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948898u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948920u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948930u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948950u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894897Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A0Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A20u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AB4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AD0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948ADCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B10u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BD8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C20u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CA4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DA4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DBCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E88u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948ED0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948ED8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F88u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FB4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FBCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FD0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894900Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949014u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949020u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949028u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949038u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949040u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949054u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949064u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949070u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949078u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894908Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949100u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894910Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949114u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949120u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949124u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894913Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949144u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949150u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949158u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949160u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949168u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894916Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949198u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089491B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089491C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089491E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949210u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949228u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949238u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949248u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949258u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949268u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949278u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949288u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089492A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089492B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089492C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089492C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089492E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089492E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089492F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894930Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949314u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949320u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894933Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894934Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949354u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949364u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949374u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894938Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949404u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949410u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949420u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894942Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949440u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949470u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949478u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949488u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949490u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089494C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089494D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089494F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894951Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949528u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949540u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894955Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949564u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894956Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949584u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894958Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089495A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089495B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089495E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089495F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894961Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949628u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949630u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949638u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949640u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894965Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949680u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894968Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949694u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894969Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089496A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089496ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089496BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089496F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894972Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894973Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949774u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089497A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089497B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089497E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089497F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949800u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949810u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949820u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949824u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949828u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949830u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949840u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949848u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949854u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894985Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949868u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949874u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949880u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949888u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894989Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949910u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949928u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949938u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949950u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894996Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949978u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A9Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AA4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B44u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B9Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BB4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C10u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C88u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CC8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DD0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DD8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E20u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F44u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F88u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949FA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949FC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949FE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949FE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A010u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A01Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A0A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A0B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A0C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A110u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A118u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A134u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A148u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A150u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A154u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A15Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A18Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A214u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A238u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A268u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A284u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A290u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A2B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A2E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A2ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A320u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A328u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A330u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A33Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A348u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A354u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A388u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A3B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A3C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A3CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A3ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A3F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A404u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A418u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A41Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A430u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A458u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A464u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A4BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A4C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A4D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A4F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A53Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A548u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A550u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A55Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A564u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A570u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A580u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A58Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A594u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A59Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A61Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A630u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A640u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A664u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A6A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A6B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A6C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A6D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A6E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A6F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A700u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A714u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A728u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A734u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A740u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A76Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A774u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A77Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A784u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A814u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A83Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A84Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A858u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A878u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A888u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A8B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A8DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A8E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A8E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A8F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A914u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A92Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A944u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A94Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A968u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A970u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A988u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA7Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA9Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AAA4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AAB4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AAD0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AADCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AAECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ABA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ABB4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ABB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ABC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ABCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ABD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACD0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACD8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD0Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD20u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD88u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADB4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADD8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE0Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE44u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEA4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEBCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEC8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AED0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AED8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFBCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B004u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B00Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B018u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B024u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B02Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B03Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B048u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B050u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B058u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B060u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B088u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B090u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B104u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B11Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B13Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B144u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B14Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B154u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B15Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B194u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B204u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B20Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B218u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B234u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B24Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B25Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B264u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B26Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B274u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B284u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B294u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B30Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B344u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B354u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B360u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B390u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B394u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B39Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B400u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B40Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B418u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B41Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B420u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B424u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B42Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B438u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B444u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B450u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B454u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B458u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B460u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B468u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B474u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B480u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B48Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B490u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B494u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B498u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B510u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B534u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B544u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B564u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B588u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B604u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B614u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B620u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B628u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B638u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B648u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B658u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B668u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B690u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B69Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B704u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B70Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B71Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B724u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B72Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B734u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B74Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B764u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B770u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B778u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B784u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B78Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B79Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B804u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B82Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B850u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B858u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B864u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B86Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B874u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B884u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B890u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B89Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B904u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B90Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B918u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B928u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B938u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B944u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B960u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B97Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B98Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAD8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB44u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD10u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDD0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE44u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE9Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BEACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BEB4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BEF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFB4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFC8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFFCu, &recomp_unit_0081, "recomp_unit_0081");
}
} // namespace psprecomp
