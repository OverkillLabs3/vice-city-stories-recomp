#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0120[4093] = {
    1, 0, 0, 2, 3, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 10, 0, 0, 0, 0,
    0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 0,
    0, 20, 0, 21, 0, 0, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 32, 0, 33, 0, 34, 0, 0, 35, 0, 36, 0, 0, 0, 37, 0, 38, 0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 42, 0,
    0, 43, 0, 44, 0, 0, 45, 0, 46, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 57, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 64,
    0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 78,
    0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 89, 0, 0, 0, 90, 0, 91, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101,
    0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106,
    0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 113, 0, 114, 0, 115, 0, 0, 116, 0, 0,
    117, 0, 118, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129,
    0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 136, 0,
    0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 142,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 144, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0,
    0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161,
    0, 162, 0, 163, 0, 164, 0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0,
    0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 185, 0, 0, 0, 0, 186, 0, 187, 188, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0,
    0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0, 0, 0, 206,
    0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 212, 0, 0, 0, 0, 213, 0, 214, 215, 0,
    216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 223, 0,
    224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 228, 0, 229, 0, 0, 0, 0, 230,
    0, 231, 0, 0, 232, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 237, 0, 238, 0, 0, 0, 0, 239,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 257, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 266, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0,
    0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0,
    279, 0, 0, 280, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 284, 0, 0, 0, 0, 0, 0,
    0, 285, 0, 0, 0, 0, 0, 286, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0,
    291, 0, 292, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 296, 297, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 303, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0,
    0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 315, 0, 316, 0, 0, 0, 317,
    0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0,
    0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 340, 0, 0, 0, 341,
    0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0,
    0, 350, 0, 351, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 360,
    361, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 366, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 379, 0, 380, 0, 0, 0,
    0, 0, 381, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0,
    386, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 393,
    0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0,
    401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 409, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412,
    0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0,
    0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 0,
    422, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 426, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 434,
    0, 0, 0, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 0, 441, 0, 442, 0, 0, 443, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0,
    446, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 450, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 455, 0, 456, 457, 0, 458, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0,
    0, 462, 0, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 0, 467, 0, 468, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0,
    471, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 474, 0, 0, 475, 0, 0, 476, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0,
    0, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 485,
    0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 489, 0, 0, 0, 0, 0, 0, 0, 490, 491, 0, 0, 492, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 495, 0, 0, 0, 0, 0, 0, 496, 0, 497, 0, 0, 498, 0, 0, 0, 0, 0, 0,
    0, 499, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 506, 0, 507,
    0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 513, 0,
    0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 517, 0, 0, 518, 519, 0, 0, 0, 0, 520, 0, 0, 521, 0, 522, 0,
    0, 0, 523, 0, 0, 524, 0, 525, 0, 526, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 0, 530, 0,
    0, 531, 0, 0, 0, 0, 0, 532, 0, 533, 0, 534, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 538, 0, 0, 0,
    539, 0, 0, 0, 0, 0, 0, 540, 0, 541, 0, 542, 0, 543, 0, 0, 0, 0, 0, 0, 544, 0, 545, 0, 546, 0, 547, 548, 0, 549, 0, 0,
    0, 550, 0, 0, 0, 551, 0, 552, 0, 553, 0, 554, 0, 0, 555, 0, 556, 0, 557, 0, 0, 558, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0,
    561, 0, 0, 562, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 565, 0, 566, 0, 0, 0,
    567, 0, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 571, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 574, 0, 0, 575, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0,
    0, 582, 0, 583, 584, 585, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0,
    589, 0, 0, 0, 0, 590, 0, 591, 0, 0, 592, 0, 0, 593, 0, 0, 0, 0, 594, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 603, 0, 604, 0, 605,
    0, 606, 607, 0, 608, 0, 0, 0, 609, 0, 610, 0, 0, 611, 612, 0, 613, 0, 0, 614, 0, 615, 0, 616, 617, 0, 618, 0, 0, 0, 0, 0,
    0, 0, 0, 619, 620, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 625, 626, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 628, 0, 0, 629, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 630, 0, 631, 0, 0, 632, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 635, 0, 636, 0, 0, 637, 0, 0, 0, 0, 0,
    0, 638, 0, 0, 0, 639, 0, 0, 0, 640, 0, 641, 0, 0, 0, 0, 0, 0, 0, 642, 0, 643, 644, 0, 645, 0, 0, 0, 0, 0, 0, 0,
    646, 0, 0, 647, 0, 0, 0, 648, 0, 649, 0, 650, 0, 651, 0, 652, 653, 0, 654, 0, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 657, 658,
    0, 659, 0, 0, 0, 0, 660, 0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 0, 664, 665, 0, 666, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 670, 0, 0, 0, 671, 0, 0, 0, 672, 0, 673, 0, 674, 0,
    675, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 678, 0, 679, 0, 0, 0, 680, 0,
    681, 0, 0, 0, 682, 0, 0, 683, 0, 0, 0, 684, 0, 0, 685, 686, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 688, 0, 0, 689, 0, 0, 0, 690, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 694, 0, 0, 695, 0, 0, 0,
    696, 0, 697, 698, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 701, 0, 0, 0, 702, 0, 703, 704, 0, 705, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 709, 0, 710, 0, 0,
    0, 0, 0, 0, 0, 711, 0, 712, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 715, 716, 0, 717, 0,
    0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 720, 721, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 725, 0, 726, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 729, 0, 730, 0, 0, 731, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0,
    735, 0, 0, 0, 0, 0, 736, 0, 0, 737, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 739, 0, 740, 0, 0, 0, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 744, 0, 0, 745, 0, 746, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 749,
    0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 752, 0, 753, 0, 754, 0, 755, 0, 756, 0, 757,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 0, 761, 0, 0, 762, 0, 763, 0, 0, 0, 0,
    0, 0, 764, 0, 0, 765, 0, 766, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 769, 0, 770, 0, 0, 0, 0, 0, 0,
    771, 0, 0, 0, 0, 0, 0, 772, 0, 773, 774, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 777, 0,
    0, 0, 778, 0, 0, 0, 0, 0, 779, 0, 780, 0, 0, 0, 0, 781, 0, 782, 0, 0, 783, 0, 784, 785, 0, 786, 0, 0, 0, 787, 0, 788,
    0, 0, 0, 0, 0, 0, 789, 0, 790, 0, 0, 0, 0, 791, 0, 0, 792, 793, 0, 794, 0, 0, 795, 0, 796, 0, 797, 0, 0, 0, 0, 0,
    798, 0, 0, 799, 800, 0, 0, 0, 0, 801, 0, 0, 0, 802, 0, 0, 0, 803, 0, 0, 804, 0, 805, 0, 806, 807, 0, 808, 0, 809, 0, 0,
    0, 0, 0, 810, 0, 0, 0, 811, 0, 0, 812, 0, 813, 0, 814, 0, 815, 0, 0, 0, 0, 0, 816, 0, 0, 817, 818, 0, 819, 0, 0, 820,
    0, 0, 0, 0, 0, 821, 0, 822, 0, 0, 0, 0, 0, 0, 823, 0, 824, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0,
    827, 0, 0, 0, 0, 0, 0, 0, 0, 828, 0, 829, 0, 830, 0, 0, 831, 0, 832, 0, 0, 0, 833, 0, 0, 0, 834, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 0, 0, 836, 0, 0, 837, 0, 838, 0, 839, 0, 840, 841, 0, 842, 0, 843, 0, 0, 0, 0,
    844, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 845, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 846, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 0, 850, 0, 0, 0, 851, 0, 0, 852, 0, 0, 0,
    0, 0, 0, 853, 0, 854, 0, 855, 0, 0, 0, 0, 856, 857, 0, 0, 0, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 859,
};
void recomp_unit_0120_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089E4000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0120[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089E4000;
    case 2u: goto L_089E400C;
    case 3u: goto L_089E4010;
    case 4u: goto L_089E401C;
    case 5u: goto L_089E4028;
    case 6u: goto L_089E4030;
    case 7u: goto L_089E4040;
    case 8u: goto L_089E4058;
    case 9u: goto L_089E4064;
    case 10u: goto L_089E406C;
    case 11u: goto L_089E4088;
    case 12u: goto L_089E4090;
    case 13u: goto L_089E40AC;
    case 14u: goto L_089E40B4;
    case 15u: goto L_089E40D4;
    case 16u: goto L_089E40DC;
    case 17u: goto L_089E40E4;
    case 18u: goto L_089E40EC;
    case 19u: goto L_089E40F4;
    case 20u: goto L_089E4104;
    case 21u: goto L_089E410C;
    case 22u: goto L_089E411C;
    case 23u: goto L_089E4124;
    case 24u: goto L_089E412C;
    case 25u: goto L_089E4134;
    case 26u: goto L_089E413C;
    case 27u: goto L_089E4148;
    case 28u: goto L_089E4158;
    case 29u: goto L_089E4160;
    case 30u: goto L_089E4168;
    case 31u: goto L_089E4178;
    case 32u: goto L_089E4190;
    case 33u: goto L_089E4198;
    case 34u: goto L_089E41A0;
    case 35u: goto L_089E41AC;
    case 36u: goto L_089E41B4;
    case 37u: goto L_089E41C4;
    case 38u: goto L_089E41CC;
    case 39u: goto L_089E41D4;
    case 40u: goto L_089E41E4;
    case 41u: goto L_089E41EC;
    case 42u: goto L_089E41F8;
    case 43u: goto L_089E4204;
    case 44u: goto L_089E420C;
    case 45u: goto L_089E4218;
    case 46u: goto L_089E4220;
    case 47u: goto L_089E4228;
    case 48u: goto L_089E423C;
    case 49u: goto L_089E4244;
    case 50u: goto L_089E424C;
    case 51u: goto L_089E4254;
    case 52u: goto L_089E425C;
    case 53u: goto L_089E4268;
    case 54u: goto L_089E427C;
    case 55u: goto L_089E4290;
    case 56u: goto L_089E42A4;
    case 57u: goto L_089E42AC;
    case 58u: goto L_089E42B8;
    case 59u: goto L_089E42C0;
    case 60u: goto L_089E42C8;
    case 61u: goto L_089E42D0;
    case 62u: goto L_089E42D8;
    case 63u: goto L_089E42F0;
    case 64u: goto L_089E42FC;
    case 65u: goto L_089E4304;
    case 66u: goto L_089E4310;
    case 67u: goto L_089E4320;
    case 68u: goto L_089E433C;
    case 69u: goto L_089E4354;
    case 70u: goto L_089E4360;
    case 71u: goto L_089E4378;
    case 72u: goto L_089E43C0;
    case 73u: goto L_089E43CC;
    case 74u: goto L_089E43D4;
    case 75u: goto L_089E43DC;
    case 76u: goto L_089E43E4;
    case 77u: goto L_089E43EC;
    case 78u: goto L_089E43FC;
    case 79u: goto L_089E4410;
    case 80u: goto L_089E4420;
    case 81u: goto L_089E442C;
    case 82u: goto L_089E4434;
    case 83u: goto L_089E4440;
    case 84u: goto L_089E4494;
    case 85u: goto L_089E449C;
    case 86u: goto L_089E44A4;
    case 87u: goto L_089E44AC;
    case 88u: goto L_089E44B4;
    case 89u: goto L_089E4504;
    case 90u: goto L_089E4514;
    case 91u: goto L_089E451C;
    case 92u: goto L_089E4524;
    case 93u: goto L_089E4538;
    case 94u: goto L_089E4560;
    case 95u: goto L_089E456C;
    case 96u: goto L_089E4580;
    case 97u: goto L_089E45A8;
    case 98u: goto L_089E45B4;
    case 99u: goto L_089E45C8;
    case 100u: goto L_089E45F0;
    case 101u: goto L_089E45FC;
    case 102u: goto L_089E4610;
    case 103u: goto L_089E4620;
    case 104u: goto L_089E4654;
    case 105u: goto L_089E4668;
    case 106u: goto L_089E467C;
    case 107u: goto L_089E4694;
    case 108u: goto L_089E46A0;
    case 109u: goto L_089E46AC;
    case 110u: goto L_089E46B8;
    case 111u: goto L_089E46C4;
    case 112u: goto L_089E46D0;
    case 113u: goto L_089E46D8;
    case 114u: goto L_089E46E0;
    case 115u: goto L_089E46E8;
    case 116u: goto L_089E46F4;
    case 117u: goto L_089E4700;
    case 118u: goto L_089E4708;
    case 119u: goto L_089E4710;
    case 120u: goto L_089E471C;
    case 121u: goto L_089E4728;
    case 122u: goto L_089E4734;
    case 123u: goto L_089E4740;
    case 124u: goto L_089E4754;
    case 125u: goto L_089E475C;
    case 126u: goto L_089E4764;
    case 127u: goto L_089E476C;
    case 128u: goto L_089E4774;
    case 129u: goto L_089E477C;
    case 130u: goto L_089E4784;
    case 131u: goto L_089E47B8;
    case 132u: goto L_089E47C8;
    case 133u: goto L_089E47E0;
    case 134u: goto L_089E47E8;
    case 135u: goto L_089E47F0;
    case 136u: goto L_089E47F8;
    case 137u: goto L_089E4814;
    case 138u: goto L_089E4838;
    case 139u: goto L_089E4840;
    case 140u: goto L_089E4860;
    case 141u: goto L_089E4870;
    case 142u: goto L_089E487C;
    case 143u: goto L_089E48BC;
    case 144u: goto L_089E490C;
    case 145u: goto L_089E4918;
    case 146u: goto L_089E4920;
    case 147u: goto L_089E4928;
    case 148u: goto L_089E4938;
    case 149u: goto L_089E494C;
    case 150u: goto L_089E4954;
    case 151u: goto L_089E495C;
    case 152u: goto L_089E4968;
    case 153u: goto L_089E4974;
    case 154u: goto L_089E4988;
    case 155u: goto L_089E4998;
    case 156u: goto L_089E49D4;
    case 157u: goto L_089E49DC;
    case 158u: goto L_089E49E4;
    case 159u: goto L_089E49EC;
    case 160u: goto L_089E49F4;
    case 161u: goto L_089E49FC;
    case 162u: goto L_089E4A04;
    case 163u: goto L_089E4A0C;
    case 164u: goto L_089E4A14;
    case 165u: goto L_089E4A24;
    case 166u: goto L_089E4A2C;
    case 167u: goto L_089E4A34;
    case 168u: goto L_089E4A44;
    case 169u: goto L_089E4A88;
    case 170u: goto L_089E4A94;
    case 171u: goto L_089E4AA8;
    case 172u: goto L_089E4AEC;
    case 173u: goto L_089E4AF8;
    case 174u: goto L_089E4B0C;
    case 175u: goto L_089E4B58;
    case 176u: goto L_089E4B68;
    case 177u: goto L_089E4B78;
    case 178u: goto L_089E4BA0;
    case 179u: goto L_089E4BB4;
    case 180u: goto L_089E4BB8;
    case 181u: goto L_089E4BE8;
    case 182u: goto L_089E4C08;
    case 183u: goto L_089E4C18;
    case 184u: goto L_089E4C28;
    case 185u: goto L_089E4C2C;
    case 186u: goto L_089E4C40;
    case 187u: goto L_089E4C48;
    case 188u: goto L_089E4C4C;
    case 189u: goto L_089E4C54;
    case 190u: goto L_089E4C68;
    case 191u: goto L_089E4C78;
    case 192u: goto L_089E4C8C;
    case 193u: goto L_089E4C98;
    case 194u: goto L_089E4CB0;
    case 195u: goto L_089E4CC0;
    case 196u: goto L_089E4CCC;
    case 197u: goto L_089E4CD4;
    case 198u: goto L_089E4CEC;
    case 199u: goto L_089E4D24;
    case 200u: goto L_089E4D2C;
    case 201u: goto L_089E4D38;
    case 202u: goto L_089E4D40;
    case 203u: goto L_089E4D54;
    case 204u: goto L_089E4D5C;
    case 205u: goto L_089E4D68;
    case 206u: goto L_089E4D7C;
    case 207u: goto L_089E4D84;
    case 208u: goto L_089E4D94;
    case 209u: goto L_089E4DB4;
    case 210u: goto L_089E4DC4;
    case 211u: goto L_089E4DD4;
    case 212u: goto L_089E4DD8;
    case 213u: goto L_089E4DEC;
    case 214u: goto L_089E4DF4;
    case 215u: goto L_089E4DF8;
    case 216u: goto L_089E4E00;
    case 217u: goto L_089E4E14;
    case 218u: goto L_089E4E24;
    case 219u: goto L_089E4E38;
    case 220u: goto L_089E4E44;
    case 221u: goto L_089E4E5C;
    case 222u: goto L_089E4E6C;
    case 223u: goto L_089E4E78;
    case 224u: goto L_089E4E80;
    case 225u: goto L_089E4E94;
    case 226u: goto L_089E4ECC;
    case 227u: goto L_089E4ED4;
    case 228u: goto L_089E4EE0;
    case 229u: goto L_089E4EE8;
    case 230u: goto L_089E4EFC;
    case 231u: goto L_089E4F04;
    case 232u: goto L_089E4F10;
    case 233u: goto L_089E4F24;
    case 234u: goto L_089E4F2C;
    case 235u: goto L_089E4F40;
    case 236u: goto L_089E4F54;
    case 237u: goto L_089E4F60;
    case 238u: goto L_089E4F68;
    case 239u: goto L_089E4F7C;
    case 240u: goto L_089E4FB4;
    case 241u: goto L_089E4FF4;
    case 242u: goto L_089E5088;
    case 243u: goto L_089E5098;
    case 244u: goto L_089E50B0;
    case 245u: goto L_089E50C0;
    case 246u: goto L_089E50D8;
    case 247u: goto L_089E50E8;
    case 248u: goto L_089E5110;
    case 249u: goto L_089E511C;
    case 250u: goto L_089E51A0;
    case 251u: goto L_089E51AC;
    case 252u: goto L_089E51B0;
    case 253u: goto L_089E51E4;
    case 254u: goto L_089E51F8;
    case 255u: goto L_089E5218;
    case 256u: goto L_089E5224;
    case 257u: goto L_089E522C;
    case 258u: goto L_089E5238;
    case 259u: goto L_089E5240;
    case 260u: goto L_089E525C;
    case 261u: goto L_089E5270;
    case 262u: goto L_089E5290;
    case 263u: goto L_089E52C0;
    case 264u: goto L_089E52D8;
    case 265u: goto L_089E52E4;
    case 266u: goto L_089E52F4;
    case 267u: goto L_089E5300;
    case 268u: goto L_089E5450;
    case 269u: goto L_089E5464;
    case 270u: goto L_089E5480;
    case 271u: goto L_089E54AC;
    case 272u: goto L_089E54B8;
    case 273u: goto L_089E54CC;
    case 274u: goto L_089E55D8;
    case 275u: goto L_089E55EC;
    case 276u: goto L_089E5604;
    case 277u: goto L_089E5650;
    case 278u: goto L_089E565C;
    case 279u: goto L_089E5680;
    case 280u: goto L_089E568C;
    case 281u: goto L_089E5690;
    case 282u: goto L_089E56CC;
    case 283u: goto L_089E56E0;
    case 284u: goto L_089E56E4;
    case 285u: goto L_089E5704;
    case 286u: goto L_089E571C;
    case 287u: goto L_089E5720;
    case 288u: goto L_089E5730;
    case 289u: goto L_089E5764;
    case 290u: goto L_089E5778;
    case 291u: goto L_089E5780;
    case 292u: goto L_089E5788;
    case 293u: goto L_089E5790;
    case 294u: goto L_089E579C;
    case 295u: goto L_089E57A8;
    case 296u: goto L_089E57BC;
    case 297u: goto L_089E57C0;
    case 298u: goto L_089E57D4;
    case 299u: goto L_089E57E0;
    case 300u: goto L_089E5810;
    case 301u: goto L_089E5844;
    case 302u: goto L_089E5850;
    case 303u: goto L_089E5884;
    case 304u: goto L_089E5898;
    case 305u: goto L_089E58A4;
    case 306u: goto L_089E58C0;
    case 307u: goto L_089E58D0;
    case 308u: goto L_089E58EC;
    case 309u: goto L_089E58F8;
    case 310u: goto L_089E5908;
    case 311u: goto L_089E591C;
    case 312u: goto L_089E592C;
    case 313u: goto L_089E5948;
    case 314u: goto L_089E5954;
    case 315u: goto L_089E5964;
    case 316u: goto L_089E596C;
    case 317u: goto L_089E597C;
    case 318u: goto L_089E598C;
    case 319u: goto L_089E59A4;
    case 320u: goto L_089E59B4;
    case 321u: goto L_089E59C0;
    case 322u: goto L_089E59D0;
    case 323u: goto L_089E59E4;
    case 324u: goto L_089E59F4;
    case 325u: goto L_089E5A10;
    case 326u: goto L_089E5A34;
    case 327u: goto L_089E5A44;
    case 328u: goto L_089E5A78;
    case 329u: goto L_089E5A94;
    case 330u: goto L_089E5AA0;
    case 331u: goto L_089E5ABC;
    case 332u: goto L_089E5AEC;
    case 333u: goto L_089E5AF8;
    case 334u: goto L_089E5B24;
    case 335u: goto L_089E5B2C;
    case 336u: goto L_089E5B38;
    case 337u: goto L_089E5B48;
    case 338u: goto L_089E5B54;
    case 339u: goto L_089E5B64;
    case 340u: goto L_089E5B6C;
    case 341u: goto L_089E5B7C;
    case 342u: goto L_089E5B88;
    case 343u: goto L_089E5BB0;
    case 344u: goto L_089E5BB8;
    case 345u: goto L_089E5BC4;
    case 346u: goto L_089E5BD4;
    case 347u: goto L_089E5BE0;
    case 348u: goto L_089E5BF0;
    case 349u: goto L_089E5BF8;
    case 350u: goto L_089E5C04;
    case 351u: goto L_089E5C0C;
    case 352u: goto L_089E5C10;
    case 353u: goto L_089E5C20;
    case 354u: goto L_089E5C3C;
    case 355u: goto L_089E5C84;
    case 356u: goto L_089E5CA0;
    case 357u: goto L_089E5CAC;
    case 358u: goto L_089E5CD8;
    case 359u: goto L_089E5CF4;
    case 360u: goto L_089E5CFC;
    case 361u: goto L_089E5D00;
    case 362u: goto L_089E5D0C;
    case 363u: goto L_089E5D14;
    case 364u: goto L_089E5D2C;
    case 365u: goto L_089E5D44;
    case 366u: goto L_089E5D4C;
    case 367u: goto L_089E5D54;
    case 368u: goto L_089E5D64;
    case 369u: goto L_089E5D90;
    case 370u: goto L_089E5DA8;
    case 371u: goto L_089E5DB0;
    case 372u: goto L_089E5DC8;
    case 373u: goto L_089E5DD0;
    case 374u: goto L_089E5DE0;
    case 375u: goto L_089E5DFC;
    case 376u: goto L_089E5E3C;
    case 377u: goto L_089E5E50;
    case 378u: goto L_089E5E58;
    case 379u: goto L_089E5E68;
    case 380u: goto L_089E5E70;
    case 381u: goto L_089E5E88;
    case 382u: goto L_089E5E9C;
    case 383u: goto L_089E5EA4;
    case 384u: goto L_089E5EB8;
    case 385u: goto L_089E5EE4;
    case 386u: goto L_089E5F00;
    case 387u: goto L_089E5F0C;
    case 388u: goto L_089E5F20;
    case 389u: goto L_089E5F34;
    case 390u: goto L_089E5F48;
    case 391u: goto L_089E5F58;
    case 392u: goto L_089E5F6C;
    case 393u: goto L_089E5F7C;
    case 394u: goto L_089E5F98;
    case 395u: goto L_089E5FA4;
    case 396u: goto L_089E5FAC;
    case 397u: goto L_089E5FBC;
    case 398u: goto L_089E5FD0;
    case 399u: goto L_089E5FE0;
    case 400u: goto L_089E5FE8;
    case 401u: goto L_089E6000;
    case 402u: goto L_089E6020;
    case 403u: goto L_089E6038;
    case 404u: goto L_089E6054;
    case 405u: goto L_089E606C;
    case 406u: goto L_089E6094;
    case 407u: goto L_089E60B4;
    case 408u: goto L_089E60C8;
    case 409u: goto L_089E60CC;
    case 410u: goto L_089E60D4;
    case 411u: goto L_089E60E8;
    case 412u: goto L_089E60FC;
    case 413u: goto L_089E6118;
    case 414u: goto L_089E6138;
    case 415u: goto L_089E6158;
    case 416u: goto L_089E6170;
    case 417u: goto L_089E618C;
    case 418u: goto L_089E61A4;
    case 419u: goto L_089E61CC;
    case 420u: goto L_089E61D8;
    case 421u: goto L_089E61E4;
    case 422u: goto L_089E6200;
    case 423u: goto L_089E6204;
    case 424u: goto L_089E6218;
    case 425u: goto L_089E622C;
    case 426u: goto L_089E6230;
    case 427u: goto L_089E6238;
    case 428u: goto L_089E6254;
    case 429u: goto L_089E6274;
    case 430u: goto L_089E62AC;
    case 431u: goto L_089E62C4;
    case 432u: goto L_089E62D8;
    case 433u: goto L_089E62EC;
    case 434u: goto L_089E62FC;
    case 435u: goto L_089E630C;
    case 436u: goto L_089E6314;
    case 437u: goto L_089E631C;
    case 438u: goto L_089E6324;
    case 439u: goto L_089E632C;
    case 440u: goto L_089E6334;
    case 441u: goto L_089E6340;
    case 442u: goto L_089E6348;
    case 443u: goto L_089E6354;
    case 444u: goto L_089E635C;
    case 445u: goto L_089E6370;
    case 446u: goto L_089E6380;
    case 447u: goto L_089E6388;
    case 448u: goto L_089E63A0;
    case 449u: goto L_089E63B4;
    case 450u: goto L_089E63B8;
    case 451u: goto L_089E63C4;
    case 452u: goto L_089E63E0;
    case 453u: goto L_089E6410;
    case 454u: goto L_089E6434;
    case 455u: goto L_089E6440;
    case 456u: goto L_089E6448;
    case 457u: goto L_089E644C;
    case 458u: goto L_089E6454;
    case 459u: goto L_089E6460;
    case 460u: goto L_089E646C;
    case 461u: goto L_089E6478;
    case 462u: goto L_089E6484;
    case 463u: goto L_089E6494;
    case 464u: goto L_089E64A0;
    case 465u: goto L_089E64AC;
    case 466u: goto L_089E64B8;
    case 467u: goto L_089E64C4;
    case 468u: goto L_089E64CC;
    case 469u: goto L_089E64D4;
    case 470u: goto L_089E64E4;
    case 471u: goto L_089E6500;
    case 472u: goto L_089E651C;
    case 473u: goto L_089E6524;
    case 474u: goto L_089E652C;
    case 475u: goto L_089E6538;
    case 476u: goto L_089E6544;
    case 477u: goto L_089E654C;
    case 478u: goto L_089E6560;
    case 479u: goto L_089E6574;
    case 480u: goto L_089E6598;
    case 481u: goto L_089E65A4;
    case 482u: goto L_089E65C4;
    case 483u: goto L_089E65DC;
    case 484u: goto L_089E65F4;
    case 485u: goto L_089E65FC;
    case 486u: goto L_089E660C;
    case 487u: goto L_089E6634;
    case 488u: goto L_089E6644;
    case 489u: goto L_089E6648;
    case 490u: goto L_089E6668;
    case 491u: goto L_089E666C;
    case 492u: goto L_089E6678;
    case 493u: goto L_089E66A0;
    case 494u: goto L_089E66B0;
    case 495u: goto L_089E66B4;
    case 496u: goto L_089E66D0;
    case 497u: goto L_089E66D8;
    case 498u: goto L_089E66E4;
    case 499u: goto L_089E6704;
    case 500u: goto L_089E6714;
    case 501u: goto L_089E6724;
    case 502u: goto L_089E6734;
    case 503u: goto L_089E6744;
    case 504u: goto L_089E6754;
    case 505u: goto L_089E6764;
    case 506u: goto L_089E6774;
    case 507u: goto L_089E677C;
    case 508u: goto L_089E67A0;
    case 509u: goto L_089E67B4;
    case 510u: goto L_089E67C8;
    case 511u: goto L_089E67DC;
    case 512u: goto L_089E67E8;
    case 513u: goto L_089E67F8;
    case 514u: goto L_089E681C;
    case 515u: goto L_089E6828;
    case 516u: goto L_089E6834;
    case 517u: goto L_089E6840;
    case 518u: goto L_089E684C;
    case 519u: goto L_089E6850;
    case 520u: goto L_089E6864;
    case 521u: goto L_089E6870;
    case 522u: goto L_089E6878;
    case 523u: goto L_089E6888;
    case 524u: goto L_089E6894;
    case 525u: goto L_089E689C;
    case 526u: goto L_089E68A4;
    case 527u: goto L_089E68B4;
    case 528u: goto L_089E68DC;
    case 529u: goto L_089E68E4;
    case 530u: goto L_089E68F8;
    case 531u: goto L_089E6904;
    case 532u: goto L_089E691C;
    case 533u: goto L_089E6924;
    case 534u: goto L_089E692C;
    case 535u: goto L_089E6938;
    case 536u: goto L_089E6948;
    case 537u: goto L_089E6968;
    case 538u: goto L_089E6970;
    case 539u: goto L_089E6980;
    case 540u: goto L_089E699C;
    case 541u: goto L_089E69A4;
    case 542u: goto L_089E69AC;
    case 543u: goto L_089E69B4;
    case 544u: goto L_089E69D0;
    case 545u: goto L_089E69D8;
    case 546u: goto L_089E69E0;
    case 547u: goto L_089E69E8;
    case 548u: goto L_089E69EC;
    case 549u: goto L_089E69F4;
    case 550u: goto L_089E6A04;
    case 551u: goto L_089E6A14;
    case 552u: goto L_089E6A1C;
    case 553u: goto L_089E6A24;
    case 554u: goto L_089E6A2C;
    case 555u: goto L_089E6A38;
    case 556u: goto L_089E6A40;
    case 557u: goto L_089E6A48;
    case 558u: goto L_089E6A54;
    case 559u: goto L_089E6A68;
    case 560u: goto L_089E6A70;
    case 561u: goto L_089E6A80;
    case 562u: goto L_089E6A8C;
    case 563u: goto L_089E6A94;
    case 564u: goto L_089E6ADC;
    case 565u: goto L_089E6AE8;
    case 566u: goto L_089E6AF0;
    case 567u: goto L_089E6B00;
    case 568u: goto L_089E6B0C;
    case 569u: goto L_089E6B24;
    case 570u: goto L_089E6B48;
    case 571u: goto L_089E6B90;
    case 572u: goto L_089E6BA4;
    case 573u: goto L_089E6BAC;
    case 574u: goto L_089E6BBC;
    case 575u: goto L_089E6BC8;
    case 576u: goto L_089E6BD8;
    case 577u: goto L_089E6BE0;
    case 578u: goto L_089E6C0C;
    case 579u: goto L_089E6C30;
    case 580u: goto L_089E6C48;
    case 581u: goto L_089E6C64;
    case 582u: goto L_089E6C84;
    case 583u: goto L_089E6C8C;
    case 584u: goto L_089E6C90;
    case 585u: goto L_089E6C94;
    case 586u: goto L_089E6CA0;
    case 587u: goto L_089E6CAC;
    case 588u: goto L_089E6CF0;
    case 589u: goto L_089E6D00;
    case 590u: goto L_089E6D14;
    case 591u: goto L_089E6D1C;
    case 592u: goto L_089E6D28;
    case 593u: goto L_089E6D34;
    case 594u: goto L_089E6D48;
    case 595u: goto L_089E6D4C;
    case 596u: goto L_089E6D74;
    case 597u: goto L_089E6DC0;
    case 598u: goto L_089E6DE0;
    case 599u: goto L_089E6E2C;
    case 600u: goto L_089E6E38;
    case 601u: goto L_089E6E48;
    case 602u: goto L_089E6E60;
    case 603u: goto L_089E6E6C;
    case 604u: goto L_089E6E74;
    case 605u: goto L_089E6E7C;
    case 606u: goto L_089E6E84;
    case 607u: goto L_089E6E88;
    case 608u: goto L_089E6E90;
    case 609u: goto L_089E6EA0;
    case 610u: goto L_089E6EA8;
    case 611u: goto L_089E6EB4;
    case 612u: goto L_089E6EB8;
    case 613u: goto L_089E6EC0;
    case 614u: goto L_089E6ECC;
    case 615u: goto L_089E6ED4;
    case 616u: goto L_089E6EDC;
    case 617u: goto L_089E6EE0;
    case 618u: goto L_089E6EE8;
    case 619u: goto L_089E6F0C;
    case 620u: goto L_089E6F10;
    case 621u: goto L_089E6F20;
    case 622u: goto L_089E6F54;
    case 623u: goto L_089E6F84;
    case 624u: goto L_089E6F9C;
    case 625u: goto L_089E6FB0;
    case 626u: goto L_089E6FB4;
    case 627u: goto L_089E6FCC;
    case 628u: goto L_089E6FE0;
    case 629u: goto L_089E6FEC;
    case 630u: goto L_089E7014;
    case 631u: goto L_089E701C;
    case 632u: goto L_089E7028;
    case 633u: goto L_089E7034;
    case 634u: goto L_089E703C;
    case 635u: goto L_089E7054;
    case 636u: goto L_089E705C;
    case 637u: goto L_089E7068;
    case 638u: goto L_089E7084;
    case 639u: goto L_089E7094;
    case 640u: goto L_089E70A4;
    case 641u: goto L_089E70AC;
    case 642u: goto L_089E70CC;
    case 643u: goto L_089E70D4;
    case 644u: goto L_089E70D8;
    case 645u: goto L_089E70E0;
    case 646u: goto L_089E7100;
    case 647u: goto L_089E710C;
    case 648u: goto L_089E711C;
    case 649u: goto L_089E7124;
    case 650u: goto L_089E712C;
    case 651u: goto L_089E7134;
    case 652u: goto L_089E713C;
    case 653u: goto L_089E7140;
    case 654u: goto L_089E7148;
    case 655u: goto L_089E7158;
    case 656u: goto L_089E7164;
    case 657u: goto L_089E7178;
    case 658u: goto L_089E717C;
    case 659u: goto L_089E7184;
    case 660u: goto L_089E7198;
    case 661u: goto L_089E71A4;
    case 662u: goto L_089E71B0;
    case 663u: goto L_089E71CC;
    case 664u: goto L_089E71D8;
    case 665u: goto L_089E71DC;
    case 666u: goto L_089E71E4;
    case 667u: goto L_089E7218;
    case 668u: goto L_089E722C;
    case 669u: goto L_089E7240;
    case 670u: goto L_089E7248;
    case 671u: goto L_089E7258;
    case 672u: goto L_089E7268;
    case 673u: goto L_089E7270;
    case 674u: goto L_089E7278;
    case 675u: goto L_089E7280;
    case 676u: goto L_089E7298;
    case 677u: goto L_089E72C8;
    case 678u: goto L_089E72E0;
    case 679u: goto L_089E72E8;
    case 680u: goto L_089E72F8;
    case 681u: goto L_089E7300;
    case 682u: goto L_089E7310;
    case 683u: goto L_089E731C;
    case 684u: goto L_089E732C;
    case 685u: goto L_089E7338;
    case 686u: goto L_089E733C;
    case 687u: goto L_089E735C;
    case 688u: goto L_089E7384;
    case 689u: goto L_089E7390;
    case 690u: goto L_089E73A0;
    case 691u: goto L_089E73B8;
    case 692u: goto L_089E73D4;
    case 693u: goto L_089E73DC;
    case 694u: goto L_089E73E4;
    case 695u: goto L_089E73F0;
    case 696u: goto L_089E7400;
    case 697u: goto L_089E7408;
    case 698u: goto L_089E740C;
    case 699u: goto L_089E7424;
    case 700u: goto L_089E7438;
    case 701u: goto L_089E7440;
    case 702u: goto L_089E7450;
    case 703u: goto L_089E7458;
    case 704u: goto L_089E745C;
    case 705u: goto L_089E7464;
    case 706u: goto L_089E74B8;
    case 707u: goto L_089E74C0;
    case 708u: goto L_089E74E8;
    case 709u: goto L_089E74EC;
    case 710u: goto L_089E74F4;
    case 711u: goto L_089E7514;
    case 712u: goto L_089E751C;
    case 713u: goto L_089E7534;
    case 714u: goto L_089E7554;
    case 715u: goto L_089E756C;
    case 716u: goto L_089E7570;
    case 717u: goto L_089E7578;
    case 718u: goto L_089E7584;
    case 719u: goto L_089E75B0;
    case 720u: goto L_089E75B8;
    case 721u: goto L_089E75BC;
    case 722u: goto L_089E75D0;
    case 723u: goto L_089E75E8;
    case 724u: goto L_089E762C;
    case 725u: goto L_089E7638;
    case 726u: goto L_089E7640;
    case 727u: goto L_089E7650;
    case 728u: goto L_089E7660;
    case 729u: goto L_089E768C;
    case 730u: goto L_089E7694;
    case 731u: goto L_089E76A0;
    case 732u: goto L_089E76B4;
    case 733u: goto L_089E76CC;
    case 734u: goto L_089E76E4;
    case 735u: goto L_089E7700;
    case 736u: goto L_089E7718;
    case 737u: goto L_089E7724;
    case 738u: goto L_089E7728;
    case 739u: goto L_089E7784;
    case 740u: goto L_089E778C;
    case 741u: goto L_089E77A8;
    case 742u: goto L_089E77B4;
    case 743u: goto L_089E77C8;
    case 744u: goto L_089E780C;
    case 745u: goto L_089E7818;
    case 746u: goto L_089E7820;
    case 747u: goto L_089E7830;
    case 748u: goto L_089E7874;
    case 749u: goto L_089E787C;
    case 750u: goto L_089E788C;
    case 751u: goto L_089E78B8;
    case 752u: goto L_089E78D4;
    case 753u: goto L_089E78DC;
    case 754u: goto L_089E78E4;
    case 755u: goto L_089E78EC;
    case 756u: goto L_089E78F4;
    case 757u: goto L_089E78FC;
    case 758u: goto L_089E7924;
    case 759u: goto L_089E7934;
    case 760u: goto L_089E793C;
    case 761u: goto L_089E7958;
    case 762u: goto L_089E7964;
    case 763u: goto L_089E796C;
    case 764u: goto L_089E7988;
    case 765u: goto L_089E7994;
    case 766u: goto L_089E799C;
    case 767u: goto L_089E79A4;
    case 768u: goto L_089E79CC;
    case 769u: goto L_089E79DC;
    case 770u: goto L_089E79E4;
    case 771u: goto L_089E7A00;
    case 772u: goto L_089E7A1C;
    case 773u: goto L_089E7A24;
    case 774u: goto L_089E7A28;
    case 775u: goto L_089E7A44;
    case 776u: goto L_089E7A58;
    case 777u: goto L_089E7A78;
    case 778u: goto L_089E7A88;
    case 779u: goto L_089E7AA0;
    case 780u: goto L_089E7AA8;
    case 781u: goto L_089E7ABC;
    case 782u: goto L_089E7AC4;
    case 783u: goto L_089E7AD0;
    case 784u: goto L_089E7AD8;
    case 785u: goto L_089E7ADC;
    case 786u: goto L_089E7AE4;
    case 787u: goto L_089E7AF4;
    case 788u: goto L_089E7AFC;
    case 789u: goto L_089E7B18;
    case 790u: goto L_089E7B20;
    case 791u: goto L_089E7B34;
    case 792u: goto L_089E7B40;
    case 793u: goto L_089E7B44;
    case 794u: goto L_089E7B4C;
    case 795u: goto L_089E7B58;
    case 796u: goto L_089E7B60;
    case 797u: goto L_089E7B68;
    case 798u: goto L_089E7B80;
    case 799u: goto L_089E7B8C;
    case 800u: goto L_089E7B90;
    case 801u: goto L_089E7BA4;
    case 802u: goto L_089E7BB4;
    case 803u: goto L_089E7BC4;
    case 804u: goto L_089E7BD0;
    case 805u: goto L_089E7BD8;
    case 806u: goto L_089E7BE0;
    case 807u: goto L_089E7BE4;
    case 808u: goto L_089E7BEC;
    case 809u: goto L_089E7BF4;
    case 810u: goto L_089E7C0C;
    case 811u: goto L_089E7C1C;
    case 812u: goto L_089E7C28;
    case 813u: goto L_089E7C30;
    case 814u: goto L_089E7C38;
    case 815u: goto L_089E7C40;
    case 816u: goto L_089E7C58;
    case 817u: goto L_089E7C64;
    case 818u: goto L_089E7C68;
    case 819u: goto L_089E7C70;
    case 820u: goto L_089E7C7C;
    case 821u: goto L_089E7C94;
    case 822u: goto L_089E7C9C;
    case 823u: goto L_089E7CB8;
    case 824u: goto L_089E7CC0;
    case 825u: goto L_089E7CD0;
    case 826u: goto L_089E7CF8;
    case 827u: goto L_089E7D00;
    case 828u: goto L_089E7D24;
    case 829u: goto L_089E7D2C;
    case 830u: goto L_089E7D34;
    case 831u: goto L_089E7D40;
    case 832u: goto L_089E7D48;
    case 833u: goto L_089E7D58;
    case 834u: goto L_089E7D68;
    case 835u: goto L_089E7D98;
    case 836u: goto L_089E7DB4;
    case 837u: goto L_089E7DC0;
    case 838u: goto L_089E7DC8;
    case 839u: goto L_089E7DD0;
    case 840u: goto L_089E7DD8;
    case 841u: goto L_089E7DDC;
    case 842u: goto L_089E7DE4;
    case 843u: goto L_089E7DEC;
    case 844u: goto L_089E7E00;
    case 845u: goto L_089E7E38;
    case 846u: goto L_089E7E64;
    case 847u: goto L_089E7EBC;
    case 848u: goto L_089E7EF8;
    case 849u: goto L_089E7F48;
    case 850u: goto L_089E7F54;
    case 851u: goto L_089E7F64;
    case 852u: goto L_089E7F70;
    case 853u: goto L_089E7F8C;
    case 854u: goto L_089E7F94;
    case 855u: goto L_089E7F9C;
    case 856u: goto L_089E7FB0;
    case 857u: goto L_089E7FB4;
    case 858u: goto L_089E7FCC;
    case 859u: goto L_089E7FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089E4000:
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E406C;
      }
      goto L_089E400C;
    }
