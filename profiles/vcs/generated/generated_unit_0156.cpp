#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0156[4085] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0,
    0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 0, 0, 25,
    0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 34, 0,
    0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 41, 0, 0, 42, 0,
    0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 51, 0,
    0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0,
    0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0,
    0, 0, 69, 0, 0, 70, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0,
    77, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0,
    0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0,
    93, 0, 0, 0, 94, 0, 0, 0, 0, 95, 96, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 101,
    0, 0, 0, 102, 0, 0, 0, 0, 103, 104, 0, 0, 0, 0, 105, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0,
    0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114,
    0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 123, 0, 124, 0, 0, 0, 0, 125, 126, 0, 127, 0,
    0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 141, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0,
    0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152,
    0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0,
    0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0,
    170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174,
    0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 180, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 184, 0, 185, 0, 0, 186, 0, 187, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0,
    0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 213, 0, 214, 0, 215, 0, 216, 0, 0,
    217, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 221, 222, 0, 223, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0,
    226, 0, 227, 0, 0, 0, 0, 0, 228, 229, 0, 230, 0, 0, 0, 0, 0, 0, 231, 232, 0, 0, 0, 233, 234, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0,
    0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0,
    0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 252, 0, 253, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255,
    0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 262, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 264, 0, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0,
    0, 274, 0, 275, 0, 0, 0, 276, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0,
    283, 0, 0, 0, 284, 0, 285, 0, 286, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0,
    0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 304, 305, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 312, 0, 0, 0, 313, 0, 314, 0, 315, 0, 0, 0, 316, 0, 317, 0, 318, 0, 0, 0, 0,
    319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 328, 0, 329, 0, 330, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334,
    0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0,
    0, 0, 0, 341, 0, 342, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346,
    0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 353, 0, 354, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363,
    0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0,
    0, 371, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 376, 0, 377, 0, 0, 0, 378, 0, 0,
    0, 379, 0, 0, 0, 380, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 385, 386, 0, 0, 387, 0, 0, 388, 0, 0,
    0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 394, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 400, 0, 401, 0, 402, 0, 0, 0, 403,
    0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0,
    0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 413, 0, 414, 0, 0, 0, 0, 0, 415, 0,
    0, 0, 416, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0,
    424, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0,
    433, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 437, 0, 438, 0, 0, 439, 0, 440, 0, 441, 0, 442, 0, 0, 0, 443, 0,
    0, 444, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 0, 453, 0, 0, 454,
    0, 455, 0, 0, 456, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 464, 0, 0, 0, 0,
    0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 468, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 471, 0, 0, 472, 0, 0, 0, 473, 474, 0, 475, 0, 0, 476, 0, 0, 0, 477, 0, 0, 478, 0, 0, 0, 479, 0, 480, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 483, 484, 0, 485, 0, 0, 486, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 489, 0, 490, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 493, 494, 0, 495, 0, 0, 496, 0, 0, 0, 497, 0, 0, 498, 0, 0, 0, 499,
    0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 505, 0,
    0, 0, 506, 507, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0,
    0, 515, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 523, 0, 524, 525, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 528, 0,
    0, 0, 529, 530, 0, 531, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 536, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 541, 542, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 547, 548, 0, 0, 0,
    0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551,
    0, 552, 0, 0, 0, 553, 0, 0, 0, 554, 555, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    562, 0, 563, 0, 564, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 568, 0, 0, 0, 569, 0, 0, 0,
    570, 571, 0, 572, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 576, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0, 581, 0, 582, 0, 583,
    0, 0, 584, 0, 585, 0, 0, 0, 586, 587, 588, 0, 589, 0, 590, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 596, 597, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 599, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 601, 602, 0, 0, 0, 603, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    606, 0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 611, 0, 612, 0, 0, 613, 0, 0, 0, 0, 614, 0, 615, 0,
    0, 0, 616, 0, 0, 0, 617, 618, 0, 0, 619, 0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0,
    0, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0,
    629, 0, 630, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0, 633, 634, 635, 0, 0, 636, 0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639,
    0, 0, 640, 641, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 643, 0, 644, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 654, 0, 0, 655, 0, 656, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 658, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0,
    0, 0, 0, 0, 663, 0, 0, 0, 0, 664, 0, 0, 665, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 668, 669, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 671, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 675, 0, 676, 0, 0, 677, 0, 678, 0, 679, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0, 0, 0, 682, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 687, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0,
    693, 0, 0, 694, 0, 0, 0, 695, 696, 0, 0, 0, 697, 698, 0, 0, 699, 0, 700, 0, 0, 701, 0, 0, 0, 0, 0, 0, 702, 0, 703, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 705, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 711,
    0, 0, 0, 712, 0, 713, 0, 0, 0, 0, 714, 0, 715, 716, 0, 717, 0, 0, 718, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    720, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 0, 723, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 727, 0, 0, 0, 0, 0, 728, 0, 729, 0, 0, 0, 730, 0, 0, 0, 731, 0, 0, 732, 0, 0,
    0, 0, 733, 0, 734, 0, 0, 0, 0, 0, 0, 735, 0, 0, 736, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 0, 741, 0, 742, 0, 0, 0, 743, 0, 0, 0, 744, 0, 745, 0, 0, 0, 746,
    747, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 750, 0, 0, 0, 0, 0, 0, 751, 0, 752, 0, 753, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 757, 0, 758, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 760, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 765, 0, 766,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0,
    0, 769, 0, 770, 0, 0, 771, 0, 0, 0, 772, 0, 0, 0, 0, 773, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 775, 776, 0, 0, 0, 0,
    0, 0, 777, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 780, 781, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782,
};
void recomp_unit_0156_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A74000u;
        entry_id = (entry_delta < 16340u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0156[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A74000;
    case 2u: goto L_08A7400C;
    case 3u: goto L_08A74034;
    case 4u: goto L_08A74050;
    case 5u: goto L_08A74060;
    case 6u: goto L_08A74070;
    case 7u: goto L_08A74080;
    case 8u: goto L_08A740B4;
    case 9u: goto L_08A740C8;
    case 10u: goto L_08A740E0;
    case 11u: goto L_08A7415C;
    case 12u: goto L_08A74168;
    case 13u: goto L_08A74174;
    case 14u: goto L_08A74188;
    case 15u: goto L_08A74194;
    case 16u: goto L_08A741A0;
    case 17u: goto L_08A741B4;
    case 18u: goto L_08A741BC;
    case 19u: goto L_08A741C4;
    case 20u: goto L_08A741CC;
    case 21u: goto L_08A741D4;
    case 22u: goto L_08A741DC;
    case 23u: goto L_08A741E4;
    case 24u: goto L_08A741EC;
    case 25u: goto L_08A741FC;
    case 26u: goto L_08A7420C;
    case 27u: goto L_08A7421C;
    case 28u: goto L_08A74228;
    case 29u: goto L_08A74234;
    case 30u: goto L_08A7423C;
    case 31u: goto L_08A74244;
    case 32u: goto L_08A74268;
    case 33u: goto L_08A74270;
    case 34u: goto L_08A74278;
    case 35u: goto L_08A74298;
    case 36u: goto L_08A742A0;
    case 37u: goto L_08A742B0;
    case 38u: goto L_08A742C0;
    case 39u: goto L_08A742D0;
    case 40u: goto L_08A742E4;
    case 41u: goto L_08A742EC;
    case 42u: goto L_08A742F8;
    case 43u: goto L_08A7430C;
    case 44u: goto L_08A7431C;
    case 45u: goto L_08A74330;
    case 46u: goto L_08A74340;
    case 47u: goto L_08A7434C;
    case 48u: goto L_08A7435C;
    case 49u: goto L_08A74364;
    case 50u: goto L_08A74370;
    case 51u: goto L_08A74378;
    case 52u: goto L_08A74388;
    case 53u: goto L_08A74390;
    case 54u: goto L_08A74398;
    case 55u: goto L_08A743A0;
    case 56u: goto L_08A743B4;
    case 57u: goto L_08A743C4;
    case 58u: goto L_08A743D4;
    case 59u: goto L_08A743E8;
    case 60u: goto L_08A743F4;
    case 61u: goto L_08A74408;
    case 62u: goto L_08A74418;
    case 63u: goto L_08A74428;
    case 64u: goto L_08A7443C;
    case 65u: goto L_08A74448;
    case 66u: goto L_08A74458;
    case 67u: goto L_08A74468;
    case 68u: goto L_08A74478;
    case 69u: goto L_08A74488;
    case 70u: goto L_08A74494;
    case 71u: goto L_08A744A4;
    case 72u: goto L_08A744AC;
    case 73u: goto L_08A744C0;
    case 74u: goto L_08A744D0;
    case 75u: goto L_08A744E0;
    case 76u: goto L_08A744F4;
    case 77u: goto L_08A74500;
    case 78u: goto L_08A74514;
    case 79u: goto L_08A74524;
    case 80u: goto L_08A74534;
    case 81u: goto L_08A74548;
    case 82u: goto L_08A74554;
    case 83u: goto L_08A74564;
    case 84u: goto L_08A74574;
    case 85u: goto L_08A74584;
    case 86u: goto L_08A74594;
    case 87u: goto L_08A745A0;
    case 88u: goto L_08A745B0;
    case 89u: goto L_08A745B8;
    case 90u: goto L_08A745C8;
    case 91u: goto L_08A745DC;
    case 92u: goto L_08A745F0;
    case 93u: goto L_08A74600;
    case 94u: goto L_08A74610;
    case 95u: goto L_08A74624;
    case 96u: goto L_08A74628;
    case 97u: goto L_08A7463C;
    case 98u: goto L_08A74644;
    case 99u: goto L_08A74658;
    case 100u: goto L_08A7466C;
    case 101u: goto L_08A7467C;
    case 102u: goto L_08A7468C;
    case 103u: goto L_08A746A0;
    case 104u: goto L_08A746A4;
    case 105u: goto L_08A746B8;
    case 106u: goto L_08A746BC;
    case 107u: goto L_08A746D0;
    case 108u: goto L_08A746E8;
    case 109u: goto L_08A74708;
    case 110u: goto L_08A74710;
    case 111u: goto L_08A74718;
    case 112u: goto L_08A74758;
    case 113u: goto L_08A74768;
    case 114u: goto L_08A7477C;
    case 115u: goto L_08A7478C;
    case 116u: goto L_08A7479C;
    case 117u: goto L_08A747A8;
    case 118u: goto L_08A747C8;
    case 119u: goto L_08A747D8;
    case 120u: goto L_08A74800;
    case 121u: goto L_08A7483C;
    case 122u: goto L_08A74844;
    case 123u: goto L_08A74850;
    case 124u: goto L_08A74858;
    case 125u: goto L_08A7486C;
    case 126u: goto L_08A74870;
    case 127u: goto L_08A74878;
    case 128u: goto L_08A74884;
    case 129u: goto L_08A74894;
    case 130u: goto L_08A7489C;
    case 131u: goto L_08A748C0;
    case 132u: goto L_08A748D0;
    case 133u: goto L_08A748E4;
    case 134u: goto L_08A748EC;
    case 135u: goto L_08A74910;
    case 136u: goto L_08A74920;
    case 137u: goto L_08A74934;
    case 138u: goto L_08A74944;
    case 139u: goto L_08A74954;
    case 140u: goto L_08A74980;
    case 141u: goto L_08A74988;
    case 142u: goto L_08A7499C;
    case 143u: goto L_08A749A8;
    case 144u: goto L_08A749E4;
    case 145u: goto L_08A749F4;
    case 146u: goto L_08A74A0C;
    case 147u: goto L_08A74A14;
    case 148u: goto L_08A74A28;
    case 149u: goto L_08A74A38;
    case 150u: goto L_08A74A44;
    case 151u: goto L_08A74A6C;
    case 152u: goto L_08A74A7C;
    case 153u: goto L_08A74A90;
    case 154u: goto L_08A74AA0;
    case 155u: goto L_08A74AB0;
    case 156u: goto L_08A74ABC;
    case 157u: goto L_08A74ACC;
    case 158u: goto L_08A74B04;
    case 159u: goto L_08A74B14;
    case 160u: goto L_08A74B2C;
    case 161u: goto L_08A74B38;
    case 162u: goto L_08A74B4C;
    case 163u: goto L_08A74B60;
    case 164u: goto L_08A74B70;
    case 165u: goto L_08A74B84;
    case 166u: goto L_08A74B94;
    case 167u: goto L_08A74BCC;
    case 168u: goto L_08A74BDC;
    case 169u: goto L_08A74BF4;
    case 170u: goto L_08A74C00;
    case 171u: goto L_08A74C10;
    case 172u: goto L_08A74C1C;
    case 173u: goto L_08A74C50;
    case 174u: goto L_08A74C7C;
    case 175u: goto L_08A74C94;
    case 176u: goto L_08A74C9C;
    case 177u: goto L_08A74CA8;
    case 178u: goto L_08A74CDC;
    case 179u: goto L_08A74CE4;
    case 180u: goto L_08A74CE8;
    case 181u: goto L_08A74D30;
    case 182u: goto L_08A74D98;
    case 183u: goto L_08A74DA4;
    case 184u: goto L_08A74DAC;
    case 185u: goto L_08A74DB4;
    case 186u: goto L_08A74DC0;
    case 187u: goto L_08A74DC8;
    case 188u: goto L_08A74DD4;
    case 189u: goto L_08A74DE4;
    case 190u: goto L_08A74DF4;
    case 191u: goto L_08A74E08;
    case 192u: goto L_08A74E20;
    case 193u: goto L_08A74E28;
    case 194u: goto L_08A74E38;
    case 195u: goto L_08A74E44;
    case 196u: goto L_08A74E50;
    case 197u: goto L_08A74E60;
    case 198u: goto L_08A74E70;
    case 199u: goto L_08A74E84;
    case 200u: goto L_08A74E9C;
    case 201u: goto L_08A74EA4;
    case 202u: goto L_08A74EB4;
    case 203u: goto L_08A74EBC;
    case 204u: goto L_08A74EC4;
    case 205u: goto L_08A74ED8;
    case 206u: goto L_08A74EE8;
    case 207u: goto L_08A74EF8;
    case 208u: goto L_08A74F0C;
    case 209u: goto L_08A74F1C;
    case 210u: goto L_08A74F28;
    case 211u: goto L_08A74F40;
    case 212u: goto L_08A74F48;
    case 213u: goto L_08A74F5C;
    case 214u: goto L_08A74F64;
    case 215u: goto L_08A74F6C;
    case 216u: goto L_08A74F74;
    case 217u: goto L_08A74F80;
    case 218u: goto L_08A74F88;
    case 219u: goto L_08A74FA4;
    case 220u: goto L_08A74FAC;
    case 221u: goto L_08A74FC4;
    case 222u: goto L_08A74FC8;
    case 223u: goto L_08A74FD0;
    case 224u: goto L_08A74FDC;
    case 225u: goto L_08A74FE4;
    case 226u: goto L_08A75000;
    case 227u: goto L_08A75008;
    case 228u: goto L_08A75020;
    case 229u: goto L_08A75024;
    case 230u: goto L_08A7502C;
    case 231u: goto L_08A75048;
    case 232u: goto L_08A7504C;
    case 233u: goto L_08A7505C;
    case 234u: goto L_08A75060;
    case 235u: goto L_08A75078;
    case 236u: goto L_08A75088;
    case 237u: goto L_08A750B8;
    case 238u: goto L_08A750C8;
    case 239u: goto L_08A750E4;
    case 240u: goto L_08A750F4;
    case 241u: goto L_08A75104;
    case 242u: goto L_08A7511C;
    case 243u: goto L_08A75134;
    case 244u: goto L_08A7516C;
    case 245u: goto L_08A75178;
    case 246u: goto L_08A7518C;
    case 247u: goto L_08A751A4;
    case 248u: goto L_08A751BC;
    case 249u: goto L_08A751C4;
    case 250u: goto L_08A7520C;
    case 251u: goto L_08A75218;
    case 252u: goto L_08A7522C;
    case 253u: goto L_08A75234;
    case 254u: goto L_08A75238;
    case 255u: goto L_08A7527C;
    case 256u: goto L_08A75288;
    case 257u: goto L_08A7529C;
    case 258u: goto L_08A752B0;
    case 259u: goto L_08A752BC;
    case 260u: goto L_08A752EC;
    case 261u: goto L_08A752F4;
    case 262u: goto L_08A752F8;
    case 263u: goto L_08A75338;
    case 264u: goto L_08A75384;
    case 265u: goto L_08A75390;
    case 266u: goto L_08A75398;
    case 267u: goto L_08A753A0;
    case 268u: goto L_08A753A8;
    case 269u: goto L_08A753B0;
    case 270u: goto L_08A753B8;
    case 271u: goto L_08A753CC;
    case 272u: goto L_08A753DC;
    case 273u: goto L_08A753EC;
    case 274u: goto L_08A75404;
    case 275u: goto L_08A7540C;
    case 276u: goto L_08A7541C;
    case 277u: goto L_08A75424;
    case 278u: goto L_08A7542C;
    case 279u: goto L_08A75440;
    case 280u: goto L_08A75450;
    case 281u: goto L_08A75460;
    case 282u: goto L_08A75478;
    case 283u: goto L_08A75480;
    case 284u: goto L_08A75490;
    case 285u: goto L_08A75498;
    case 286u: goto L_08A754A0;
    case 287u: goto L_08A754A8;
    case 288u: goto L_08A754B0;
    case 289u: goto L_08A754CC;
    case 290u: goto L_08A754E0;
    case 291u: goto L_08A7551C;
    case 292u: goto L_08A75548;
    case 293u: goto L_08A75558;
    case 294u: goto L_08A75580;
    case 295u: goto L_08A75590;
    case 296u: goto L_08A755A4;
    case 297u: goto L_08A755B4;
    case 298u: goto L_08A755E4;
    case 299u: goto L_08A75604;
    case 300u: goto L_08A75624;
    case 301u: goto L_08A75630;
    case 302u: goto L_08A75644;
    case 303u: goto L_08A75654;
    case 304u: goto L_08A75668;
    case 305u: goto L_08A7566C;
    case 306u: goto L_08A756A0;
    case 307u: goto L_08A756A8;
    case 308u: goto L_08A756AC;
    case 309u: goto L_08A756D8;
    case 310u: goto L_08A75718;
    case 311u: goto L_08A75724;
    case 312u: goto L_08A7572C;
    case 313u: goto L_08A7573C;
    case 314u: goto L_08A75744;
    case 315u: goto L_08A7574C;
    case 316u: goto L_08A7575C;
    case 317u: goto L_08A75764;
    case 318u: goto L_08A7576C;
    case 319u: goto L_08A75780;
    case 320u: goto L_08A75790;
    case 321u: goto L_08A757A0;
    case 322u: goto L_08A757B8;
    case 323u: goto L_08A757CC;
    case 324u: goto L_08A757DC;
    case 325u: goto L_08A757EC;
    case 326u: goto L_08A75814;
    case 327u: goto L_08A7581C;
    case 328u: goto L_08A75830;
    case 329u: goto L_08A75838;
    case 330u: goto L_08A75840;
    case 331u: goto L_08A75848;
    case 332u: goto L_08A7585C;
    case 333u: goto L_08A7586C;
    case 334u: goto L_08A7587C;
    case 335u: goto L_08A75894;
    case 336u: goto L_08A758A8;
    case 337u: goto L_08A758B8;
    case 338u: goto L_08A758C8;
    case 339u: goto L_08A758F0;
    case 340u: goto L_08A758F8;
    case 341u: goto L_08A7590C;
    case 342u: goto L_08A75914;
    case 343u: goto L_08A7591C;
    case 344u: goto L_08A75924;
    case 345u: goto L_08A75960;
    case 346u: goto L_08A7597C;
    case 347u: goto L_08A7598C;
    case 348u: goto L_08A759B8;
    case 349u: goto L_08A759C8;
    case 350u: goto L_08A75A0C;
    case 351u: goto L_08A75A28;
    case 352u: goto L_08A75A50;
    case 353u: goto L_08A75A94;
    case 354u: goto L_08A75A9C;
    case 355u: goto L_08A75AA0;
    case 356u: goto L_08A75AC4;
    case 357u: goto L_08A75B10;
    case 358u: goto L_08A75B24;
    case 359u: goto L_08A75B34;
    case 360u: goto L_08A75B40;
    case 361u: goto L_08A75B50;
    case 362u: goto L_08A75B60;
    case 363u: goto L_08A75B7C;
    case 364u: goto L_08A75B8C;
    case 365u: goto L_08A75B98;
    case 366u: goto L_08A75BB4;
    case 367u: goto L_08A75BB8;
    case 368u: goto L_08A75BCC;
    case 369u: goto L_08A75BE8;
    case 370u: goto L_08A75BF8;
    case 371u: goto L_08A75C04;
    case 372u: goto L_08A75C18;
    case 373u: goto L_08A75C20;
    case 374u: goto L_08A75C3C;
    case 375u: goto L_08A75C54;
    case 376u: goto L_08A75C5C;
    case 377u: goto L_08A75C64;
    case 378u: goto L_08A75C74;
    case 379u: goto L_08A75C84;
    case 380u: goto L_08A75C94;
    case 381u: goto L_08A75CA0;
    case 382u: goto L_08A75CA8;
    case 383u: goto L_08A75CC0;
    case 384u: goto L_08A75CCC;
    case 385u: goto L_08A75CD8;
    case 386u: goto L_08A75CDC;
    case 387u: goto L_08A75CE8;
    case 388u: goto L_08A75CF4;
    case 389u: goto L_08A75D08;
    case 390u: goto L_08A75D1C;
    case 391u: goto L_08A75D38;
    case 392u: goto L_08A75D68;
    case 393u: goto L_08A75D70;
    case 394u: goto L_08A75D74;
    case 395u: goto L_08A75DA4;
    case 396u: goto L_08A75DF0;
    case 397u: goto L_08A75E24;
    case 398u: goto L_08A75E40;
    case 399u: goto L_08A75E48;
    case 400u: goto L_08A75E5C;
    case 401u: goto L_08A75E64;
    case 402u: goto L_08A75E6C;
    case 403u: goto L_08A75E7C;
    case 404u: goto L_08A75E9C;
    case 405u: goto L_08A75EBC;
    case 406u: goto L_08A75EC4;
    case 407u: goto L_08A75EC8;
    case 408u: goto L_08A75EE8;
    case 409u: goto L_08A75EF8;
    case 410u: goto L_08A75F08;
    case 411u: goto L_08A75F40;
    case 412u: goto L_08A75F50;
    case 413u: goto L_08A75F58;
    case 414u: goto L_08A75F60;
    case 415u: goto L_08A75F78;
    case 416u: goto L_08A75F88;
    case 417u: goto L_08A75F90;
    case 418u: goto L_08A75F9C;
    case 419u: goto L_08A75FB4;
    case 420u: goto L_08A75FC4;
    case 421u: goto L_08A75FCC;
    case 422u: goto L_08A75FD8;
    case 423u: goto L_08A75FF0;
    case 424u: goto L_08A76000;
    case 425u: goto L_08A76008;
    case 426u: goto L_08A76014;
    case 427u: goto L_08A7602C;
    case 428u: goto L_08A7603C;
    case 429u: goto L_08A76044;
    case 430u: goto L_08A76050;
    case 431u: goto L_08A76068;
    case 432u: goto L_08A76078;
    case 433u: goto L_08A76080;
    case 434u: goto L_08A7608C;
    case 435u: goto L_08A760A4;
    case 436u: goto L_08A760B4;
    case 437u: goto L_08A760BC;
    case 438u: goto L_08A760C4;
    case 439u: goto L_08A760D0;
    case 440u: goto L_08A760D8;
    case 441u: goto L_08A760E0;
    case 442u: goto L_08A760E8;
    case 443u: goto L_08A760F8;
    case 444u: goto L_08A76104;
    case 445u: goto L_08A7610C;
    case 446u: goto L_08A76118;
    case 447u: goto L_08A76124;
    case 448u: goto L_08A76130;
    case 449u: goto L_08A7613C;
    case 450u: goto L_08A76148;
    case 451u: goto L_08A76154;
    case 452u: goto L_08A76160;
    case 453u: goto L_08A76170;
    case 454u: goto L_08A7617C;
    case 455u: goto L_08A76184;
    case 456u: goto L_08A76190;
    case 457u: goto L_08A7619C;
    case 458u: goto L_08A761A8;
    case 459u: goto L_08A761B4;
    case 460u: goto L_08A761C0;
    case 461u: goto L_08A761CC;
    case 462u: goto L_08A761D8;
    case 463u: goto L_08A761E4;
    case 464u: goto L_08A761EC;
    case 465u: goto L_08A7620C;
    case 466u: goto L_08A76230;
    case 467u: goto L_08A76240;
    case 468u: goto L_08A7624C;
    case 469u: goto L_08A76254;
    case 470u: goto L_08A762B0;
    case 471u: goto L_08A76304;
    case 472u: goto L_08A76310;
    case 473u: goto L_08A76320;
    case 474u: goto L_08A76324;
    case 475u: goto L_08A7632C;
    case 476u: goto L_08A76338;
    case 477u: goto L_08A76348;
    case 478u: goto L_08A76354;
    case 479u: goto L_08A76364;
    case 480u: goto L_08A7636C;
    case 481u: goto L_08A76394;
    case 482u: goto L_08A763A0;
    case 483u: goto L_08A763AC;
    case 484u: goto L_08A763B0;
    case 485u: goto L_08A763B8;
    case 486u: goto L_08A763C4;
    case 487u: goto L_08A763D4;
    case 488u: goto L_08A763E0;
    case 489u: goto L_08A763F0;
    case 490u: goto L_08A763F8;
    case 491u: goto L_08A76420;
    case 492u: goto L_08A7642C;
    case 493u: goto L_08A76438;
    case 494u: goto L_08A7643C;
    case 495u: goto L_08A76444;
    case 496u: goto L_08A76450;
    case 497u: goto L_08A76460;
    case 498u: goto L_08A7646C;
    case 499u: goto L_08A7647C;
    case 500u: goto L_08A76484;
    case 501u: goto L_08A764A8;
    case 502u: goto L_08A765B8;
    case 503u: goto L_08A76660;
    case 504u: goto L_08A76668;
    case 505u: goto L_08A76678;
    case 506u: goto L_08A76688;
    case 507u: goto L_08A7668C;
    case 508u: goto L_08A76694;
    case 509u: goto L_08A766B0;
    case 510u: goto L_08A766D0;
    case 511u: goto L_08A7670C;
    case 512u: goto L_08A7671C;
    case 513u: goto L_08A76758;
    case 514u: goto L_08A76768;
    case 515u: goto L_08A76784;
    case 516u: goto L_08A7678C;
    case 517u: goto L_08A7679C;
    case 518u: goto L_08A767D8;
    case 519u: goto L_08A7680C;
    case 520u: goto L_08A76818;
    case 521u: goto L_08A76828;
    case 522u: goto L_08A76838;
    case 523u: goto L_08A7683C;
    case 524u: goto L_08A76844;
    case 525u: goto L_08A76848;
    case 526u: goto L_08A7685C;
    case 527u: goto L_08A76868;
    case 528u: goto L_08A76878;
    case 529u: goto L_08A76888;
    case 530u: goto L_08A7688C;
    case 531u: goto L_08A76894;
    case 532u: goto L_08A76898;
    case 533u: goto L_08A768C4;
    case 534u: goto L_08A768CC;
    case 535u: goto L_08A768EC;
    case 536u: goto L_08A768F0;
    case 537u: goto L_08A76924;
    case 538u: goto L_08A76944;
    case 539u: goto L_08A76950;
    case 540u: goto L_08A76964;
    case 541u: goto L_08A76990;
    case 542u: goto L_08A76994;
    case 543u: goto L_08A769AC;
    case 544u: goto L_08A769BC;
    case 545u: goto L_08A769D8;
    case 546u: goto L_08A769E4;
    case 547u: goto L_08A769EC;
    case 548u: goto L_08A769F0;
    case 549u: goto L_08A76A14;
    case 550u: goto L_08A76A38;
    case 551u: goto L_08A76A7C;
    case 552u: goto L_08A76A84;
    case 553u: goto L_08A76A94;
    case 554u: goto L_08A76AA4;
    case 555u: goto L_08A76AA8;
    case 556u: goto L_08A76AB0;
    case 557u: goto L_08A76ACC;
    case 558u: goto L_08A76AEC;
    case 559u: goto L_08A76B28;
    case 560u: goto L_08A76B3C;
    case 561u: goto L_08A76B50;
    case 562u: goto L_08A76B80;
    case 563u: goto L_08A76B88;
    case 564u: goto L_08A76B90;
    case 565u: goto L_08A76B9C;
    case 566u: goto L_08A76BB4;
    case 567u: goto L_08A76BD8;
    case 568u: goto L_08A76BE0;
    case 569u: goto L_08A76BF0;
    case 570u: goto L_08A76C00;
    case 571u: goto L_08A76C04;
    case 572u: goto L_08A76C0C;
    case 573u: goto L_08A76C10;
    case 574u: goto L_08A76C28;
    case 575u: goto L_08A76C48;
    case 576u: goto L_08A76C84;
    case 577u: goto L_08A76C94;
    case 578u: goto L_08A76CA8;
    case 579u: goto L_08A76CD4;
    case 580u: goto L_08A76CE0;
    case 581u: goto L_08A76CEC;
    case 582u: goto L_08A76CF4;
    case 583u: goto L_08A76CFC;
    case 584u: goto L_08A76D08;
    case 585u: goto L_08A76D10;
    case 586u: goto L_08A76D20;
    case 587u: goto L_08A76D24;
    case 588u: goto L_08A76D28;
    case 589u: goto L_08A76D30;
    case 590u: goto L_08A76D38;
    case 591u: goto L_08A76D40;
    case 592u: goto L_08A76D5C;
    case 593u: goto L_08A76D64;
    case 594u: goto L_08A76D8C;
    case 595u: goto L_08A76D94;
    case 596u: goto L_08A76DA8;
    case 597u: goto L_08A76DAC;
    case 598u: goto L_08A76DCC;
    case 599u: goto L_08A76E04;
    case 600u: goto L_08A76E10;
    case 601u: goto L_08A76F18;
    case 602u: goto L_08A76F1C;
    case 603u: goto L_08A76F2C;
    case 604u: goto L_08A76F38;
    case 605u: goto L_08A76F48;
    case 606u: goto L_08A76F80;
    case 607u: goto L_08A76F88;
    case 608u: goto L_08A76F9C;
    case 609u: goto L_08A76FAC;
    case 610u: goto L_08A76FBC;
    case 611u: goto L_08A76FC8;
    case 612u: goto L_08A76FD0;
    case 613u: goto L_08A76FDC;
    case 614u: goto L_08A76FF0;
    case 615u: goto L_08A76FF8;
    case 616u: goto L_08A77008;
    case 617u: goto L_08A77018;
    case 618u: goto L_08A7701C;
    case 619u: goto L_08A77028;
    case 620u: goto L_08A77030;
    case 621u: goto L_08A77044;
    case 622u: goto L_08A77064;
    case 623u: goto L_08A77088;
    case 624u: goto L_08A77094;
    case 625u: goto L_08A770B4;
    case 626u: goto L_08A770C0;
    case 627u: goto L_08A770E4;
    case 628u: goto L_08A770F4;
    case 629u: goto L_08A77100;
    case 630u: goto L_08A77108;
    case 631u: goto L_08A77118;
    case 632u: goto L_08A77124;
    case 633u: goto L_08A77134;
    case 634u: goto L_08A77138;
    case 635u: goto L_08A7713C;
    case 636u: goto L_08A77148;
    case 637u: goto L_08A77154;
    case 638u: goto L_08A77168;
    case 639u: goto L_08A771FC;
    case 640u: goto L_08A77208;
    case 641u: goto L_08A7720C;
    case 642u: goto L_08A77224;
    case 643u: goto L_08A77238;
    case 644u: goto L_08A77240;
    case 645u: goto L_08A77248;
    case 646u: goto L_08A7725C;
    case 647u: goto L_08A772A4;
    case 648u: goto L_08A772B8;
    case 649u: goto L_08A772D4;
    case 650u: goto L_08A772E4;
    case 651u: goto L_08A77338;
    case 652u: goto L_08A77340;
    case 653u: goto L_08A7734C;
    case 654u: goto L_08A77394;
    case 655u: goto L_08A773A0;
    case 656u: goto L_08A773A8;
    case 657u: goto L_08A773C8;
    case 658u: goto L_08A77414;
    case 659u: goto L_08A77420;
    case 660u: goto L_08A77430;
    case 661u: goto L_08A77440;
    case 662u: goto L_08A77474;
    case 663u: goto L_08A77490;
    case 664u: goto L_08A774A4;
    case 665u: goto L_08A774B0;
    case 666u: goto L_08A774B8;
    case 667u: goto L_08A774E8;
    case 668u: goto L_08A774F0;
    case 669u: goto L_08A774F4;
    case 670u: goto L_08A77524;
    case 671u: goto L_08A77584;
    case 672u: goto L_08A7758C;
    case 673u: goto L_08A775A8;
    case 674u: goto L_08A775BC;
    case 675u: goto L_08A775D4;
    case 676u: goto L_08A775DC;
    case 677u: goto L_08A775E8;
    case 678u: goto L_08A775F0;
    case 679u: goto L_08A775F8;
    case 680u: goto L_08A77658;
    case 681u: goto L_08A77660;
    case 682u: goto L_08A77670;
    case 683u: goto L_08A7769C;
    case 684u: goto L_08A776B8;
    case 685u: goto L_08A776CC;
    case 686u: goto L_08A776E0;
    case 687u: goto L_08A776EC;
    case 688u: goto L_08A77728;
    case 689u: goto L_08A7773C;
    case 690u: goto L_08A77750;
    case 691u: goto L_08A77760;
    case 692u: goto L_08A77774;
    case 693u: goto L_08A77780;
    case 694u: goto L_08A7778C;
    case 695u: goto L_08A7779C;
    case 696u: goto L_08A777A0;
    case 697u: goto L_08A777B0;
    case 698u: goto L_08A777B4;
    case 699u: goto L_08A777C0;
    case 700u: goto L_08A777C8;
    case 701u: goto L_08A777D4;
    case 702u: goto L_08A777F0;
    case 703u: goto L_08A777F8;
    case 704u: goto L_08A77830;
    case 705u: goto L_08A77834;
    case 706u: goto L_08A77858;
    case 707u: goto L_08A7789C;
    case 708u: goto L_08A778A4;
    case 709u: goto L_08A778B8;
    case 710u: goto L_08A778F4;
    case 711u: goto L_08A778FC;
    case 712u: goto L_08A7790C;
    case 713u: goto L_08A77914;
    case 714u: goto L_08A77928;
    case 715u: goto L_08A77930;
    case 716u: goto L_08A77934;
    case 717u: goto L_08A7793C;
    case 718u: goto L_08A77948;
    case 719u: goto L_08A77954;
    case 720u: goto L_08A77980;
    case 721u: goto L_08A77990;
    case 722u: goto L_08A779AC;
    case 723u: goto L_08A779B8;
    case 724u: goto L_08A779D4;
    case 725u: goto L_08A779E4;
    case 726u: goto L_08A77A20;
    case 727u: goto L_08A77A28;
    case 728u: goto L_08A77A40;
    case 729u: goto L_08A77A48;
    case 730u: goto L_08A77A58;
    case 731u: goto L_08A77A68;
    case 732u: goto L_08A77A74;
    case 733u: goto L_08A77A88;
    case 734u: goto L_08A77A90;
    case 735u: goto L_08A77AAC;
    case 736u: goto L_08A77AB8;
    case 737u: goto L_08A77AD0;
    case 738u: goto L_08A77AF0;
    case 739u: goto L_08A77B1C;
    case 740u: goto L_08A77B2C;
    case 741u: goto L_08A77B3C;
    case 742u: goto L_08A77B44;
    case 743u: goto L_08A77B54;
    case 744u: goto L_08A77B64;
    case 745u: goto L_08A77B6C;
    case 746u: goto L_08A77B7C;
    case 747u: goto L_08A77B80;
    case 748u: goto L_08A77B88;
    case 749u: goto L_08A77BC4;
    case 750u: goto L_08A77BCC;
    case 751u: goto L_08A77BE8;
    case 752u: goto L_08A77BF0;
    case 753u: goto L_08A77BF8;
    case 754u: goto L_08A77C4C;
    case 755u: goto L_08A77C54;
    case 756u: goto L_08A77C74;
    case 757u: goto L_08A77D0C;
    case 758u: goto L_08A77D14;
    case 759u: goto L_08A77D2C;
    case 760u: goto L_08A77D84;
    case 761u: goto L_08A77D94;
    case 762u: goto L_08A77DB0;
    case 763u: goto L_08A77DC8;
    case 764u: goto L_08A77DEC;
    case 765u: goto L_08A77DF4;
    case 766u: goto L_08A77DFC;
    case 767u: goto L_08A77E40;
    case 768u: goto L_08A77E64;
    case 769u: goto L_08A77E84;
    case 770u: goto L_08A77E8C;
    case 771u: goto L_08A77E98;
    case 772u: goto L_08A77EA8;
    case 773u: goto L_08A77EBC;
    case 774u: goto L_08A77EC8;
    case 775u: goto L_08A77EE8;
    case 776u: goto L_08A77EEC;
    case 777u: goto L_08A77F08;
    case 778u: goto L_08A77F10;
    case 779u: goto L_08A77F4C;
    case 780u: goto L_08A77F5C;
    case 781u: goto L_08A77F60;
    case 782u: goto L_08A77FD0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A74000:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7400C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A74050;
      }
      goto L_08A74034;
    }