L_089E400C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    goto L_089E4010;
L_089E4010:
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E406C;
      }
      goto L_089E401C;
    }
L_089E401C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E406C;
      }
      goto L_089E4028;
    }
L_089E4028:
    ctx.gpr[31] = (0x089E4030u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E4030u) goto L_089E4030;
    return;
L_089E4030:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E4040u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4040u) goto L_089E4040;
    return;
L_089E4040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E4058u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x089E4058u) goto L_089E4058;
    return;
L_089E4058:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E4064u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089E4064u) goto L_089E4064;
    return;
L_089E4064:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E41E4;
      }
      goto L_089E406C;
    }
L_089E406C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089E4088u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem) && ctx.pc == 0x089E4088u) goto L_089E4088;
    return;
L_089E4088:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E40B4;
      }
      goto L_089E4090;
    }
L_089E4090:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089E40ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem) && ctx.pc == 0x089E40ACu) goto L_089E40AC;
    return;
L_089E40AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E41E4;
      }
      goto L_089E40B4;
    }
L_089E40B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1948)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[6] << (ctx.gpr[4] & 31u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E41E4;
      }
      goto L_089E40D4;
    }
L_089E40D4:
    ctx.gpr[31] = (0x089E40DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089E40DCu) goto L_089E40DC;
    return;
L_089E40DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4124;
      }
      goto L_089E40E4;
    }
L_089E40E4:
    ctx.gpr[31] = (0x089E40ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem) && ctx.pc == 0x089E40ECu) goto L_089E40EC;
    return;
L_089E40EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4124;
      }
      goto L_089E40F4;
    }
L_089E40F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4124;
      }
      goto L_089E4104;
    }
L_089E4104:
    ctx.gpr[31] = (0x089E410Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E410Cu) goto L_089E410C;
    return;
L_089E410C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x089E411Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089E411Cu) goto L_089E411C;
    return;
L_089E411C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E41E4;
      }
      goto L_089E4124;
    }
L_089E4124:
    ctx.gpr[31] = (0x089E412Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089E412Cu) goto L_089E412C;
    return;
L_089E412C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E41A0;
      }
      goto L_089E4134;
    }
L_089E4134:
    ctx.gpr[31] = (0x089E413Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089E413Cu) goto L_089E413C;
    return;
L_089E413C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2312)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089E41A0;
      }
      goto L_089E4148;
    }
L_089E4148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_089E4160;
      }
      goto L_089E4158;
    }
L_089E4158:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E4198;
      }
      goto L_089E4160;
    }
L_089E4160:
    ctx.gpr[31] = (0x089E4168u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E4168u) goto L_089E4168;
    return;