L_08A74034:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(80)));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08A74050;
    }
    goto L_08A74050;
L_08A74050:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08A74080;
    }
    goto L_08A74060;
L_08A74060:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x08A74070u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A74070u) goto L_08A74070;
    return;
L_08A74070:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A74080;
L_08A74080:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08A740B4;
    }
    goto L_08A740B4;
L_08A740B4:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08A740C8;
    }
    goto L_08A740C8;
L_08A740C8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A740E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (17579u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[22] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A74CE4;
      }
      goto L_08A7415C;
    }
L_08A7415C:
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A74168u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x08A74168u) goto L_08A74168;
    return;
L_08A74168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74988;
      }
      goto L_08A74174;
    }
L_08A74174:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 175 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 229u);
      if (branch_taken) {
          goto L_08A741CC;
      }
      goto L_08A74188;
    }
L_08A74188:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < -969 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < -967 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A741B4;
      }
      goto L_08A74194;
    }
L_08A74194:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A741FC;
      }
      goto L_08A741A0;
    }
L_08A741A0:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A74234;
      }
      goto L_08A741B4;
    }
L_08A741B4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 174 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A741EC;
      }
      goto L_08A741BC;
    }
L_08A741BC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A741A0;
      }
      goto L_08A741C4;
    }
L_08A741C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A741FC;
      }
      goto L_08A741CC;
    }