L_089E4168:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E4178u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4178u) goto L_089E4178;
    return;
L_089E4178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E4190u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x089E4190u) goto L_089E4190;
    return;
L_089E4190:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E41E4;
      }
      goto L_089E4198;
    }
L_089E4198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E41E4;
      }
      goto L_089E41A0;
    }
L_089E41A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E41E4;
      }
      goto L_089E41AC;
    }
L_089E41AC:
    ctx.gpr[31] = (0x089E41B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E41B4u) goto L_089E41B4;
    return;
L_089E41B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x089E41C4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089E41C4u) goto L_089E41C4;
    return;
L_089E41C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E41E4;
      }
      goto L_089E41CC;
    }
L_089E41CC:
    ctx.gpr[31] = (0x089E41D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E41D4u) goto L_089E41D4;
    return;
L_089E41D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[31] = (0x089E41E4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089E41E4u) goto L_089E41E4;
    return;
L_089E41E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4360;
      }
      goto L_089E41EC;
    }
L_089E41EC:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E4360;
      }
      goto L_089E41F8;
    }
L_089E41F8:
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_089E420C;
      }
      goto L_089E4204;
    }
L_089E4204:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E4228;
      }
      goto L_089E420C;
    }
L_089E420C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4228;
      }
      goto L_089E4218;
    }
L_089E4218:
    ctx.gpr[31] = (0x089E4220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4220u) goto L_089E4220;
    return;
L_089E4220:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E4244;
      }
      goto L_089E4228;
    }
L_089E4228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E424C;
      }
      goto L_089E423C;
    }
L_089E423C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4360;
      }
      goto L_089E4244;
    }
L_089E4244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4360;
      }
      goto L_089E424C;
    }
L_089E424C:
    ctx.gpr[31] = (0x089E4254u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 813u, 0x089079CCu>(ctx, &aot_mem) && ctx.pc == 0x089E4254u) goto L_089E4254;
    return;
L_089E4254:
    ctx.gpr[31] = (0x089E425Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 824u, 0x08907A54u>(ctx, &aot_mem) && ctx.pc == 0x089E425Cu) goto L_089E425C;
    return;
L_089E425C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4360;
      }
      goto L_089E4268;
    }
L_089E4268:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1904)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4360;
      }
      goto L_089E427C;
    }
L_089E427C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1900), 0u);
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1904), 0u);
      if (branch_taken) {
          goto L_089E42AC;
      }
      goto L_089E4290;
    }
L_089E4290:
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4360;
      }
      goto L_089E42A4;
    }
L_089E42A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E42C0;
      }
      goto L_089E42AC;
    }
L_089E42AC:
    ctx.gpr[5] = (128u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E4304;
      }
      goto L_089E42B8;
    }
L_089E42B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4360;
      }
      goto L_089E42C0;
    }
L_089E42C0:
    ctx.gpr[31] = (0x089E42C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E42C8u) goto L_089E42C8;
    return;
L_089E42C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E42FC;
      }
      goto L_089E42D0;
    }
L_089E42D0:
    ctx.gpr[31] = (0x089E42D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E42D8u) goto L_089E42D8;
    return;
L_089E42D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089E42F0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x089E42F0u) goto L_089E42F0;
    return;
L_089E42F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E42FCu);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x089E42FCu) goto L_089E42FC;
    return;
L_089E42FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4360;
      }
      goto L_089E4304;
    }
L_089E4304:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x089E4310u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem) && ctx.pc == 0x089E4310u) goto L_089E4310;
    return;
L_089E4310:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[31] = (0x089E4320u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem) && ctx.pc == 0x089E4320u) goto L_089E4320;
    return;
L_089E4320:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[31] = (0x089E433Cu);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089E433Cu) goto L_089E433C;
    return;
L_089E433C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089E4354u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 430u, 0x08909990u>(ctx, &aot_mem) && ctx.pc == 0x089E4354u) goto L_089E4354;
    return;
L_089E4354:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E4360u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x089E4360u) goto L_089E4360;
    return;
L_089E4360:
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
L_089E4378:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2288)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089E43D4;
      }
      goto L_089E43C0;
    }
L_089E43C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(2297)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E43DC;
      }
      goto L_089E43CC;
    }
L_089E43CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E43FC;
      }
      goto L_089E43D4;
    }
L_089E43D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E487C;
      }
      goto L_089E43DC;
    }
L_089E43DC:
    ctx.gpr[31] = (0x089E43E4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x089E43E4u) goto L_089E43E4;
    return;
L_089E43E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E43FC;
      }
      goto L_089E43EC;
    }
L_089E43EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(2297), static_cast<std::uint8_t>(0u));
        goto L_089E44B4;
    }
    goto L_089E43FC;
L_089E43FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E44AC;
      }
      goto L_089E4410;
    }
L_089E4410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2292)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E4504;
      }
      goto L_089E4420;
    }
L_089E4420:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(2292), 0u);
    ctx.gpr[31] = (0x089E442Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x089E442Cu) goto L_089E442C;
    return;
L_089E442C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E44A4;
      }
      goto L_089E4434;
    }
L_089E4434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089E449C;
      }
      goto L_089E4440;
    }
L_089E4440:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[4] = (16880u << 16u);
    ctx.gpr[6] = (32639u << 16u);
    ctx.gpr[5] = (0u | 49u);
    ctx.gpr[6] = (ctx.gpr[6] | 65535u);
    ctx.gpr[7] = (16840u << 16u);
    ctx.gpr[23] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E4514;
      }
      goto L_089E4494;
    }
L_089E4494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E451C;
      }
      goto L_089E449C;
    }
L_089E449C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E487C;
      }
      goto L_089E44A4;
    }
L_089E44A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E487C;
      }
      goto L_089E44AC;
    }
L_089E44AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E487C;
      }
      goto L_089E44B4;
    }
L_089E44B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 48u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(613));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089E487C;
      }
      goto L_089E4504;
    }
L_089E4504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2292)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(2292), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E487C;
      }
      goto L_089E4514;
    }
L_089E4514:
    ctx.gpr[4] = (0u | 49u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    goto L_089E451C;
L_089E451C:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_089E4524;
    }
    goto L_089E4524;
L_089E4524:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
        goto L_089E4538;
    }
    goto L_089E4538;
L_089E4538:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[12];
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[13];
    ctx.gpr[4] = (0u | 49u);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (0u | 49u);
        goto L_089E4560;
    }
    goto L_089E4560;
L_089E4560:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (0u | 0u);
        goto L_089E456C;
    }
    goto L_089E456C;
L_089E456C:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_089E4580;
    }
    goto L_089E4580;
L_089E4580:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[12];
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[13];
    ctx.gpr[7] = (0u | 49u);
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[14];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (0u | 49u);
        goto L_089E45A8;
    }
    goto L_089E45A8;
L_089E45A8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (0u | 0u);
        goto L_089E45B4;
    }
    goto L_089E45B4;
L_089E45B4:
    ctx.gpr[7] = (0u | 49u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 49 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
        goto L_089E45C8;
    }
    goto L_089E45C8;
L_089E45C8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[7] = (0u | 49u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (0u | 49u);
        goto L_089E45F0;
    }
    goto L_089E45F0;
L_089E45F0:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (0u | 0u);
        goto L_089E45FC;
    }
    goto L_089E45FC;
L_089E45FC:
    ctx.gpr[7] = (0u | 49u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 49 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[7]);
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
        goto L_089E4610;
    }
    goto L_089E4610;
L_089E4610:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E4838;
      }
      goto L_089E4620;
    }
L_089E4620:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (17480u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[19] = (0u | 3u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_089E4654;
L_089E4654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E4814;
      }
      goto L_089E4668;
    }
L_089E4668:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[30] = (ctx.gpr[30] - ctx.gpr[4]);
    goto L_089E467C;
L_089E467C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E47F8;
      }
      goto L_089E4694;
    }
L_089E4694:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E46A0;
    }
L_089E46A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E46AC;
    }
L_089E46AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089E46C4;
      }
      goto L_089E46B8;
    }
L_089E46B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E46C4;
    }
L_089E46C4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[31] = (0x089E46D0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 483u, 0x089E26B8u>(ctx, &aot_mem) && ctx.pc == 0x089E46D0u) goto L_089E46D0;
    return;
L_089E46D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E46D8;
    }
L_089E46D8:
    ctx.gpr[31] = (0x089E46E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 456u, 0x08B01BA4u>(ctx, &aot_mem) && ctx.pc == 0x089E46E0u) goto L_089E46E0;
    return;
L_089E46E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E46E8;
    }
L_089E46E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(2296)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E4710;
      }
      goto L_089E46F4;
    }
L_089E46F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E4700;
    }
L_089E4700:
    ctx.gpr[31] = (0x089E4708u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 559u, 0x08B021B0u>(ctx, &aot_mem) && ctx.pc == 0x089E4708u) goto L_089E4708;
    return;
L_089E4708:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E4710;
    }
L_089E4710:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(562)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E471C;
    }
L_089E471C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(563)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E4728;
    }
L_089E4728:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(564)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E4734;
    }
L_089E4734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E4740;
    }
L_089E4740:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E4754;
    }
L_089E4754:
    ctx.gpr[31] = (0x089E475Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 229u, 0x08B00D78u>(ctx, &aot_mem) && ctx.pc == 0x089E475Cu) goto L_089E475C;
    return;
L_089E475C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E4764;
    }
L_089E4764:
    ctx.gpr[31] = (0x089E476Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 233u, 0x08B00DBCu>(ctx, &aot_mem) && ctx.pc == 0x089E476Cu) goto L_089E476C;
    return;
L_089E476C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E4774;
    }
L_089E4774:
    ctx.gpr[31] = (0x089E477Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 327u, 0x08B011C8u>(ctx, &aot_mem) && ctx.pc == 0x089E477Cu) goto L_089E477C;
    return;
L_089E477C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E4784;
    }
L_089E4784:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E47B8;
    }
L_089E47B8:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E47C8;
    }
L_089E47C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089E47E0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E47E0u) goto L_089E47E0;
    return;
L_089E47E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E47E8;
    }
L_089E47E8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
    goto L_089E47F0;
L_089E47F0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E4694;
      }
      goto L_089E47F8;
    }
L_089E47F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E467C;
      }
      goto L_089E4814;
    }
L_089E4814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E4654;
      }
      goto L_089E4838;
    }
L_089E4838:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E487C;
      }
      goto L_089E4840;
    }
L_089E4840:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(464)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(2297), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E4860u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem) && ctx.pc == 0x089E4860u) goto L_089E4860;
    return;
L_089E4860:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x089E4870u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089E4870u) goto L_089E4870;
    return;
L_089E4870:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089E487Cu);
    ctx.gpr[5] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem) && ctx.pc == 0x089E487Cu) goto L_089E487C;
    return;
L_089E487C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
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
L_089E48BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    ctx.gpr[5] = (15948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089E4918;
      }
      goto L_089E490C;
    }
L_089E490C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2364)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4A0C;
      }
      goto L_089E4918;
    }
L_089E4918:
    ctx.gpr[31] = (0x089E4920u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 589u, 0x0890E818u>(ctx, &aot_mem) && ctx.pc == 0x089E4920u) goto L_089E4920;
    return;
L_089E4920:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E4A04;
      }
      goto L_089E4928;
    }
L_089E4928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8980)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2368)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E4A14;
      }
      goto L_089E4938;
    }
L_089E4938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2368), 0u);
      if (branch_taken) {
          goto L_089E49FC;
      }
      goto L_089E494C;
    }
L_089E494C:
    ctx.gpr[31] = (0x089E4954u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x089E4954u) goto L_089E4954;
    return;
L_089E4954:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E49F4;
      }
      goto L_089E495C;
    }
L_089E495C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E49EC;
      }
      goto L_089E4968;
    }
L_089E4968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E49E4;
      }
      goto L_089E4974;
    }
L_089E4974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E49E4;
      }
      goto L_089E4988;
    }
L_089E4988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089E49DC;
      }
      goto L_089E4998;
    }
L_089E4998:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8996)));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16880u << 16u);
    ctx.gpr[6] = (0u | 49u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089E4A24;
      }
      goto L_089E49D4;
    }
L_089E49D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089E4A2C;
      }
      goto L_089E49DC;
    }
L_089E49DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F7C;
      }
      goto L_089E49E4;
    }
L_089E49E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F7C;
      }
      goto L_089E49EC;
    }
L_089E49EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F7C;
      }
      goto L_089E49F4;
    }
L_089E49F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F7C;
      }
      goto L_089E49FC;
    }
L_089E49FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F7C;
      }
      goto L_089E4A04;
    }
L_089E4A04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F7C;
      }
      goto L_089E4A0C;
    }
L_089E4A0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F7C;
      }
      goto L_089E4A14;
    }
L_089E4A14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2368), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E4F7C;
      }
      goto L_089E4A24;
    }
L_089E4A24:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    goto L_089E4A2C;
L_089E4A2C:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_089E4A34;
    }
    goto L_089E4A34;
L_089E4A34:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
        goto L_089E4A44;
    }
    goto L_089E4A44;
L_089E4A44:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8996)));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[6] = (16840u << 16u);
    ctx.gpr[5] = (0u | 49u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
        goto L_089E4A88;
    }
    goto L_089E4A88;
L_089E4A88:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
        goto L_089E4A94;
    }
    goto L_089E4A94;
L_089E4A94:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
        goto L_089E4AA8;
    }
    goto L_089E4AA8;
L_089E4AA8:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8996)));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16880u << 16u);
    ctx.gpr[6] = (0u | 49u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
        goto L_089E4AEC;
    }
    goto L_089E4AEC;
L_089E4AEC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_089E4AF8;
    }
    goto L_089E4AF8;
L_089E4AF8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 49u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_089E4B0C;
    }
    goto L_089E4B0C;
L_089E4B0C:
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8996)));
    ctx.gpr[5] = (17056u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[6] = (16840u << 16u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 49u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_089E4B58;
    }
    goto L_089E4B58;
L_089E4B58:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_089E4B68;
    }
    goto L_089E4B68;
L_089E4B68:
    ctx.gpr[4] = (0u | 49u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_089E4B78;
    }
    goto L_089E4B78;
L_089E4B78:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8992)));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089E4F54;
      }
      goto L_089E4BA0;
    }
L_089E4BA0:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F40;
      }
      goto L_089E4BB4;
    }