L_08A741CC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 208u);
      if (branch_taken) {
          goto L_08A741EC;
      }
      goto L_08A741D4;
    }
L_08A741D4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 184u);
      if (branch_taken) {
          goto L_08A741A0;
      }
      goto L_08A741DC;
    }
L_08A741DC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A741A0;
      }
      goto L_08A741E4;
    }
L_08A741E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A741FC;
      }
      goto L_08A741EC;
    }
L_08A741EC:
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(94)));
    ctx.gpr[30] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A74234;
      }
      goto L_08A741FC;
    }
L_08A741FC:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A74228;
      }
      goto L_08A7420C;
    }
L_08A7420C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08A7421Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A7421Cu) goto L_08A7421C;
    return;
L_08A7421C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A74228;
L_08A74228:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(196)));
    goto L_08A74234;
L_08A74234:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_08A74270;
      }
      goto L_08A7423C;
    }
L_08A7423C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A74268;
      }
      goto L_08A74244;
    }
L_08A74244:
    ctx.gpr[6] = (16192u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (16916u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(376));
      if (branch_taken) {
          goto L_08A74298;
      }
      goto L_08A74268;
    }
L_08A74268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A74CE8;
      }
      goto L_08A74270;
    }
L_08A74270:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A74268;
      }
      goto L_08A74278;
    }
L_08A74278:
    ctx.gpr[6] = (16192u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (16916u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(376));
    goto L_08A74298;
L_08A74298:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A74850;
      }
      goto L_08A742A0;
    }
L_08A742A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08A742D0;
    }
    goto L_08A742B0;
L_08A742B0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(41));
    ctx.gpr[31] = (0x08A742C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A742C0u) goto L_08A742C0;
    return;
L_08A742C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(41)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A742D0;
L_08A742D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7431C;
      }
      goto L_08A742E4;
    }
L_08A742E4:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A742F8;
      }
      goto L_08A742EC;
    }
L_08A742EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7431C;
      }
      goto L_08A742F8;
    }
L_08A742F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A746BC;
      }
      goto L_08A7430C;
    }
L_08A7430C:
    ctx.gpr[5] = (16230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A746BC;
      }
      goto L_08A7431C;
    }
L_08A7431C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_08A7434C;
      }
      goto L_08A74330;
    }
L_08A74330:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(42));
    ctx.gpr[31] = (0x08A74340u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A74340u) goto L_08A74340;
    return;
L_08A74340:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(42)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A7434C;
L_08A7434C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A74370;
      }
      goto L_08A7435C;
    }
L_08A7435C:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A74370;
      }
      goto L_08A74364;
    }
L_08A74364:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74378;
      }
      goto L_08A74370;
    }
L_08A74370:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A746BC;
      }
      goto L_08A74378;
    }
L_08A74378:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    ctx.gpr[6] = (0u | 82u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 70u);
      if (branch_taken) {
          goto L_08A743A0;
      }
      goto L_08A74388;
    }
L_08A74388:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 52u);
      if (branch_taken) {
          goto L_08A744AC;
      }
      goto L_08A74390;
    }
L_08A74390:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A745B8;
      }
      goto L_08A74398;
    }
L_08A74398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A746BC;
      }
      goto L_08A743A0;
    }
L_08A743A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A74408;
      }
      goto L_08A743B4;
    }
L_08A743B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08A743E8;
    }
    goto L_08A743C4;
L_08A743C4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(43));
    ctx.gpr[31] = (0x08A743D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A743D4u) goto L_08A743D4;
    return;
L_08A743D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(43)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A743E8;
L_08A743E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A744A4;
      }
      goto L_08A743F4;
    }
L_08A743F4:
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[26] + ctx.fpr[22];
      if (branch_taken) {
          goto L_08A744A4;
      }
      goto L_08A74408;
    }
L_08A74408:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08A7443C;
    }
    goto L_08A74418;
L_08A74418:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x08A74428u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A74428u) goto L_08A74428;
    return;
L_08A74428:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A7443C;
L_08A7443C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A74458;
      }
      goto L_08A74448;
    }
L_08A74448:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[26] + ctx.fpr[22];
    goto L_08A74458;
L_08A74458:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08A74488;
    }
    goto L_08A74468;
L_08A74468:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(45));
    ctx.gpr[31] = (0x08A74478u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A74478u) goto L_08A74478;
    return;
L_08A74478:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(45)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A74488;
L_08A74488:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A744A4;
      }
      goto L_08A74494;
    }
L_08A74494:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08A744A4;
L_08A744A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A746BC;
      }
      goto L_08A744AC;
    }
L_08A744AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A74514;
      }
      goto L_08A744C0;
    }
L_08A744C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08A744F4;
    }
    goto L_08A744D0;
L_08A744D0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(46));
    ctx.gpr[31] = (0x08A744E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A744E0u) goto L_08A744E0;
    return;
L_08A744E0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A744F4;
L_08A744F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A745B0;
      }
      goto L_08A74500;
    }
L_08A74500:
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[26] + ctx.fpr[22];
      if (branch_taken) {
          goto L_08A745B0;
      }
      goto L_08A74514;
    }
L_08A74514:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08A74548;
    }
    goto L_08A74524;
L_08A74524:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(47));
    ctx.gpr[31] = (0x08A74534u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A74534u) goto L_08A74534;
    return;
L_08A74534:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(47)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A74548;
L_08A74548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A74564;
      }
      goto L_08A74554;
    }
L_08A74554:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[26] + ctx.fpr[22];
    goto L_08A74564;
L_08A74564:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08A74594;
    }
    goto L_08A74574;
L_08A74574:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A74584u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A74584u) goto L_08A74584;
    return;
L_08A74584:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A74594;
L_08A74594:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A745B0;
      }
      goto L_08A745A0;
    }
L_08A745A0:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08A745B0;
L_08A745B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A746BC;
      }
      goto L_08A745B8;
    }
L_08A745B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A74644;
      }
      goto L_08A745C8;
    }
L_08A745C8:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(49));
    goto L_08A745DC;
L_08A745DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08A74610;
    }
    goto L_08A745F0;
L_08A745F0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A74600u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A74600u) goto L_08A74600;
    return;
L_08A74600:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(49)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A74610;
L_08A74610:
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A74628;
      }
      goto L_08A74624;
    }
L_08A74624:
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[20];
    goto L_08A74628;
L_08A74628:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A745DC;
      }
      goto L_08A7463C;
    }
L_08A7463C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A746BC;
      }
      goto L_08A74644;
    }
L_08A74644:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(50));
    goto L_08A74658;
L_08A74658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08A7468C;
    }
    goto L_08A7466C;
L_08A7466C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7467Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A7467Cu) goto L_08A7467C;
    return;
L_08A7467C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(50)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A7468C;
L_08A7468C:
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A746A4;
      }
      goto L_08A746A0;
    }
L_08A746A0:
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[20];
    goto L_08A746A4;
L_08A746A4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A74658;
      }
      goto L_08A746B8;
    }
L_08A746B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_08A746BC;
L_08A746BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A74844;
      }
      goto L_08A746D0;
    }
L_08A746D0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(54)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[30] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A74710;
      }
      goto L_08A746E8;
    }
L_08A746E8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08A74708;
    }
    goto L_08A74708;
L_08A74708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74870;
      }
      goto L_08A74710;
    }
L_08A74710:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    ctx.gpr[5] = (ctx.gpr[22] & 255u);
      if (branch_taken) {
          goto L_08A74800;
      }
      goto L_08A74718;
    }
L_08A74718:
    ctx.gpr[5] = (ctx.gpr[22] & 255u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[24] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08A74758;
    }
    goto L_08A74758;
L_08A74758:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[26])) && ctx.fpr[22] == ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_08A747D8;
    }
    goto L_08A74768;
L_08A74768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_08A7479C;
      }
      goto L_08A7477C;
    }
L_08A7477C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(51));
    ctx.gpr[31] = (0x08A7478Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A7478Cu) goto L_08A7478C;
    return;
L_08A7478C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(51)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A7479C;
L_08A7479C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(194)));
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_08A747D8;
    }
    goto L_08A747A8;
L_08A747A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_08A747D8;
    }
    goto L_08A747C8;
L_08A747C8:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    goto L_08A747D8;
L_08A747D8:
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[22];
    ctx.gpr[4] = (16243u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A74870;
      }
      goto L_08A74800;
    }
L_08A74800:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[22] = ctx.fpr[20] - ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08A7483C;
    }
    goto L_08A7483C;
L_08A7483C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74870;
      }
      goto L_08A74844;
    }
L_08A74844:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08A74870;
      }
      goto L_08A74850;
    }
L_08A74850:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A7486C;
      }
      goto L_08A74858;
    }
L_08A74858:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A7486C;
L_08A7486C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    goto L_08A74870;
L_08A74870:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[4] = (18060u << 16u);
      if (branch_taken) {
          goto L_08A748EC;
      }
      goto L_08A74878;
    }
L_08A74878:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(55)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (18060u << 16u);
      if (branch_taken) {
          goto L_08A748EC;
      }
      goto L_08A74884;
    }
L_08A74884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (17995u << 16u);
      if (branch_taken) {
          goto L_08A7489C;
      }
      goto L_08A74894;
    }
L_08A74894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 22050u);
      if (branch_taken) {
          goto L_08A74944;
      }
      goto L_08A7489C;
    }
L_08A7489C:
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
        goto L_08A748D0;
    }
    goto L_08A748C0;
L_08A748C0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_08A748E4;
      }
      goto L_08A748D0;
    }
L_08A748D0:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[22] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(14000));
    goto L_08A748E4;
L_08A748E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74944;
      }
      goto L_08A748EC;
    }
L_08A748EC:
    ctx.gpr[4] = (ctx.gpr[4] | 40960u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
        goto L_08A74920;
    }
    goto L_08A74910;
L_08A74910:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_08A74934;
      }
      goto L_08A74920;
    }
L_08A74920:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14000));
    goto L_08A74934;
L_08A74934:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1200));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[22] = (ctx.lo);
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08A74944;
L_08A74944:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A74980;
      }
      goto L_08A74954;
    }
L_08A74954:
    ctx.fpr[13] = ctx.fpr[22] / ctx.fpr[28];
    ctx.gpr[4] = (16752u << 16u);
    ctx.gpr[5] = (17076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A7499C;
      }
      goto L_08A74980;
    }
L_08A74980:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 105u);
      if (branch_taken) {
          goto L_08A7499C;
      }
      goto L_08A74988;
    }
L_08A74988:
    ctx.gpr[5] = (16916u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (0u | 90u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    goto L_08A7499C;
L_08A7499C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74A14;
      }
      goto L_08A749A8;
    }
L_08A749A8:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (17669u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A749F4;
      }
      goto L_08A749E4;
    }
L_08A749E4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4270));
      if (branch_taken) {
          goto L_08A74A0C;
      }
      goto L_08A749F4;
    }
L_08A749F4:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[22] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4270));
    goto L_08A74A0C;
L_08A74A0C:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_08A74A14;
L_08A74A14:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A74A28u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x08A74A28u) goto L_08A74A28;
    return;
L_08A74A28:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A74CDC;
      }
      goto L_08A74A38;
    }
L_08A74A38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A74C10;
      }
      goto L_08A74A44;
    }
L_08A74A44:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (15523u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 55050u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_08A74A7C;
      }
      goto L_08A74A6C;
    }
L_08A74A6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A74A7C;
L_08A74A7C:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(648)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A74AB0;
      }
      goto L_08A74A90;
    }
L_08A74A90:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08A74AA0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A74AA0u) goto L_08A74AA0;
    return;
L_08A74AA0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A74AB0;
L_08A74AB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A74B4C;
      }
      goto L_08A74ABC;
    }
L_08A74ABC:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A74B38;
      }
      goto L_08A74ACC;
    }
L_08A74ACC:
    ctx.gpr[4] = (ctx.gpr[18] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8432));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (17948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A74B14;
      }
      goto L_08A74B04;
    }
L_08A74B04:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_08A74B2C;
      }
      goto L_08A74B14;
    }
L_08A74B14:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(22050));
    goto L_08A74B2C;
L_08A74B2C:
    ctx.gpr[4] = (0u | 52u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A74C10;
      }
      goto L_08A74B38;
    }
L_08A74B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A74C10;
      }
      goto L_08A74B4C;
    }
L_08A74B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
        goto L_08A74B84;
    }
    goto L_08A74B60;
L_08A74B60:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(53));
    ctx.gpr[31] = (0x08A74B70u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A74B70u) goto L_08A74B70;
    return;
L_08A74B70:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(53)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    goto L_08A74B84;
L_08A74B84:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (17948u << 16u);
      if (branch_taken) {
          goto L_08A74C00;
      }
      goto L_08A74B94;
    }
L_08A74B94:
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (2232u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[18] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8432));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A74BDC;
      }
      goto L_08A74BCC;
    }
L_08A74BCC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_08A74BF4;
      }
      goto L_08A74BDC;
    }
L_08A74BDC:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(22050));
    goto L_08A74BF4;
L_08A74BF4:
    ctx.gpr[4] = (0u | 52u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A74C10;
      }
      goto L_08A74C00;
    }
L_08A74C00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_08A74C10;
L_08A74C10:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08A74C50;
      }
      goto L_08A74C1C;
    }
L_08A74C1C:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (0u | 100u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (0u | 87u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 87u);
      if (branch_taken) {
          goto L_08A74C7C;
      }
      goto L_08A74C50;
    }
L_08A74C50:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    goto L_08A74C7C;
L_08A74C7C:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 73u);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 100u);
      if (branch_taken) {
          goto L_08A74C9C;
      }
      goto L_08A74C94;
    }
L_08A74C94:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A74CA8;
      }
      goto L_08A74C9C;
    }
L_08A74C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A74CA8;
L_08A74CA8:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A74CDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x08A74CDCu) goto L_08A74CDC;
    return;
L_08A74CDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A74CE8;
      }
      goto L_08A74CE4;
    }
L_08A74CE4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A74CE8;
L_08A74CE8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A74D30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (17608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[16] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A752F4;
      }
      goto L_08A74D98;
    }
L_08A74D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A74DB4;
      }
      goto L_08A74DA4;
    }
L_08A74DA4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A74DC8;
      }
      goto L_08A74DAC;
    }
L_08A74DAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A752F8;
      }
      goto L_08A74DB4;
    }
L_08A74DB4:
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A74DAC;
      }
      goto L_08A74DC0;
    }
L_08A74DC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74E44;
      }
      goto L_08A74DC8;
    }
L_08A74DC8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_08A74DD4;
L_08A74DD4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08A74E08;
    }
    goto L_08A74DE4;
L_08A74DE4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A74DF4u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A74DF4u) goto L_08A74DF4;
    return;
L_08A74DF4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08A74E08;
L_08A74E08:
    ctx.gpr[6] = (ctx.gpr[17] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(209)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74E28;
      }
      goto L_08A74E20;
    }
L_08A74E20:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    goto L_08A74E28;
L_08A74E28:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A74DD4;
      }
      goto L_08A74E38;
    }
L_08A74E38:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(376)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 4u);
      if (branch_taken) {
          goto L_08A74EBC;
      }
      goto L_08A74E44;
    }
L_08A74E44:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_08A74E50;
L_08A74E50:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08A74E84;
    }
    goto L_08A74E60;
L_08A74E60:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A74E70u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A74E70u) goto L_08A74E70;
    return;
L_08A74E70:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08A74E84;
L_08A74E84:
    ctx.gpr[6] = (ctx.gpr[17] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(209)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74EA4;
      }
      goto L_08A74E9C;
    }
L_08A74E9C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    goto L_08A74EA4;
L_08A74EA4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A74E50;
      }
      goto L_08A74EB4;
    }
L_08A74EB4:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(376)));
    ctx.gpr[20] = (0u | 2u);
    goto L_08A74EBC;
L_08A74EBC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A752EC;
      }
      goto L_08A74EC4;
    }
L_08A74EC4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A74ED8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x08A74ED8u) goto L_08A74ED8;
    return;
L_08A74ED8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u | 70u);
      if (branch_taken) {
          goto L_08A75078;
      }
      goto L_08A74EE8;
    }
L_08A74EE8:
    ctx.gpr[23] = (0u | 52u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[21] = (0u | 3u);
    ctx.gpr[20] = (0u | 2u);
    goto L_08A74EF8;
L_08A74EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A74F28;
      }
      goto L_08A74F0C;
    }
L_08A74F0C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    ctx.gpr[31] = (0x08A74F1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A74F1Cu) goto L_08A74F1C;
    return;
L_08A74F1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A74F28;
L_08A74F28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A74F48;
      }
      goto L_08A74F40;
    }
L_08A74F40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75060;
      }
      goto L_08A74F48;
    }
L_08A74F48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 82u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A74F74;
      }
      goto L_08A74F5C;
    }
L_08A74F5C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A74FD0;
      }
      goto L_08A74F64;
    }
L_08A74F64:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A7502C;
      }
      goto L_08A74F6C;
    }
L_08A74F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7504C;
      }
      goto L_08A74F74;
    }
L_08A74F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[22];
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A74F88;
      }
      goto L_08A74F80;
    }
L_08A74F80:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A74FAC;
      }
      goto L_08A74F88;
    }
L_08A74F88:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74FA4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 720u, 0x08A73E24u>(ctx, &aot_mem) && ctx.pc == 0x08A74FA4u) goto L_08A74FA4;
    return;
L_08A74FA4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A74FC8;
      }
      goto L_08A74FAC;
    }