L_089E4BB4:
    ctx.gpr[4] = (ctx.gpr[30] << 4u);
    goto L_089E4BB8;
L_089E4BB8:
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4D84;
      }
      goto L_089E4BE8;
    }
L_089E4BE8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 8u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E4C4C;
      }
      goto L_089E4C08;
    }
L_089E4C08:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089E4C28;
      }
      goto L_089E4C18;
    }
L_089E4C18:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4C2C;
      }
      goto L_089E4C28;
    }
L_089E4C28:
    ctx.gpr[5] = (0u | 1u);
    goto L_089E4C2C;
L_089E4C2C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(482))))));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[6] & 64u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E4C48;
      }
      goto L_089E4C40;
    }
L_089E4C40:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4C4C;
      }
      goto L_089E4C48;
    }
L_089E4C48:
    ctx.gpr[4] = (0u | 0u);
    goto L_089E4C4C;
L_089E4C4C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4D7C;
      }
      goto L_089E4C54;
    }
L_089E4C54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089E4C78;
      }
      goto L_089E4C68;
    }
L_089E4C68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089E4C78;
L_089E4C78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4D7C;
      }
      goto L_089E4C8C;
    }
L_089E4C8C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089E4CB0;
      }
      goto L_089E4C98;
    }
L_089E4C98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8672)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E4CB0;
      }
      goto L_089E4CB0;
    }
L_089E4CB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E4D68;
      }
      goto L_089E4CC0;
    }
L_089E4CC0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x089E4CCCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 489u, 0x089E26F0u>(ctx, &aot_mem) && ctx.pc == 0x089E4CCCu) goto L_089E4CCC;
    return;
L_089E4CCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4D68;
      }
      goto L_089E4CD4;
    }
L_089E4CD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089E4CECu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 914u, 0x08A036C4u>(ctx, &aot_mem) && ctx.pc == 0x089E4CECu) goto L_089E4CEC;
    return;
L_089E4CEC:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
      if (branch_taken) {
          goto L_089E4D68;
      }
      goto L_089E4D24;
    }
L_089E4D24:
    ctx.gpr[31] = (0x089E4D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x089E4D2Cu) goto L_089E4D2C;
    return;
L_089E4D2C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E4D38u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 886u, 0x08A03590u>(ctx, &aot_mem) && ctx.pc == 0x089E4D38u) goto L_089E4D38;
    return;
L_089E4D38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4D68;
      }
      goto L_089E4D40;
    }
L_089E4D40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089E4D54u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 918u, 0x08A03794u>(ctx, &aot_mem) && ctx.pc == 0x089E4D54u) goto L_089E4D54;
    return;
L_089E4D54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4D68;
      }
      goto L_089E4D5C;
    }
L_089E4D5C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    goto L_089E4D68;
L_089E4D68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E4C8C;
      }
      goto L_089E4D7C;
    }
L_089E4D7C:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E4BE8;
      }
      goto L_089E4D84;
    }
L_089E4D84:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F2C;
      }
      goto L_089E4D94;
    }
L_089E4D94:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 8u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E4DF8;
      }
      goto L_089E4DB4;
    }
L_089E4DB4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089E4DD4;
      }
      goto L_089E4DC4;
    }
L_089E4DC4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4DD8;
      }
      goto L_089E4DD4;
    }
L_089E4DD4:
    ctx.gpr[5] = (0u | 1u);
    goto L_089E4DD8;
L_089E4DD8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(482))))));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[6] & 64u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E4DF4;
      }
      goto L_089E4DEC;
    }
L_089E4DEC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4DF8;
      }
      goto L_089E4DF4;
    }
L_089E4DF4:
    ctx.gpr[4] = (0u | 0u);
    goto L_089E4DF8;
L_089E4DF8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F24;
      }
      goto L_089E4E00;
    }
L_089E4E00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089E4E24;
      }
      goto L_089E4E14;
    }
L_089E4E14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089E4E24;
L_089E4E24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F24;
      }
      goto L_089E4E38;
    }
L_089E4E38:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089E4E5C;
      }
      goto L_089E4E44;
    }
L_089E4E44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8672)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E4E5C;
      }
      goto L_089E4E5C;
    }
L_089E4E5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E4F10;
      }
      goto L_089E4E6C;
    }
L_089E4E6C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x089E4E78u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 489u, 0x089E26F0u>(ctx, &aot_mem) && ctx.pc == 0x089E4E78u) goto L_089E4E78;
    return;
L_089E4E78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F10;
      }
      goto L_089E4E80;
    }
L_089E4E80:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089E4E94u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 914u, 0x08A036C4u>(ctx, &aot_mem) && ctx.pc == 0x089E4E94u) goto L_089E4E94;
    return;
L_089E4E94:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E4F10;
      }
      goto L_089E4ECC;
    }
L_089E4ECC:
    ctx.gpr[31] = (0x089E4ED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x089E4ED4u) goto L_089E4ED4;
    return;
L_089E4ED4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E4EE0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 886u, 0x08A03590u>(ctx, &aot_mem) && ctx.pc == 0x089E4EE0u) goto L_089E4EE0;
    return;
L_089E4EE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F10;
      }
      goto L_089E4EE8;
    }
L_089E4EE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089E4EFCu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 918u, 0x08A03794u>(ctx, &aot_mem) && ctx.pc == 0x089E4EFCu) goto L_089E4EFC;
    return;
L_089E4EFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F10;
      }
      goto L_089E4F04;
    }
L_089E4F04:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    goto L_089E4F10;
L_089E4F10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E4E38;
      }
      goto L_089E4F24;
    }
L_089E4F24:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E4D94;
      }
      goto L_089E4F2C;
    }
L_089E4F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[30] << 4u);
      if (branch_taken) {
          goto L_089E4BB8;
      }
      goto L_089E4F40;
    }
L_089E4F40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4BA0;
      }
      goto L_089E4F54;
    }
L_089E4F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F7C;
      }
      goto L_089E4F60;
    }
L_089E4F60:
    ctx.gpr[31] = (0x089E4F68u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x089E4F68u) goto L_089E4F68;
    return;
L_089E4F68:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089E4F7Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 720u, 0x08A02D68u>(ctx, &aot_mem) && ctx.pc == 0x089E4F7Cu) goto L_089E4F7C;
    return;
L_089E4F7C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4FB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]);
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[6]);
    rt.memory().aot_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4FF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(11));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(23));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E5098;
      }
      goto L_089E5088;
    }
L_089E5088:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089E5098;
L_089E5098:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E50C0;
      }
      goto L_089E50B0;
    }
L_089E50B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089E50C0;
L_089E50C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E50E8;
      }
      goto L_089E50D8;
    }
L_089E50D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089E50E8;
L_089E50E8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089E5110u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 36u, 0x089783ACu>(ctx, &aot_mem) && ctx.pc == 0x089E5110u) goto L_089E5110;
    return;
L_089E5110:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E511C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(11));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[1] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(15), ctx.gpr[1]));
    ctx.gpr[1] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(18), ctx.gpr[1]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[1]);
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E51B0;
      }
      goto L_089E51A0;
    }
L_089E51A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089E51ACu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x089E51ACu) goto L_089E51AC;
    return;
L_089E51AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E51B0;
L_089E51B0:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x089E51E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem) && ctx.pc == 0x089E51E4u) goto L_089E51E4;
    return;
L_089E51E4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_089E5270;
      }
      goto L_089E51F8;
    }
L_089E51F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E525C;
      }
      goto L_089E5218;
    }
L_089E5218:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x089E5224u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089E5224u) goto L_089E5224;
    return;
L_089E5224:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089E525C;
      }
      goto L_089E522C;
    }
L_089E522C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E5238u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5238u) goto L_089E5238;
    return;
L_089E5238:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E525C;
      }
      goto L_089E5240;
    }
L_089E5240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089E525Cu);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E525Cu) goto L_089E525C;
    return;
L_089E525C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E51F8;
      }
      goto L_089E5270;
    }
L_089E5270:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5290:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E52C0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem) && ctx.pc == 0x089E52C0u) goto L_089E52C0;
    return;
L_089E52C0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E52D8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem) && ctx.pc == 0x089E52D8u) goto L_089E52D8;
    return;
L_089E52D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E52E4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x089E52E4u) goto L_089E52E4;
    return;
L_089E52E4:
    ctx.gpr[16] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089E52F4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089E4FB4;
L_089E52F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x089E5300u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089E4FB4;
L_089E5300:
    ctx.gpr[4] = (ctx.gpr[16] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 28u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9664)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(83));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(108))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(109))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(110))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(111))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(113))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(114))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(115))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(116))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(117))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(118))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(119))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(95));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(120))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(121))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(122))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(123))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(124))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(125))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(126))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(127))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(128))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(129))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(130))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(131))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(107))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089E5450u);
    ctx.gpr[7] = (0u | 0u);
    goto L_089E4FF4;
L_089E5450:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E5464u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x089E5464u) goto L_089E5464;
    return;
L_089E5464:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5480:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E54ACu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem) && ctx.pc == 0x089E54ACu) goto L_089E54AC;
    return;
L_089E54AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E54B8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x089E54B8u) goto L_089E54B8;
    return;
L_089E54B8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089E54CCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089E4FB4;
L_089E54CC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (0u | 19u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9665)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(51));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(67))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(68))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(70))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(71))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(72))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(74))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(75))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(76))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(78))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[1] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(63), ctx.gpr[1]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(66), ctx.gpr[1]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089E55D8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_089E511C;
L_089E55D8:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E55ECu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x089E55ECu) goto L_089E55EC;
    return;
L_089E55EC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5604:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E5650u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem) && ctx.pc == 0x089E5650u) goto L_089E5650;
    return;
L_089E5650:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E565Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x089E565Cu) goto L_089E565C;
    return;
L_089E565C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_089E5690;
      }
      goto L_089E5680;
    }
L_089E5680:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089E568Cu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x089E568Cu) goto L_089E568C;
    return;
L_089E568C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E5690;
L_089E5690:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 32u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x089E56CCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem) && ctx.pc == 0x089E56CCu) goto L_089E56CC;
    return;
L_089E56CC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (1u << 16u);
      if (branch_taken) {
          goto L_089E5730;
      }
      goto L_089E56E0;
    }
L_089E56E0:
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_089E56E4;
L_089E56E4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (ctx.gpr[9] & 14u);
    ctx.gpr[9] = (ctx.gpr[9] ^ 4u);
    ctx.gpr[9] = (ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E571C;
      }
      goto L_089E5704;
    }
L_089E5704:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5720;
      }
      goto L_089E571C;
    }
L_089E571C:
    ctx.gpr[20] = (0u | 0u);
    goto L_089E5720;
L_089E5720:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E56E4;
      }
      goto L_089E5730;
    }
L_089E5730:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 32u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x089E5764u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem) && ctx.pc == 0x089E5764u) goto L_089E5764;
    return;
L_089E5764:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2237u << 16u);
      if (branch_taken) {
          goto L_089E57D4;
      }
      goto L_089E5778;
    }
L_089E5778:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[19] = (ctx.gpr[29] | 0u);
    goto L_089E5780;
L_089E5780:
    ctx.gpr[31] = (0x089E5788u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 58u, 0x08AD0600u>(ctx, &aot_mem) && ctx.pc == 0x089E5788u) goto L_089E5788;
    return;
L_089E5788:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E57C0;
      }
      goto L_089E5790;
    }
L_089E5790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E57C0;
      }
      goto L_089E579C;
    }
L_089E579C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E57C0;
      }
      goto L_089E57A8;
    }
L_089E57A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E57C0;
      }
      goto L_089E57BC;
    }
L_089E57BC:
    ctx.gpr[20] = (0u | 0u);
    goto L_089E57C0;
L_089E57C0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E5780;
      }
      goto L_089E57D4;
    }
L_089E57D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E57E0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x089E57E0u) goto L_089E57E0;
    return;
L_089E57E0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5810:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E5844u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem) && ctx.pc == 0x089E5844u) goto L_089E5844;
    return;
L_089E5844:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E5850u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x089E5850u) goto L_089E5850;
    return;
L_089E5850:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x089E5884u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 754u, 0x08977C18u>(ctx, &aot_mem) && ctx.pc == 0x089E5884u) goto L_089E5884;
    return;
L_089E5884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E5898u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 728u, 0x08977830u>(ctx, &aot_mem) && ctx.pc == 0x089E5898u) goto L_089E5898;
    return;
L_089E5898:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E58A4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 313u, 0x08931AD0u>(ctx, &aot_mem) && ctx.pc == 0x089E58A4u) goto L_089E58A4;
    return;
L_089E58A4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E58C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E58D0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x089E58D0u) goto L_089E58D0;
    return;
L_089E58D0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_089E58F8;
    }
    goto L_089E58EC;
L_089E58EC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089E5908;
      }
      goto L_089E58F8;
    }
L_089E58F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_089E5908;
L_089E5908:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5460), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E591C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E592Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x089E592Cu) goto L_089E592C;
    return;
L_089E592C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_089E5954;
    }
    goto L_089E5948;
L_089E5948:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089E5964;
      }
      goto L_089E5954;
    }
L_089E5954:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_089E5964;
L_089E5964:
    ctx.gpr[31] = (0x089E596Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 571u, 0x08B42624u>(ctx, &aot_mem) && ctx.pc == 0x089E596Cu) goto L_089E596C;
    return;
L_089E596C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E597C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E598Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x089E598Cu) goto L_089E598C;
    return;
L_089E598C:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4210), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E59A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E59B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x089E59B4u) goto L_089E59B4;
    return;
L_089E59B4:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[31] = (0x089E59C0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 572u, 0x08B4262Cu>(ctx, &aot_mem) && ctx.pc == 0x089E59C0u) goto L_089E59C0;
    return;
L_089E59C0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E59D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[31] = (0x089E59E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14864));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 47u, 0x089D03FCu>(ctx, &aot_mem) && ctx.pc == 0x089E59E4u) goto L_089E59E4;
    return;
L_089E59E4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E59F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E5A10u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem) && ctx.pc == 0x089E5A10u) goto L_089E5A10;
    return;
L_089E5A10:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x089E5A34u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 287u, 0x089E974Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5A34u) goto L_089E5A34;
    return;
L_089E5A34:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5A44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E5A78u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem) && ctx.pc == 0x089E5A78u) goto L_089E5A78;
    return;
L_089E5A78:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x089E5A94u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 121u, 0x08804E00u>(ctx, &aot_mem) && ctx.pc == 0x089E5A94u) goto L_089E5A94;
    return;
L_089E5A94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E5AA0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x089E5AA0u) goto L_089E5AA0;
    return;
L_089E5AA0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5ABC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9664))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089E5AECu);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089E5AECu) goto L_089E5AEC;
    return;
L_089E5AEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089E5B24;
      }
      goto L_089E5AF8;
    }
L_089E5AF8:
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2206u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20468));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_089E5B24;
L_089E5B24:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089E5B38;
      }
      goto L_089E5B2C;
    }
L_089E5B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089E5B38;
L_089E5B38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E5B48u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x089E5B48u) goto L_089E5B48;
    return;