L_08A74FAC:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74FC4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A7400C;
L_08A74FC4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A74FC8;
L_08A74FC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7504C;
      }
      goto L_08A74FD0;
    }
L_08A74FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A74FE4;
      }
      goto L_08A74FDC;
    }
L_08A74FDC:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A75008;
      }
      goto L_08A74FE4;
    }
L_08A74FE4:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A75000u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 720u, 0x08A73E24u>(ctx, &aot_mem) && ctx.pc == 0x08A75000u) goto L_08A75000;
    return;
L_08A75000:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A75024;
      }
      goto L_08A75008;
    }
L_08A75008:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A75020u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A7400C;
L_08A75020:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A75024;
L_08A75024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7504C;
      }
      goto L_08A7502C;
    }
L_08A7502C:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A75048u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 720u, 0x08A73E24u>(ctx, &aot_mem) && ctx.pc == 0x08A75048u) goto L_08A75048;
    return;
L_08A75048:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A7504C;
L_08A7504C:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A75060;
      }
      goto L_08A7505C;
    }
L_08A7505C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A75060;
L_08A75060:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A74EF8;
      }
      goto L_08A75078;
    }
L_08A75078:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A752EC;
      }
      goto L_08A75088;
    }
L_08A75088:
    ctx.gpr[4] = (16988u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16928u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A750B8u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x08A750B8u) goto L_08A750B8;
    return;
L_08A750B8:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[16] = (0u | 3u);
      if (branch_taken) {
          goto L_08A752EC;
      }
      goto L_08A750C8;
    }
L_08A750C8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A75104;
      }
      goto L_08A750E4;
    }
L_08A750E4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(19));
    ctx.gpr[31] = (0x08A750F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A750F4u) goto L_08A750F4;
    return;
L_08A750F4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A75104;
L_08A75104:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(304));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (17820u << 16u);
        goto L_08A75238;
    }
    goto L_08A7511C;
L_08A7511C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(8624)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A75134:
    ctx.gpr[4] = (17995u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (18184u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] | 47104u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 290u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08A75178;
      }
      goto L_08A7516C;
    }
L_08A7516C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A7518C;
      }
      goto L_08A75178;
    }
L_08A75178:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_08A7518C;
L_08A7518C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A751BC;
      }
      goto L_08A751A4;
    }
L_08A751A4:
    ctx.gpr[4] = (16448u << 16u);
    ctx.gpr[6] = (2237u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08A752BC;
      }
      goto L_08A751BC;
    }
L_08A751BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A752F8;
      }
      goto L_08A751C4;
    }
L_08A751C4:
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17820u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 213u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[13];
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[5] = (0u | 8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08A75218;
      }
      goto L_08A7520C;
    }
L_08A7520C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A7522C;
      }
      goto L_08A75218;
    }
L_08A75218:
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[22];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    goto L_08A7522C;
L_08A7522C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A752BC;
      }
      goto L_08A75234;
    }
L_08A75234:
    ctx.gpr[4] = (17820u << 16u);
    goto L_08A75238;
L_08A75238:
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17963u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] | 57344u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 313u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[13];
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[5] = (0u | 8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08A75288;
      }
      goto L_08A7527C;
    }
L_08A7527C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A7529C;
      }
      goto L_08A75288;
    }
L_08A75288:
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[22];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    goto L_08A7529C;
L_08A7529C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A752BC;
      }
      goto L_08A752B0;
    }
L_08A752B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A752BC;
L_08A752BC:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A752ECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x08A752ECu) goto L_08A752EC;
    return;
L_08A752EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A752F8;
      }
      goto L_08A752F4;
    }
L_08A752F4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A752F8;
L_08A752F8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A75338:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (17817u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A756A8;
      }
      goto L_08A75384;
    }
L_08A75384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_08A753A0;
      }
      goto L_08A75390;
    }
L_08A75390:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A75498;
      }
      goto L_08A75398;
    }
L_08A75398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A753B0;
      }
      goto L_08A753A0;
    }
L_08A753A0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A75424;
      }
      goto L_08A753A8;
    }
L_08A753A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75498;
      }
      goto L_08A753B0;
    }
L_08A753B0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_08A753B8;
L_08A753B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08A753EC;
    }
    goto L_08A753CC;
L_08A753CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A753DCu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A753DCu) goto L_08A753DC;
    return;
L_08A753DC:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08A753EC;
L_08A753EC:
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(209)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7540C;
      }
      goto L_08A75404;
    }
L_08A75404:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    goto L_08A7540C;
L_08A7540C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A753B8;
      }
      goto L_08A7541C;
    }
L_08A7541C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A754A0;
      }
      goto L_08A75424;
    }
L_08A75424:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(25));
    goto L_08A7542C;
L_08A7542C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08A75460;
    }
    goto L_08A75440;
L_08A75440:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A75450u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A75450u) goto L_08A75450;
    return;
L_08A75450:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08A75460;
L_08A75460:
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(209)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75480;
      }
      goto L_08A75478;
    }
L_08A75478:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    goto L_08A75480;
L_08A75480:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7542C;
      }
      goto L_08A75490;
    }
L_08A75490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A754A0;
      }
      goto L_08A75498;
    }
L_08A75498:
    ctx.gpr[18] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_08A754A0;
L_08A754A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A756A0;
      }
      goto L_08A754A8;
    }
L_08A754A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A756A0;
      }
      goto L_08A754B0;
    }
L_08A754B0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A756A0;
      }
      goto L_08A754CC;
    }
L_08A754CC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A754E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x08A754E0u) goto L_08A754E0;
    return;
L_08A754E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[22] / ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[5] = (17036u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A7551C;
    }
    goto L_08A7551C;
L_08A7551C:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[31] = (0x08A75548u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x08A75548u) goto L_08A75548;
    return;
L_08A75548:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A756A0;
      }
      goto L_08A75558;
    }
L_08A75558:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(304));
      if (branch_taken) {
          goto L_08A755A4;
      }
      goto L_08A75580;
    }
L_08A75580:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[31] = (0x08A75590u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A75590u) goto L_08A75590;
    return;
L_08A75590:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(304));
    goto L_08A755A4;
L_08A755A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(6050));
      if (branch_taken) {
          goto L_08A755E4;
      }
      goto L_08A755B4;
    }
L_08A755B4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (0u | 30u);
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 25u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7566C;
      }
      goto L_08A755E4;
    }
L_08A755E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.gpr[4] = (0u | 296u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[5] = (0u | 296u);
    ctx.gpr[31] = (0x08A75604u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x08A75604u) goto L_08A75604;
    return;
L_08A75604:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] >> 2u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A75630;
      }
      goto L_08A75624;
    }
L_08A75624:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_08A75630;
L_08A75630:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[13];
        goto L_08A75654;
    }
    goto L_08A75644;
L_08A75644:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A75668;
      }
      goto L_08A75654;
    }
L_08A75654:
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08A75668;
L_08A75668:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A7566C;
L_08A7566C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A756A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x08A756A0u) goto L_08A756A0;
    return;
L_08A756A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A756AC;
      }
      goto L_08A756A8;
    }
L_08A756A8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A756AC;
L_08A756AC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
L_08A756D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17505u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A75A9C;
      }
      goto L_08A75718;
    }
L_08A75718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_08A75744;
      }
      goto L_08A75724;
    }
L_08A75724:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A75764;
      }
      goto L_08A7572C;
    }
L_08A7572C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7576C;
      }
      goto L_08A7573C;
    }
L_08A7573C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75830;
      }
      goto L_08A75744;
    }
L_08A75744:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A75764;
      }
      goto L_08A7574C;
    }
L_08A7574C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A75848;
      }
      goto L_08A7575C;
    }
L_08A7575C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7590C;
      }
      goto L_08A75764;
    }
L_08A75764:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A75AA0;
      }
      goto L_08A7576C;
    }
L_08A7576C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_08A757A0;
    }
    goto L_08A75780;
L_08A75780:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A75790u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A75790u) goto L_08A75790;
    return;
L_08A75790:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_08A757A0;
L_08A757A0:
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7581C;
      }
      goto L_08A757B8;
    }
L_08A757B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_08A757EC;
    }
    goto L_08A757CC;
L_08A757CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(25));
    ctx.gpr[31] = (0x08A757DCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A757DCu) goto L_08A757DC;
    return;
L_08A757DC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_08A757EC;
L_08A757EC:
    ctx.gpr[5] = (ctx.gpr[20] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(209)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7581C;
      }
      goto L_08A75814;
    }
L_08A75814:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A75830;
      }
      goto L_08A7581C;
    }
L_08A7581C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7576C;
      }
      goto L_08A75830;
    }
L_08A75830:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75840;
      }
      goto L_08A75838;
    }
L_08A75838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75924;
      }
      goto L_08A75840;
    }
L_08A75840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A75AA0;
      }
      goto L_08A75848;
    }
L_08A75848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08A7587C;
    }
    goto L_08A7585C;
L_08A7585C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[31] = (0x08A7586Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A7586Cu) goto L_08A7586C;
    return;
L_08A7586C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08A7587C;
L_08A7587C:
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A758F8;
      }
      goto L_08A75894;
    }
L_08A75894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08A758C8;
    }
    goto L_08A758A8;
L_08A758A8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(27));
    ctx.gpr[31] = (0x08A758B8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A758B8u) goto L_08A758B8;
    return;
L_08A758B8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08A758C8;
L_08A758C8:
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(209)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A758F8;
      }
      goto L_08A758F0;
    }
L_08A758F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A7590C;
      }
      goto L_08A758F8;
    }
L_08A758F8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A75848;
      }
      goto L_08A7590C;
    }
L_08A7590C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7591C;
      }
      goto L_08A75914;
    }
L_08A75914:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75924;
      }
      goto L_08A7591C;
    }
L_08A7591C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A75AA0;
      }
      goto L_08A75924;
    }
L_08A75924:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A75960;
    }
    goto L_08A75960;
L_08A75960:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A75A94;
      }
      goto L_08A7597C;
    }
L_08A7597C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A7598Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x08A7598Cu) goto L_08A7598C;
    return;
L_08A7598C:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A759B8u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x08A759B8u) goto L_08A759B8;
    return;
L_08A759B8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 95u);
      if (branch_taken) {
          goto L_08A75A94;
      }
      goto L_08A759C8;
    }
L_08A759C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (17835u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[5] | 57344u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 338u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17835u << 16u);
      if (branch_taken) {
          goto L_08A75A28;
      }
      goto L_08A75A0C;
    }
L_08A75A0C:
    ctx.gpr[4] = (17835u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 57344u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A75A50;
      }
      goto L_08A75A28;
    }
L_08A75A28:
    ctx.gpr[4] = (ctx.gpr[4] | 57344u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A75A50;
L_08A75A50:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16880u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A75A94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x08A75A94u) goto L_08A75A94;
    return;
L_08A75A94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A75AA0;
      }
      goto L_08A75A9C;
    }
L_08A75A9C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A75AA0;
L_08A75AA0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A75AC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (17981u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 4096u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A75D70;
      }
      goto L_08A75B10;
    }
L_08A75B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08A75B40;
      }
      goto L_08A75B24;
    }
L_08A75B24:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A75B34u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A75B34u) goto L_08A75B34;
    return;
L_08A75B34:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A75B40;
L_08A75B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75D68;
      }
      goto L_08A75B50;
    }
L_08A75B50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A75B60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x08A75B60u) goto L_08A75B60;
    return;
L_08A75B60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (17116u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 80u);
      if (branch_taken) {
          goto L_08A75B98;
      }
      goto L_08A75B7C;
    }
L_08A75B7C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x08A75B8Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A75B8Cu) goto L_08A75B8C;
    return;
L_08A75B8C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A75B98;
L_08A75B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75BB8;
      }
      goto L_08A75BB4;
    }
L_08A75BB4:
    ctx.gpr[18] = (0u | 20u);
    goto L_08A75BB8;
L_08A75BB8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A75BCCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x08A75BCCu) goto L_08A75BCC;
    return;
L_08A75BCC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A75BF8;
      }
      goto L_08A75BE8;
    }
L_08A75BE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A75BF8;
L_08A75BF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A75D68;
      }
      goto L_08A75C04;
    }
L_08A75C04:
    ctx.gpr[19] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A75C18u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 565u, 0x08A731B4u>(ctx, &aot_mem) && ctx.pc == 0x08A75C18u) goto L_08A75C18;
    return;
L_08A75C18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75D1C;
      }
      goto L_08A75C20;
    }
L_08A75C20:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A75C5C;
      }
      goto L_08A75C3C;
    }
L_08A75C3C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(352)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (2237u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08A75C64;
      }
      goto L_08A75C54;
    }
L_08A75C54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08A75C84;
      }
      goto L_08A75C5C;
    }
L_08A75C5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A75D74;
      }
      goto L_08A75C64;
    }
L_08A75C64:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    ctx.gpr[31] = (0x08A75C74u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A75C74u) goto L_08A75C74;
    return;
L_08A75C74:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_08A75C84;
L_08A75C84:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(195));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A75CE8;
      }
      goto L_08A75C94;
    }
L_08A75C94:
    ctx.gpr[4] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 74u);
      if (branch_taken) {
          goto L_08A75CE8;
      }
      goto L_08A75CA0;
    }
L_08A75CA0:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A75CE8;
      }
      goto L_08A75CA8;
    }
L_08A75CA8:
    ctx.gpr[4] = (0u | 310u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A75CCC;
      }
      goto L_08A75CC0;
    }
L_08A75CC0:
    ctx.gpr[4] = (0u | 12668u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A75CDC;
      }
      goto L_08A75CCC;
    }
L_08A75CCC:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x08A75CD8u);
    ctx.gpr[5] = (0u | 310u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x08A75CD8u) goto L_08A75CD8;
    return;
L_08A75CD8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_08A75CDC;
L_08A75CDC:
    ctx.gpr[4] = (0u | 60u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A75D38;
      }
      goto L_08A75CE8;
    }
L_08A75CE8:
    ctx.gpr[4] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A75D08;
      }
      goto L_08A75CF4;
    }
L_08A75CF4:
    ctx.gpr[4] = (0u | 280u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 11440u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A75D38;
      }
      goto L_08A75D08;
    }
L_08A75D08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(664)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A75D38;
      }
      goto L_08A75D1C;
    }
L_08A75D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(652)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(656)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-28320));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A75D38;
L_08A75D38:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A75D68u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x08A75D68u) goto L_08A75D68;
    return;
L_08A75D68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A75D74;
      }
      goto L_08A75D70;
    }
L_08A75D70:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A75D74;
L_08A75D74:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A75DA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(352)));
    ctx.gpr[7] = (2237u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A75E40;
      }
      goto L_08A75DF0;
    }
L_08A75DF0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A75E64;
      }
      goto L_08A75E24;
    }
L_08A75E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(8752)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A75E40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A761EC;
      }
      goto L_08A75E48;
    }
L_08A75E48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A75E6C;
      }
      goto L_08A75E5C;
    }
L_08A75E5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75E7C;
      }
      goto L_08A75E64;
    }
L_08A75E64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A761EC;
      }
      goto L_08A75E6C;
    }
L_08A75E6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A75E7C;
L_08A75E7C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A75E9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 494u, 0x088CA7B0u>(ctx, &aot_mem) && ctx.pc == 0x08A75E9Cu) goto L_08A75E9C;
    return;
L_08A75E9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-170));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75EC4;
      }
      goto L_08A75EBC;
    }
L_08A75EBC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A75EC8;
      }
      goto L_08A75EC4;
    }
L_08A75EC4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    goto L_08A75EC8;
L_08A75EC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-170));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_08A75F08;
    }
    goto L_08A75EE8;
L_08A75EE8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x08A75EF8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A75EF8u) goto L_08A75EF8;
    return;
L_08A75EF8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_08A75F08;
L_08A75F08:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08A75F40u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 597u, 0x089F71F4u>(ctx, &aot_mem) && ctx.pc == 0x08A75F40u) goto L_08A75F40;
    return;
L_08A75F40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A75F50u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A75F50u) goto L_08A75F50;
    return;
L_08A75F50:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08A75F60;
    }
    goto L_08A75F58;
L_08A75F58:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_08A760C4;
      }
      goto L_08A75F60;
    }
L_08A75F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08A75F78u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 71u, 0x08AA4980u>(ctx, &aot_mem) && ctx.pc == 0x08A75F78u) goto L_08A75F78;
    return;
L_08A75F78:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A75F88u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A75F88u) goto L_08A75F88;
    return;
L_08A75F88:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08A75F9C;
    }
    goto L_08A75F90;
L_08A75F90:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A760C4;
      }
      goto L_08A75F9C;
    }
L_08A75F9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08A75FB4u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 741u, 0x0886BB34u>(ctx, &aot_mem) && ctx.pc == 0x08A75FB4u) goto L_08A75FB4;
    return;
L_08A75FB4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A75FC4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A75FC4u) goto L_08A75FC4;
    return;
L_08A75FC4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08A75FD8;
    }
    goto L_08A75FCC;
L_08A75FCC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A760C4;
      }
      goto L_08A75FD8;
    }
L_08A75FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08A75FF0u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 847u, 0x08B1BC2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A75FF0u) goto L_08A75FF0;
    return;
L_08A75FF0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A76000u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A76000u) goto L_08A76000;
    return;
L_08A76000:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08A76014;
    }
    goto L_08A76008;
L_08A76008:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A760C4;
      }
      goto L_08A76014;
    }
L_08A76014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08A7602Cu);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 508u, 0x0881AF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7602Cu) goto L_08A7602C;
    return;
L_08A7602C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A7603Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7603Cu) goto L_08A7603C;
    return;
L_08A7603C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08A76050;
    }
    goto L_08A76044;
L_08A76044:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A760C4;
      }
      goto L_08A76050;
    }
L_08A76050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08A76068u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 243u, 0x08825BB8u>(ctx, &aot_mem) && ctx.pc == 0x08A76068u) goto L_08A76068;
    return;
L_08A76068:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A76078u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A76078u) goto L_08A76078;
    return;
L_08A76078:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08A7608C;
    }
    goto L_08A76080;
L_08A76080:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A760C4;
      }
      goto L_08A7608C;
    }
L_08A7608C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08A760A4u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 383u, 0x089CE1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A760A4u) goto L_08A760A4;
    return;
L_08A760A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A760B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A760B4u) goto L_08A760B4;
    return;
L_08A760B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A760C4;
      }
      goto L_08A760BC;
    }
L_08A760BC:
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08A760C4;
L_08A760C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_08A760E0;
      }
      goto L_08A760D0;
    }
L_08A760D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A761EC;
      }
      goto L_08A760D8;
    }
L_08A760D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76160;
      }
      goto L_08A760E0;
    }
L_08A760E0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A761EC;
      }
      goto L_08A760E8;
    }
L_08A760E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A760F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 585u, 0x08A7326Cu>(ctx, &aot_mem) && ctx.pc == 0x08A760F8u) goto L_08A760F8;
    return;
L_08A760F8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A76104u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A75338;
L_08A76104:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76154;
      }
      goto L_08A7610C;
    }
L_08A7610C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A76118u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A74D30;
L_08A76118:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A76124u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 679u, 0x08A73AF0u>(ctx, &aot_mem) && ctx.pc == 0x08A76124u) goto L_08A76124;
    return;
L_08A76124:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A76130u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A75AC4;
L_08A76130:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A7613Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 624u, 0x08A735B0u>(ctx, &aot_mem) && ctx.pc == 0x08A7613Cu) goto L_08A7613C;
    return;
L_08A7613C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A76148u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A740E0;
L_08A76148:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A76154u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A756D8;
L_08A76154:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A761EC;
      }
      goto L_08A76160;
    }
L_08A76160:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A76170u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 585u, 0x08A7326Cu>(ctx, &aot_mem) && ctx.pc == 0x08A76170u) goto L_08A76170;
    return;
L_08A76170:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A7617Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A75338;
L_08A7617C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A761E4;
      }
      goto L_08A76184;
    }
L_08A76184:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A76190u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 594u, 0x08A73324u>(ctx, &aot_mem) && ctx.pc == 0x08A76190u) goto L_08A76190;
    return;
L_08A76190:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A7619Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A74D30;
L_08A7619C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A761A8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A756D8;
L_08A761A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A761B4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 679u, 0x08A73AF0u>(ctx, &aot_mem) && ctx.pc == 0x08A761B4u) goto L_08A761B4;
    return;
L_08A761B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A761C0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A75AC4;
L_08A761C0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A761CCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A740E0;
L_08A761CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A761D8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 624u, 0x08A735B0u>(ctx, &aot_mem) && ctx.pc == 0x08A761D8u) goto L_08A761D8;
    return;
L_08A761D8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A761E4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 652u, 0x08A737F4u>(ctx, &aot_mem) && ctx.pc == 0x08A761E4u) goto L_08A761E4;
    return;
L_08A761E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A761EC;
L_08A761EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7620C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (0u | 28u);
    ctx.gpr[31] = (0x08A76230u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08A76230u) goto L_08A76230;
    return;
L_08A76230:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A76254;
      }
      goto L_08A76240;
    }
L_08A76240:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A7624Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08A7624Cu) goto L_08A7624C;
    return;
L_08A7624C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08A76254;
L_08A76254:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A762B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10016))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5668)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08A76304u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A76304u) goto L_08A76304;
    return;
L_08A76304:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A76324;
      }
      goto L_08A76310;
    }
L_08A76310:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A76320u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 392u, 0x08B6DC90u>(ctx, &aot_mem) && ctx.pc == 0x08A76320u) goto L_08A76320;
    return;
L_08A76320:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A76324;
L_08A76324:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A76338;
      }
      goto L_08A7632C;
    }
L_08A7632C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A76338;
L_08A76338:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A76348u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A76348u) goto L_08A76348;
    return;
L_08A76348:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7636C;
      }
      goto L_08A76354;
    }
L_08A76354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7636C;
      }
      goto L_08A76364;
    }
L_08A76364:
    ctx.gpr[31] = (0x08A7636Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A7636Cu) goto L_08A7636C;
    return;
L_08A7636C:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10017))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5664)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5660)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08A76394u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A76394u) goto L_08A76394;
    return;
L_08A76394:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A763B0;
      }
      goto L_08A763A0;
    }
L_08A763A0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A763ACu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 392u, 0x08B6DC90u>(ctx, &aot_mem) && ctx.pc == 0x08A763ACu) goto L_08A763AC;
    return;
L_08A763AC:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A763B0;
L_08A763B0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A763C4;
      }
      goto L_08A763B8;
    }
L_08A763B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A763C4;
L_08A763C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A763D4u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A763D4u) goto L_08A763D4;
    return;
L_08A763D4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A763F8;
      }
      goto L_08A763E0;
    }
L_08A763E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A763F8;
      }
      goto L_08A763F0;
    }
L_08A763F0:
    ctx.gpr[31] = (0x08A763F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A763F8u) goto L_08A763F8;
    return;
L_08A763F8:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10018))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5656)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5652)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08A76420u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A76420u) goto L_08A76420;
    return;
L_08A76420:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08A7643C;
      }
      goto L_08A7642C;
    }
L_08A7642C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A76438u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 392u, 0x08B6DC90u>(ctx, &aot_mem) && ctx.pc == 0x08A76438u) goto L_08A76438;
    return;
L_08A76438:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A7643C;
L_08A7643C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A76450;
      }
      goto L_08A76444;
    }
L_08A76444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A76450;
L_08A76450:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A76460u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A76460u) goto L_08A76460;
    return;
L_08A76460:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76484;
      }
      goto L_08A7646C;
    }
L_08A7646C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A76484;
      }
      goto L_08A7647C;
    }
L_08A7647C:
    ctx.gpr[31] = (0x08A76484u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A76484u) goto L_08A76484;
    return;
L_08A76484:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A764A8:
    ctx.gpr[2] = (0u | 58u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10016)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    rt.memory().aot_store_word_left(ctx.gpr[2] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[3] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(ctx.gpr[3] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(17));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[2] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(ctx.gpr[2] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(41));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(45), ctx.gpr[9]);
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[9]);
    ctx.gpr[1] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(49), ctx.gpr[1]);
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[1]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[10]));
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(54), ctx.gpr[11]);
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(57), ctx.gpr[11]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A765B8:
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
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (ctx.gpr[10] & 255u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[20] = (2237u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[30] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    ctx.gpr[23] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[7]);
    ctx.gpr[22] = (ctx.gpr[11] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A76694;
      }
      goto L_08A76660;
    }
L_08A76660:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08A76668;
L_08A76668:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08A76688;
    }
    goto L_08A76678;
L_08A76678:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A7668C;
      }
      goto L_08A76688;
    }
L_08A76688:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A7668C;
L_08A7668C:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08A76668;
    }
    goto L_08A76694;
L_08A76694:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A766D0;
      }
      goto L_08A766B0;
    }
L_08A766B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08A7671C;
      }
      goto L_08A766D0;
    }
L_08A766D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[31] = (0x08A7670Cu);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 444u, 0x08B6E0F8u>(ctx, &aot_mem) && ctx.pc == 0x08A7670Cu) goto L_08A7670C;
    return;
L_08A7670C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    goto L_08A7671C;
L_08A7671C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A76758u);
    ctx.gpr[11] = (ctx.gpr[22] | 0u);
    goto L_08A764A8;
L_08A76758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A7678C;
      }
      goto L_08A76768;
    }
L_08A76768:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(0u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(102))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A76784u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A76DCC;
L_08A76784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7679C;
      }
      goto L_08A7678C;
    }
L_08A7678C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A7679Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x08A7679Cu) goto L_08A7679C;
    return;
L_08A7679C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08A767D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
        goto L_08A76848;
    }
    goto L_08A7680C;
L_08A7680C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08A76818;
L_08A76818:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
        goto L_08A76838;
    }
    goto L_08A76828;
L_08A76828:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A7683C;
      }
      goto L_08A76838;
    }
L_08A76838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A7683C;
L_08A7683C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08A76818;
    }
    goto L_08A76844;
L_08A76844:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    goto L_08A76848;
L_08A76848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
        goto L_08A76898;
    }
    goto L_08A7685C;
L_08A7685C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08A76868;
L_08A76868:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08A76888;
    }
    goto L_08A76878;
L_08A76878:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A7688C;
      }
      goto L_08A76888;
    }
L_08A76888:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A7688C;
L_08A7688C:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08A76868;
    }
    goto L_08A76894;
L_08A76894:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08A76898;
L_08A76898:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A768F0;
      }
      goto L_08A768C4;
    }
L_08A768C4:
    ctx.gpr[31] = (0x08A768CCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x08A768CCu) goto L_08A768CC;
    return;
L_08A768CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A768C4;
      }
      goto L_08A768EC;
    }
L_08A768EC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08A768F0;
L_08A768F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A76990;
      }
      goto L_08A76924;
    }
L_08A76924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A76994;
    }
    goto L_08A76944;
L_08A76944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76A14;
      }
      goto L_08A76950;
    }
L_08A76950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A76964u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 422u, 0x08B6DF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A76964u) goto L_08A76964;
    return;
L_08A76964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08A76A14;
      }
      goto L_08A76990;
    }
L_08A76990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A76994;
L_08A76994:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A76A14;
      }
      goto L_08A769AC;
    }
L_08A769AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A769BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x08A769BCu) goto L_08A769BC;
    return;
L_08A769BC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08A769D8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 484u, 0x08B6AC34u>(ctx, &aot_mem) && ctx.pc == 0x08A769D8u) goto L_08A769D8;
    return;
L_08A769D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08A769F0;
    }
    goto L_08A769E4;
L_08A769E4:
    ctx.gpr[31] = (0x08A769ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A769ECu) goto L_08A769EC;
    return;
L_08A769EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A769F0;
L_08A769F0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A769AC;
      }
      goto L_08A76A14;
    }
L_08A76A14:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76A38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08A76AB0;
      }
      goto L_08A76A7C;
    }
L_08A76A7C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_08A76A84;
L_08A76A84:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
        goto L_08A76AA4;
    }
    goto L_08A76A94;
L_08A76A94:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A76AA8;
      }
      goto L_08A76AA4;
    }
L_08A76AA4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08A76AA8;
L_08A76AA8:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_08A76A84;
    }
    goto L_08A76AB0;