L_089E5B48:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5B6C;
      }
      goto L_089E5B54;
    }
L_089E5B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E5B6C;
      }
      goto L_089E5B64;
    }
L_089E5B64:
    ctx.gpr[31] = (0x089E5B6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x089E5B6Cu) goto L_089E5B6C;
    return;
L_089E5B6C:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9665))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089E5B7Cu);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089E5B7Cu) goto L_089E5B7C;
    return;
L_089E5B7C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_089E5BB0;
      }
      goto L_089E5B88;
    }
L_089E5B88:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2206u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20764));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_089E5BB0;
L_089E5BB0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089E5BC4;
      }
      goto L_089E5BB8;
    }
L_089E5BB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089E5BC4;
L_089E5BC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E5BD4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x089E5BD4u) goto L_089E5BD4;
    return;
L_089E5BD4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5BF8;
      }
      goto L_089E5BE0;
    }
L_089E5BE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E5BF8;
      }
      goto L_089E5BF0;
    }
L_089E5BF0:
    ctx.gpr[31] = (0x089E5BF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x089E5BF8u) goto L_089E5BF8;
    return;
L_089E5BF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
        goto L_089E5C10;
    }
    goto L_089E5C04;
L_089E5C04:
    ctx.gpr[31] = (0x089E5C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x089E5C0Cu) goto L_089E5C0C;
    return;
L_089E5C0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    goto L_089E5C10;
L_089E5C10:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2976));
    ctx.gpr[31] = (0x089E5C20u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 266u, 0x08885220u>(ctx, &aot_mem) && ctx.pc == 0x089E5C20u) goto L_089E5C20;
    return;
L_089E5C20:
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
L_089E5C3C:
    ctx.gpr[4] = (0u | 46u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9664), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11024));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9664)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30144));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 47u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9665), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2880));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9665)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5C84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E5CA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2856));
    goto L_089E77C8;
L_089E5CA0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5CAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E5CF4;
      }
      goto L_089E5CD8;
    }
L_089E5CD8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_089E5D00;
      }
      goto L_089E5CF4;
    }
L_089E5CF4:
    ctx.gpr[31] = (0x089E5CFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 231u, 0x08A952D4u>(ctx, &aot_mem) && ctx.pc == 0x089E5CFCu) goto L_089E5CFC;
    return;
L_089E5CFC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_089E5D00;
L_089E5D00:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E5D14;
      }
      goto L_089E5D0C;
    }
L_089E5D0C:
    ctx.gpr[31] = (0x089E5D14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E5C84;
L_089E5D14:
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
L_089E5D2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E5D44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 245u, 0x08A953C8u>(ctx, &aot_mem) && ctx.pc == 0x089E5D44u) goto L_089E5D44;
    return;
L_089E5D44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5D54;
      }
      goto L_089E5D4C;
    }
L_089E5D4C:
    ctx.gpr[31] = (0x089E5D54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E5C84;
L_089E5D54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5D64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089E5DD0;
      }
      goto L_089E5D90;
    }
L_089E5D90:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089E5DC8;
      }
      goto L_089E5DA8;
    }
L_089E5DA8:
    ctx.gpr[31] = (0x089E5DB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E5CAC;
L_089E5DB0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089E5DA8;
      }
      goto L_089E5DC8;
    }
L_089E5DC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5DE0;
      }
      goto L_089E5DD0;
    }
L_089E5DD0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089E5DE0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_089E5D2C;
L_089E5DE0:
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
L_089E5DFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089E5EA4;
      }
      goto L_089E5E3C;
    }
L_089E5E3C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089E5E9C;
      }
      goto L_089E5E50;
    }
L_089E5E50:
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_089E5E58;
L_089E5E58:
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_089E5E88;
      }
      goto L_089E5E68;
    }
L_089E5E68:
    ctx.gpr[31] = (0x089E5E70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E5CAC;
L_089E5E70:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[23] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_089E5E68;
      }
      goto L_089E5E88;
    }
L_089E5E88:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089E5E58;
      }
      goto L_089E5E9C;
    }
L_089E5E9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5EB8;
      }
      goto L_089E5EA4;
    }
L_089E5EA4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[31] = (0x089E5EB8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089E5D2C;
L_089E5EB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5EE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E5F00u);
    ctx.gpr[6] = (0u | 4u);
    goto L_089E5D64;
L_089E5F00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089E5F20;
      }
      goto L_089E5F0C;
    }
L_089E5F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089E5F20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2824));
    goto L_089E77C8;
L_089E5F20:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5F34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E5F48u);
    ctx.gpr[6] = (0u | 4u);
    goto L_089E5D64;
L_089E5F48:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5F58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E5F6Cu);
    ctx.gpr[6] = (0u | 4u);
    goto L_089E5D64;
L_089E5F6C:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5F7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E5F98u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_089E5F34;
L_089E5F98:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E5FAC;
      }
      goto L_089E5FA4;
    }
L_089E5FA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E5FE8;
      }
      goto L_089E5FAC;
    }
L_089E5FAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089E5FBCu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 257u, 0x08A954A0u>(ctx, &aot_mem) && ctx.pc == 0x089E5FBCu) goto L_089E5FBC;
    return;
L_089E5FBC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E5FD0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_089E5D2C;
L_089E5FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089E5FE0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem) && ctx.pc == 0x089E5FE0u) goto L_089E5FE0;
    return;
L_089E5FE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5FE8;
      }
      goto L_089E5FE8;
    }
L_089E5FE8:
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
L_089E6000:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E6020u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_089E5EE4;
L_089E6020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] << 2u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089E6038u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x089E6038u) goto L_089E6038;
    return;
L_089E6038:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E6054u);
    ctx.gpr[7] = (0u | 4u);
    goto L_089E5DFC;
L_089E6054:
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
L_089E606C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E6094u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_089E5EE4;
L_089E6094:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089E60B4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x089E60B4u) goto L_089E60B4;
    return;
L_089E60B4:
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089E6118;
      }
      goto L_089E60C8;
    }
L_089E60C8:
    ctx.gpr[18] = (0u | 0u);
    goto L_089E60CC;
L_089E60CC:
    ctx.gpr[31] = (0x089E60D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089E5F7C;
L_089E60D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[31] = (0x089E60E8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089E5EE4;
L_089E60E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E60FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089E5EE4;
L_089E60FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089E60CC;
      }
      goto L_089E6118;
    }
L_089E6118:
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
L_089E6138:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E6158u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_089E5EE4;
L_089E6158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] << 2u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089E6170u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x089E6170u) goto L_089E6170;
    return;
L_089E6170:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E618Cu);
    ctx.gpr[7] = (0u | 4u);
    goto L_089E5DFC;
L_089E618C:
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
L_089E61A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E61CCu);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_089E5EE4;
L_089E61CC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E6204;
      }
      goto L_089E61D8;
    }
L_089E61D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E6204;
      }
      goto L_089E61E4;
    }
L_089E61E4:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E6200u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2804));
    goto L_089E77C8;
L_089E6200:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089E6204;
L_089E6204:
    ctx.gpr[7] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089E6218u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x089E6218u) goto L_089E6218;
    return;
L_089E6218:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089E6254;
      }
      goto L_089E622C;
    }
L_089E622C:
    ctx.gpr[20] = (0u | 0u);
    goto L_089E6230;
L_089E6230:
    ctx.gpr[31] = (0x089E6238u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089E5F7C;
L_089E6238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E6230;
      }
      goto L_089E6254;
    }
L_089E6254:
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
L_089E6274:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E62ACu);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_089E5EE4;
L_089E62AC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[18] << 3u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089E62C4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x089E62C4u) goto L_089E62C4;
    return;
L_089E62C4:
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089E6380;
      }
      goto L_089E62D8;
    }
L_089E62D8:
    ctx.gpr[23] = (2232u << 16u);
    ctx.gpr[21] = (0u | 3u);
    ctx.gpr[22] = (0u | 4u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-2760));
    goto L_089E62EC;
L_089E62EC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E62FCu);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[19]);
    goto L_089E5CAC;
L_089E62FC:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E631C;
      }
      goto L_089E630C;
    }
L_089E630C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E635C;
      }
      goto L_089E6314;
    }
L_089E6314:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089E6370;
      }
      goto L_089E631C;
    }
L_089E631C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E6334;
      }
      goto L_089E6324;
    }
L_089E6324:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E6348;
      }
      goto L_089E632C;
    }
L_089E632C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E635C;
      }
      goto L_089E6334;
    }
L_089E6334:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[31] = (0x089E6340u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E5F58;
L_089E6340:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089E6370;
      }
      goto L_089E6348;
    }
L_089E6348:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.gpr[31] = (0x089E6354u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E5F7C;
L_089E6354:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E6370;
      }
      goto L_089E635C;
    }
L_089E635C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089E6370u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_089E77C8;
L_089E6370:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089E62EC;
      }
      goto L_089E6380;
    }
L_089E6380:
    ctx.gpr[31] = (0x089E6388u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E5EE4;
L_089E6388:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089E63A0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x089E63A0u) goto L_089E63A0;
    return;
L_089E63A0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
      if (branch_taken) {
          goto L_089E63E0;
      }
      goto L_089E63B4;
    }
L_089E63B4:
    ctx.gpr[20] = (0u | 0u);
    goto L_089E63B8;
L_089E63B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x089E63C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E6410;
L_089E63C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E63B8;
      }
      goto L_089E63E0;
    }
L_089E63E0:
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
L_089E6410:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E6434u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 74u, 0x08AB0668u>(ctx, &aot_mem) && ctx.pc == 0x089E6434u) goto L_089E6434;
    return;
L_089E6434:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E6440u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089E5F7C;
L_089E6440:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E644C;
      }
      goto L_089E6448;
    }
L_089E6448:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    goto L_089E644C;
L_089E644C:
    ctx.gpr[31] = (0x089E6454u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089E5EE4;
L_089E6454:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E6460u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089E5CAC;
L_089E6460:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x089E646Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089E5CAC;
L_089E646C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x089E6478u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089E5CAC;
L_089E6478:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x089E6484u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089E5CAC;
L_089E6484:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E6494u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089E6138;
L_089E6494:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E64A0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089E606C;
L_089E64A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E64ACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089E61A4;
L_089E64AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E64B8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089E6274;
L_089E64B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E64C4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089E6000;
L_089E64C4:
    ctx.gpr[31] = (0x089E64CCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089E7184;
L_089E64CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E64E4;
      }
      goto L_089E64D4;
    }
L_089E64D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089E64E4u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11008));
    goto L_089E77C8;
L_089E64E4:
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
L_089E6500:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10992));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    goto L_089E651C;
L_089E651C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6544;
      }
      goto L_089E6524;
    }
L_089E6524:
    ctx.gpr[31] = (0x089E652Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E5CAC;
L_089E652C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E6544;
      }
      goto L_089E6538;
    }
L_089E6538:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089E651C;
      }
      goto L_089E6544;
    }
L_089E6544:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6560;
      }
      goto L_089E654C;
    }
L_089E654C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089E6560u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2728));
    goto L_089E77C8;
L_089E6560:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E6574:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E6598u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_089E5CAC;
L_089E6598:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089E65C4;
      }
      goto L_089E65A4;
    }
L_089E65A4:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E65C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2708));
    goto L_089E77C8;
L_089E65C4:
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
L_089E65DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E65F4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_089E6500;
L_089E65F4:
    ctx.gpr[31] = (0x089E65FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E5CAC;
L_089E65FC:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 81 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E666C;
      }
      goto L_089E660C;
    }
L_089E660C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.gpr[5] = (ctx.gpr[5] >> 28u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 4u));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2644));
      if (branch_taken) {
          goto L_089E6644;
      }
      goto L_089E6634;
    }
L_089E6634:
    ctx.gpr[6] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_089E6648;
      }
      goto L_089E6644;
    }
L_089E6644:
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    goto L_089E6648;
L_089E6648:
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[9] = (0u | 5u);
    ctx.gpr[31] = (0x089E6668u);
    ctx.gpr[10] = (0u | 0u);
    goto L_089E77C8;
L_089E6668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089E666C;
L_089E666C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 80 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E66D0;
      }
      goto L_089E6678;
    }
L_089E6678:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 4u));
    ctx.gpr[6] = (ctx.gpr[5] >> 28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2588));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 4u));
      if (branch_taken) {
          goto L_089E66B0;
      }
      goto L_089E66A0;
    }
L_089E66A0:
    ctx.gpr[8] = (0u - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u - ctx.gpr[8]);
      if (branch_taken) {
          goto L_089E66B4;
      }
      goto L_089E66B0;
    }
L_089E66B0:
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    goto L_089E66B4;
L_089E66B4:
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (0u | 5u);
    ctx.gpr[31] = (0x089E66D0u);
    ctx.gpr[10] = (0u | 0u);
    goto L_089E77C8;
L_089E66D0:
    ctx.gpr[31] = (0x089E66D8u);
    // nop
    goto L_089E6870;
L_089E66D8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E66E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E5CAC;
L_089E66E4:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] ^ ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10984));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E6704u);
    ctx.gpr[5] = (0u | 4u);
    goto L_089E6574;
L_089E6704:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10980));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E6714u);
    ctx.gpr[5] = (0u | 4u);
    goto L_089E6574;
L_089E6714:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10972));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E6724u);
    ctx.gpr[5] = (0u | 4u);
    goto L_089E6574;
L_089E6724:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10960));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E6734u);
    ctx.gpr[5] = (0u | 6u);
    goto L_089E6574;
L_089E6734:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10956));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E6744u);
    ctx.gpr[5] = (0u | 8u);
    goto L_089E6574;
L_089E6744:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10952));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E6754u);
    ctx.gpr[5] = (0u | 9u);
    goto L_089E6574;
L_089E6754:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10948));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E6764u);
    ctx.gpr[5] = (0u | 9u);
    goto L_089E6574;
L_089E6764:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10944));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E6774u);
    ctx.gpr[5] = (0u | 4u);
    goto L_089E6574;
L_089E6774:
    ctx.gpr[31] = (0x089E677Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E5F58;
L_089E677C:
    ctx.gpr[4] = (19439u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 44859u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E67B4;
      }
      goto L_089E67A0;
    }
L_089E67A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089E67B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2532));
    goto L_089E77C8;
L_089E67B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E67C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E67DCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_089E65DC;
L_089E67DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E67E8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089E6410;
L_089E67E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E67F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (0u | 64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[10];
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_089E6828;
      }
      goto L_089E681C;
    }
L_089E681C:
    ctx.gpr[9] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_089E6834;
      }
      goto L_089E6828;
    }
L_089E6828:
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E6850;
      }
      goto L_089E6834;
    }
L_089E6834:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-10992))))));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_089E684C;
      }
      goto L_089E6840;
    }
L_089E6840:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10936));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E6850;
      }
      goto L_089E684C;
    }
L_089E684C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    goto L_089E6850;
L_089E6850:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E6864u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_089E67C8;
L_089E6864:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E6870:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E6878:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E689C;
      }
      goto L_089E6888;
    }