L_08A76AB0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A76AEC;
      }
      goto L_08A76ACC;
    }
L_08A76ACC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
        goto L_08A76B3C;
    }
    goto L_08A76AEC;
L_08A76AEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A76B28u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 444u, 0x08B6E0F8u>(ctx, &aot_mem) && ctx.pc == 0x08A76B28u) goto L_08A76B28;
    return;
L_08A76B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    goto L_08A76B3C;
L_08A76B3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A76B88;
      }
      goto L_08A76B50;
    }
L_08A76B50:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10017)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[31] = (0x08A76B80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x08A76B80u) goto L_08A76B80;
    return;
L_08A76B80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76B90;
      }
      goto L_08A76B88;
    }
L_08A76B88:
    ctx.gpr[31] = (0x08A76B90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A770C0;
L_08A76B90:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A76B9Cu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08A767D8;
L_08A76B9C:
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
L_08A76BB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[8] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
        goto L_08A76C10;
    }
    goto L_08A76BD8;
L_08A76BD8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    goto L_08A76BE0;
L_08A76BE0:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
        goto L_08A76C00;
    }
    goto L_08A76BF0;
L_08A76BF0:
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A76C04;
      }
      goto L_08A76C00;
    }
L_08A76C00:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_08A76C04;
L_08A76C04:
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
        goto L_08A76BE0;
    }
    goto L_08A76C0C;
L_08A76C0C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08A76C10;
L_08A76C10:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A76C48;
      }
      goto L_08A76C28;
    }
L_08A76C28:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
        goto L_08A76C94;
    }
    goto L_08A76C48;
L_08A76C48:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A76C84u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 444u, 0x08B6E0F8u>(ctx, &aot_mem) && ctx.pc == 0x08A76C84u) goto L_08A76C84;
    return;
L_08A76C84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    goto L_08A76C94;
L_08A76C94:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76CA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A76D40;
      }
      goto L_08A76CD4;
    }
L_08A76CD4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A76D30;
      }
      goto L_08A76CE0;
    }
L_08A76CE0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A76CECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A7725C;
L_08A76CEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76D30;
      }
      goto L_08A76CF4;
    }
L_08A76CF4:
    ctx.gpr[31] = (0x08A76CFCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A76CFCu) goto L_08A76CFC;
    return;
L_08A76CFC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[17] == ctx.gpr[18]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4));
        goto L_08A76D28;
    }
    goto L_08A76D08;
L_08A76D08:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A76D24;
      }
      goto L_08A76D10;
    }
L_08A76D10:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A76D20u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A76D20u) goto L_08A76D20;
    return;
L_08A76D20:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A76D24;
L_08A76D24:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4));
    goto L_08A76D28;
L_08A76D28:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A76D38;
      }
      goto L_08A76D30;
    }
L_08A76D30:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A76D38;
L_08A76D38:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A76CD4;
      }
      goto L_08A76D40;
    }
L_08A76D40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76D5C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76D64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A76DAC;
      }
      goto L_08A76D8C;
    }
L_08A76D8C:
    ctx.gpr[31] = (0x08A76D94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A76D94u) goto L_08A76D94;
    return;
L_08A76D94:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A76D8C;
      }
      goto L_08A76DA8;
    }
L_08A76DA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08A76DAC;
L_08A76DAC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76DCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[7]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08A76E04u);
    ctx.gpr[4] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A76E04u) goto L_08A76E04;
    return;
L_08A76E04:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] & 65535u);
      if (branch_taken) {
          goto L_08A76F1C;
      }
      goto L_08A76E10;
    }
L_08A76E10:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(6), ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(5));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(9));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(13));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(17));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(21));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(25));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(29));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(33));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(37));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(41));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(45), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[10]));
    ctx.gpr[1] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(49), ctx.gpr[1]));
    ctx.gpr[1] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[1]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[1]);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(53)));
    ctx.gpr[2] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(54), ctx.gpr[2]));
    ctx.gpr[2] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(57), ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A76F18u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A77168;
L_08A76F18:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A76F1C;
L_08A76F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A76F48;
      }
      goto L_08A76F2C;
    }
L_08A76F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
        goto L_08A76F38;
    }
    goto L_08A76F38;
L_08A76F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A77044;
      }
      goto L_08A76F48;
    }
L_08A76F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_08A76F88;
      }
      goto L_08A76F80;
    }
L_08A76F80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
      if (branch_taken) {
          goto L_08A76F88;
      }
      goto L_08A76F88;
    }
L_08A76F88:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A76FD0;
      }
      goto L_08A76F9C;
    }
L_08A76F9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[31] = (0x08A76FACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08A76FACu) goto L_08A76FAC;
    return;
L_08A76FAC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08A76FD0;
      }
      goto L_08A76FBC;
    }
L_08A76FBC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A76FC8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08A76FC8u) goto L_08A76FC8;
    return;
L_08A76FC8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_08A76FD0;
L_08A76FD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A76FF8;
      }
      goto L_08A76FDC;
    }
L_08A76FDC:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A76FF0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A76FF0u) goto L_08A76FF0;
    return;
L_08A76FF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08A76FF8;
      }
      goto L_08A76FF8;
    }
L_08A76FF8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_08A7701C;
    }
    goto L_08A77008;
L_08A77008:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A77008;
      }
      goto L_08A77018;
    }
L_08A77018:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_08A7701C;
L_08A7701C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A77030;
      }
      goto L_08A77028;
    }
L_08A77028:
    ctx.gpr[31] = (0x08A77030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A77030u) goto L_08A77030;
    return;
L_08A77030:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08A77044;
L_08A77044:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77064:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(6), ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A77088u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08A770C0;
L_08A77088:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77094:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(6), ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x08A770B4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A76BB4;
L_08A770B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A770C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A77154;
      }
      goto L_08A770E4;
    }
L_08A770E4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A77148;
      }
      goto L_08A770F4;
    }
L_08A770F4:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A77148;
      }
      goto L_08A77100;
    }
L_08A77100:
    ctx.gpr[31] = (0x08A77108u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A77108u) goto L_08A77108;
    return;
L_08A77108:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
        goto L_08A7713C;
    }
    goto L_08A77118;
L_08A77118:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A77138;
      }
      goto L_08A77124;
    }
L_08A77124:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08A77134u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A77134u) goto L_08A77134;
    return;
L_08A77134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A77138;
L_08A77138:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    goto L_08A7713C;
L_08A7713C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A77154;
      }
      goto L_08A77148;
    }
L_08A77148:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A770E4;
      }
      goto L_08A77154;
    }
L_08A77154:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77168:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[10] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[10] >> 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[10] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A7720C;
      }
      goto L_08A771FC;
    }
L_08A771FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A77208u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08A77208u) goto L_08A77208;
    return;
L_08A77208:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A7720C;
L_08A7720C:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A77240;
      }
      goto L_08A77224;
    }
L_08A77224:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A77238u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 236u, 0x0887CCD4u>(ctx, &aot_mem) && ctx.pc == 0x08A77238u) goto L_08A77238;
    return;
L_08A77238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A77248;
      }
      goto L_08A77240;
    }
L_08A77240:
    ctx.gpr[31] = (0x08A77248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 241u, 0x0887CD60u>(ctx, &aot_mem) && ctx.pc == 0x08A77248u) goto L_08A77248;
    return;
L_08A77248:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7725C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (2237u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A772A4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem) && ctx.pc == 0x08A772A4u) goto L_08A772A4;
    return;
L_08A772A4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A772B8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A772B8u) goto L_08A772B8;
    return;
L_08A772B8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A77414;
      }
      goto L_08A772D4;
    }
L_08A772D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A77340;
      }
      goto L_08A772E4;
    }
L_08A772E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (16179u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(69)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(70)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(71)));
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (0u | 128u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x08A77338u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 276u, 0x088AEFC0u>(ctx, &aot_mem) && ctx.pc == 0x08A77338u) goto L_08A77338;
    return;
L_08A77338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A77394;
      }
      goto L_08A77340;
    }
L_08A77340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A77394;
      }
      goto L_08A7734C;
    }
L_08A7734C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(69)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(70)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 100u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x08A77394u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 276u, 0x088AEFC0u>(ctx, &aot_mem) && ctx.pc == 0x08A77394u) goto L_08A77394;
    return;
L_08A77394:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A773A0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 461u, 0x08A93198u>(ctx, &aot_mem) && ctx.pc == 0x08A773A0u) goto L_08A773A0;
    return;
L_08A773A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A77414;
      }
      goto L_08A773A8;
    }
L_08A773A8:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A77414;
      }
      goto L_08A773C8;
    }
L_08A773C8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (16460u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(69)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(70)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(71)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x08A77414u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 276u, 0x088AEFC0u>(ctx, &aot_mem) && ctx.pc == 0x08A77414u) goto L_08A77414;
    return;
L_08A77414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_08A77440;
    }
    goto L_08A77420;
L_08A77420:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(53));
    ctx.gpr[31] = (0x08A77430u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A77430u) goto L_08A77430;
    return;
L_08A77430:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(53)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_08A77440;
L_08A77440:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A774F0;
      }
      goto L_08A77474;
    }
L_08A77474:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A774F0;
      }
      goto L_08A77490;
    }
L_08A77490:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A774B8;
      }
      goto L_08A774A4;
    }
L_08A774A4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[31] = (0x08A774B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A76BB4;
L_08A774B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A774E8;
      }
      goto L_08A774B8;
    }
L_08A774B8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10018)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A774E8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x08A774E8u) goto L_08A774E8;
    return;
L_08A774E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A774F4;
      }
      goto L_08A774F0;
    }
L_08A774F0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A774F4;
L_08A774F4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77524:
    ctx.gpr[4] = (0u | 52u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10016), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-5640));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10016)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30144));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 53u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10017), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-5628));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10017)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 54u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10018), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-5612));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10018)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77584:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08A7758C;
L_08A7758C:
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(260)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A775E8;
      }
      goto L_08A775A8;
    }
L_08A775A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A775DC;
      }
      goto L_08A775BC;
    }
L_08A775BC:
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A7758C;
      }
      goto L_08A775D4;
    }
L_08A775D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A775F0;
      }
      goto L_08A775DC;
    }
L_08A775DC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08A775F0;
      }
      goto L_08A775E8;
    }
L_08A775E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08A775F0;
      }
      goto L_08A775F0;
    }
L_08A775F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A775F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8360)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7713)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5584)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5580)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A7778C;
      }
      goto L_08A77658;
    }
L_08A77658:
    ctx.gpr[31] = (0x08A77660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08A77660u) goto L_08A77660;
    return;
L_08A77660:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A77670u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08A77670u) goto L_08A77670;
    return;
L_08A77670:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.gpr[31] = (0x08A7769Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08A7769Cu) goto L_08A7769C;
    return;
L_08A7769C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5564)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5568)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A776B8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08A776B8u) goto L_08A776B8;
    return;
L_08A776B8:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A776CCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08A776CCu) goto L_08A776CC;
    return;
L_08A776CC:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A776E0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A776E0u) goto L_08A776E0;
    return;
L_08A776E0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A776ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x08A776ECu) goto L_08A776EC;
    return;
L_08A776EC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5584), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A77728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08A77728u) goto L_08A77728;
    return;
L_08A77728:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A7773Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7773Cu) goto L_08A7773C;
    return;
L_08A7773C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A77750u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08A77750u) goto L_08A77750;
    return;
L_08A77750:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A77760u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08A77760u) goto L_08A77760;
    return;
L_08A77760:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A77774u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08A77774u) goto L_08A77774;
    return;
L_08A77774:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A77780u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x08A77780u) goto L_08A77780;
    return;
L_08A77780:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5580), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A7778C;
L_08A7778C:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A777A0;
      }
      goto L_08A7779C;
    }
L_08A7779C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5584), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08A777A0;
L_08A777A0:
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A777B4;
      }
      goto L_08A777B0;
    }
L_08A777B0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5580), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08A777B4;
L_08A777B4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[28] | 0u);
    goto L_08A777C0;
L_08A777C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A777F8;
      }
      goto L_08A777C8;
    }
L_08A777C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10024)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A777F8;
      }
      goto L_08A777D4;
    }
L_08A777D4:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[28] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10024)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A777F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(716)));
    goto L_08A77584;
L_08A777F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A777C0;
      }
      goto L_08A777F8;
    }
L_08A777F8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77830:
    ctx.gpr[10] = (0u | 0u);
    goto L_08A77834;
L_08A77834:
    ctx.gpr[4] = (ctx.gpr[10] << 2u);
    ctx.gpr[5] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[28] + ctx.gpr[4]);
    ctx.gpr[10] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10024), 0u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[10]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A77834;
      }
      goto L_08A77858;
    }
L_08A77858:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[16] = std::sqrt(ctx.fpr[16]);
    ctx.fpr[18] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A778A4;
      }
      goto L_08A7789C;
    }
L_08A7789C:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    goto L_08A778A4;
L_08A778A4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A77A88;
      }
      goto L_08A778B8;
    }
L_08A778B8:
    ctx.gpr[5] = (ctx.gpr[7] << 5u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (17948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (18804u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 9214u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (49520u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08A778F4;
L_08A778F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A7790C;
      }
      goto L_08A778FC;
    }
L_08A778FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
        goto L_08A77914;
    }
    goto L_08A7790C;
L_08A7790C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A77934;
      }
      goto L_08A77914;
    }
L_08A77914:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
        goto L_08A77930;
    }
    goto L_08A77928;
L_08A77928:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A77934;
      }
      goto L_08A77930;
    }
L_08A77930:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_08A77934;
L_08A77934:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A77A74;
      }
      goto L_08A7793C;
    }
L_08A7793C:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(716)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A77A74;
      }
      goto L_08A77948;
    }
L_08A77948:
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    ctx.gpr[11] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A77A74;
      }
      goto L_08A77954;
    }
L_08A77954:
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[15];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[14];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[3];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A77A74;
      }
      goto L_08A77980;
    }
L_08A77980:
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A77A74;
      }
      goto L_08A77990;
    }
L_08A77990:
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A77A74;
      }
      goto L_08A779AC;
    }
L_08A779AC:
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A779D4;
      }
      goto L_08A779B8;
    }
L_08A779B8:
    ctx.gpr[11] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[28] + ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(10024), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
      if (branch_taken) {
          goto L_08A77A74;
      }
      goto L_08A779D4;
    }