L_089E6888:
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E68A4;
      }
      goto L_089E6894;
    }
L_089E6894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E68B4;
      }
      goto L_089E689C;
    }
L_089E689C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E68DC;
      }
      goto L_089E68A4;
    }
L_089E68A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089E68B4;
L_089E68B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_089E68DC;
L_089E68DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E68E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E68F8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_089E6878;
L_089E68F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089E6924;
      }
      goto L_089E6904;
    }
L_089E6904:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E692C;
      }
      goto L_089E691C;
    }
L_089E691C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6938;
      }
      goto L_089E6924;
    }
L_089E6924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E6938;
      }
      goto L_089E692C;
    }
L_089E692C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089E6938;
L_089E6938:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E6948:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089E6980;
      }
      goto L_089E6968;
    }
L_089E6968:
    ctx.gpr[31] = (0x089E6970u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089E6878;
L_089E6970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E6968;
      }
      goto L_089E6980;
    }
L_089E6980:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E699C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E69AC;
      }
      goto L_089E69A4;
    }
L_089E69A4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E69B4;
      }
      goto L_089E69AC;
    }
L_089E69AC:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089E69B4;
L_089E69B4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E69D0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E69D8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E69E0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E69E8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_089E69EC;
L_089E69EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089E6A24;
      }
      goto L_089E69F4;
    }
L_089E69F4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6A24;
      }
      goto L_089E6A04;
    }
L_089E6A04:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[8] & 1u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E6A1C;
      }
      goto L_089E6A14;
    }
L_089E6A14:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[8]);
    goto L_089E6A1C;
L_089E6A1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-24));
      if (branch_taken) {
          goto L_089E69EC;
      }
      goto L_089E6A24;
    }
L_089E6A24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_089E6A38;
      }
      goto L_089E6A2C;
    }
L_089E6A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E6A40;
      }
      goto L_089E6A38;
    }
L_089E6A38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E6A68;
      }
      goto L_089E6A40;
    }
L_089E6A40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E6A54;
      }
      goto L_089E6A48;
    }
L_089E6A48:
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(92), 0u);
      if (branch_taken) {
          goto L_089E6A68;
      }
      goto L_089E6A54;
    }
L_089E6A54:
    ctx.gpr[5] = (0u | 24u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    goto L_089E6A68;
L_089E6A68:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E6A70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E6A8C;
      }
      goto L_089E6A80;
    }
L_089E6A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_089E6A8C;
L_089E6A8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E6A94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E6ADCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089E6A70;
L_089E6ADC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6B24;
      }
      goto L_089E6AE8;
    }
L_089E6AE8:
    ctx.gpr[31] = (0x089E6AF0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089E6878;
L_089E6AF0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E6B00u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 90u, 0x08AB0814u>(ctx, &aot_mem) && ctx.pc == 0x089E6B00u) goto L_089E6B00;
    return;
L_089E6B00:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6B24;
      }
      goto L_089E6B0C;
    }
L_089E6B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.gpr[31] = (0x089E6B24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 282u, 0x08806450u>(ctx, &aot_mem) && ctx.pc == 0x089E6B24u) goto L_089E6B24;
    return;
L_089E6B24:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_089E6B48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E6B90u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089E6A70;
L_089E6B90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E6C0C;
      }
      goto L_089E6BA4;
    }
L_089E6BA4:
    ctx.gpr[31] = (0x089E6BACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089E6878;
L_089E6BAC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E6BBCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 90u, 0x08AB0814u>(ctx, &aot_mem) && ctx.pc == 0x089E6BBCu) goto L_089E6BBC;
    return;
L_089E6BBC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6BD8;
      }
      goto L_089E6BC8;
    }
L_089E6BC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 40u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_089E6BE0;
    }
    goto L_089E6BD8;
L_089E6BD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089E6C0C;
      }
      goto L_089E6BE0;
    }
L_089E6BE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089E6C0C;
L_089E6C0C:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_089E6C30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
        goto L_089E6C64;
    }
    goto L_089E6C48;
L_089E6C48:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10920));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10912));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089E6C94;
      }
      goto L_089E6C64;
    }
L_089E6C64:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089E6C8C;
      }
      goto L_089E6C84;
    }
L_089E6C84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10908));
      if (branch_taken) {
          goto L_089E6C90;
      }
      goto L_089E6C8C;
    }
L_089E6C8C:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10900));
    goto L_089E6C90;
L_089E6C90:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_089E6C94;
L_089E6C94:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089E6CA0u);
    ctx.gpr[6] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 339u, 0x088B9930u>(ctx, &aot_mem) && ctx.pc == 0x089E6CA0u) goto L_089E6CA0;
    return;
L_089E6CA0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E6CAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(7)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] << (ctx.gpr[6] & 31u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089E6D48;
      }
      goto L_089E6CF0;
    }
L_089E6CF0:
    ctx.gpr[19] = (ctx.gpr[20] << 4u);
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[17] = (0u | 4u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_089E6D00;
L_089E6D00:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
    ctx.gpr[31] = (0x089E6D14u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 305u, 0x088B96E8u>(ctx, &aot_mem) && ctx.pc == 0x089E6D14u) goto L_089E6D14;
    return;
L_089E6D14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6D34;
      }
      goto L_089E6D1C;
    }
L_089E6D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089E6D34;
      }
      goto L_089E6D28;
    }
L_089E6D28:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089E6D4C;
      }
      goto L_089E6D34;
    }
L_089E6D34:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_089E6D00;
      }
      goto L_089E6D48;
    }
L_089E6D48:
    ctx.gpr[2] = (0u | 0u);
    goto L_089E6D4C;
L_089E6D4C:
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
L_089E6D74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10896));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10892));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10884));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E6DC0u);
    ctx.gpr[6] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 339u, 0x088B9930u>(ctx, &aot_mem) && ctx.pc == 0x089E6DC0u) goto L_089E6DC0;
    return;
L_089E6DC0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E6DE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089E6F20;
      }
      goto L_089E6E2C;
    }
L_089E6E2C:
    ctx.gpr[22] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10868));
    ctx.gpr[30] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10896));
    goto L_089E6E38;
L_089E6E38:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-83));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6F0C;
      }
      goto L_089E6E48;
    }
L_089E6E48:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2304)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E6E60:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E6E6Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089E6C30;
L_089E6E6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6F10;
      }
      goto L_089E6E74;
    }
L_089E6E74:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E6E88;
      }
      goto L_089E6E7C;
    }
L_089E6E7C:
    ctx.gpr[31] = (0x089E6E84u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089E68E4;
L_089E6E84:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089E6E88;
L_089E6E88:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E6F10;
      }
      goto L_089E6E90;
    }
L_089E6E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E6F10;
      }
      goto L_089E6EA0;
    }
L_089E6EA0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E6EB8;
      }
      goto L_089E6EA8;
    }
L_089E6EA8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089E6EB4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_089E735C;
L_089E6EB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089E6EB8;
L_089E6EB8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E6EE0;
      }
      goto L_089E6EC0;
    }
L_089E6EC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E6ECCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089E6CAC;
L_089E6ECC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E6EDC;
      }
      goto L_089E6ED4;
    }
L_089E6ED4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[23]);
      if (branch_taken) {
          goto L_089E6EE0;
      }
      goto L_089E6EDC;
    }
L_089E6EDC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[30]);
    goto L_089E6EE0;
L_089E6EE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6F10;
      }
      goto L_089E6EE8;
    }
L_089E6EE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E6F10;
      }
      goto L_089E6F0C;
    }
L_089E6F0C:
    ctx.gpr[21] = (0u | 0u);
    goto L_089E6F10;
L_089E6F10:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E6E38;
      }
      goto L_089E6F20;
    }
L_089E6F20:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
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
L_089E6F54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[8] = (0u | 62u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089E6FE0;
      }
      goto L_089E6F84;
    }
L_089E6F84:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E6FB4;
      }
      goto L_089E6F9C;
    }
L_089E6F9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E6FB0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2504));
    goto L_089E77C8;
L_089E6FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089E6FB4;
L_089E6FB4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E6FCCu);
    ctx.gpr[8] = (0u | 0u);
    goto L_089E6DE0;
L_089E6FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E7028;
      }
      goto L_089E6FE0;
    }
L_089E6FE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089E701C;
      }
      goto L_089E6FEC;
    }
L_089E6FEC:
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E7014u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8));
    goto L_089E6DE0;
L_089E7014:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E7028;
      }
      goto L_089E701C;
    }
L_089E701C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089E7028u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089E6D74;
L_089E7028:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E7034u);
    ctx.gpr[5] = (0u | 102u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem) && ctx.pc == 0x089E7034u) goto L_089E7034;
    return;
L_089E7034:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7068;
      }
      goto L_089E703C;
    }
L_089E703C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089E705C;
      }
      goto L_089E7054;
    }
L_089E7054:
    ctx.gpr[31] = (0x089E705Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 473u, 0x08871CECu>(ctx, &aot_mem) && ctx.pc == 0x089E705Cu) goto L_089E705C;
    return;
L_089E705C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089E7068;
L_089E7068:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_089E7084:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(71)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 251 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E70D4;
      }
      goto L_089E7094;
    }
L_089E7094:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E70AC;
      }
      goto L_089E70A4;
    }
L_089E70A4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E70D4;
      }
      goto L_089E70AC;
    }
L_089E70AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[5] = (0u | 27u);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E70D4;
      }
      goto L_089E70CC;
    }
L_089E70CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089E70D8;
      }
      goto L_089E70D4;
    }
L_089E70D4:
    ctx.gpr[2] = (0u | 0u);
    goto L_089E70D8;
L_089E70D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E70E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] & 63u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 28 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (0u | 32u);
        goto L_089E7134;
    }
    goto L_089E7100;
L_089E7100:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E712C;
      }
      goto L_089E710C;
    }
L_089E710C:
    ctx.gpr[4] = (ctx.gpr[5] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E7124;
      }
      goto L_089E711C;
    }
L_089E711C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089E7140;
      }
      goto L_089E7124;
    }
L_089E7124:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E7140;
      }
      goto L_089E712C;
    }
L_089E712C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E7140;
      }
      goto L_089E7134;
    }
L_089E7134:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E712C;
      }
      goto L_089E713C;
    }
L_089E713C:
    ctx.gpr[2] = (0u | 1u);
    goto L_089E7140;
L_089E7140:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7148:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(71)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E7178;
      }
      goto L_089E7158;
    }
L_089E7158:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E717C;
      }
      goto L_089E7164;
    }
L_089E7164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-250));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E717C;
      }
      goto L_089E7178;
    }
L_089E7178:
    ctx.gpr[2] = (0u | 1u);
    goto L_089E717C;
L_089E717C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7184:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E7198u);
    ctx.gpr[6] = (0u | 255u);
    goto L_089E7830;
L_089E7198:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E71A4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-250));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089E71D8;
      }
      goto L_089E71B0;
    }
L_089E71B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089E71D8;
      }
      goto L_089E71CC;
    }
L_089E71CC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089E71DC;
      }
      goto L_089E71D8;
    }
L_089E71D8:
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10860));
    goto L_089E71DC;
L_089E71DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E71E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[7] & 1u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089E7338;
      }
      goto L_089E7218;
    }
L_089E7218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E722Cu);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_089E6878;
L_089E722C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089E7240u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 90u, 0x08AB0814u>(ctx, &aot_mem) && ctx.pc == 0x089E7240u) goto L_089E7240;
    return;
L_089E7240:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E7270;
      }
      goto L_089E7248;
    }
L_089E7248:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089E7258u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_089E7830;
L_089E7258:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] & 63u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089E7338;
      }
      goto L_089E7268;
    }
L_089E7268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7278;
      }
      goto L_089E7270;
    }
L_089E7270:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10856));
      if (branch_taken) {
          goto L_089E733C;
      }
      goto L_089E7278;
    }
L_089E7278:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7338;
      }
      goto L_089E7280;
    }
L_089E7280:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2160)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7298:
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10868));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E733C;
      }
      goto L_089E72C8;
    }
L_089E72C8:
    ctx.gpr[4] = (ctx.gpr[18] >> 24u);
    ctx.gpr[18] = (ctx.gpr[18] >> 15u);
    ctx.gpr[18] = (ctx.gpr[18] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E72E8;
      }
      goto L_089E72E0;
    }
L_089E72E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7338;
      }
      goto L_089E72E8;
    }
L_089E72E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E72F8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_089E71E4;
L_089E72F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E733C;
      }
      goto L_089E7300;
    }
L_089E7300:
    ctx.gpr[5] = (ctx.gpr[18] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[31] = (0x089E7310u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089E71A4;
L_089E7310:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10848));
      if (branch_taken) {
          goto L_089E733C;
      }
      goto L_089E731C;
    }
L_089E731C:
    ctx.gpr[5] = (ctx.gpr[18] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[31] = (0x089E732Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089E71A4;
L_089E732C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10840));
      if (branch_taken) {
          goto L_089E733C;
      }
      goto L_089E7338;
    }
L_089E7338:
    ctx.gpr[2] = (0u | 0u);
    goto L_089E733C;
L_089E733C:
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
L_089E735C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089E7390;
      }
      goto L_089E7384;
    }
L_089E7384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_089E73DC;
      }
      goto L_089E7390;
    }
L_089E7390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-16)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24));
      if (branch_taken) {
          goto L_089E73DC;
      }
      goto L_089E73A0;
    }
L_089E73A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x089E73B8u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_089E6878;
L_089E73B8:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[6] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E73F0;
      }
      goto L_089E73D4;
    }
L_089E73D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 63u);
      if (branch_taken) {
          goto L_089E73E4;
      }
      goto L_089E73DC;
    }
L_089E73DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E740C;
      }
      goto L_089E73E4;
    }
L_089E73E4:
    ctx.gpr[6] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089E7408;
      }
      goto L_089E73F0;
    }
L_089E73F0:
    ctx.gpr[5] = (ctx.gpr[4] >> 24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E7400u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_089E71E4;
L_089E7400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E740C;
      }
      goto L_089E7408;
    }
L_089E7408:
    ctx.gpr[2] = (0u | 0u);
    goto L_089E740C;
L_089E740C:
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
L_089E7424:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7450;
      }
      goto L_089E7438;
    }
L_089E7438:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089E7458;
      }
      goto L_089E7440;
    }
L_089E7440:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E7438;
      }
      goto L_089E7450;
    }
L_089E7450:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E745C;
      }
      goto L_089E7458;
    }
L_089E7458:
    ctx.gpr[2] = (0u | 1u);
    goto L_089E745C;
L_089E745C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7464:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31904));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E74B8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_089E7424;
L_089E74B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E74EC;
      }
      goto L_089E74C0;
    }
L_089E74C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] >> 29u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 3u));
    ctx.gpr[31] = (0x089E74E8u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_089E71E4;
L_089E74E8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089E74EC;
L_089E74EC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E751C;
      }
      goto L_089E74F4;
    }
L_089E74F4:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089E7514u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2460));
    goto L_089E77C8;
L_089E7514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7534;
      }
      goto L_089E751C;
    }