L_08A779D4:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[3] = (ctx.gpr[11] << 2u);
    goto L_08A779E4;
L_08A779E4:
    ctx.gpr[3] = (ctx.gpr[28] + ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(10024)));
    ctx.gpr[12] = (ctx.gpr[3] + static_cast<std::uint32_t>(48));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(48));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[15];
    ctx.fpr[3] = ctx.fpr[3] - ctx.fpr[14];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[3];
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A77A28;
      }
      goto L_08A77A20;
    }
L_08A77A20:
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[2] = (ctx.gpr[11] | 0u);
    goto L_08A77A28;
L_08A77A28:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] << 16u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[11]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[3] = (ctx.gpr[11] << 2u);
      if (branch_taken) {
          goto L_08A779E4;
      }
      goto L_08A77A40;
    }
L_08A77A40:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A77A74;
      }
      goto L_08A77A48;
    }
L_08A77A48:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A77A68;
      }
      goto L_08A77A58;
    }
L_08A77A58:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[11] = (ctx.gpr[11] & 496u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A77A74;
      }
      goto L_08A77A68;
    }
L_08A77A68:
    ctx.gpr[11] = (ctx.gpr[2] << 2u);
    ctx.gpr[11] = (ctx.gpr[28] + ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(10024), ctx.gpr[5]);
    goto L_08A77A74;
L_08A77A74:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2080));
      if (branch_taken) {
          goto L_08A778F4;
      }
      goto L_08A77A88;
    }
L_08A77A88:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77A90:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5576)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (0u | 170u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A77AB8;
      }
      goto L_08A77AAC;
    }
L_08A77AAC:
    ctx.gpr[6] = (15872u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    goto L_08A77AB8;
L_08A77AB8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(260)));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08A77AF0;
    }
    goto L_08A77AD0;
L_08A77AD0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5572)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A77BF0;
      }
      goto L_08A77AF0;
    }
L_08A77AF0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A77BF0;
      }
      goto L_08A77B1C;
    }
L_08A77B1C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[8] = (ctx.gpr[8] & 496u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A77B44;
      }
      goto L_08A77B2C;
    }
L_08A77B2C:
    ctx.gpr[5] = (0u | 31u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 31 ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
        goto L_08A77B3C;
    }
    goto L_08A77B3C;
L_08A77B3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08A77B80;
      }
      goto L_08A77B44;
    }
L_08A77B44:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(612)));
    ctx.gpr[8] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A77B6C;
      }
      goto L_08A77B54;
    }
L_08A77B54:
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 20 ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
        goto L_08A77B64;
    }
    goto L_08A77B64;
L_08A77B64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08A77B80;
      }
      goto L_08A77B6C;
    }
L_08A77B6C:
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 15 ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
        goto L_08A77B7C;
    }
    goto L_08A77B7C;
L_08A77B7C:
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    goto L_08A77B80;
L_08A77B80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A77BCC;
      }
      goto L_08A77B88;
    }
L_08A77B88:
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(256)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A77B88;
      }
      goto L_08A77BC4;
    }
L_08A77BC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A77BCC;
L_08A77BCC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 32 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5572)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A77BF0;
      }
      goto L_08A77BE8;
    }
L_08A77BE8:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08A77BF0;
L_08A77BF0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77BF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-400));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A77C4Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x08A77C4Cu) goto L_08A77C4C;
    return;
L_08A77C4C:
    ctx.gpr[31] = (0x08A77C54u);
    // nop
    goto L_08A77830;
L_08A77C54:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5572)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08A77C74u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(312), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08A77C74u) goto L_08A77C74;
    return;
L_08A77C74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17279u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A77D0C;
L_08A77D0C:
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
        (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 31u, 0x08A783E4u>(ctx, &aot_mem); return;
    }
    goto L_08A77D14;
L_08A77D14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(312))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[23] = (ctx.gpr[28] + ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(10024)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 30u, 0x08A783E0u>(ctx, &aot_mem); return;
      }
      goto L_08A77D2C;
    }
L_08A77D2C:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(716)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (16166u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 278u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A77D94;
      }
      goto L_08A77D84;
    }
L_08A77D84:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08A77D94;
L_08A77D94:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (0u | 233u);
    if (ctx.gpr[4] != ctx.gpr[6]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08A77DC8;
    }
    goto L_08A77DB0;
L_08A77DB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A77DC8;
L_08A77DC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[5]);
    goto L_08A77DEC;
L_08A77DEC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_08A77DFC;
      }
      goto L_08A77DF4;
    }
L_08A77DF4:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 29u, 0x08A783C4u>(ctx, &aot_mem); return;
      }
      goto L_08A77DFC;
    }
L_08A77DFC:
    ctx.gpr[4] = (ctx.gpr[22] << 2u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(260)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5572)));
    ctx.gpr[4] = (15938u << 16u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 36700u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(252), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[31] = (0x08A77E40u);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08A77E40u) goto L_08A77E40;
    return;
L_08A77E40:
    ctx.gpr[4] = (ctx.gpr[22] << 2u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5548)));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5552)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(260)));
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A77E64u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08A77E64u) goto L_08A77E64;
    return;
L_08A77E64:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[30] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A77E84u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08A77E84u) goto L_08A77E84;
    return;
L_08A77E84:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
        goto L_08A77E98;
    }
    goto L_08A77E8C;
L_08A77E8C:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    goto L_08A77E98;
L_08A77E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A77EA8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08A77EA8u) goto L_08A77EA8;
    return;
L_08A77EA8:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A77EBCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A77EBCu) goto L_08A77EBC;
    return;
L_08A77EBC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A77EC8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x08A77EC8u) goto L_08A77EC8;
    return;
L_08A77EC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5576)));
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A77EEC;
      }
      goto L_08A77EE8;
    }
L_08A77EE8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08A77EEC;
L_08A77EEC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08A77F10;
      }
      goto L_08A77F08;
    }
L_08A77F08:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A77F60;
      }
      goto L_08A77F10;
    }
L_08A77F10:
    ctx.gpr[4] = (ctx.gpr[22] << 2u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (17430u << 16u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08A77F4C;
    }
    goto L_08A77F4C;
L_08A77F4C:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08A77F5C;
    }
    goto L_08A77F5C;
L_08A77F5C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A77F60;
L_08A77F60:
    ctx.gpr[4] = (ctx.gpr[30] << 3u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[30] << 3u);
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[12];
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 3u, 0x08A78068u>(ctx, &aot_mem); return;
      }
      goto L_08A77FD0;
    }
L_08A77FD0:
    ctx.fpr[12] = std::sqrt(ctx.fpr[15]);
    ctx.fpr[13] = ctx.fpr[26] / ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.pc = 0x08A78000u; return;
}

void recomp_unit_0156(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0156_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_156(Runtime &runtime) {
    runtime.register_generated_unit(156u, 0x08A74000u, 16384u, &recomp_unit_0156, &recomp_unit_0156_entry);
    runtime.register_function(0x08A74000u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7400Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74034u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74050u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74060u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74070u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74080u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A740B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A740C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A740E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7415Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74168u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74174u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74188u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74194u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741FCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7420Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7421Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74228u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74234u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7423Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74244u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74268u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74270u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74278u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74298u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A742A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A742B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A742C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A742D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A742E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A742ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A742F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7430Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7431Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74330u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74340u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7434Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7435Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74364u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74370u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74378u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74388u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74390u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74398u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A743A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A743B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A743C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A743D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A743E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A743F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74408u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74418u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74428u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7443Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74448u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74458u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74468u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74478u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74488u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74494u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A744A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A744ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A744C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A744D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A744E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A744F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74500u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74514u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74524u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74534u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74548u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74554u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74564u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74574u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74584u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74594u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A745A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A745B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A745B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A745C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A745DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A745F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74600u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74610u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74624u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74628u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7463Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74644u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74658u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7466Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7467Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7468Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A746A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A746A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A746B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A746BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A746D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A746E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74708u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74710u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74718u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74758u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74768u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7477Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7478Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7479Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A747A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A747C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A747D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74800u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7483Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74844u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74850u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74858u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7486Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74870u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74878u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74884u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74894u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7489Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A748C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A748D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A748E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A748ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74910u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74920u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74934u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74944u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74954u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74980u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74988u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7499Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A749A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A749E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A749F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74A0Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74A14u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74A28u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74A38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74A44u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74A6Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74A7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74A90u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74AA0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74AB0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74ABCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74ACCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74B04u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74B14u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74B2Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74B38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74B4Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74B60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74B70u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74B84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74B94u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74BCCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74BDCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74BF4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74C00u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74C10u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74C1Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74C50u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74C7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74C94u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74C9Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74CA8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74CDCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74CE4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74CE8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74D30u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74D98u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74DA4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74DACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74DB4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74DC0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74DC8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74DD4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74DE4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74DF4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74E08u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74E20u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74E28u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74E38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74E44u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74E50u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74E60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74E70u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74E84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74E9Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74EA4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74EB4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74EBCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74EC4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74ED8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74EE8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74EF8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F0Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F1Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F28u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F40u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F48u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F5Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F64u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F6Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F74u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F80u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F88u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74FA4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74FACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74FC4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74FC8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74FD0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74FDCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74FE4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75000u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75008u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75020u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75024u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7502Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75048u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7504Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7505Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75060u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75078u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75088u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A750B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A750C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A750E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A750F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75104u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7511Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75134u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7516Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75178u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7518Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A751A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A751BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A751C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7520Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75218u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7522Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75234u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75238u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7527Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75288u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7529Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A752B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A752BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A752ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A752F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A752F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75338u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75384u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75390u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75398u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A753A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A753A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A753B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A753B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A753CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A753DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A753ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75404u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7540Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7541Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75424u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7542Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75440u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75450u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75460u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75478u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75480u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75490u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75498u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7551Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75548u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75558u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75580u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75590u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A755A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A755B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A755E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75604u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75624u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75630u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75644u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75654u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75668u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7566Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A756A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A756A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A756ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A756D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75718u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75724u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7572Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7573Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75744u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7574Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7575Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75764u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7576Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75780u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75790u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A757A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A757B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A757CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A757DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A757ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75814u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7581Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75830u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75838u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75840u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75848u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7585Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7586Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7587Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75894u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A758A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A758B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A758C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A758F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A758F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7590Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75914u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7591Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75924u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75960u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7597Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7598Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A759B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A759C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75A0Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75A28u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75A50u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75A94u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75A9Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75AA0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75AC4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B10u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B24u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B34u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B40u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B50u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B8Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B98u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75BB4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75BB8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75BCCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75BE8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75BF8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C04u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C18u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C20u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C3Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C54u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C5Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C64u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C74u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C94u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75CA0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75CA8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75CC0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75CCCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75CD8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75CDCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75CE8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75CF4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D08u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D1Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D68u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D70u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D74u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75DA4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75DF0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E24u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E40u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E48u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E5Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E64u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E6Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E9Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75EBCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75EC4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75EC8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75EE8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75EF8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F08u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F40u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F50u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F58u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F78u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F88u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F90u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F9Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75FB4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75FC4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75FCCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75FD8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75FF0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76000u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76008u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76014u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7602Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7603Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76044u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76050u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76068u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76078u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76080u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7608Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76104u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7610Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76118u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76124u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76130u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7613Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76148u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76154u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76160u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76170u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7617Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76184u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76190u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7619Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A761A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A761B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A761C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A761CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A761D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A761E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A761ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7620Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76230u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76240u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7624Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76254u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A762B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76304u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76310u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76320u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76324u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7632Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76338u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76348u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76354u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76364u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7636Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76394u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A763A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A763ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A763B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A763B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A763C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A763D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A763E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A763F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A763F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76420u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7642Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76438u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7643Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76444u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76450u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76460u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7646Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7647Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76484u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A764A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A765B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76660u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76668u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76678u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76688u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7668Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76694u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A766B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A766D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7670Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7671Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76758u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76768u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76784u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7678Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7679Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A767D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7680Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76818u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76828u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76838u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7683Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76844u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76848u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7685Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76868u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76878u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76888u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7688Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76894u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76898u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A768C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A768CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A768ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A768F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76924u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76944u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76950u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76964u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76990u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76994u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A769ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A769BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A769D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A769E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A769ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A769F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A14u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A94u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76AA4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76AA8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76AB0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76ACCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76AECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B28u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B3Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B50u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B80u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B88u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B90u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B9Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76BB4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76BD8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76BE0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76BF0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C00u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C04u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C0Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C10u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C28u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C48u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C94u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76CA8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76CD4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76CE0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76CECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76CF4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76CFCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D08u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D10u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D20u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D24u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D28u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D30u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D40u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D5Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D64u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D8Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D94u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76DA8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76DACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76DCCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76E04u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76E10u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F18u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F1Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F2Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F48u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F80u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F88u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F9Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76FACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76FBCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76FC8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76FD0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76FDCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76FF0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76FF8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77008u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77018u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7701Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77028u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77030u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77044u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77064u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77088u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77094u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A770B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A770C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A770E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A770F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77100u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77108u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77118u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77124u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77134u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77138u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7713Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77148u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77154u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77168u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A771FCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77208u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7720Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77224u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77238u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77240u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77248u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7725Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A772A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A772B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A772D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A772E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77338u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77340u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7734Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77394u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A773A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A773A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A773C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77414u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77420u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77430u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77440u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77474u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77490u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A774A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A774B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A774B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A774E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A774F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A774F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77524u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77584u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7758Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A775A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A775BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A775D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A775DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A775E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A775F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A775F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77658u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77660u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77670u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7769Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A776B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A776CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A776E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A776ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77728u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7773Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77750u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77760u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77774u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77780u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7778Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7779Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77830u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77834u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77858u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7789Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A778A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A778B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A778F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A778FCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7790Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77914u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77928u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77930u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77934u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7793Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77948u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77954u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77980u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77990u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A779ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A779B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A779D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A779E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A20u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A28u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A40u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A48u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A58u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A68u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A74u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A88u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A90u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77AACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77AB8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77AD0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77AF0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B1Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B2Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B3Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B44u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B54u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B64u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B6Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B80u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B88u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77BC4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77BCCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77BE8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77BF0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77BF8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C4Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C54u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C74u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D0Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D14u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D2Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D94u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77DB0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77DC8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77DECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77DF4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77DFCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E40u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E64u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E8Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E98u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77EA8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77EBCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77EC8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77EE8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77EECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F08u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F10u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F4Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F5Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77FD0u, &recomp_unit_0156, "recomp_unit_0156");
}
} // namespace psprecomp