L_089E751C:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089E7534u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2424));
    goto L_089E77C8;
L_089E7534:
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
L_089E7554:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089E7570;
      }
      goto L_089E756C;
    }
L_089E756C:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089E7570;
L_089E7570:
    ctx.gpr[31] = (0x089E7578u);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10832));
    goto L_089E7464;
L_089E7578:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7584:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E75B0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 349u, 0x088C2EA4u>(ctx, &aot_mem) && ctx.pc == 0x089E75B0u) goto L_089E75B0;
    return;
L_089E75B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E75BC;
      }
      goto L_089E75B8;
    }
L_089E75B8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089E75BC;
L_089E75BC:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E75D0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2396));
    goto L_089E7464;
L_089E75D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E75E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-31904));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089E7640;
      }
      goto L_089E762C;
    }
L_089E762C:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[31] = (0x089E7638u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2372));
    goto L_089E77C8;
L_089E7638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7650;
      }
      goto L_089E7640;
    }
L_089E7640:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[31] = (0x089E7650u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2336));
    goto L_089E77C8;
L_089E7650:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089E76CC;
      }
      goto L_089E768C;
    }
L_089E768C:
    ctx.gpr[31] = (0x089E7694u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089E68E4;
L_089E7694:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E76A0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089E6A70;
L_089E76A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089E76B4u);
    ctx.gpr[6] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 339u, 0x088B9930u>(ctx, &aot_mem) && ctx.pc == 0x089E76B4u) goto L_089E76B4;
    return;
L_089E76B4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10820));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E76CCu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 337u, 0x088B98ECu>(ctx, &aot_mem) && ctx.pc == 0x089E76CCu) goto L_089E76CC;
    return;
L_089E76CC:
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
L_089E76E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089E77A8;
      }
      goto L_089E7700;
    }
L_089E7700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_089E7728;
    }
    goto L_089E7718;
L_089E7718:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E7724u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 446u, 0x088719B4u>(ctx, &aot_mem) && ctx.pc == 0x089E7724u) goto L_089E7724;
    return;
L_089E7724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_089E7728;
L_089E7728:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089E778C;
      }
      goto L_089E7784;
    }
L_089E7784:
    ctx.gpr[31] = (0x089E778Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 473u, 0x08871CECu>(ctx, &aot_mem) && ctx.pc == 0x089E778Cu) goto L_089E778C;
    return;
L_089E778C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    ctx.gpr[31] = (0x089E77A8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 560u, 0x088724C4u>(ctx, &aot_mem) && ctx.pc == 0x089E77A8u) goto L_089E77A8;
    return;
L_089E77A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E77B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 446u, 0x088719B4u>(ctx, &aot_mem) && ctx.pc == 0x089E77B4u) goto L_089E77B4;
    return;
L_089E77B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E77C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[4] = (0u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E780Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 360u, 0x088B9A78u>(ctx, &aot_mem) && ctx.pc == 0x089E780Cu) goto L_089E780C;
    return;
L_089E780C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E7818u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_089E7660;
L_089E7818:
    ctx.gpr[31] = (0x089E7820u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E76E4;
L_089E7820:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7830:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E7874u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_089E7084;
L_089E7874:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E787C;
    }
L_089E787C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D58;
      }
      goto L_089E788C;
    }
L_089E788C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[22] = (ctx.gpr[4] >> 24u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[4] & 63u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[30] = (0u | 0u);
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E78B8;
    }
L_089E78B8:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1032));
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E78E4;
      }
      goto L_089E78D4;
    }
L_089E78D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089E7A00;
      }
      goto L_089E78DC;
    }
L_089E78DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E78FC;
      }
      goto L_089E78E4;
    }
L_089E78E4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E79A4;
      }
      goto L_089E78EC;
    }
L_089E78EC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E79E4;
      }
      goto L_089E78F4;
    }
L_089E78F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7A00;
      }
      goto L_089E78FC;
    }
L_089E78FC:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[23] = (ctx.gpr[4] >> 15u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1032));
    ctx.gpr[30] = (ctx.gpr[4] >> 6u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (ctx.gpr[23] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[30] & 511u);
      if (branch_taken) {
          goto L_089E793C;
      }
      goto L_089E7924;
    }
L_089E7924:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7934;
    }
L_089E7934:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E796C;
      }
      goto L_089E793C;
    }
L_089E793C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1032));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E796C;
      }
      goto L_089E7958;
    }
L_089E7958:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E7964u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_089E7148;
L_089E7964:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E796C;
    }
L_089E796C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1032));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E799C;
      }
      goto L_089E7988;
    }
L_089E7988:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E7994u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_089E7148;
L_089E7994:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E799C;
    }
L_089E799C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7A00;
      }
      goto L_089E79A4;
    }
L_089E79A4:
    ctx.gpr[23] = (ctx.gpr[4] >> 6u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1032));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] & ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E79DC;
      }
      goto L_089E79CC;
    }
L_089E79CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E79DC;
    }
L_089E79DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7A00;
      }
      goto L_089E79E4;
    }
L_089E79E4:
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[4]);
    goto L_089E7A00;
L_089E7A00:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1032));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7A28;
      }
      goto L_089E7A1C;
    }
L_089E7A1C:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089E7A28;
      }
      goto L_089E7A24;
    }
L_089E7A24:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089E7A28;
L_089E7A28:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1032));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7A78;
      }
      goto L_089E7A44;
    }
L_089E7A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7A58;
    }
L_089E7A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7A78;
    }
L_089E7A78:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7A88;
    }
L_089E7A88:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2112)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7AA0:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7ABC;
      }
      goto L_089E7AA8;
    }
L_089E7AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7ABC;
    }
L_089E7ABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7AC4;
    }
L_089E7AC4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7ADC;
      }
      goto L_089E7AD0;
    }
L_089E7AD0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E7ADC;
      }
      goto L_089E7AD8;
    }
L_089E7AD8:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089E7ADC;
L_089E7ADC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7AE4;
    }
L_089E7AE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7AF4;
    }
L_089E7AF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7AFC;
    }
L_089E7AFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[23] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7B18;
    }
L_089E7B18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7B20;
    }
L_089E7B20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7B34;
    }
L_089E7B34:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E7B44;
      }
      goto L_089E7B40;
    }
L_089E7B40:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089E7B44;
L_089E7B44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7B4C;
    }
L_089E7B4C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7B58;
    }
L_089E7B58:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7B60;
    }
L_089E7B60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7B68;
    }
L_089E7B68:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7B80;
    }
L_089E7B80:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E7B90;
      }
      goto L_089E7B8C;
    }
L_089E7B8C:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089E7B90;
L_089E7B90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7BA4;
    }
L_089E7BA4:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7BB4;
    }
L_089E7BB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7BC4;
    }
L_089E7BC4:
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7BE4;
      }
      goto L_089E7BD0;
    }
L_089E7BD0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7BE4;
      }
      goto L_089E7BD8;
    }
L_089E7BD8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E7BE4;
      }
      goto L_089E7BE0;
    }
L_089E7BE0:
    ctx.gpr[20] = (ctx.gpr[23] + ctx.gpr[20]);
    goto L_089E7BE4;
L_089E7BE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7BEC;
    }
L_089E7BEC:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7C0C;
      }
      goto L_089E7BF4;
    }
L_089E7BF4:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7C0C;
    }
L_089E7C0C:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E7C38;
      }
      goto L_089E7C1C;
    }
L_089E7C1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E7C28u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_089E70E0;
L_089E7C28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7C30;
    }
L_089E7C30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7C58;
      }
      goto L_089E7C38;
    }
L_089E7C38:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7C58;
      }
      goto L_089E7C40;
    }
L_089E7C40:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7C58;
    }
L_089E7C58:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E7C68;
      }
      goto L_089E7C64;
    }
L_089E7C64:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089E7C68;
L_089E7C68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7C70;
    }
L_089E7C70:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089E7C94;
      }
      goto L_089E7C7C;
    }
L_089E7C7C:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7C94;
    }
L_089E7C94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7C9C;
    }
L_089E7C9C:
    ctx.gpr[4] = (ctx.gpr[23] & 31u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7CB8;
    }
L_089E7CB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7CC0;
    }
L_089E7CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7CD0;
    }
L_089E7CD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[20]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7CF8;
    }
L_089E7CF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089E7D40;
      }
      goto L_089E7D00;
    }
L_089E7D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E7D34;
      }
      goto L_089E7D24;
    }
L_089E7D24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D34;
      }
      goto L_089E7D2C;
    }
L_089E7D2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E7D68;
      }
      goto L_089E7D34;
    }
L_089E7D34:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) > 0;
    // nop
      if (branch_taken) {
          goto L_089E7D00;
      }
      goto L_089E7D40;
    }
L_089E7D40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7D48;
    }
L_089E7D48:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E788C;
      }
      goto L_089E7D58;
    }
L_089E7D58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089E7D68;
L_089E7D68:
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
L_089E7D98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089E7DEC;
      }
      goto L_089E7DB4;
    }
L_089E7DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089E7DD8;
      }
      goto L_089E7DC0;
    }
L_089E7DC0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_089E7DDC;
    }
    goto L_089E7DC8;
L_089E7DC8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_089E7DDC;
    }
    goto L_089E7DD0;
L_089E7DD0:
    ctx.gpr[31] = (0x089E7DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x089E7DD8u) goto L_089E7DD8;
    return;
L_089E7DD8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_089E7DDC;
L_089E7DDC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7DEC;
      }
      goto L_089E7DE4;
    }
L_089E7DE4:
    ctx.gpr[31] = (0x089E7DECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x089E7DECu) goto L_089E7DEC;
    return;
L_089E7DEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7E00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2235u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27268));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E7E38u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7E38u) goto L_089E7E38;
    return;
L_089E7E38:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7E64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2235u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27268));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 255u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E7EBCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7EBCu) goto L_089E7EBC;
    return;
L_089E7EBC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7EF8:
    ctx.gpr[6] = (2235u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-27268));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7F48:
    ctx.gpr[2] = (2206u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(32584));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7F54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E7F64u);
    // nop
    goto L_089E7F48;
L_089E7F64:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7F70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E7F8Cu);
    ctx.gpr[17] = (0u | 0u);
    goto L_089E7F48;
L_089E7F8C:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_089E7FB4;
    }
    goto L_089E7F94;
L_089E7F94:
    ctx.gpr[31] = (0x089E7F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 295u, 0x08A9A6CCu>(ctx, &aot_mem) && ctx.pc == 0x089E7F9Cu) goto L_089E7F9C;
    return;
L_089E7F9C:
    ctx.gpr[4] = (ctx.gpr[2] ^ ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7FB4;
      }
      goto L_089E7FB0;
    }
L_089E7FB0:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E7FB4;
L_089E7FB4:
    ctx.gpr[2] = (ctx.gpr[17] & 255u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7FCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E7FF0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 300u, 0x08A9A720u>(ctx, &aot_mem) && ctx.pc == 0x089E7FF0u) goto L_089E7FF0;
    return;
L_089E7FF0:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26704));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9676)));
    ctx.pc = 0x089E8000u; return;
}

void recomp_unit_0120(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0120_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_120(Runtime &runtime) {
    runtime.register_generated_unit(120u, 0x089E4000u, 16384u, &recomp_unit_0120, &recomp_unit_0120_entry);
    runtime.register_function(0x089E4000u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E400Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4010u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E401Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4028u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4030u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4040u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4058u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4064u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E406Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4088u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4090u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4104u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E410Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E411Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4124u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E412Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4134u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E413Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4148u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4158u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4160u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4168u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4178u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4190u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4198u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4204u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E420Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4218u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4220u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4228u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E423Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4244u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E424Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4254u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E425Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4268u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E427Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4290u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4304u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4310u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4320u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E433Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4354u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4360u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4378u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4410u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4420u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E442Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4434u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4440u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4494u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E449Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E44A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E44ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E44B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4504u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4514u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E451Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4524u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4538u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4560u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E456Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4580u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4610u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4620u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4654u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4668u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E467Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4694u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4700u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4708u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4710u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E471Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4728u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4734u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4740u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4754u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E475Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4764u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E476Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4774u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E477Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4784u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4814u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4838u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4840u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4860u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4870u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E487Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E48BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E490Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4918u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4920u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4928u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4938u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E494Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4954u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E495Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4968u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4974u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4988u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4998u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BB8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BE8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C08u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C18u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CCCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D5Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DF4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E5Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4ECCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4ED4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4EE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4EE8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4EFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FF4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5088u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5098u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E50B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E50C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E50D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E50E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5110u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E511Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5218u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5224u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E522Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5238u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5240u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E525Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5270u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5290u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5300u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5450u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5464u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5480u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5604u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5650u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E565Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5680u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E568Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5690u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E56CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E56E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E56E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5704u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E571Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5720u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5730u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5764u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5778u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5780u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5788u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5790u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E579Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5810u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5844u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5850u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5884u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5898u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5908u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E591Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E592Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5948u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5954u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5964u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E596Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E597Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E598Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5AA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5ABCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5AECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5AF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BB8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BF0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CF4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E50u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EB8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FE8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6000u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6020u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6038u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6054u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E606Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6094u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6118u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6138u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6158u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6170u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E618Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6200u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6204u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6218u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E622Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6230u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6238u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6254u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6274u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E630Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6314u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E631Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6324u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E632Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6334u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6340u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6348u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6354u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E635Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6370u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6380u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6388u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6410u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6434u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6440u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6448u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E644Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6454u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6460u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E646Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6478u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6484u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6494u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6500u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E651Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6524u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E652Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6538u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6544u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E654Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6560u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6574u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6598u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E660Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6634u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6644u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6648u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6668u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E666Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6678u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6704u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6714u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6724u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6734u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6744u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6754u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6764u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6774u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E677Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E681Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6828u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6834u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6840u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E684Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6850u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6864u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6870u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6878u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6888u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6894u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E689Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6904u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E691Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6924u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E692Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6938u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6948u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6968u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6970u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6980u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E699Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A1Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6ADCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6AE8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6AF0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CF0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D1Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EB8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6ECCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6ED4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EDCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EE8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FCCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7014u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E701Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7028u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7034u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E703Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7054u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E705Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7068u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7084u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7094u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7100u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E710Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E711Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7124u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E712Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7134u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E713Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7140u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7148u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7158u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7164u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7178u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E717Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7184u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7198u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7218u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E722Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7240u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7248u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7258u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7268u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7270u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7278u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7280u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7298u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7300u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7310u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E731Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E732Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7338u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E733Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E735Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7384u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7390u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7400u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7408u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E740Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7424u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7438u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7440u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7450u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7458u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E745Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7464u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7514u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E751Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7534u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7554u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E756Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7570u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7578u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7584u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E762Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7638u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7640u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7650u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7660u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E768Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7694u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7700u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7718u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7724u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7728u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7784u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E778Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E780Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7818u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7820u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7830u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7874u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E787Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E788Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7924u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7934u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E793Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7958u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7964u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E796Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7988u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7994u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E799Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E79A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E79CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E79DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E79E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A1Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7ABCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7ADCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AF4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B18u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BF4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C1Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CB8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DDCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7EBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7EF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FCCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FF0u, &recomp_unit_0120, "recomp_unit_0120");
}
} // namespace psprecomp
