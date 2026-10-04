#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0057[4095] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5,
    0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 11, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0,
    0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 23, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0,
    31, 0, 32, 0, 33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 43,
    0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0,
    0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 63, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 70, 0, 0, 71, 0, 72, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 79, 0, 0, 80, 0, 81, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 88, 0,
    89, 0, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 103, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0,
    108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 115, 116, 0, 0, 117, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 122, 0, 123, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 128,
    0, 129, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 137, 0, 138, 0, 0, 0, 139, 0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 157, 0, 158, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0,
    166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 171,
    0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 0,
    178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0,
    0, 189, 0, 190, 0, 0, 191, 0, 192, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0,
    0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0,
    0, 211, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 216, 0, 217, 0, 218,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 225, 226, 0, 227, 0,
    0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0,
    233, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 242, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 247, 248, 0, 249,
    0, 0, 0, 250, 251, 0, 252, 0, 0, 0, 253, 254, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0,
    0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0,
    0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 278, 0, 0,
    0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 291, 0, 0, 292,
    0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 309, 0, 0, 310, 0,
    0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0,
    0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0,
    0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 336, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0,
    0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0,
    0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 358,
    0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 362, 363, 0, 0, 364, 0, 0, 365, 0, 0, 0, 366, 0, 0, 367, 0,
    0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0,
    0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0,
    0, 0, 0, 0, 378, 0, 0, 379, 0, 380, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0,
    386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 394, 0,
    0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401,
    0, 0, 0, 402, 0, 0, 0, 403, 0, 404, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 409,
    0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412,
    0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 415, 0, 0, 0, 416, 0, 0, 417, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0,
    0, 0, 421, 0, 0, 422, 423, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 427, 0, 428, 0, 0, 429, 0, 0, 430, 0,
    431, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0,
    0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0,
    0, 446, 0, 0, 447, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0,
    0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 461, 0, 462, 0, 0, 463, 0, 0, 464, 0, 465, 466, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    471, 0, 0, 472, 473, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 477, 0, 478, 0, 479, 0, 0, 480, 0,
    481, 0, 482, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0,
    488, 0, 489, 0, 490, 0, 0, 491, 0, 0, 492, 0, 493, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 497, 498, 0, 0, 0, 0,
    0, 499, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 507, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 510,
    0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 0,
    0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 518, 0, 519, 0, 0,
    0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 528, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 530, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 535, 0, 536, 0, 0, 537, 0, 538, 0, 539, 0,
    0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 545,
    0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0,
    0, 550, 0, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 555, 0, 0, 0, 0, 0, 556, 0,
    0, 0, 557, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 562, 0, 0,
    0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 567,
    0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 570, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 573, 0, 0, 0, 574, 0,
    0, 575, 0, 0, 0, 576, 0, 577, 0, 0, 578, 579, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0,
    0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 596, 0, 597, 0, 598, 0, 599, 0, 600, 0, 601,
    0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 604, 0, 0, 0, 605, 0, 0, 606, 0, 607, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609,
    0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 612, 613, 0, 614, 0, 0, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 617, 0, 618, 0, 0, 0,
    619, 0, 620, 0, 621, 622, 0, 0, 623, 0, 0, 0, 624, 0, 625, 0, 626, 0, 627, 628, 0, 0, 629, 0, 0, 630, 0, 631, 0, 632, 0, 633,
    0, 634, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 639, 0, 0,
    0, 0, 0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 645, 0,
    0, 0, 0, 646, 0, 0, 0, 647, 0, 648, 0, 0, 0, 0, 0, 0, 649, 0, 0, 650, 0, 0, 0, 651, 0, 652, 653, 0, 0, 654, 655, 0,
    656, 0, 0, 0, 0, 0, 657, 658, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 661, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0,
    664, 0, 0, 0, 0, 0, 665, 0, 666, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0,
    0, 0, 0, 0, 0, 670, 0, 671, 0, 672, 0, 673, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0,
    0, 0, 0, 0, 0, 677, 0, 678, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 680, 0, 681, 0, 0, 0, 0, 682, 0, 683, 0, 0,
    0, 0, 684, 685, 0, 686, 0, 0, 0, 0, 687, 0, 688, 0, 689, 0, 690, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 693, 0, 0, 0, 694, 0, 0, 695, 0, 696, 0, 697, 0, 698, 0, 0, 699, 0, 0, 0, 0, 700, 0, 701, 0, 702, 0, 703, 0, 704, 0,
    705, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 708, 0, 709, 0, 710, 0, 711, 0, 712, 0, 0, 0,
    713, 0, 714, 0, 715, 0, 716, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 719, 0, 720, 0, 721, 0, 722, 0,
    723, 0, 724, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 727, 0, 0, 728, 0, 729, 0, 730, 0, 0, 0, 731, 0, 0, 0, 732,
    0, 0, 733, 0, 734, 0, 735, 0, 0, 0, 736, 0, 0, 0, 0, 0, 737, 0, 738, 0, 739, 0, 740, 0, 741, 0, 0, 0, 742, 0, 743, 0,
    0, 0, 0, 744, 0, 745, 0, 746, 0, 747, 0, 748, 0, 749, 0, 750, 0, 751, 0, 752, 0, 753, 0, 754, 0, 0, 0, 0, 755, 0, 756, 0,
    0, 757, 0, 0, 758, 0, 759, 0, 760, 0, 0, 761, 0, 762, 0, 763, 0, 764, 0, 0, 765, 0, 0, 766, 0, 767, 0, 0, 768, 0, 769, 0,
    0, 770, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0,
    774, 0, 0, 0, 0, 0, 0, 775, 0, 776, 0, 777, 0, 778, 0, 779, 0, 780, 0, 781, 0, 782, 0, 783, 0, 784, 0, 0, 0, 0, 785, 0,
    0, 0, 0, 786, 0, 787, 0, 0, 788, 0, 0, 0, 789, 0, 790, 791, 0, 0, 0, 792, 0, 0, 0, 793, 0, 0, 794, 0, 0, 795, 0, 0,
    0, 796, 0, 0, 0, 0, 0, 0, 0, 797, 0, 798, 799, 0, 0, 800, 0, 801, 0, 0, 0, 0, 802, 0, 803, 804, 805, 0, 806, 0, 0, 807,
    0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 809, 0, 0, 0, 810, 0, 811, 0, 812, 0, 0, 0, 0, 813, 0, 814, 0, 0, 815, 0, 0, 816,
    0, 817, 818, 0, 0, 0, 819, 0, 820, 0, 0, 821, 0, 822, 0, 823, 0, 0, 824, 0, 825, 0, 826, 0, 827, 0, 0, 828, 0, 0, 829, 830,
    0, 831, 0, 0, 0, 0, 832, 0, 0, 0, 833, 0, 834, 0, 835, 0, 0, 0, 0, 836, 0, 837, 0, 0, 838, 0, 0, 839, 0, 840, 841, 0,
    0, 0, 842, 0, 843, 0, 0, 844, 0, 845, 0, 846, 0, 0, 847, 0, 848, 0, 849, 0, 850, 0, 0, 851, 0, 0, 852, 853, 0, 854, 0, 0,
    0, 0, 855, 0, 856, 0, 857, 0, 858, 0, 859, 0, 0, 860, 861, 0, 862, 0, 863, 0, 0, 864, 0, 865, 0, 866, 0, 867, 0, 868, 0, 869,
    0, 0, 870, 0, 871, 0, 0, 872, 0, 873, 0, 874, 0, 875, 0, 0, 876, 0, 0, 877, 0, 878, 0, 879, 0, 0, 880, 0, 881, 0, 882, 0,
    0, 883, 0, 0, 884, 0, 0, 885, 886, 0, 0, 887, 0, 0, 888, 0, 0, 0, 0, 0, 889, 0, 0, 0, 0, 0, 890, 0, 0, 0, 891,
};
void recomp_unit_0057_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088E8000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0057[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088E8000;
    case 2u: goto L_088E800C;
    case 3u: goto L_088E802C;
    case 4u: goto L_088E8054;
    case 5u: goto L_088E807C;
    case 6u: goto L_088E8084;
    case 7u: goto L_088E808C;
    case 8u: goto L_088E8094;
    case 9u: goto L_088E809C;
    case 10u: goto L_088E80A4;
    case 11u: goto L_088E80B8;
    case 12u: goto L_088E80C0;
    case 13u: goto L_088E80C8;
    case 14u: goto L_088E80D0;
    case 15u: goto L_088E80F8;
    case 16u: goto L_088E8108;
    case 17u: goto L_088E8120;
    case 18u: goto L_088E8138;
    case 19u: goto L_088E8144;
    case 20u: goto L_088E814C;
    case 21u: goto L_088E8158;
    case 22u: goto L_088E8180;
    case 23u: goto L_088E8184;
    case 24u: goto L_088E8198;
    case 25u: goto L_088E81A8;
    case 26u: goto L_088E81B8;
    case 27u: goto L_088E81C8;
    case 28u: goto L_088E81D8;
    case 29u: goto L_088E81E8;
    case 30u: goto L_088E81F8;
    case 31u: goto L_088E8200;
    case 32u: goto L_088E8208;
    case 33u: goto L_088E8210;
    case 34u: goto L_088E8218;
    case 35u: goto L_088E8230;
    case 36u: goto L_088E8238;
    case 37u: goto L_088E8248;
    case 38u: goto L_088E8254;
    case 39u: goto L_088E825C;
    case 40u: goto L_088E8264;
    case 41u: goto L_088E826C;
    case 42u: goto L_088E8274;
    case 43u: goto L_088E827C;
    case 44u: goto L_088E8288;
    case 45u: goto L_088E8294;
    case 46u: goto L_088E829C;
    case 47u: goto L_088E82B8;
    case 48u: goto L_088E82C4;
    case 49u: goto L_088E82D4;
    case 50u: goto L_088E82E4;
    case 51u: goto L_088E82EC;
    case 52u: goto L_088E8304;
    case 53u: goto L_088E8328;
    case 54u: goto L_088E8334;
    case 55u: goto L_088E8340;
    case 56u: goto L_088E8350;
    case 57u: goto L_088E8360;
    case 58u: goto L_088E837C;
    case 59u: goto L_088E839C;
    case 60u: goto L_088E83AC;
    case 61u: goto L_088E83B8;
    case 62u: goto L_088E83C4;
    case 63u: goto L_088E83CC;
    case 64u: goto L_088E83D0;
    case 65u: goto L_088E83F0;
    case 66u: goto L_088E8400;
    case 67u: goto L_088E8418;
    case 68u: goto L_088E8428;
    case 69u: goto L_088E8430;
    case 70u: goto L_088E843C;
    case 71u: goto L_088E8448;
    case 72u: goto L_088E8450;
    case 73u: goto L_088E8458;
    case 74u: goto L_088E8464;
    case 75u: goto L_088E8488;
    case 76u: goto L_088E84A0;
    case 77u: goto L_088E84CC;
    case 78u: goto L_088E84D8;
    case 79u: goto L_088E84E0;
    case 80u: goto L_088E84EC;
    case 81u: goto L_088E84F4;
    case 82u: goto L_088E8510;
    case 83u: goto L_088E852C;
    case 84u: goto L_088E8534;
    case 85u: goto L_088E8540;
    case 86u: goto L_088E8558;
    case 87u: goto L_088E8570;
    case 88u: goto L_088E8578;
    case 89u: goto L_088E8580;
    case 90u: goto L_088E8590;
    case 91u: goto L_088E8598;
    case 92u: goto L_088E85A8;
    case 93u: goto L_088E85B4;
    case 94u: goto L_088E85D4;
    case 95u: goto L_088E85EC;
    case 96u: goto L_088E860C;
    case 97u: goto L_088E8614;
    case 98u: goto L_088E8624;
    case 99u: goto L_088E8640;
    case 100u: goto L_088E865C;
    case 101u: goto L_088E8664;
    case 102u: goto L_088E8684;
    case 103u: goto L_088E868C;
    case 104u: goto L_088E8694;
    case 105u: goto L_088E86A4;
    case 106u: goto L_088E86D8;
    case 107u: goto L_088E86F8;
    case 108u: goto L_088E8700;
    case 109u: goto L_088E871C;
    case 110u: goto L_088E8728;
    case 111u: goto L_088E8730;
    case 112u: goto L_088E8740;
    case 113u: goto L_088E874C;
    case 114u: goto L_088E8758;
    case 115u: goto L_088E8760;
    case 116u: goto L_088E8764;
    case 117u: goto L_088E8770;
    case 118u: goto L_088E8788;
    case 119u: goto L_088E8798;
    case 120u: goto L_088E87A0;
    case 121u: goto L_088E87AC;
    case 122u: goto L_088E87B8;
    case 123u: goto L_088E87C0;
    case 124u: goto L_088E87C8;
    case 125u: goto L_088E87D4;
    case 126u: goto L_088E87E4;
    case 127u: goto L_088E87F4;
    case 128u: goto L_088E87FC;
    case 129u: goto L_088E8804;
    case 130u: goto L_088E8810;
    case 131u: goto L_088E8818;
    case 132u: goto L_088E8830;
    case 133u: goto L_088E8838;
    case 134u: goto L_088E8840;
    case 135u: goto L_088E8868;
    case 136u: goto L_088E8890;
    case 137u: goto L_088E8894;
    case 138u: goto L_088E889C;
    case 139u: goto L_088E88AC;
    case 140u: goto L_088E88B4;
    case 141u: goto L_088E88C4;
    case 142u: goto L_088E88CC;
    case 143u: goto L_088E88DC;
    case 144u: goto L_088E88E4;
    case 145u: goto L_088E8900;
    case 146u: goto L_088E8918;
    case 147u: goto L_088E8944;
    case 148u: goto L_088E8950;
    case 149u: goto L_088E8958;
    case 150u: goto L_088E8978;
    case 151u: goto L_088E8980;
    case 152u: goto L_088E898C;
    case 153u: goto L_088E8994;
    case 154u: goto L_088E89A8;
    case 155u: goto L_088E89D4;
    case 156u: goto L_088E8A04;
    case 157u: goto L_088E8A18;
    case 158u: goto L_088E8A20;
    case 159u: goto L_088E8A28;
    case 160u: goto L_088E8A34;
    case 161u: goto L_088E8A44;
    case 162u: goto L_088E8A4C;
    case 163u: goto L_088E8A54;
    case 164u: goto L_088E8A5C;
    case 165u: goto L_088E8A74;
    case 166u: goto L_088E8A80;
    case 167u: goto L_088E8A8C;
    case 168u: goto L_088E8AAC;
    case 169u: goto L_088E8AE0;
    case 170u: goto L_088E8AEC;
    case 171u: goto L_088E8AFC;
    case 172u: goto L_088E8B20;
    case 173u: goto L_088E8B28;
    case 174u: goto L_088E8B38;
    case 175u: goto L_088E8B5C;
    case 176u: goto L_088E8B68;
    case 177u: goto L_088E8B70;
    case 178u: goto L_088E8B80;
    case 179u: goto L_088E8B90;
    case 180u: goto L_088E8BAC;
    case 181u: goto L_088E8BB8;
    case 182u: goto L_088E8BC0;
    case 183u: goto L_088E8BD8;
    case 184u: goto L_088E8BE4;
    case 185u: goto L_088E8C10;
    case 186u: goto L_088E8C50;
    case 187u: goto L_088E8C5C;
    case 188u: goto L_088E8C68;
    case 189u: goto L_088E8C84;
    case 190u: goto L_088E8C8C;
    case 191u: goto L_088E8C98;
    case 192u: goto L_088E8CA0;
    case 193u: goto L_088E8CAC;
    case 194u: goto L_088E8CB4;
    case 195u: goto L_088E8CC4;
    case 196u: goto L_088E8CD4;
    case 197u: goto L_088E8CE8;
    case 198u: goto L_088E8D00;
    case 199u: goto L_088E8D14;
    case 200u: goto L_088E8D24;
    case 201u: goto L_088E8D30;
    case 202u: goto L_088E8D54;
    case 203u: goto L_088E8D6C;
    case 204u: goto L_088E8D74;
    case 205u: goto L_088E8D88;
    case 206u: goto L_088E8DC0;
    case 207u: goto L_088E8DC8;
    case 208u: goto L_088E8DD0;
    case 209u: goto L_088E8DE0;
    case 210u: goto L_088E8DE8;
    case 211u: goto L_088E8E04;
    case 212u: goto L_088E8E0C;
    case 213u: goto L_088E8E20;
    case 214u: goto L_088E8E58;
    case 215u: goto L_088E8E64;
    case 216u: goto L_088E8E6C;
    case 217u: goto L_088E8E74;
    case 218u: goto L_088E8E7C;
    case 219u: goto L_088E8E90;
    case 220u: goto L_088E8EA4;
    case 221u: goto L_088E8EB4;
    case 222u: goto L_088E8EC0;
    case 223u: goto L_088E8ED0;
    case 224u: goto L_088E8EDC;
    case 225u: goto L_088E8EEC;
    case 226u: goto L_088E8EF0;
    case 227u: goto L_088E8EF8;
    case 228u: goto L_088E8F08;
    case 229u: goto L_088E8F24;
    case 230u: goto L_088E8F2C;
    case 231u: goto L_088E8F40;
    case 232u: goto L_088E8F78;
    case 233u: goto L_088E8F80;
    case 234u: goto L_088E8F88;
    case 235u: goto L_088E8F98;
    case 236u: goto L_088E8FB4;
    case 237u: goto L_088E8FBC;
    case 238u: goto L_088E8FD8;
    case 239u: goto L_088E9008;
    case 240u: goto L_088E9014;
    case 241u: goto L_088E9020;
    case 242u: goto L_088E9028;
    case 243u: goto L_088E9030;
    case 244u: goto L_088E9044;
    case 245u: goto L_088E9054;
    case 246u: goto L_088E9060;
    case 247u: goto L_088E9070;
    case 248u: goto L_088E9074;
    case 249u: goto L_088E907C;
    case 250u: goto L_088E908C;
    case 251u: goto L_088E9090;
    case 252u: goto L_088E9098;
    case 253u: goto L_088E90A8;
    case 254u: goto L_088E90AC;
    case 255u: goto L_088E90B4;
    case 256u: goto L_088E90C4;
    case 257u: goto L_088E90D4;
    case 258u: goto L_088E90DC;
    case 259u: goto L_088E90EC;
    case 260u: goto L_088E9108;
    case 261u: goto L_088E9110;
    case 262u: goto L_088E912C;
    case 263u: goto L_088E9134;
    case 264u: goto L_088E9148;
    case 265u: goto L_088E9180;
    case 266u: goto L_088E9188;
    case 267u: goto L_088E9190;
    case 268u: goto L_088E91A0;
    case 269u: goto L_088E91C0;
    case 270u: goto L_088E91D0;
    case 271u: goto L_088E91EC;
    case 272u: goto L_088E91F4;
    case 273u: goto L_088E9210;
    case 274u: goto L_088E9218;
    case 275u: goto L_088E922C;
    case 276u: goto L_088E9264;
    case 277u: goto L_088E926C;
    case 278u: goto L_088E9274;
    case 279u: goto L_088E9284;
    case 280u: goto L_088E92A0;
    case 281u: goto L_088E92A8;
    case 282u: goto L_088E92C4;
    case 283u: goto L_088E92CC;
    case 284u: goto L_088E92E0;
    case 285u: goto L_088E9318;
    case 286u: goto L_088E9324;
    case 287u: goto L_088E9330;
    case 288u: goto L_088E9338;
    case 289u: goto L_088E9354;
    case 290u: goto L_088E9360;
    case 291u: goto L_088E9370;
    case 292u: goto L_088E937C;
    case 293u: goto L_088E9384;
    case 294u: goto L_088E93A0;
    case 295u: goto L_088E93A8;
    case 296u: goto L_088E93BC;
    case 297u: goto L_088E93F4;
    case 298u: goto L_088E93FC;
    case 299u: goto L_088E9424;
    case 300u: goto L_088E9440;
    case 301u: goto L_088E9448;
    case 302u: goto L_088E9464;
    case 303u: goto L_088E946C;
    case 304u: goto L_088E9480;
    case 305u: goto L_088E94B8;
    case 306u: goto L_088E94C0;
    case 307u: goto L_088E94D0;
    case 308u: goto L_088E94DC;
    case 309u: goto L_088E94EC;
    case 310u: goto L_088E94F8;
    case 311u: goto L_088E9518;
    case 312u: goto L_088E9520;
    case 313u: goto L_088E9540;
    case 314u: goto L_088E9548;
    case 315u: goto L_088E9550;
    case 316u: goto L_088E9558;
    case 317u: goto L_088E957C;
    case 318u: goto L_088E95BC;
    case 319u: goto L_088E95C4;
    case 320u: goto L_088E95F0;
    case 321u: goto L_088E9608;
    case 322u: goto L_088E962C;
    case 323u: goto L_088E9648;
    case 324u: goto L_088E969C;
    case 325u: goto L_088E96B4;
    case 326u: goto L_088E96CC;
    case 327u: goto L_088E9700;
    case 328u: goto L_088E9714;
    case 329u: goto L_088E9734;
    case 330u: goto L_088E973C;
    case 331u: goto L_088E9744;
    case 332u: goto L_088E9774;
    case 333u: goto L_088E9784;
    case 334u: goto L_088E97A4;
    case 335u: goto L_088E97AC;
    case 336u: goto L_088E97BC;
    case 337u: goto L_088E97C8;
    case 338u: goto L_088E97D0;
    case 339u: goto L_088E9858;
    case 340u: goto L_088E9874;
    case 341u: goto L_088E9888;
    case 342u: goto L_088E9898;
    case 343u: goto L_088E98A8;
    case 344u: goto L_088E98BC;
    case 345u: goto L_088E98CC;
    case 346u: goto L_088E98DC;
    case 347u: goto L_088E9910;
    case 348u: goto L_088E991C;
    case 349u: goto L_088E9928;
    case 350u: goto L_088E9940;
    case 351u: goto L_088E9964;
    case 352u: goto L_088E996C;
    case 353u: goto L_088E9984;
    case 354u: goto L_088E99A8;
    case 355u: goto L_088E99B4;
    case 356u: goto L_088E99D8;
    case 357u: goto L_088E99F0;
    case 358u: goto L_088E99FC;
    case 359u: goto L_088E9A04;
    case 360u: goto L_088E9A20;
    case 361u: goto L_088E9A30;
    case 362u: goto L_088E9A40;
    case 363u: goto L_088E9A44;
    case 364u: goto L_088E9A50;
    case 365u: goto L_088E9A5C;
    case 366u: goto L_088E9A6C;
    case 367u: goto L_088E9A78;
    case 368u: goto L_088E9A98;
    case 369u: goto L_088E9AA4;
    case 370u: goto L_088E9AC0;
    case 371u: goto L_088E9ACC;
    case 372u: goto L_088E9AEC;
    case 373u: goto L_088E9B08;
    case 374u: goto L_088E9B44;
    case 375u: goto L_088E9B50;
    case 376u: goto L_088E9B6C;
    case 377u: goto L_088E9B78;
    case 378u: goto L_088E9B90;
    case 379u: goto L_088E9B9C;
    case 380u: goto L_088E9BA4;
    case 381u: goto L_088E9BB0;
    case 382u: goto L_088E9BC0;
    case 383u: goto L_088E9BD0;
    case 384u: goto L_088E9BE0;
    case 385u: goto L_088E9BF0;
    case 386u: goto L_088E9C00;
    case 387u: goto L_088E9C10;
    case 388u: goto L_088E9C20;
    case 389u: goto L_088E9C60;
    case 390u: goto L_088E9CC0;
    case 391u: goto L_088E9CCC;
    case 392u: goto L_088E9CE4;
    case 393u: goto L_088E9CF0;
    case 394u: goto L_088E9CF8;
    case 395u: goto L_088E9D14;
    case 396u: goto L_088E9D20;
    case 397u: goto L_088E9D38;
    case 398u: goto L_088E9D44;
    case 399u: goto L_088E9D4C;
    case 400u: goto L_088E9D5C;
    case 401u: goto L_088E9D7C;
    case 402u: goto L_088E9D8C;
    case 403u: goto L_088E9D9C;
    case 404u: goto L_088E9DA4;
    case 405u: goto L_088E9DAC;
    case 406u: goto L_088E9DC4;
    case 407u: goto L_088E9DDC;
    case 408u: goto L_088E9DEC;
    case 409u: goto L_088E9DFC;
    case 410u: goto L_088E9E04;
    case 411u: goto L_088E9E0C;
    case 412u: goto L_088E9E7C;
    case 413u: goto L_088E9E94;
    case 414u: goto L_088E9EA0;
    case 415u: goto L_088E9EA8;
    case 416u: goto L_088E9EB8;
    case 417u: goto L_088E9EC4;
    case 418u: goto L_088E9EC8;
    case 419u: goto L_088E9ED8;
    case 420u: goto L_088E9EF0;
    case 421u: goto L_088E9F08;
    case 422u: goto L_088E9F14;
    case 423u: goto L_088E9F18;
    case 424u: goto L_088E9F24;
    case 425u: goto L_088E9F44;
    case 426u: goto L_088E9F54;
    case 427u: goto L_088E9F58;
    case 428u: goto L_088E9F60;
    case 429u: goto L_088E9F6C;
    case 430u: goto L_088E9F78;
    case 431u: goto L_088E9F80;
    case 432u: goto L_088E9F88;
    case 433u: goto L_088E9FAC;
    case 434u: goto L_088EA018;
    case 435u: goto L_088EA064;
    case 436u: goto L_088EA08C;
    case 437u: goto L_088EA0A8;
    case 438u: goto L_088EA0CC;
    case 439u: goto L_088EA0F4;
    case 440u: goto L_088EA104;
    case 441u: goto L_088EA11C;
    case 442u: goto L_088EA12C;
    case 443u: goto L_088EA13C;
    case 444u: goto L_088EA154;
    case 445u: goto L_088EA1F8;
    case 446u: goto L_088EA204;
    case 447u: goto L_088EA210;
    case 448u: goto L_088EA220;
    case 449u: goto L_088EA228;
    case 450u: goto L_088EA26C;
    case 451u: goto L_088EA278;
    case 452u: goto L_088EA284;
    case 453u: goto L_088EA2C4;
    case 454u: goto L_088EA2CC;
    case 455u: goto L_088EA32C;
    case 456u: goto L_088EA360;
    case 457u: goto L_088EA378;
    case 458u: goto L_088EA3A0;
    case 459u: goto L_088EA3B0;
    case 460u: goto L_088EA3C0;
    case 461u: goto L_088EA3C4;
    case 462u: goto L_088EA3CC;
    case 463u: goto L_088EA3D8;
    case 464u: goto L_088EA3E4;
    case 465u: goto L_088EA3EC;
    case 466u: goto L_088EA3F0;
    case 467u: goto L_088EA428;
    case 468u: goto L_088EA498;
    case 469u: goto L_088EA4B4;
    case 470u: goto L_088EA4D0;
    case 471u: goto L_088EA500;
    case 472u: goto L_088EA50C;
    case 473u: goto L_088EA510;
    case 474u: goto L_088EA518;
    case 475u: goto L_088EA530;
    case 476u: goto L_088EA554;
    case 477u: goto L_088EA55C;
    case 478u: goto L_088EA564;
    case 479u: goto L_088EA56C;
    case 480u: goto L_088EA578;
    case 481u: goto L_088EA580;
    case 482u: goto L_088EA588;
    case 483u: goto L_088EA590;
    case 484u: goto L_088EA5A8;
    case 485u: goto L_088EA5C0;
    case 486u: goto L_088EA5EC;
    case 487u: goto L_088EA5F8;
    case 488u: goto L_088EA600;
    case 489u: goto L_088EA608;
    case 490u: goto L_088EA610;
    case 491u: goto L_088EA61C;
    case 492u: goto L_088EA628;
    case 493u: goto L_088EA630;
    case 494u: goto L_088EA638;
    case 495u: goto L_088EA650;
    case 496u: goto L_088EA660;
    case 497u: goto L_088EA668;
    case 498u: goto L_088EA66C;
    case 499u: goto L_088EA684;
    case 500u: goto L_088EA690;
    case 501u: goto L_088EA6A8;
    case 502u: goto L_088EA6C0;
    case 503u: goto L_088EA6D8;
    case 504u: goto L_088EA718;
    case 505u: goto L_088EA740;
    case 506u: goto L_088EA748;
    case 507u: goto L_088EA750;
    case 508u: goto L_088EA758;
    case 509u: goto L_088EA764;
    case 510u: goto L_088EA77C;
    case 511u: goto L_088EA790;
    case 512u: goto L_088EA7B0;
    case 513u: goto L_088EA7D8;
    case 514u: goto L_088EA7E0;
    case 515u: goto L_088EA804;
    case 516u: goto L_088EA840;
    case 517u: goto L_088EA858;
    case 518u: goto L_088EA86C;
    case 519u: goto L_088EA874;
    case 520u: goto L_088EA898;
    case 521u: goto L_088EA8A8;
    case 522u: goto L_088EA8C0;
    case 523u: goto L_088EA8D8;
    case 524u: goto L_088EA900;
    case 525u: goto L_088EA914;
    case 526u: goto L_088EA934;
    case 527u: goto L_088EA948;
    case 528u: goto L_088EA950;
    case 529u: goto L_088EA95C;
    case 530u: goto L_088EA984;
    case 531u: goto L_088EA988;
    case 532u: goto L_088EA9A0;
    case 533u: goto L_088EA9C0;
    case 534u: goto L_088EA9CC;
    case 535u: goto L_088EA9D4;
    case 536u: goto L_088EA9DC;
    case 537u: goto L_088EA9E8;
    case 538u: goto L_088EA9F0;
    case 539u: goto L_088EA9F8;
    case 540u: goto L_088EAA10;
    case 541u: goto L_088EAA2C;
    case 542u: goto L_088EAA44;
    case 543u: goto L_088EAA4C;
    case 544u: goto L_088EAA70;
    case 545u: goto L_088EAA7C;
    case 546u: goto L_088EAA94;
    case 547u: goto L_088EAABC;
    case 548u: goto L_088EAAD4;
    case 549u: goto L_088EAAEC;
    case 550u: goto L_088EAB04;
    case 551u: goto L_088EAB18;
    case 552u: goto L_088EAB28;
    case 553u: goto L_088EAB40;
    case 554u: goto L_088EAB58;
    case 555u: goto L_088EAB60;
    case 556u: goto L_088EAB78;
    case 557u: goto L_088EAB88;
    case 558u: goto L_088EAB8C;
    case 559u: goto L_088EABA4;
    case 560u: goto L_088EABC4;
    case 561u: goto L_088EABDC;
    case 562u: goto L_088EABF4;
    case 563u: goto L_088EAC0C;
    case 564u: goto L_088EAC2C;
    case 565u: goto L_088EAC44;
    case 566u: goto L_088EAC60;
    case 567u: goto L_088EAC7C;
    case 568u: goto L_088EAC94;
    case 569u: goto L_088EACAC;
    case 570u: goto L_088EACB8;
    case 571u: goto L_088EACD0;
    case 572u: goto L_088EACDC;
    case 573u: goto L_088EACE8;
    case 574u: goto L_088EACF8;
    case 575u: goto L_088EAD04;
    case 576u: goto L_088EAD14;
    case 577u: goto L_088EAD1C;
    case 578u: goto L_088EAD28;
    case 579u: goto L_088EAD2C;
    case 580u: goto L_088EAD44;
    case 581u: goto L_088EAD5C;
    case 582u: goto L_088EADA8;
    case 583u: goto L_088EADC8;
    case 584u: goto L_088EADD0;
    case 585u: goto L_088EADDC;
    case 586u: goto L_088EADF4;
    case 587u: goto L_088EAE18;
    case 588u: goto L_088EAE30;
    case 589u: goto L_088EAE48;
    case 590u: goto L_088EAEA0;
    case 591u: goto L_088EAEC0;
    case 592u: goto L_088EAF38;
    case 593u: goto L_088EB038;
    case 594u: goto L_088EB074;
    case 595u: goto L_088EB0C4;
    case 596u: goto L_088EB0D4;
    case 597u: goto L_088EB0DC;
    case 598u: goto L_088EB0E4;
    case 599u: goto L_088EB0EC;
    case 600u: goto L_088EB0F4;
    case 601u: goto L_088EB0FC;
    case 602u: goto L_088EB104;
    case 603u: goto L_088EB11C;
    case 604u: goto L_088EB128;
    case 605u: goto L_088EB138;
    case 606u: goto L_088EB144;
    case 607u: goto L_088EB14C;
    case 608u: goto L_088EB154;
    case 609u: goto L_088EB17C;
    case 610u: goto L_088EB18C;
    case 611u: goto L_088EB198;
    case 612u: goto L_088EB1A8;
    case 613u: goto L_088EB1AC;
    case 614u: goto L_088EB1B4;
    case 615u: goto L_088EB1D4;
    case 616u: goto L_088EB1DC;
    case 617u: goto L_088EB1E8;
    case 618u: goto L_088EB1F0;
    case 619u: goto L_088EB200;
    case 620u: goto L_088EB208;
    case 621u: goto L_088EB210;
    case 622u: goto L_088EB214;
    case 623u: goto L_088EB220;
    case 624u: goto L_088EB230;
    case 625u: goto L_088EB238;
    case 626u: goto L_088EB240;
    case 627u: goto L_088EB248;
    case 628u: goto L_088EB24C;
    case 629u: goto L_088EB258;
    case 630u: goto L_088EB264;
    case 631u: goto L_088EB26C;
    case 632u: goto L_088EB274;
    case 633u: goto L_088EB27C;
    case 634u: goto L_088EB284;
    case 635u: goto L_088EB290;
    case 636u: goto L_088EB2C4;
    case 637u: goto L_088EB2E0;
    case 638u: goto L_088EB2E8;
    case 639u: goto L_088EB2F4;
    case 640u: goto L_088EB30C;
    case 641u: goto L_088EB324;
    case 642u: goto L_088EB34C;
    case 643u: goto L_088EB35C;
    case 644u: goto L_088EB368;
    case 645u: goto L_088EB378;
    case 646u: goto L_088EB38C;
    case 647u: goto L_088EB39C;
    case 648u: goto L_088EB3A4;
    case 649u: goto L_088EB3C0;
    case 650u: goto L_088EB3CC;
    case 651u: goto L_088EB3DC;
    case 652u: goto L_088EB3E4;
    case 653u: goto L_088EB3E8;
    case 654u: goto L_088EB3F4;
    case 655u: goto L_088EB3F8;
    case 656u: goto L_088EB400;
    case 657u: goto L_088EB418;
    case 658u: goto L_088EB41C;
    case 659u: goto L_088EB428;
    case 660u: goto L_088EB438;
    case 661u: goto L_088EB448;
    case 662u: goto L_088EB450;
    case 663u: goto L_088EB46C;
    case 664u: goto L_088EB480;
    case 665u: goto L_088EB498;
    case 666u: goto L_088EB4A0;
    case 667u: goto L_088EB4B0;
    case 668u: goto L_088EB4C0;
    case 669u: goto L_088EB4F4;
    case 670u: goto L_088EB514;
    case 671u: goto L_088EB51C;
    case 672u: goto L_088EB524;
    case 673u: goto L_088EB52C;
    case 674u: goto L_088EB534;
    case 675u: goto L_088EB540;
    case 676u: goto L_088EB574;
    case 677u: goto L_088EB594;
    case 678u: goto L_088EB59C;
    case 679u: goto L_088EB5BC;
    case 680u: goto L_088EB5D0;
    case 681u: goto L_088EB5D8;
    case 682u: goto L_088EB5EC;
    case 683u: goto L_088EB5F4;
    case 684u: goto L_088EB608;
    case 685u: goto L_088EB60C;
    case 686u: goto L_088EB614;
    case 687u: goto L_088EB628;
    case 688u: goto L_088EB630;
    case 689u: goto L_088EB638;
    case 690u: goto L_088EB640;
    case 691u: goto L_088EB64C;
    case 692u: goto L_088EB674;
    case 693u: goto L_088EB704;
    case 694u: goto L_088EB714;
    case 695u: goto L_088EB720;
    case 696u: goto L_088EB728;
    case 697u: goto L_088EB730;
    case 698u: goto L_088EB738;
    case 699u: goto L_088EB744;
    case 700u: goto L_088EB758;
    case 701u: goto L_088EB760;
    case 702u: goto L_088EB768;
    case 703u: goto L_088EB770;
    case 704u: goto L_088EB778;
    case 705u: goto L_088EB780;
    case 706u: goto L_088EB794;
    case 707u: goto L_088EB7C4;
    case 708u: goto L_088EB7D0;
    case 709u: goto L_088EB7D8;
    case 710u: goto L_088EB7E0;
    case 711u: goto L_088EB7E8;
    case 712u: goto L_088EB7F0;
    case 713u: goto L_088EB800;
    case 714u: goto L_088EB808;
    case 715u: goto L_088EB810;
    case 716u: goto L_088EB818;
    case 717u: goto L_088EB834;
    case 718u: goto L_088EB858;
    case 719u: goto L_088EB860;
    case 720u: goto L_088EB868;
    case 721u: goto L_088EB870;
    case 722u: goto L_088EB878;
    case 723u: goto L_088EB880;
    case 724u: goto L_088EB888;
    case 725u: goto L_088EB88C;
    case 726u: goto L_088EB8B8;
    case 727u: goto L_088EB8C0;
    case 728u: goto L_088EB8CC;
    case 729u: goto L_088EB8D4;
    case 730u: goto L_088EB8DC;
    case 731u: goto L_088EB8EC;
    case 732u: goto L_088EB8FC;
    case 733u: goto L_088EB908;
    case 734u: goto L_088EB910;
    case 735u: goto L_088EB918;
    case 736u: goto L_088EB928;
    case 737u: goto L_088EB940;
    case 738u: goto L_088EB948;
    case 739u: goto L_088EB950;
    case 740u: goto L_088EB958;
    case 741u: goto L_088EB960;
    case 742u: goto L_088EB970;
    case 743u: goto L_088EB978;
    case 744u: goto L_088EB98C;
    case 745u: goto L_088EB994;
    case 746u: goto L_088EB99C;
    case 747u: goto L_088EB9A4;
    case 748u: goto L_088EB9AC;
    case 749u: goto L_088EB9B4;
    case 750u: goto L_088EB9BC;
    case 751u: goto L_088EB9C4;
    case 752u: goto L_088EB9CC;
    case 753u: goto L_088EB9D4;
    case 754u: goto L_088EB9DC;
    case 755u: goto L_088EB9F0;
    case 756u: goto L_088EB9F8;
    case 757u: goto L_088EBA04;
    case 758u: goto L_088EBA10;
    case 759u: goto L_088EBA18;
    case 760u: goto L_088EBA20;
    case 761u: goto L_088EBA2C;
    case 762u: goto L_088EBA34;
    case 763u: goto L_088EBA3C;
    case 764u: goto L_088EBA44;
    case 765u: goto L_088EBA50;
    case 766u: goto L_088EBA5C;
    case 767u: goto L_088EBA64;
    case 768u: goto L_088EBA70;
    case 769u: goto L_088EBA78;
    case 770u: goto L_088EBA84;
    case 771u: goto L_088EBAA0;
    case 772u: goto L_088EBAB4;
    case 773u: goto L_088EBADC;
    case 774u: goto L_088EBB00;
    case 775u: goto L_088EBB1C;
    case 776u: goto L_088EBB24;
    case 777u: goto L_088EBB2C;
    case 778u: goto L_088EBB34;
    case 779u: goto L_088EBB3C;
    case 780u: goto L_088EBB44;
    case 781u: goto L_088EBB4C;
    case 782u: goto L_088EBB54;
    case 783u: goto L_088EBB5C;
    case 784u: goto L_088EBB64;
    case 785u: goto L_088EBB78;
    case 786u: goto L_088EBB8C;
    case 787u: goto L_088EBB94;
    case 788u: goto L_088EBBA0;
    case 789u: goto L_088EBBB0;
    case 790u: goto L_088EBBB8;
    case 791u: goto L_088EBBBC;
    case 792u: goto L_088EBBCC;
    case 793u: goto L_088EBBDC;
    case 794u: goto L_088EBBE8;
    case 795u: goto L_088EBBF4;
    case 796u: goto L_088EBC04;
    case 797u: goto L_088EBC24;
    case 798u: goto L_088EBC2C;
    case 799u: goto L_088EBC30;
    case 800u: goto L_088EBC3C;
    case 801u: goto L_088EBC44;
    case 802u: goto L_088EBC58;
    case 803u: goto L_088EBC60;
    case 804u: goto L_088EBC64;
    case 805u: goto L_088EBC68;
    case 806u: goto L_088EBC70;
    case 807u: goto L_088EBC7C;
    case 808u: goto L_088EBC94;
    case 809u: goto L_088EBCA8;
    case 810u: goto L_088EBCB8;
    case 811u: goto L_088EBCC0;
    case 812u: goto L_088EBCC8;
    case 813u: goto L_088EBCDC;
    case 814u: goto L_088EBCE4;
    case 815u: goto L_088EBCF0;
    case 816u: goto L_088EBCFC;
    case 817u: goto L_088EBD04;
    case 818u: goto L_088EBD08;
    case 819u: goto L_088EBD18;
    case 820u: goto L_088EBD20;
    case 821u: goto L_088EBD2C;
    case 822u: goto L_088EBD34;
    case 823u: goto L_088EBD3C;
    case 824u: goto L_088EBD48;
    case 825u: goto L_088EBD50;
    case 826u: goto L_088EBD58;
    case 827u: goto L_088EBD60;
    case 828u: goto L_088EBD6C;
    case 829u: goto L_088EBD78;
    case 830u: goto L_088EBD7C;
    case 831u: goto L_088EBD84;
    case 832u: goto L_088EBD98;
    case 833u: goto L_088EBDA8;
    case 834u: goto L_088EBDB0;
    case 835u: goto L_088EBDB8;
    case 836u: goto L_088EBDCC;
    case 837u: goto L_088EBDD4;
    case 838u: goto L_088EBDE0;
    case 839u: goto L_088EBDEC;
    case 840u: goto L_088EBDF4;
    case 841u: goto L_088EBDF8;
    case 842u: goto L_088EBE08;
    case 843u: goto L_088EBE10;
    case 844u: goto L_088EBE1C;
    case 845u: goto L_088EBE24;
    case 846u: goto L_088EBE2C;
    case 847u: goto L_088EBE38;
    case 848u: goto L_088EBE40;
    case 849u: goto L_088EBE48;
    case 850u: goto L_088EBE50;
    case 851u: goto L_088EBE5C;
    case 852u: goto L_088EBE68;
    case 853u: goto L_088EBE6C;
    case 854u: goto L_088EBE74;
    case 855u: goto L_088EBE88;
    case 856u: goto L_088EBE90;
    case 857u: goto L_088EBE98;
    case 858u: goto L_088EBEA0;
    case 859u: goto L_088EBEA8;
    case 860u: goto L_088EBEB4;
    case 861u: goto L_088EBEB8;
    case 862u: goto L_088EBEC0;
    case 863u: goto L_088EBEC8;
    case 864u: goto L_088EBED4;
    case 865u: goto L_088EBEDC;
    case 866u: goto L_088EBEE4;
    case 867u: goto L_088EBEEC;
    case 868u: goto L_088EBEF4;
    case 869u: goto L_088EBEFC;
    case 870u: goto L_088EBF08;
    case 871u: goto L_088EBF10;
    case 872u: goto L_088EBF1C;
    case 873u: goto L_088EBF24;
    case 874u: goto L_088EBF2C;
    case 875u: goto L_088EBF34;
    case 876u: goto L_088EBF40;
    case 877u: goto L_088EBF4C;
    case 878u: goto L_088EBF54;
    case 879u: goto L_088EBF5C;
    case 880u: goto L_088EBF68;
    case 881u: goto L_088EBF70;
    case 882u: goto L_088EBF78;
    case 883u: goto L_088EBF84;
    case 884u: goto L_088EBF90;
    case 885u: goto L_088EBF9C;
    case 886u: goto L_088EBFA0;
    case 887u: goto L_088EBFAC;
    case 888u: goto L_088EBFB8;
    case 889u: goto L_088EBFD0;
    case 890u: goto L_088EBFE8;
    case 891u: goto L_088EBFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088E8000:
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E807C;
      }
      goto L_088E800C;
    }
L_088E800C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E807C;
      }
      goto L_088E802C;
    }
L_088E802C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E80A4;
      }
      goto L_088E8054;
    }
L_088E8054:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E80A4;
      }
      goto L_088E807C;
    }
L_088E807C:
    ctx.gpr[31] = (0x088E8084u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8084u) goto L_088E8084;
    return;
L_088E8084:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E80B8;
      }
      goto L_088E808C;
    }
L_088E808C:
    ctx.gpr[31] = (0x088E8094u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088E8094u) goto L_088E8094;
    return;
L_088E8094:
    ctx.gpr[31] = (0x088E809Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 758u, 0x0898E250u>(ctx, &aot_mem) && ctx.pc == 0x088E809Cu) goto L_088E809C;
    return;
L_088E809C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E814C;
      }
      goto L_088E80A4;
    }
L_088E80A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E89A8;
      }
      goto L_088E80B8;
    }
L_088E80B8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E814C;
      }
      goto L_088E80C0;
    }
L_088E80C0:
    ctx.gpr[31] = (0x088E80C8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x088E80C8u) goto L_088E80C8;
    return;
L_088E80C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E814C;
      }
      goto L_088E80D0;
    }
L_088E80D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E8120;
      }
      goto L_088E80F8;
    }
L_088E80F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E8120;
      }
      goto L_088E8108;
    }
L_088E8108:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088E8120u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x088E8120u) goto L_088E8120;
    return;
L_088E8120:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x088E8138u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x088E8138u) goto L_088E8138;
    return;
L_088E8138:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E8144u);
    ctx.gpr[5] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x088E8144u) goto L_088E8144;
    return;
L_088E8144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E89A8;
      }
      goto L_088E814C;
    }
L_088E814C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_088E8184;
      }
      goto L_088E8158;
    }
L_088E8158:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E8180;
    }
L_088E8180:
    ctx.gpr[4] = (2236u << 16u);
    goto L_088E8184;
L_088E8184:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1976))))));
    ctx.gpr[6] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E8198;
    }
L_088E8198:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1976))))));
    ctx.gpr[6] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E81A8;
    }
L_088E81A8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1976))))));
    ctx.gpr[6] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E81B8;
    }
L_088E81B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1976))))));
    ctx.gpr[6] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E81C8;
    }
L_088E81C8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1976))))));
    ctx.gpr[6] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E81D8;
    }
L_088E81D8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1976))))));
    ctx.gpr[6] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E81E8;
    }
L_088E81E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1976))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E81F8;
    }
L_088E81F8:
    ctx.gpr[31] = (0x088E8200u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8200u) goto L_088E8200;
    return;
L_088E8200:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8230;
      }
      goto L_088E8208;
    }
L_088E8208:
    ctx.gpr[31] = (0x088E8210u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8210u) goto L_088E8210;
    return;
L_088E8210:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E8218;
    }
L_088E8218:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E8230;
    }
L_088E8230:
    ctx.gpr[31] = (0x088E8238u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8238u) goto L_088E8238;
    return;
L_088E8238:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088E8248u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 313u, 0x088E2C98u>(ctx, &aot_mem) && ctx.pc == 0x088E8248u) goto L_088E8248;
    return;
L_088E8248:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E8254;
    }
L_088E8254:
    ctx.gpr[31] = (0x088E825Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 410u, 0x08909880u>(ctx, &aot_mem) && ctx.pc == 0x088E825Cu) goto L_088E825C;
    return;
L_088E825C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088E8288;
      }
      goto L_088E8264;
    }
L_088E8264:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8294;
      }
      goto L_088E826C;
    }
L_088E826C:
    ctx.gpr[31] = (0x088E8274u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8274u) goto L_088E8274;
    return;
L_088E8274:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8288;
      }
      goto L_088E827C;
    }
L_088E827C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8294;
      }
      goto L_088E8288;
    }
L_088E8288:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E8294u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 384u, 0x088E3180u>(ctx, &aot_mem) && ctx.pc == 0x088E8294u) goto L_088E8294;
    return;
L_088E8294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E89A8;
      }
      goto L_088E829C;
    }
L_088E829C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (16640u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088E82C4;
      }
      goto L_088E82B8;
    }
L_088E82B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E82C4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem) && ctx.pc == 0x088E82C4u) goto L_088E82C4;
    return;
L_088E82C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E82EC;
      }
      goto L_088E82D4;
    }
L_088E82D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E82EC;
      }
      goto L_088E82E4;
    }
L_088E82E4:
    ctx.gpr[31] = (0x088E82ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x088E82ECu) goto L_088E82EC;
    return;
L_088E82EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E8304u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E8304u) goto L_088E8304;
    return;
L_088E8304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x088E8328u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E8328u) goto L_088E8328;
    return;
L_088E8328:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E8334u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x088E8334u) goto L_088E8334;
    return;
L_088E8334:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E8340u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x088E8340u) goto L_088E8340;
    return;
L_088E8340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E84E0;
      }
      goto L_088E8350;
    }
L_088E8350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E84E0;
      }
      goto L_088E8360;
    }
L_088E8360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E84E0;
      }
      goto L_088E837C;
    }
L_088E837C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[17]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (0u | 215u);
        goto L_088E839C;
    }
    goto L_088E839C;
L_088E839C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E83ACu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088E83ACu) goto L_088E83AC;
    return;
L_088E83AC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8464;
      }
      goto L_088E83B8;
    }
L_088E83B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_088E83D0;
    }
    goto L_088E83C4;
L_088E83C4:
    ctx.gpr[31] = (0x088E83CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088E83CCu) goto L_088E83CC;
    return;
L_088E83CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_088E83D0;
L_088E83D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[17]);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (0u | 215u);
        goto L_088E83F0;
    }
    goto L_088E83F0;
L_088E83F0:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088E8400u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 633u, 0x0893E8D8u>(ctx, &aot_mem) && ctx.pc == 0x088E8400u) goto L_088E8400;
    return;
L_088E8400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E843C;
      }
      goto L_088E8418;
    }
L_088E8418:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E8430;
      }
      goto L_088E8428;
    }
L_088E8428:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E8450;
      }
      goto L_088E8430;
    }
L_088E8430:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E8418;
      }
      goto L_088E843C;
    }
L_088E843C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E8450;
      }
      goto L_088E8448;
    }
L_088E8448:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E8450;
      }
      goto L_088E8450;
    }
L_088E8450:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8464;
      }
      goto L_088E8458;
    }
L_088E8458:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088E8464u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 611u, 0x0888FE40u>(ctx, &aot_mem) && ctx.pc == 0x088E8464u) goto L_088E8464;
    return;
L_088E8464:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[17]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 215u);
        goto L_088E8488;
    }
    goto L_088E8488;
L_088E8488:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088E84A0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088E84A0u) goto L_088E84A0;
    return;
L_088E84A0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E898C;
      }
      goto L_088E84CC;
    }
L_088E84CC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088E84D8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem) && ctx.pc == 0x088E84D8u) goto L_088E84D8;
    return;
L_088E84D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E898C;
      }
      goto L_088E84E0;
    }
L_088E84E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E84F4;
      }
      goto L_088E84EC;
    }
L_088E84EC:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088E84F4;
L_088E84F4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8534;
      }
      goto L_088E8510;
    }
L_088E8510:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (0u | 216u);
        goto L_088E852C;
    }
    goto L_088E852C;
L_088E852C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8684;
      }
      goto L_088E8534;
    }
L_088E8534:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8614;
      }
      goto L_088E8540;
    }
L_088E8540:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 8192u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_088E8570;
      }
      goto L_088E8558;
    }
L_088E8558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_088E8570;
L_088E8570:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088E8614;
      }
      goto L_088E8578;
    }
L_088E8578:
    ctx.gpr[31] = (0x088E8580u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 178u, 0x088E4D2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8580u) goto L_088E8580;
    return;
L_088E8580:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E85D4;
      }
      goto L_088E8590;
    }
L_088E8590:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8614;
      }
      goto L_088E8598;
    }
L_088E8598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8614;
      }
      goto L_088E85A8;
    }
L_088E85A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8614;
      }
      goto L_088E85B4;
    }
L_088E85B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8614;
      }
      goto L_088E85D4;
    }
L_088E85D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 215u);
      if (branch_taken) {
          goto L_088E860C;
      }
      goto L_088E85EC;
    }
L_088E85EC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (0u | 218u);
        goto L_088E860C;
    }
    goto L_088E860C;
L_088E860C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8684;
      }
      goto L_088E8614;
    }
L_088E8614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E8664;
      }
      goto L_088E8624;
    }
L_088E8624:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8664;
      }
      goto L_088E8640;
    }
L_088E8640:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (0u | 218u);
        goto L_088E865C;
    }
    goto L_088E865C;
L_088E865C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8684;
      }
      goto L_088E8664;
    }
L_088E8664:
    ctx.gpr[18] = (0u | 214u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (0u | 55u);
        goto L_088E8684;
    }
    goto L_088E8684;
L_088E8684:
    ctx.gpr[31] = (0x088E868Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088E868Cu) goto L_088E868C;
    return;
L_088E868C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8730;
      }
      goto L_088E8694;
    }
L_088E8694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E8730;
      }
      goto L_088E86A4;
    }
L_088E86A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23252)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23256)));
    ctx.gpr[31] = (0x088E86D8u);
    ctx.gpr[6] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem) && ctx.pc == 0x088E86D8u) goto L_088E86D8;
    return;
L_088E86D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23228)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23232)));
    ctx.gpr[5] = (ctx.gpr[3] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] & ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23236)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23240)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E8700;
      }
      goto L_088E86F8;
    }
L_088E86F8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088E8730;
      }
      goto L_088E8700;
    }
L_088E8700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] >> 22u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088E8728;
      }
      goto L_088E871C;
    }
L_088E871C:
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 172u);
      if (branch_taken) {
          goto L_088E8730;
      }
      goto L_088E8728;
    }
L_088E8728:
    ctx.gpr[17] = (0u | 14u);
    ctx.gpr[18] = (0u | 218u);
    goto L_088E8730;
L_088E8730:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E8740u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088E8740u) goto L_088E8740;
    return;
L_088E8740:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E87D4;
      }
      goto L_088E874C;
    }
L_088E874C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_088E8764;
    }
    goto L_088E8758;
L_088E8758:
    ctx.gpr[31] = (0x088E8760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088E8760u) goto L_088E8760;
    return;
L_088E8760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_088E8764;
L_088E8764:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E8770u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 633u, 0x0893E8D8u>(ctx, &aot_mem) && ctx.pc == 0x088E8770u) goto L_088E8770;
    return;
L_088E8770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E87AC;
      }
      goto L_088E8788;
    }
L_088E8788:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E87A0;
      }
      goto L_088E8798;
    }
L_088E8798:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E87C0;
      }
      goto L_088E87A0;
    }
L_088E87A0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E8788;
      }
      goto L_088E87AC;
    }
L_088E87AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E87C0;
      }
      goto L_088E87B8;
    }
L_088E87B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E87C0;
      }
      goto L_088E87C0;
    }
L_088E87C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E87D4;
      }
      goto L_088E87C8;
    }
L_088E87C8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088E87D4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 611u, 0x0888FE40u>(ctx, &aot_mem) && ctx.pc == 0x088E87D4u) goto L_088E87D4;
    return;
L_088E87D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E898C;
      }
      goto L_088E87E4;
    }
L_088E87E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(476)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E898C;
      }
      goto L_088E87F4;
    }
L_088E87F4:
    ctx.gpr[31] = (0x088E87FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x088E87FCu) goto L_088E87FC;
    return;
L_088E87FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E898C;
      }
      goto L_088E8804;
    }
L_088E8804:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x088E8810u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8810u) goto L_088E8810;
    return;
L_088E8810:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8894;
      }
      goto L_088E8818;
    }
L_088E8818:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 18u);
      if (branch_taken) {
          goto L_088E8894;
      }
      goto L_088E8830;
    }
L_088E8830:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 214u);
      if (branch_taken) {
          goto L_088E8894;
      }
      goto L_088E8838;
    }
L_088E8838:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E8894;
      }
      goto L_088E8840;
    }
L_088E8840:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E8890;
      }
      goto L_088E8868;
    }
L_088E8868:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E8894;
      }
      goto L_088E8890;
    }
L_088E8890:
    ctx.gpr[19] = (0u | 1u);
    goto L_088E8894;
L_088E8894:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8900;
      }
      goto L_088E889C;
    }
L_088E889C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E88ACu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088E88ACu) goto L_088E88AC;
    return;
L_088E88AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8900;
      }
      goto L_088E88B4;
    }
L_088E88B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E88C4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088E88C4u) goto L_088E88C4;
    return;
L_088E88C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8900;
      }
      goto L_088E88CC;
    }
L_088E88CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E88DCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088E88DCu) goto L_088E88DC;
    return;
L_088E88DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8900;
      }
      goto L_088E88E4;
    }
L_088E88E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x088E8900u);
    ctx.gpr[7] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088E8900u) goto L_088E8900;
    return;
L_088E8900:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088E8918u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088E8918u) goto L_088E8918;
    return;
L_088E8918:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E8950;
      }
      goto L_088E8944;
    }
L_088E8944:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088E8950u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem) && ctx.pc == 0x088E8950u) goto L_088E8950;
    return;
L_088E8950:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E898C;
      }
      goto L_088E8958;
    }
L_088E8958:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16083u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 3712u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E898C;
      }
      goto L_088E8978;
    }
L_088E8978:
    ctx.gpr[31] = (0x088E8980u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem) && ctx.pc == 0x088E8980u) goto L_088E8980;
    return;
L_088E8980:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E898C;
L_088E898C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E89A8;
      }
      goto L_088E8994;
    }
L_088E8994:
    ctx.gpr[5] = (2191u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11988));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088E89A8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x088E89A8u) goto L_088E89A8;
    return;
L_088E89A8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E89D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2236)));
    ctx.gpr[6] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E8A20;
      }
      goto L_088E8A04;
    }
L_088E8A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1740)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8A28;
      }
      goto L_088E8A18;
    }
L_088E8A18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8A80;
      }
      goto L_088E8A20;
    }
L_088E8A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E8A28;
    }
L_088E8A28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1740)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8A4C;
      }
      goto L_088E8A34;
    }
L_088E8A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8A5C;
      }
      goto L_088E8A44;
    }
L_088E8A44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8A74;
      }
      goto L_088E8A4C;
    }
L_088E8A4C:
    ctx.gpr[31] = (0x088E8A54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 364u, 0x088E3074u>(ctx, &aot_mem) && ctx.pc == 0x088E8A54u) goto L_088E8A54;
    return;
L_088E8A54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E8A5C;
    }
L_088E8A5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088E8A74u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x088E8A74u) goto L_088E8A74;
    return;
L_088E8A74:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1740), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E8A80;
    }
L_088E8A80:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x088E8A8Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem) && ctx.pc == 0x088E8A8Cu) goto L_088E8A8C;
    return;
L_088E8A8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088E8AACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem) && ctx.pc == 0x088E8AACu) goto L_088E8AAC;
    return;
L_088E8AAC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2060)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E8CB4;
      }
      goto L_088E8AE0;
    }
L_088E8AE0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x088E8AECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem) && ctx.pc == 0x088E8AECu) goto L_088E8AEC;
    return;
L_088E8AEC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x088E8AFCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem) && ctx.pc == 0x088E8AFCu) goto L_088E8AFC;
    return;
L_088E8AFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088E8B20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x088E8B20u) goto L_088E8B20;
    return;
L_088E8B20:
    ctx.gpr[31] = (0x088E8B28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 461u, 0x08916ABCu>(ctx, &aot_mem) && ctx.pc == 0x088E8B28u) goto L_088E8B28;
    return;
L_088E8B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8B70;
      }
      goto L_088E8B38;
    }
L_088E8B38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2060)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E8B70;
      }
      goto L_088E8B5C;
    }
L_088E8B5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E8B68u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x088E8B68u) goto L_088E8B68;
    return;
L_088E8B68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8CAC;
      }
      goto L_088E8B70;
    }
L_088E8B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8CA0;
      }
      goto L_088E8B80;
    }
L_088E8B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8CA0;
      }
      goto L_088E8B90;
    }
L_088E8B90:
    ctx.gpr[4] = (16312u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E8BC0;
      }
      goto L_088E8BAC;
    }
L_088E8BAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E8BB8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x088E8BB8u) goto L_088E8BB8;
    return;
L_088E8BB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8CAC;
      }
      goto L_088E8BC0;
    }
L_088E8BC0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8C84;
      }
      goto L_088E8BD8;
    }
L_088E8BD8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x088E8BE4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem) && ctx.pc == 0x088E8BE4u) goto L_088E8BE4;
    return;
L_088E8BE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x088E8C10u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem) && ctx.pc == 0x088E8C10u) goto L_088E8C10;
    return;
L_088E8C10:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (15907u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E8C68;
      }
      goto L_088E8C50;
    }
L_088E8C50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E8C5Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x088E8C5Cu) goto L_088E8C5C;
    return;
L_088E8C5C:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8C84;
      }
      goto L_088E8C68;
    }
L_088E8C68:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8BD8;
      }
      goto L_088E8C84;
    }
L_088E8C84:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8C98;
      }
      goto L_088E8C8C;
    }
L_088E8C8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E8C98u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x088E8C98u) goto L_088E8C98;
    return;
L_088E8C98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8CAC;
      }
      goto L_088E8CA0;
    }
L_088E8CA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E8CACu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x088E8CACu) goto L_088E8CAC;
    return;
L_088E8CAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E8CB4;
    }
L_088E8CB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x088E8CC4u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x088E8CC4u) goto L_088E8CC4;
    return;
L_088E8CC4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E8CD4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x088E8CD4u) goto L_088E8CD4;
    return;
L_088E8CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(688)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6));
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E8CE8;
    }
L_088E8CE8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16296)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8DC0;
      }
      goto L_088E8D14;
    }
L_088E8D14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E8D24u);
    ctx.gpr[6] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088E8D24u) goto L_088E8D24;
    return;
L_088E8D24:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8DC8;
      }
      goto L_088E8D30;
    }
L_088E8D30:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(692)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8D6C;
      }
      goto L_088E8D54;
    }
L_088E8D54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088E8D6Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x088E8D6Cu) goto L_088E8D6C;
    return;
L_088E8D6C:
    ctx.gpr[31] = (0x088E8D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088E8D74u) goto L_088E8D74;
    return;
L_088E8D74:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23212)));
    ctx.gpr[31] = (0x088E8D88u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23216)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8D88u) goto L_088E8D88;
    return;
L_088E8D88:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23204)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23208)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088E8DC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x088E8DC0u) goto L_088E8DC0;
    return;
L_088E8DC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E8DC8;
    }
L_088E8DC8:
    ctx.gpr[31] = (0x088E8DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088E8DD0u) goto L_088E8DD0;
    return;
L_088E8DD0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8E6C;
      }
      goto L_088E8DE0;
    }
L_088E8DE0:
    ctx.gpr[31] = (0x088E8DE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x088E8DE8u) goto L_088E8DE8;
    return;
L_088E8DE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088E8E04u);
    ctx.gpr[7] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088E8E04u) goto L_088E8E04;
    return;
L_088E8E04:
    ctx.gpr[31] = (0x088E8E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088E8E0Cu) goto L_088E8E0C;
    return;
L_088E8E0C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23204)));
    ctx.gpr[31] = (0x088E8E20u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23208)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8E20u) goto L_088E8E20;
    return;
L_088E8E20:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23196)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23200)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088E8E58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x088E8E58u) goto L_088E8E58;
    return;
L_088E8E58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E8E64u);
    ctx.gpr[5] = (0u | 154u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x088E8E64u) goto L_088E8E64;
    return;
L_088E8E64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8DC0;
      }
      goto L_088E8E6C;
    }
L_088E8E6C:
    ctx.gpr[31] = (0x088E8E74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 364u, 0x088E3074u>(ctx, &aot_mem) && ctx.pc == 0x088E8E74u) goto L_088E8E74;
    return;
L_088E8E74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E8E7C;
    }
L_088E8E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9030;
      }
      goto L_088E8E90;
    }
L_088E8E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9030;
      }
      goto L_088E8EA4;
    }
L_088E8EA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E8EB4u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088E8EB4u) goto L_088E8EB4;
    return;
L_088E8EB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8EF0;
      }
      goto L_088E8EC0;
    }
L_088E8EC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E8ED0u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088E8ED0u) goto L_088E8ED0;
    return;
L_088E8ED0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8EF0;
      }
      goto L_088E8EDC;
    }
L_088E8EDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E8EECu);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088E8EECu) goto L_088E8EEC;
    return;
L_088E8EEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088E8EF0;
L_088E8EF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8F80;
      }
      goto L_088E8EF8;
    }
L_088E8EF8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E8F80;
      }
      goto L_088E8F08;
    }
L_088E8F08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E8F24u);
    ctx.gpr[7] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088E8F24u) goto L_088E8F24;
    return;
L_088E8F24:
    ctx.gpr[31] = (0x088E8F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088E8F2Cu) goto L_088E8F2C;
    return;
L_088E8F2C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23204)));
    ctx.gpr[31] = (0x088E8F40u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23208)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8F40u) goto L_088E8F40;
    return;
L_088E8F40:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23196)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23200)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088E8F78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x088E8F78u) goto L_088E8F78;
    return;
L_088E8F78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9330;
      }
      goto L_088E8F80;
    }
L_088E8F80:
    ctx.gpr[31] = (0x088E8F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088E8F88u) goto L_088E8F88;
    return;
L_088E8F88:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9028;
      }
      goto L_088E8F98;
    }
L_088E8F98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088E8FB4u);
    ctx.gpr[7] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088E8FB4u) goto L_088E8FB4;
    return;
L_088E8FB4:
    ctx.gpr[31] = (0x088E8FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088E8FBCu) goto L_088E8FBC;
    return;
L_088E8FBC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23212)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23216)));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088E8FD8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8FD8u) goto L_088E8FD8;
    return;
L_088E8FD8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088E9008u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x088E9008u) goto L_088E9008;
    return;
L_088E9008:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1038)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9330;
      }
      goto L_088E9014;
    }
L_088E9014:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E9020u);
    ctx.gpr[5] = (0u | 154u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x088E9020u) goto L_088E9020;
    return;
L_088E9020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9330;
      }
      goto L_088E9028;
    }
L_088E9028:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1740), 0u);
      if (branch_taken) {
          goto L_088E9330;
      }
      goto L_088E9030;
    }
L_088E9030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9330;
      }
      goto L_088E9044;
    }
L_088E9044:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E9054u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088E9054u) goto L_088E9054;
    return;
L_088E9054:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9074;
      }
      goto L_088E9060;
    }
L_088E9060:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E9070u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088E9070u) goto L_088E9070;
    return;
L_088E9070:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088E9074;
L_088E9074:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9090;
      }
      goto L_088E907C;
    }
L_088E907C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E908Cu);
    ctx.gpr[6] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088E908Cu) goto L_088E908C;
    return;
L_088E908C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088E9090;
L_088E9090:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E90AC;
      }
      goto L_088E9098;
    }
L_088E9098:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E90A8u);
    ctx.gpr[6] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088E90A8u) goto L_088E90A8;
    return;
L_088E90A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088E90AC;
L_088E90AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9188;
      }
      goto L_088E90B4;
    }
L_088E90B4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E90D4;
      }
      goto L_088E90C4;
    }
L_088E90C4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E9188;
      }
      goto L_088E90D4;
    }
L_088E90D4:
    ctx.gpr[31] = (0x088E90DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088E90DCu) goto L_088E90DC;
    return;
L_088E90DC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9110;
      }
      goto L_088E90EC;
    }
L_088E90EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088E9108u);
    ctx.gpr[7] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088E9108u) goto L_088E9108;
    return;
L_088E9108:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E912C;
      }
      goto L_088E9110;
    }
L_088E9110:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088E912Cu);
    ctx.gpr[7] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088E912Cu) goto L_088E912C;
    return;
L_088E912C:
    ctx.gpr[31] = (0x088E9134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088E9134u) goto L_088E9134;
    return;
L_088E9134:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23212)));
    ctx.gpr[31] = (0x088E9148u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23216)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088E9148u) goto L_088E9148;
    return;
L_088E9148:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23204)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23208)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088E9180u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x088E9180u) goto L_088E9180;
    return;
L_088E9180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9318;
      }
      goto L_088E9188;
    }
L_088E9188:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E926C;
      }
      goto L_088E9190;
    }
L_088E9190:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E926C;
      }
      goto L_088E91A0;
    }
L_088E91A0:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[31] = (0x088E91C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088E91C0u) goto L_088E91C0;
    return;
L_088E91C0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E91F4;
      }
      goto L_088E91D0;
    }
L_088E91D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E91ECu);
    ctx.gpr[7] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088E91ECu) goto L_088E91EC;
    return;
L_088E91EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9210;
      }
      goto L_088E91F4;
    }
L_088E91F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088E9210u);
    ctx.gpr[7] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088E9210u) goto L_088E9210;
    return;
L_088E9210:
    ctx.gpr[31] = (0x088E9218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088E9218u) goto L_088E9218;
    return;
L_088E9218:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23204)));
    ctx.gpr[31] = (0x088E922Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23208)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088E922Cu) goto L_088E922C;
    return;
L_088E922C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23196)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23200)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088E9264u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x088E9264u) goto L_088E9264;
    return;
L_088E9264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9318;
      }
      goto L_088E926C;
    }
L_088E926C:
    ctx.gpr[31] = (0x088E9274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088E9274u) goto L_088E9274;
    return;
L_088E9274:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E92A8;
      }
      goto L_088E9284;
    }
L_088E9284:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E92A0u);
    ctx.gpr[7] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088E92A0u) goto L_088E92A0;
    return;
L_088E92A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E92C4;
      }
      goto L_088E92A8;
    }
L_088E92A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088E92C4u);
    ctx.gpr[7] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088E92C4u) goto L_088E92C4;
    return;
L_088E92C4:
    ctx.gpr[31] = (0x088E92CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088E92CCu) goto L_088E92CC;
    return;
L_088E92CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23204)));
    ctx.gpr[31] = (0x088E92E0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23208)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088E92E0u) goto L_088E92E0;
    return;
L_088E92E0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23196)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23200)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088E9318u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x088E9318u) goto L_088E9318;
    return;
L_088E9318:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1038)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9330;
      }
      goto L_088E9324;
    }
L_088E9324:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E9330u);
    ctx.gpr[5] = (0u | 154u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x088E9330u) goto L_088E9330;
    return;
L_088E9330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E9338;
    }
L_088E9338:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(696)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E9354;
    }
L_088E9354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9384;
      }
      goto L_088E9360;
    }
L_088E9360:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E9370u);
    ctx.gpr[6] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088E9370u) goto L_088E9370;
    return;
L_088E9370:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E93FC;
      }
      goto L_088E937C;
    }
L_088E937C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E94C0;
      }
      goto L_088E9384;
    }
L_088E9384:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088E93A0u);
    ctx.gpr[7] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088E93A0u) goto L_088E93A0;
    return;
L_088E93A0:
    ctx.gpr[31] = (0x088E93A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088E93A8u) goto L_088E93A8;
    return;
L_088E93A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23204)));
    ctx.gpr[31] = (0x088E93BCu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23208)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088E93BCu) goto L_088E93BC;
    return;
L_088E93BC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23196)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23200)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088E93F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x088E93F4u) goto L_088E93F4;
    return;
L_088E93F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E93FC;
    }
L_088E93FC:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(688)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E9448;
      }
      goto L_088E9424;
    }
L_088E9424:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088E9440u);
    ctx.gpr[7] = (0u | 166u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088E9440u) goto L_088E9440;
    return;
L_088E9440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9464;
      }
      goto L_088E9448;
    }
L_088E9448:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088E9464u);
    ctx.gpr[7] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088E9464u) goto L_088E9464;
    return;
L_088E9464:
    ctx.gpr[31] = (0x088E946Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088E946Cu) goto L_088E946C;
    return;
L_088E946C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23188)));
    ctx.gpr[31] = (0x088E9480u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23192)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088E9480u) goto L_088E9480;
    return;
L_088E9480:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23180)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23184)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088E94B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x088E94B8u) goto L_088E94B8;
    return;
L_088E94B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E94C0;
    }
L_088E94C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E94D0u);
    ctx.gpr[6] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088E94D0u) goto L_088E94D0;
    return;
L_088E94D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9520;
      }
      goto L_088E94DC;
    }
L_088E94DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E94ECu);
    ctx.gpr[6] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088E94ECu) goto L_088E94EC;
    return;
L_088E94EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9548;
      }
      goto L_088E94F8;
    }
L_088E94F8:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[31] = (0x088E9518u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 364u, 0x088E3074u>(ctx, &aot_mem) && ctx.pc == 0x088E9518u) goto L_088E9518;
    return;
L_088E9518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E9520;
    }
L_088E9520:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[31] = (0x088E9540u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 364u, 0x088E3074u>(ctx, &aot_mem) && ctx.pc == 0x088E9540u) goto L_088E9540;
    return;
L_088E9540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E9548;
    }
L_088E9548:
    ctx.gpr[31] = (0x088E9550u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 364u, 0x088E3074u>(ctx, &aot_mem) && ctx.pc == 0x088E9550u) goto L_088E9550;
    return;
L_088E9550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E9558;
    }
L_088E9558:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E957C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-832));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(780), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(784), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(788), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(792), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(796), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(800), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(804), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(808), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(812), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(816), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(820), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088E95BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 412u, 0x088E335Cu>(ctx, &aot_mem) && ctx.pc == 0x088E95BCu) goto L_088E95BC;
    return;
L_088E95BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E973C;
      }
      goto L_088E95C4;
    }
L_088E95C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), ctx.gpr[17]);
    ctx.gpr[31] = (0x088E95F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x088E95F0u) goto L_088E95F0;
    return;
L_088E95F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E9608u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E9608u) goto L_088E9608;
    return;
L_088E9608:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E962Cu);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E962Cu) goto L_088E962C;
    return;
L_088E962C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(764), ctx.gpr[4]);
    ctx.gpr[31] = (0x088E9648u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 348u, 0x0881E25Cu>(ctx, &aot_mem) && ctx.pc == 0x088E9648u) goto L_088E9648;
    return;
L_088E9648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(762), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(760), static_cast<std::uint16_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(748), ctx.gpr[4]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088E969Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 257u, 0x0881DD84u>(ctx, &aot_mem) && ctx.pc == 0x088E969Cu) goto L_088E969C;
    return;
L_088E969C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088E96B4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 293u, 0x0881DF20u>(ctx, &aot_mem) && ctx.pc == 0x088E96B4u) goto L_088E96B4;
    return;
L_088E96B4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088E96CCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 571u, 0x088E3E88u>(ctx, &aot_mem) && ctx.pc == 0x088E96CCu) goto L_088E96CC;
    return;
L_088E96CC:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7632));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088E9700u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x088E9700u) goto L_088E9700;
    return;
L_088E9700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088E9714u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 275u, 0x0881DE58u>(ctx, &aot_mem) && ctx.pc == 0x088E9714u) goto L_088E9714;
    return;
L_088E9714:
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(744), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_088E9744;
      }
      goto L_088E9734;
    }
L_088E9734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9B08;
      }
      goto L_088E973C;
    }
L_088E973C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088EA3F0;
      }
      goto L_088E9744;
    }
L_088E9744:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(514));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    goto L_088E9774;
L_088E9774:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E97A4;
      }
      goto L_088E9784;
    }
L_088E9784:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1824)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E97AC;
      }
      goto L_088E97A4;
    }
L_088E97A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1784)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_088E97AC;
L_088E97AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E97D0;
      }
      goto L_088E97BC;
    }
L_088E97BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E97D0;
      }
      goto L_088E97C8;
    }
L_088E97C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9AEC;
      }
      goto L_088E97D0;
    }
L_088E97D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E9AEC;
      }
      goto L_088E9858;
    }
L_088E9858:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E996C;
      }
      goto L_088E9874;
    }
L_088E9874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_088E98A8;
    }
    goto L_088E9888;
L_088E9888:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x088E9898u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x088E9898u) goto L_088E9898;
    return;
L_088E9898:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_088E98A8;
L_088E98A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_088E98DC;
    }
    goto L_088E98BC;
L_088E98BC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(513));
    ctx.gpr[31] = (0x088E98CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x088E98CCu) goto L_088E98CC;
    return;
L_088E98CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(513)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_088E98DC;
L_088E98DC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[20]);
    ctx.gpr[6] = (ctx.gpr[4] ^ 65535u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E9964;
      }
      goto L_088E9910;
    }
L_088E9910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(740)));
    ctx.gpr[31] = (0x088E991Cu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x088E991Cu) goto L_088E991C;
    return;
L_088E991C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9964;
      }
      goto L_088E9928;
    }
L_088E9928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E9940u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E9940u) goto L_088E9940;
    return;
L_088E9940:
    ctx.gpr[4] = (ctx.gpr[2] ^ 3u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E9964;
L_088E9964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
      if (branch_taken) {
          goto L_088E99D8;
      }
      goto L_088E996C;
    }
L_088E996C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[31] = (0x088E9984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x088E9984u) goto L_088E9984;
    return;
L_088E9984:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E99D8;
      }
      goto L_088E99A8;
    }
L_088E99A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088E99B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x088E99B4u) goto L_088E99B4;
    return;
L_088E99B4:
    ctx.gpr[4] = (ctx.gpr[2] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E99D8;
L_088E99D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E99F0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E99F0u) goto L_088E99F0;
    return;
L_088E99F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088E99FCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 657u, 0x0881F9F0u>(ctx, &aot_mem) && ctx.pc == 0x088E99FCu) goto L_088E99FC;
    return;
L_088E99FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9AEC;
      }
      goto L_088E9A04;
    }
L_088E9A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), ctx.gpr[16]);
        goto L_088E9A44;
    }
    goto L_088E9A20;
L_088E9A20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (0u | 58u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), ctx.gpr[16]);
        goto L_088E9A44;
    }
    goto L_088E9A30;
L_088E9A30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9AEC;
      }
      goto L_088E9A40;
    }
L_088E9A40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), ctx.gpr[16]);
    goto L_088E9A44;
L_088E9A44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[31] = (0x088E9A50u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088E9A50u) goto L_088E9A50;
    return;
L_088E9A50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(772)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
      if (branch_taken) {
          goto L_088E9A78;
      }
      goto L_088E9A5C;
    }
L_088E9A5C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088E9A6Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088E9A6Cu) goto L_088E9A6C;
    return;
L_088E9A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(772)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
      if (branch_taken) {
          goto L_088E9AEC;
      }
      goto L_088E9A78;
    }
L_088E9A78:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E9ACC;
      }
      goto L_088E9A98;
    }
L_088E9A98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_088E9AC0;
    }
    goto L_088E9AA4;
L_088E9AA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_088E9AC0;
L_088E9AC0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E9AEC;
      }
      goto L_088E9ACC;
    }
L_088E9ACC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(514), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x088E9AECu);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 131u, 0x088E4A4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E9AECu) goto L_088E9AEC;
    return;
L_088E9AEC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E9774;
      }
      goto L_088E9B08;
    }
L_088E9B08:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088E9B44u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem) && ctx.pc == 0x088E9B44u) goto L_088E9B44;
    return;
L_088E9B44:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(752)));
      if (branch_taken) {
          goto L_088E9F24;
      }
      goto L_088E9B50;
    }
L_088E9B50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
      if (branch_taken) {
          goto L_088E9CF8;
      }
      goto L_088E9B6C;
    }
L_088E9B6C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9CF0;
      }
      goto L_088E9B78;
    }
L_088E9B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E9B90u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E9B90u) goto L_088E9B90;
    return;
L_088E9B90:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E9B9Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 657u, 0x0881F9F0u>(ctx, &aot_mem) && ctx.pc == 0x088E9B9Cu) goto L_088E9B9C;
    return;
L_088E9B9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9CF0;
      }
      goto L_088E9BA4;
    }
L_088E9BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9C20;
      }
      goto L_088E9BB0;
    }
L_088E9BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E9C20;
      }
      goto L_088E9BC0;
    }
L_088E9BC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E9C20;
      }
      goto L_088E9BD0;
    }
L_088E9BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E9C20;
      }
      goto L_088E9BE0;
    }
L_088E9BE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E9C20;
      }
      goto L_088E9BF0;
    }
L_088E9BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E9C20;
      }
      goto L_088E9C00;
    }
L_088E9C00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E9C20;
      }
      goto L_088E9C10;
    }
L_088E9C10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E9CF0;
      }
      goto L_088E9C20;
    }
L_088E9C20:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1396));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088E9C60u);
    ctx.gpr[6] = (0u | 45u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x088E9C60u) goto L_088E9C60;
    return;
L_088E9C60:
    ctx.gpr[4] = (2246u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2032));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(31)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(416));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(188)));
    ctx.gpr[7] = (15395u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    jump_target = ctx.gpr[10];
    ctx.gpr[31] = (0x088E9CC0u);
    ctx.gpr[9] = (0u | 42u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E9CC0u) goto L_088E9CC0;
    return;
L_088E9CC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E9CCCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 425u, 0x08B0A360u>(ctx, &aot_mem) && ctx.pc == 0x088E9CCCu) goto L_088E9CCC;
    return;
L_088E9CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E9CE4u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E9CE4u) goto L_088E9CE4;
    return;
L_088E9CE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E9CF0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 634u, 0x0881F874u>(ctx, &aot_mem) && ctx.pc == 0x088E9CF0u) goto L_088E9CF0;
    return;
L_088E9CF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9F24;
      }
      goto L_088E9CF8;
    }
L_088E9CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9F24;
      }
      goto L_088E9D14;
    }
L_088E9D14:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9EA8;
      }
      goto L_088E9D20;
    }
L_088E9D20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E9D38u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E9D38u) goto L_088E9D38;
    return;
L_088E9D38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E9D44u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 657u, 0x0881F9F0u>(ctx, &aot_mem) && ctx.pc == 0x088E9D44u) goto L_088E9D44;
    return;
L_088E9D44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9EA8;
      }
      goto L_088E9D4C;
    }
L_088E9D4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9EA8;
      }
      goto L_088E9D5C;
    }
L_088E9D5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (17095u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E9EA8;
      }
      goto L_088E9D7C;
    }
L_088E9D7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E9D9C;
      }
      goto L_088E9D8C;
    }
L_088E9D8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088E9DA4;
      }
      goto L_088E9D9C;
    }
L_088E9D9C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088E9DA4;
L_088E9DA4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9DDC;
      }
      goto L_088E9DAC;
    }
L_088E9DAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E9DDC;
      }
      goto L_088E9DC4;
    }
L_088E9DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x088E9DDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem) && ctx.pc == 0x088E9DDCu) goto L_088E9DDC;
    return;
L_088E9DDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E9DFC;
      }
      goto L_088E9DEC;
    }
L_088E9DEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088E9E04;
      }
      goto L_088E9DFC;
    }
L_088E9DFC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088E9E04;
L_088E9E04:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
        goto L_088E9F18;
    }
    goto L_088E9E0C;
L_088E9E0C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (0x088E9E7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x088E9E7Cu) goto L_088E9E7C;
    return;
L_088E9E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E9E94u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E9E94u) goto L_088E9E94;
    return;
L_088E9E94:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E9EA0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 634u, 0x0881F874u>(ctx, &aot_mem) && ctx.pc == 0x088E9EA0u) goto L_088E9EA0;
    return;
L_088E9EA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
      if (branch_taken) {
          goto L_088E9F18;
      }
      goto L_088E9EA8;
    }
L_088E9EA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(473)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
        goto L_088E9EC8;
    }
    goto L_088E9EB8;
L_088E9EB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(478))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
        goto L_088E9F18;
    }
    goto L_088E9EC4;
L_088E9EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_088E9EC8;
L_088E9EC8:
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
        goto L_088E9F18;
    }
    goto L_088E9ED8;
L_088E9ED8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E9EF0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 482u, 0x0882BFC8u>(ctx, &aot_mem) && ctx.pc == 0x088E9EF0u) goto L_088E9EF0;
    return;
L_088E9EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E9F08u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E9F08u) goto L_088E9F08;
    return;
L_088E9F08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E9F14u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 634u, 0x0881F874u>(ctx, &aot_mem) && ctx.pc == 0x088E9F14u) goto L_088E9F14;
    return;
L_088E9F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
    goto L_088E9F18;
L_088E9F18:
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E9F24;
L_088E9F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
      if (branch_taken) {
          goto L_088E9F88;
      }
      goto L_088E9F44;
    }
L_088E9F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(560), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088E9F60;
      }
      goto L_088E9F54;
    }
L_088E9F54:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_088E9F58;
L_088E9F58:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088E9F58;
      }
      goto L_088E9F60;
    }
L_088E9F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA3EC;
      }
      goto L_088E9F6C;
    }
L_088E9F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA3EC;
      }
      goto L_088E9F78;
    }
L_088E9F78:
    ctx.gpr[31] = (0x088E9F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x088E9F80u) goto L_088E9F80;
    return;
L_088E9F80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA3EC;
      }
      goto L_088E9F88;
    }
L_088E9F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(764)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[4] & 192u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 128u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(724), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088EA064;
      }
      goto L_088E9FAC;
    }
L_088E9FAC:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(762)));
    ctx.gpr[31] = (0x088EA018u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(760)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 284u, 0x0881DEBCu>(ctx, &aot_mem) && ctx.pc == 0x088EA018u) goto L_088EA018;
    return;
L_088EA018:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088EA064;
L_088EA064:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
      if (branch_taken) {
          goto L_088EA3B0;
      }
      goto L_088EA08C;
    }
L_088EA08C:
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9200u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), ctx.gpr[4]);
    goto L_088EA0A8;
L_088EA0A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[19] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EA378;
      }
      goto L_088EA0CC;
    }
L_088EA0CC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(732), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088EA104;
      }
      goto L_088EA0F4;
    }
L_088EA0F4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088EA104;
L_088EA104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088EA11Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 678u, 0x08903BB0u>(ctx, &aot_mem) && ctx.pc == 0x088EA11Cu) goto L_088EA11C;
    return;
L_088EA11C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_088EA12C;
L_088EA12C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA278;
      }
      goto L_088EA13C;
    }
L_088EA13C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EA278;
      }
      goto L_088EA154;
    }
L_088EA154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EA204;
      }
      goto L_088EA1F8;
    }
L_088EA1F8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(732), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088EA278;
      }
      goto L_088EA204;
    }
L_088EA204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_088EA26C;
      }
      goto L_088EA210;
    }
L_088EA210:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[31] = (0x088EA220u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.pc = 0x088B1554u;
    rt.invoke_native_fast_path(0x088B1554u, ctx);
    if (ctx.pc == 0x088EA220u) goto L_088EA220;
    return;
L_088EA220:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA26C;
      }
      goto L_088EA228;
    }
L_088EA228:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(724), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[5]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), ctx.gpr[6]);
    goto L_088EA26C;
L_088EA26C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088EA12C;
      }
      goto L_088EA278;
    }
L_088EA278:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(732)));
      if (branch_taken) {
          goto L_088EA2C4;
      }
      goto L_088EA284;
    }
L_088EA284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[23]);
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_088EA2C4;
L_088EA2C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA378;
      }
      goto L_088EA2CC;
    }
L_088EA2CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(748)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088EA32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 658u, 0x08A6734Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA32Cu) goto L_088EA32C;
    return;
L_088EA32C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(305)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[9] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088EA360u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088EA428;
L_088EA360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088EA378;
L_088EA378:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EA0A8;
      }
      goto L_088EA3A0;
    }
L_088EA3A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[23]);
    goto L_088EA3B0;
L_088EA3B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088EA3CC;
      }
      goto L_088EA3C0;
    }
L_088EA3C0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    goto L_088EA3C4;
L_088EA3C4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088EA3C4;
      }
      goto L_088EA3CC;
    }
L_088EA3CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA3EC;
      }
      goto L_088EA3D8;
    }
L_088EA3D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA3EC;
      }
      goto L_088EA3E4;
    }
L_088EA3E4:
    ctx.gpr[31] = (0x088EA3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x088EA3ECu) goto L_088EA3EC;
    return;
L_088EA3EC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088EA3F0;
L_088EA3F0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(776)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(780)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(784)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(788)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(792)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(796)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(800)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(804)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(808)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(812)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(816)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(820)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA428:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[31]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[9] << 16u);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EA498u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EA498u) goto L_088EA498;
    return;
L_088EA498:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EA4B4u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EA4B4u) goto L_088EA4B4;
    return;
L_088EA4B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088EA4D0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 348u, 0x0881E25Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA4D0u) goto L_088EA4D0;
    return;
L_088EA4D0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 14u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(244), static_cast<std::uint16_t>(ctx.gpr[23]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088EA50C;
      }
      goto L_088EA500;
    }
L_088EA500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EA510;
      }
      goto L_088EA50C;
    }
L_088EA50C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088EA510;
L_088EA510:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA530;
      }
      goto L_088EA518;
    }
L_088EA518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(476)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EA564;
      }
      goto L_088EA530;
    }
L_088EA530:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088EA554u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x088EA554u) goto L_088EA554;
    return;
L_088EA554:
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
        goto L_088EA56C;
    }
    goto L_088EA55C;
L_088EA55C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA578;
      }
      goto L_088EA564;
    }
L_088EA564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB038;
      }
      goto L_088EA56C;
    }
L_088EA56C:
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EA588;
      }
      goto L_088EA578;
    }
L_088EA578:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EA590;
      }
      goto L_088EA580;
    }
L_088EA580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA638;
      }
      goto L_088EA588;
    }
L_088EA588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB038;
      }
      goto L_088EA590;
    }
L_088EA590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EA5A8u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EA5A8u) goto L_088EA5A8;
    return;
L_088EA5A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EA5C0u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EA5C0u) goto L_088EA5C0;
    return;
L_088EA5C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (ctx.gpr[5] & 256u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088EA608;
      }
      goto L_088EA5EC;
    }
L_088EA5EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[31] = (0x088EA5F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 309u, 0x0881E044u>(ctx, &aot_mem) && ctx.pc == 0x088EA5F8u) goto L_088EA5F8;
    return;
L_088EA5F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EA610;
      }
      goto L_088EA600;
    }
L_088EA600:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA638;
      }
      goto L_088EA608;
    }
L_088EA608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB038;
      }
      goto L_088EA610;
    }
L_088EA610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA638;
      }
      goto L_088EA61C;
    }
L_088EA61C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088EA628u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 372u, 0x0881E3E8u>(ctx, &aot_mem) && ctx.pc == 0x088EA628u) goto L_088EA628;
    return;
L_088EA628:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EA638;
      }
      goto L_088EA630;
    }
L_088EA630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB038;
      }
      goto L_088EA638;
    }
L_088EA638:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[18]);
        goto L_088EA66C;
    }
    goto L_088EA650;
L_088EA650:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088EA660u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 591u, 0x0881F588u>(ctx, &aot_mem) && ctx.pc == 0x088EA660u) goto L_088EA660;
    return;
L_088EA660:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA750;
      }
      goto L_088EA668;
    }
L_088EA668:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[18]);
    goto L_088EA66C;
L_088EA66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088EA684u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EA684u) goto L_088EA684;
    return;
L_088EA684:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088EA690u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 634u, 0x0881F874u>(ctx, &aot_mem) && ctx.pc == 0x088EA690u) goto L_088EA690;
    return;
L_088EA690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EA6A8u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EA6A8u) goto L_088EA6A8;
    return;
L_088EA6A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EA6C0u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EA6C0u) goto L_088EA6C0;
    return;
L_088EA6C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088EA6D8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 348u, 0x0881E25Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA6D8u) goto L_088EA6D8;
    return;
L_088EA6D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23252)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23256)));
    ctx.gpr[31] = (0x088EA718u);
    ctx.gpr[6] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem) && ctx.pc == 0x088EA718u) goto L_088EA718;
    return;
L_088EA718:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23244)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23248)));
    ctx.gpr[5] = (ctx.gpr[3] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] & ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23236)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23240)));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088EA748;
      }
      goto L_088EA740;
    }
L_088EA740:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088EA758;
      }
      goto L_088EA748;
    }
L_088EA748:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
      if (branch_taken) {
          goto L_088EA764;
      }
      goto L_088EA750;
    }
L_088EA750:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB038;
      }
      goto L_088EA758;
    }
L_088EA758:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    goto L_088EA764;
L_088EA764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EA77Cu);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EA77Cu) goto L_088EA77C;
    return;
L_088EA77C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088EA790u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 501u, 0x0881EE20u>(ctx, &aot_mem) && ctx.pc == 0x088EA790u) goto L_088EA790;
    return;
L_088EA790:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (ctx.gpr[23] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EA7B0u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EA7B0u) goto L_088EA7B0;
    return;
L_088EA7B0:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088EA7D8u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 461u, 0x08A93198u>(ctx, &aot_mem) && ctx.pc == 0x088EA7D8u) goto L_088EA7D8;
    return;
L_088EA7D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA86C;
      }
      goto L_088EA7E0;
    }
L_088EA7E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EA86C;
      }
      goto L_088EA804;
    }
L_088EA804:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA86C;
      }
      goto L_088EA840;
    }
L_088EA840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EA858u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EA858u) goto L_088EA858;
    return;
L_088EA858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088EA86C;
L_088EA86C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
      if (branch_taken) {
          goto L_088EADD0;
      }
      goto L_088EA874;
    }
L_088EA874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[30] & 255u);
    ctx.gpr[30] = (ctx.gpr[5] << 6u);
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
      if (branch_taken) {
          goto L_088EA934;
      }
      goto L_088EA898;
    }
L_088EA898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EA934;
      }
      goto L_088EA8A8;
    }
L_088EA8A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EA8C0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EA8C0u) goto L_088EA8C0;
    return;
L_088EA8C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EA8D8u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EA8D8u) goto L_088EA8D8;
    return;
L_088EA8D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
        goto L_088EA914;
    }
    goto L_088EA900;
L_088EA900:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    goto L_088EA914;
L_088EA914:
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(244))))));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088EA934u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    goto L_088EB674;
L_088EA934:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088EA948u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 36u, 0x088E43E0u>(ctx, &aot_mem) && ctx.pc == 0x088EA948u) goto L_088EA948;
    return;
L_088EA948:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EA9DC;
      }
      goto L_088EA950;
    }
L_088EA950:
    ctx.gpr[4] = (0u | 255u);
    if (ctx.gpr[18] == ctx.gpr[4]) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
        goto L_088EA988;
    }
    goto L_088EA95C;
L_088EA95C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[18] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EA9C0;
      }
      goto L_088EA984;
    }
L_088EA984:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    goto L_088EA988;
L_088EA988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EA9A0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EA9A0u) goto L_088EA9A0;
    return;
L_088EA9A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[31] = (0x088EA9C0u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 486u, 0x0881ECDCu>(ctx, &aot_mem) && ctx.pc == 0x088EA9C0u) goto L_088EA9C0;
    return;
L_088EA9C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
        goto L_088EAD2C;
    }
    goto L_088EA9CC;
L_088EA9CC:
    ctx.gpr[31] = (0x088EA9D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 780u, 0x0890F68Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA9D4u) goto L_088EA9D4;
    return;
L_088EA9D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
      if (branch_taken) {
          goto L_088EAD2C;
      }
      goto L_088EA9DC;
    }
L_088EA9DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088EA9E8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 108u, 0x089387ACu>(ctx, &aot_mem) && ctx.pc == 0x088EA9E8u) goto L_088EA9E8;
    return;
L_088EA9E8:
    ctx.gpr[31] = (0x088EA9F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x088EA9F0u) goto L_088EA9F0;
    return;
L_088EA9F0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
        goto L_088EAD2C;
    }
    goto L_088EA9F8;
L_088EA9F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(232));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EAA10u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EAA10u) goto L_088EAA10;
    return;
L_088EAA10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088EAA2Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EAA2Cu) goto L_088EAA2C;
    return;
L_088EAA2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x088EAA44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 461u, 0x08A93198u>(ctx, &aot_mem) && ctx.pc == 0x088EAA44u) goto L_088EAA44;
    return;
L_088EAA44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EAA70;
      }
      goto L_088EAA4C;
    }
L_088EAA4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088EAA70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x088EAA70u) goto L_088EAA70;
    return;
L_088EAA70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088EAABC;
      }
      goto L_088EAA7C;
    }
L_088EAA7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EAA94u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EAA94u) goto L_088EAA94;
    return;
L_088EAA94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EAC2C;
      }
      goto L_088EAABC;
    }
L_088EAABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EAAD4u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EAAD4u) goto L_088EAAD4;
    return;
L_088EAAD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
        goto L_088EAB8C;
    }
    goto L_088EAAEC;
L_088EAAEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EAB04u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EAB04u) goto L_088EAB04;
    return;
L_088EAB04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088EAB18u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 501u, 0x0881EE20u>(ctx, &aot_mem) && ctx.pc == 0x088EAB18u) goto L_088EAB18;
    return;
L_088EAB18:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088EAB88;
      }
      goto L_088EAB28;
    }
L_088EAB28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EAB40u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EAB40u) goto L_088EAB40;
    return;
L_088EAB40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EAB58u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EAB58u) goto L_088EAB58;
    return;
L_088EAB58:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088EAB88;
      }
      goto L_088EAB60;
    }
L_088EAB60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EAB78u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EAB78u) goto L_088EAB78;
    return;
L_088EAB78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088EAB88u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 583u, 0x0881F474u>(ctx, &aot_mem) && ctx.pc == 0x088EAB88u) goto L_088EAB88;
    return;
L_088EAB88:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    goto L_088EAB8C;
L_088EAB8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EABA4u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EABA4u) goto L_088EABA4;
    return;
L_088EABA4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 4u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x088EABC4u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 486u, 0x0881ECDCu>(ctx, &aot_mem) && ctx.pc == 0x088EABC4u) goto L_088EABC4;
    return;
L_088EABC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EABDCu);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EABDCu) goto L_088EABDC;
    return;
L_088EABDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088EABF4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 348u, 0x0881E25Cu>(ctx, &aot_mem) && ctx.pc == 0x088EABF4u) goto L_088EABF4;
    return;
L_088EABF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EAC0Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EAC0Cu) goto L_088EAC0C;
    return;
L_088EAC0C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[31] = (0x088EAC2Cu);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 486u, 0x0881ECDCu>(ctx, &aot_mem) && ctx.pc == 0x088EAC2Cu) goto L_088EAC2C;
    return;
L_088EAC2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EAC44u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EAC44u) goto L_088EAC44;
    return;
L_088EAC44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EAC60u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 348u, 0x0881E25Cu>(ctx, &aot_mem) && ctx.pc == 0x088EAC60u) goto L_088EAC60;
    return;
L_088EAC60:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EAC7Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EAC7Cu) goto L_088EAC7C;
    return;
L_088EAC7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EAC94u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EAC94u) goto L_088EAC94;
    return;
L_088EAC94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EAD04;
      }
      goto L_088EACAC;
    }
L_088EACAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EAD04;
      }
      goto L_088EACB8;
    }
L_088EACB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EAD04;
      }
      goto L_088EACD0;
    }
L_088EACD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088EAD04;
      }
      goto L_088EACDC;
    }
L_088EACDC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088EACE8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 574u, 0x0881F37Cu>(ctx, &aot_mem) && ctx.pc == 0x088EACE8u) goto L_088EACE8;
    return;
L_088EACE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EAD04;
      }
      goto L_088EACF8;
    }
L_088EACF8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088EAD04u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x088EAD04u) goto L_088EAD04;
    return;
L_088EAD04:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088EAD1C;
      }
      goto L_088EAD14;
    }
L_088EAD14:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_088EAD1C;
L_088EAD1C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088EAD28u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 428u, 0x088E3464u>(ctx, &aot_mem) && ctx.pc == 0x088EAD28u) goto L_088EAD28;
    return;
L_088EAD28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    goto L_088EAD2C;
L_088EAD2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088EAD44u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EAD44u) goto L_088EAD44;
    return;
L_088EAD44:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088EAD5Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881FB44u>(ctx, &aot_mem) && ctx.pc == 0x088EAD5Cu) goto L_088EAD5C;
    return;
L_088EAD5C:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EADA8u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EADA8u) goto L_088EADA8;
    return;
L_088EADA8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EADC8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 439u, 0x08822484u>(ctx, &aot_mem) && ctx.pc == 0x088EADC8u) goto L_088EADC8;
    return;
L_088EADC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB038;
      }
      goto L_088EADD0;
    }
L_088EADD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB038;
      }
      goto L_088EADDC;
    }
L_088EADDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EADF4u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EADF4u) goto L_088EADF4;
    return;
L_088EADF4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 4u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x088EAE18u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 486u, 0x0881ECDCu>(ctx, &aot_mem) && ctx.pc == 0x088EAE18u) goto L_088EAE18;
    return;
L_088EAE18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088EAE30u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EAE30u) goto L_088EAE30;
    return;
L_088EAE30:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EAE48u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881FB44u>(ctx, &aot_mem) && ctx.pc == 0x088EAE48u) goto L_088EAE48;
    return;
L_088EAE48:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[18]);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EAEA0u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EAEA0u) goto L_088EAEA0;
    return;
L_088EAEA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088EAEC0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 439u, 0x08822484u>(ctx, &aot_mem) && ctx.pc == 0x088EAEC0u) goto L_088EAEC0;
    return;
L_088EAEC0:
    ctx.gpr[4] = (0u | 54u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8681)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(115));
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(127));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(139));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[18]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(155), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EAF38u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 164u, 0x088E4C6Cu>(ctx, &aot_mem) && ctx.pc == 0x088EAF38u) goto L_088EAF38;
    return;
L_088EAF38:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(244))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(157), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(158), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(159), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[22] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(127));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(139));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[1] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(151), ctx.gpr[1]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(154), ctx.gpr[1]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EB038u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x088EB038u) goto L_088EB038;
    return;
L_088EB038:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x088EB0C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x088EB0C4u) goto L_088EB0C4;
    return;
L_088EB0C4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB0FC;
      }
      goto L_088EB0D4;
    }
L_088EB0D4:
    ctx.gpr[31] = (0x088EB0DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 327u, 0x08911284u>(ctx, &aot_mem) && ctx.pc == 0x088EB0DCu) goto L_088EB0DC;
    return;
L_088EB0DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB0F4;
      }
      goto L_088EB0E4;
    }
L_088EB0E4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[20] = (0u | 22u);
      if (branch_taken) {
          goto L_088EB104;
      }
      goto L_088EB0EC;
    }
L_088EB0EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB138;
      }
      goto L_088EB0F4;
    }
L_088EB0F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB64C;
      }
      goto L_088EB0FC;
    }
L_088EB0FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB64C;
      }
      goto L_088EB104;
    }
L_088EB104:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x088EB11Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x088EB11Cu) goto L_088EB11C;
    return;
L_088EB11C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EB128u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 405u, 0x08909804u>(ctx, &aot_mem) && ctx.pc == 0x088EB128u) goto L_088EB128;
    return;
L_088EB128:
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088EB138u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x088EB138u) goto L_088EB138;
    return;
L_088EB138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088EB1DC;
      }
      goto L_088EB144;
    }
L_088EB144:
    ctx.gpr[31] = (0x088EB14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 273u, 0x088954ACu>(ctx, &aot_mem) && ctx.pc == 0x088EB14Cu) goto L_088EB14C;
    return;
L_088EB14C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB1DC;
      }
      goto L_088EB154;
    }
L_088EB154:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EB1DC;
      }
      goto L_088EB17C;
    }
L_088EB17C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EB18Cu);
    ctx.gpr[6] = (0u | 218u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088EB18Cu) goto L_088EB18C;
    return;
L_088EB18C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EB1AC;
      }
      goto L_088EB198;
    }
L_088EB198:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EB1A8u);
    ctx.gpr[6] = (0u | 172u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088EB1A8u) goto L_088EB1A8;
    return;
L_088EB1A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088EB1AC;
L_088EB1AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB1DC;
      }
      goto L_088EB1B4;
    }
L_088EB1B4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (16059u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 48060u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EB1DC;
      }
      goto L_088EB1D4;
    }
L_088EB1D4:
    ctx.gpr[31] = (0x088EB1DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem) && ctx.pc == 0x088EB1DCu) goto L_088EB1DC;
    return;
L_088EB1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[5] = (0u | 50u);
      if (branch_taken) {
          goto L_088EB238;
      }
      goto L_088EB1E8;
    }
L_088EB1E8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EB238;
      }
      goto L_088EB1F0;
    }
L_088EB1F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2236)));
        goto L_088EB214;
    }
    goto L_088EB200;
L_088EB200:
    ctx.gpr[31] = (0x088EB208u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EB208u) goto L_088EB208;
    return;
L_088EB208:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB238;
      }
      goto L_088EB210;
    }
L_088EB210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2236)));
    goto L_088EB214;
L_088EB214:
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EB238;
      }
      goto L_088EB220;
    }
L_088EB220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[20] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_088EB240;
      }
      goto L_088EB230;
    }
L_088EB230:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB24C;
      }
      goto L_088EB238;
    }
L_088EB238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB64C;
      }
      goto L_088EB240;
    }
L_088EB240:
    ctx.gpr[31] = (0x088EB248u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x088EB248u) goto L_088EB248;
    return;
L_088EB248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    goto L_088EB24C;
L_088EB24C:
    ctx.gpr[5] = (0u | 51u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EB26C;
      }
      goto L_088EB258;
    }
L_088EB258:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EB264u);
    ctx.gpr[5] = (0u | 50u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x088EB264u) goto L_088EB264;
    return;
L_088EB264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB2F4;
      }
      goto L_088EB26C;
    }
L_088EB26C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB2E8;
      }
      goto L_088EB274;
    }
L_088EB274:
    ctx.gpr[31] = (0x088EB27Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EB27Cu) goto L_088EB27C;
    return;
L_088EB27C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB2E8;
      }
      goto L_088EB284;
    }
L_088EB284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088EB2E8;
      }
      goto L_088EB290;
    }
L_088EB290:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23252)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23256)));
    ctx.gpr[31] = (0x088EB2C4u);
    ctx.gpr[6] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem) && ctx.pc == 0x088EB2C4u) goto L_088EB2C4;
    return;
L_088EB2C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23176)));
    ctx.gpr[4] = (ctx.gpr[2] & ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23236)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23240)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[3] & ctx.gpr[5]);
      if (branch_taken) {
          goto L_088EB2F4;
      }
      goto L_088EB2E0;
    }
L_088EB2E0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088EB2F4;
      }
      goto L_088EB2E8;
    }
L_088EB2E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EB2F4u);
    ctx.gpr[5] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x088EB2F4u) goto L_088EB2F4;
    return;
L_088EB2F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EB30Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x088EB30Cu) goto L_088EB30C;
    return;
L_088EB30C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088EB38C;
      }
      goto L_088EB324;
    }
L_088EB324:
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (49520u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[29] | 0u);
    goto L_088EB34C;
L_088EB34C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088EB35Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088EB35Cu) goto L_088EB35C;
    return;
L_088EB35C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB378;
      }
      goto L_088EB368;
    }
L_088EB368:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_088EB378;
L_088EB378:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088EB34C;
      }
      goto L_088EB38C;
    }
L_088EB38C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[6] = (ctx.gpr[5] & 8192u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
      if (branch_taken) {
          goto L_088EB3E4;
      }
      goto L_088EB39C;
    }
L_088EB39C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088EB3E8;
      }
      goto L_088EB3A4;
    }
L_088EB3A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088EB3E4;
      }
      goto L_088EB3C0;
    }
L_088EB3C0:
    ctx.gpr[5] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 215u);
        goto L_088EB3CC;
    }
    goto L_088EB3CC;
L_088EB3CC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088EB3DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088EB3DCu) goto L_088EB3DC;
    return;
L_088EB3DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088EB3F8;
      }
      goto L_088EB3E4;
    }
L_088EB3E4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_088EB3E8;
L_088EB3E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EB3F4u);
    ctx.gpr[6] = (0u | 214u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088EB3F4u) goto L_088EB3F4;
    return;
L_088EB3F4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_088EB3F8;
L_088EB3F8:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
        goto L_088EB41C;
    }
    goto L_088EB400;
L_088EB400:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EB628;
      }
      goto L_088EB418;
    }
L_088EB418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    goto L_088EB41C;
L_088EB41C:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EB628;
      }
      goto L_088EB428;
    }
L_088EB428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(476)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EB628;
      }
      goto L_088EB438;
    }
L_088EB438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
      if (branch_taken) {
          goto L_088EB4A0;
      }
      goto L_088EB448;
    }
L_088EB448:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB4A0;
      }
      goto L_088EB450;
    }
L_088EB450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088EB4A0;
      }
      goto L_088EB46C;
    }
L_088EB46C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 215u);
        goto L_088EB480;
    }
    goto L_088EB480;
L_088EB480:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EB498u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088EB498u) goto L_088EB498;
    return;
L_088EB498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088EB60C;
      }
      goto L_088EB4A0;
    }
L_088EB4A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[20] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088EB524;
      }
      goto L_088EB4B0;
    }
L_088EB4B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EB524;
      }
      goto L_088EB4C0;
    }
L_088EB4C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23252)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23256)));
    ctx.gpr[31] = (0x088EB4F4u);
    ctx.gpr[6] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem) && ctx.pc == 0x088EB4F4u) goto L_088EB4F4;
    return;
L_088EB4F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23228)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23232)));
    ctx.gpr[5] = (ctx.gpr[3] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] & ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23236)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23240)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088EB51C;
      }
      goto L_088EB514;
    }
L_088EB514:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088EB524;
      }
      goto L_088EB51C;
    }
L_088EB51C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088EB60C;
      }
      goto L_088EB524;
    }
L_088EB524:
    ctx.gpr[31] = (0x088EB52Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EB52Cu) goto L_088EB52C;
    return;
L_088EB52C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088EB5F4;
      }
      goto L_088EB534;
    }
L_088EB534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088EB5F4;
      }
      goto L_088EB540;
    }
L_088EB540:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23252)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23256)));
    ctx.gpr[31] = (0x088EB574u);
    ctx.gpr[6] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem) && ctx.pc == 0x088EB574u) goto L_088EB574;
    return;
L_088EB574:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23228)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23232)));
    ctx.gpr[5] = (ctx.gpr[3] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] & ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23236)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23240)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088EB59C;
      }
      goto L_088EB594;
    }
L_088EB594:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088EB5F4;
      }
      goto L_088EB59C;
    }
L_088EB59C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] >> 22u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[5] = (16640u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088EB5D8;
      }
      goto L_088EB5BC;
    }
L_088EB5BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088EB5D0u);
    ctx.gpr[7] = (0u | 172u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088EB5D0u) goto L_088EB5D0;
    return;
L_088EB5D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088EB60C;
      }
      goto L_088EB5D8;
    }
L_088EB5D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[31] = (0x088EB5ECu);
    ctx.gpr[7] = (0u | 218u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088EB5ECu) goto L_088EB5EC;
    return;
L_088EB5EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088EB60C;
      }
      goto L_088EB5F4;
    }
L_088EB5F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EB608u);
    ctx.gpr[7] = (0u | 214u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x088EB608u) goto L_088EB608;
    return;
L_088EB608:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_088EB60C;
L_088EB60C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB628;
      }
      goto L_088EB614;
    }
L_088EB614:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088EB628;
L_088EB628:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB64C;
      }
      goto L_088EB630;
    }
L_088EB630:
    ctx.gpr[31] = (0x088EB638u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EB638u) goto L_088EB638;
    return;
L_088EB638:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EB64C;
      }
      goto L_088EB640;
    }
L_088EB640:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EB64Cu);
    ctx.gpr[5] = (0u | 137u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x088EB64Cu) goto L_088EB64C;
    return;
L_088EB64C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB674:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[31]);
    ctx.gpr[22] = (ctx.gpr[8] & 255u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(121), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[20] = (0u | 16u);
    ctx.gpr[8] = (16512u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[6] | 0u);
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[9]);
      if (branch_taken) {
          goto L_088EB758;
      }
      goto L_088EB704;
    }
L_088EB704:
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x088EB714u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x088EB714u) goto L_088EB714;
    return;
L_088EB714:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 46u);
      if (branch_taken) {
          goto L_088EB758;
      }
      goto L_088EB720;
    }
L_088EB720:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088EB758;
      }
      goto L_088EB728;
    }
L_088EB728:
    ctx.gpr[31] = (0x088EB730u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x088EB730u) goto L_088EB730;
    return;
L_088EB730:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB758;
      }
      goto L_088EB738;
    }
L_088EB738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB758;
      }
      goto L_088EB744;
    }
L_088EB744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EB770;
      }
      goto L_088EB758;
    }
L_088EB758:
    ctx.gpr[31] = (0x088EB760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088EB760u) goto L_088EB760;
    return;
L_088EB760:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    ctx.gpr[16] = (0u | 17u);
      if (branch_taken) {
          goto L_088EB778;
      }
      goto L_088EB768;
    }
L_088EB768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB7C4;
      }
      goto L_088EB770;
    }
L_088EB770:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem); return;
      }
      goto L_088EB778;
    }
L_088EB778:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[19];
    ctx.gpr[4] = (16448u << 16u);
      if (branch_taken) {
          goto L_088EB7C4;
      }
      goto L_088EB780;
    }
L_088EB780:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EB7C4;
      }
      goto L_088EB794;
    }
L_088EB794:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(316)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(316), ctx.gpr[5]);
    goto L_088EB7C4;
L_088EB7C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088EB7D8;
      }
      goto L_088EB7D0;
    }
L_088EB7D0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088EB7D8;
L_088EB7D8:
    ctx.gpr[31] = (0x088EB7E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088EB7E0u) goto L_088EB7E0;
    return;
L_088EB7E0:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088EB8DC;
      }
      goto L_088EB7E8;
    }
L_088EB7E8:
    ctx.gpr[31] = (0x088EB7F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088EB7F0u) goto L_088EB7F0;
    return;
L_088EB7F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3261))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB810;
      }
      goto L_088EB800;
    }
L_088EB800:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EB818;
      }
      goto L_088EB808;
    }
L_088EB808:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB868;
      }
      goto L_088EB810;
    }
L_088EB810:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem); return;
      }
      goto L_088EB818;
    }
L_088EB818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB868;
      }
      goto L_088EB834;
    }
L_088EB834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (ctx.gpr[4] ^ 13u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 15u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088EB868;
      }
      goto L_088EB858;
    }
L_088EB858:
    ctx.gpr[31] = (0x088EB860u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 762u, 0x089AB910u>(ctx, &aot_mem) && ctx.pc == 0x088EB860u) goto L_088EB860;
    return;
L_088EB860:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB878;
      }
      goto L_088EB868;
    }
L_088EB868:
    if (ctx.gpr[23] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_088EB88C;
    }
    goto L_088EB870;
L_088EB870:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 33u);
      if (branch_taken) {
          goto L_088EB880;
      }
      goto L_088EB878;
    }
L_088EB878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem); return;
      }
      goto L_088EB880;
    }
L_088EB880:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088EB8B8;
      }
      goto L_088EB888;
    }
L_088EB888:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    goto L_088EB88C;
L_088EB88C:
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(335)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EB8D4;
      }
      goto L_088EB8B8;
    }
L_088EB8B8:
    ctx.gpr[31] = (0x088EB8C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088EB8C0u) goto L_088EB8C0;
    return;
L_088EB8C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088EB8CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 668u, 0x0894751Cu>(ctx, &aot_mem) && ctx.pc == 0x088EB8CCu) goto L_088EB8CC;
    return;
L_088EB8CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB8DC;
      }
      goto L_088EB8D4;
    }
L_088EB8D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem); return;
      }
      goto L_088EB8DC;
    }
L_088EB8DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EB910;
      }
      goto L_088EB8EC;
    }
L_088EB8EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EB910;
      }
      goto L_088EB8FC;
    }
L_088EB8FC:
    ctx.gpr[16] = (0u | 46u);
    if (ctx.gpr[23] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(464)));
        goto L_088EB918;
    }
    goto L_088EB908;
L_088EB908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB928;
      }
      goto L_088EB910;
    }
L_088EB910:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem); return;
      }
      goto L_088EB918;
    }
L_088EB918:
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB948;
      }
      goto L_088EB928;
    }
L_088EB928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB950;
      }
      goto L_088EB940;
    }
L_088EB940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB978;
      }
      goto L_088EB948;
    }
L_088EB948:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem); return;
      }
      goto L_088EB950;
    }
L_088EB950:
    ctx.gpr[31] = (0x088EB958u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x088EB958u) goto L_088EB958;
    return;
L_088EB958:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB970;
      }
      goto L_088EB960;
    }
L_088EB960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EB978;
      }
      goto L_088EB970;
    }
L_088EB970:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088EB994;
      }
      goto L_088EB978;
    }
L_088EB978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EB99C;
      }
      goto L_088EB98C;
    }
L_088EB98C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB9CC;
      }
      goto L_088EB994;
    }
L_088EB994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem); return;
      }
      goto L_088EB99C;
    }
L_088EB99C:
    ctx.gpr[31] = (0x088EB9A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088EB9A4u) goto L_088EB9A4;
    return;
L_088EB9A4:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088EB9CC;
      }
      goto L_088EB9AC;
    }
L_088EB9AC:
    ctx.gpr[31] = (0x088EB9B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x088EB9B4u) goto L_088EB9B4;
    return;
L_088EB9B4:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088EB9CC;
      }
      goto L_088EB9BC;
    }
L_088EB9BC:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[16];
    ctx.gpr[4] = (0u | 44u);
      if (branch_taken) {
          goto L_088EB9CC;
      }
      goto L_088EB9C4;
    }
L_088EB9C4:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088EB9F0;
      }
      goto L_088EB9CC;
    }
L_088EB9CC:
    ctx.gpr[31] = (0x088EB9D4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EB9D4u) goto L_088EB9D4;
    return;
L_088EB9D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB9F8;
      }
      goto L_088EB9DC;
    }
L_088EB9DC:
    ctx.gpr[4] = (16040u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_088EBA04;
      }
      goto L_088EB9F0;
    }
L_088EB9F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem); return;
      }
      goto L_088EB9F8;
    }
L_088EB9F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1364)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_088EBA04;
L_088EBA04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 30u);
      if (branch_taken) {
          goto L_088EBA20;
      }
      goto L_088EBA10;
    }
L_088EBA10:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088EBA20;
      }
      goto L_088EBA18;
    }
L_088EBA18:
    ctx.gpr[4] = (17098u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088EBA20;
L_088EBA20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBB1C;
      }
      goto L_088EBA2C;
    }
L_088EBA2C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBB1C;
      }
      goto L_088EBA34;
    }
L_088EBA34:
    ctx.gpr[31] = (0x088EBA3Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EBA3Cu) goto L_088EBA3C;
    return;
L_088EBA3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBB1C;
      }
      goto L_088EBA44;
    }
L_088EBA44:
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088EBA50u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x088EBA50u) goto L_088EBA50;
    return;
L_088EBA50:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088EBA5Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 58u, 0x08AD0600u>(ctx, &aot_mem) && ctx.pc == 0x088EBA5Cu) goto L_088EBA5C;
    return;
L_088EBA5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBA84;
      }
      goto L_088EBA64;
    }
L_088EBA64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 19u);
      if (branch_taken) {
          goto L_088EBA78;
      }
      goto L_088EBA70;
    }
L_088EBA70:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088EBA84;
      }
      goto L_088EBA78;
    }
L_088EBA78:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_088EBA84;
L_088EBA84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 14u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBB1C;
      }
      goto L_088EBAA0;
    }
L_088EBAA0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBB1C;
      }
      goto L_088EBAB4;
    }
L_088EBAB4:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8680)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EBADCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 164u, 0x088E4C6Cu>(ctx, &aot_mem) && ctx.pc == 0x088EBADCu) goto L_088EBADC;
    return;
L_088EBADC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088EBB00;
    }
    goto L_088EBB00;
L_088EBB00:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EBB1Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x088EBB1Cu) goto L_088EBB1C;
    return;
L_088EBB1C:
    ctx.gpr[31] = (0x088EBB24u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EBB24u) goto L_088EBB24;
    return;
L_088EBB24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088EBB64;
      }
      goto L_088EBB2C;
    }
L_088EBB2C:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_088EBB5C;
      }
      goto L_088EBB34;
    }
L_088EBB34:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 8u);
      if (branch_taken) {
          goto L_088EBB5C;
      }
      goto L_088EBB3C;
    }
L_088EBB3C:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 9u);
      if (branch_taken) {
          goto L_088EBB5C;
      }
      goto L_088EBB44;
    }
L_088EBB44:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_088EBB5C;
      }
      goto L_088EBB4C;
    }
L_088EBB4C:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 11u);
      if (branch_taken) {
          goto L_088EBB5C;
      }
      goto L_088EBB54;
    }
L_088EBB54:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088EBB64;
      }
      goto L_088EBB5C;
    }
L_088EBB5C:
    ctx.gpr[4] = (0u | 200u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1935), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088EBB64;
L_088EBB64:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EBBCC;
      }
      goto L_088EBB78;
    }
L_088EBB78:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088EBB8Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 563u, 0x088E3DD8u>(ctx, &aot_mem) && ctx.pc == 0x088EBB8Cu) goto L_088EBB8C;
    return;
L_088EBB8C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EBC68;
      }
      goto L_088EBB94;
    }
L_088EBB94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088EBBA0u);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 211u, 0x0886D4F4u>(ctx, &aot_mem) && ctx.pc == 0x088EBBA0u) goto L_088EBBA0;
    return;
L_088EBBA0:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088EBBB8;
      }
      goto L_088EBBB0;
    }
L_088EBBB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 42u);
      if (branch_taken) {
          goto L_088EBBBC;
      }
      goto L_088EBBB8;
    }
L_088EBBB8:
    ctx.gpr[20] = (0u | 40u);
    goto L_088EBBBC;
L_088EBBBC:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088EBC68;
      }
      goto L_088EBBCC;
    }
L_088EBBCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EBC68;
      }
      goto L_088EBBDC;
    }
L_088EBBDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088EBBE8u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 211u, 0x0886D4F4u>(ctx, &aot_mem) && ctx.pc == 0x088EBBE8u) goto L_088EBBE8;
    return;
L_088EBBE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBC3C;
      }
      goto L_088EBBF4;
    }
L_088EBBF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EBC3C;
      }
      goto L_088EBC04;
    }
L_088EBC04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088EBC2C;
      }
      goto L_088EBC24;
    }
L_088EBC24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 42u);
      if (branch_taken) {
          goto L_088EBC30;
      }
      goto L_088EBC2C;
    }
L_088EBC2C:
    ctx.gpr[20] = (0u | 40u);
    goto L_088EBC30;
L_088EBC30:
    ctx.gpr[4] = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EBC64;
      }
      goto L_088EBC3C;
    }
L_088EBC3C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBC60;
      }
      goto L_088EBC44;
    }
L_088EBC44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EBC60;
      }
      goto L_088EBC58;
    }
L_088EBC58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 173u);
      if (branch_taken) {
          goto L_088EBC64;
      }
      goto L_088EBC60;
    }
L_088EBC60:
    ctx.gpr[20] = (0u | 16u);
    goto L_088EBC64;
L_088EBC64:
    ctx.gpr[16] = (0u | 0u);
    goto L_088EBC68;
L_088EBC68:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 131u, 0x088EC5E0u>(ctx, &aot_mem); return;
      }
      goto L_088EBC70;
    }
L_088EBC70:
    ctx.gpr[4] = (ctx.gpr[23] < static_cast<std::uint32_t>(48) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 131u, 0x088EC5E0u>(ctx, &aot_mem); return;
      }
      goto L_088EBC7C;
    }
L_088EBC7C:
    ctx.gpr[23] = (ctx.gpr[23] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[23]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16224)));
    jump_target = ctx.gpr[1];
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EBC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EBCC0;
      }
      goto L_088EBCA8;
    }
L_088EBCA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EBCC8;
      }
      goto L_088EBCB8;
    }
L_088EBCB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBD20;
      }
      goto L_088EBCC0;
    }
L_088EBCC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem); return;
      }
      goto L_088EBCC8;
    }
L_088EBCC8:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088EBCDCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 563u, 0x088E3DD8u>(ctx, &aot_mem) && ctx.pc == 0x088EBCDCu) goto L_088EBCDC;
    return;
L_088EBCDC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EBD18;
      }
      goto L_088EBCE4;
    }
L_088EBCE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088EBCF0u);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 211u, 0x0886D4F4u>(ctx, &aot_mem) && ctx.pc == 0x088EBCF0u) goto L_088EBCF0;
    return;
L_088EBCF0:
    ctx.gpr[4] = (16384u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EBD04;
      }
      goto L_088EBCFC;
    }
L_088EBCFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 42u);
      if (branch_taken) {
          goto L_088EBD08;
      }
      goto L_088EBD04;
    }
L_088EBD04:
    ctx.gpr[20] = (0u | 40u);
    goto L_088EBD08;
L_088EBD08:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EBD7C;
      }
      goto L_088EBD18;
    }
L_088EBD18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 173u);
      if (branch_taken) {
          goto L_088EBD7C;
      }
      goto L_088EBD20;
    }
L_088EBD20:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EBD48;
      }
      goto L_088EBD2C;
    }
L_088EBD2C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    // nop
      if (branch_taken) {
          goto L_088EBD7C;
      }
      goto L_088EBD34;
    }
L_088EBD34:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) > 0;
    // nop
      if (branch_taken) {
          goto L_088EBD60;
      }
      goto L_088EBD3C;
    }
L_088EBD3C:
    ctx.gpr[20] = (0u | 28u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBD7C;
      }
      goto L_088EBD48;
    }
L_088EBD48:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EBD6C;
      }
      goto L_088EBD50;
    }
L_088EBD50:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EBD78;
      }
      goto L_088EBD58;
    }
L_088EBD58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBD7C;
      }
      goto L_088EBD60;
    }
L_088EBD60:
    ctx.gpr[20] = (0u | 29u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBD7C;
      }
      goto L_088EBD6C;
    }
L_088EBD6C:
    ctx.gpr[20] = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBD7C;
      }
      goto L_088EBD78;
    }
L_088EBD78:
    ctx.gpr[20] = (0u | 31u);
    goto L_088EBD7C;
L_088EBD7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 131u, 0x088EC5E0u>(ctx, &aot_mem); return;
      }
      goto L_088EBD84;
    }
L_088EBD84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EBDB0;
      }
      goto L_088EBD98;
    }
L_088EBD98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EBDB8;
      }
      goto L_088EBDA8;
    }
L_088EBDA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBE10;
      }
      goto L_088EBDB0;
    }
L_088EBDB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem); return;
      }
      goto L_088EBDB8;
    }
L_088EBDB8:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088EBDCCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 563u, 0x088E3DD8u>(ctx, &aot_mem) && ctx.pc == 0x088EBDCCu) goto L_088EBDCC;
    return;
L_088EBDCC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EBE08;
      }
      goto L_088EBDD4;
    }
L_088EBDD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088EBDE0u);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 211u, 0x0886D4F4u>(ctx, &aot_mem) && ctx.pc == 0x088EBDE0u) goto L_088EBDE0;
    return;
L_088EBDE0:
    ctx.gpr[4] = (16384u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EBDF4;
      }
      goto L_088EBDEC;
    }
L_088EBDEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 42u);
      if (branch_taken) {
          goto L_088EBDF8;
      }
      goto L_088EBDF4;
    }
L_088EBDF4:
    ctx.gpr[20] = (0u | 40u);
    goto L_088EBDF8;
L_088EBDF8:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EBE6C;
      }
      goto L_088EBE08;
    }
L_088EBE08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 173u);
      if (branch_taken) {
          goto L_088EBE6C;
      }
      goto L_088EBE10;
    }
L_088EBE10:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EBE38;
      }
      goto L_088EBE1C;
    }
L_088EBE1C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    // nop
      if (branch_taken) {
          goto L_088EBE6C;
      }
      goto L_088EBE24;
    }
L_088EBE24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) > 0;
    // nop
      if (branch_taken) {
          goto L_088EBE50;
      }
      goto L_088EBE2C;
    }
L_088EBE2C:
    ctx.gpr[20] = (0u | 28u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBE6C;
      }
      goto L_088EBE38;
    }
L_088EBE38:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EBE5C;
      }
      goto L_088EBE40;
    }
L_088EBE40:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EBE68;
      }
      goto L_088EBE48;
    }
L_088EBE48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBE6C;
      }
      goto L_088EBE50;
    }
L_088EBE50:
    ctx.gpr[20] = (0u | 29u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBE6C;
      }
      goto L_088EBE5C;
    }
L_088EBE5C:
    ctx.gpr[20] = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBE6C;
      }
      goto L_088EBE68;
    }
L_088EBE68:
    ctx.gpr[20] = (0u | 31u);
    goto L_088EBE6C;
L_088EBE6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 131u, 0x088EC5E0u>(ctx, &aot_mem); return;
      }
      goto L_088EBE74;
    }
L_088EBE74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EBEA0;
      }
      goto L_088EBE88;
    }
L_088EBE88:
    ctx.gpr[31] = (0x088EBE90u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EBE90u) goto L_088EBE90;
    return;
L_088EBE90:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
        goto L_088EBEB8;
    }
    goto L_088EBE98;
L_088EBE98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(464)));
      if (branch_taken) {
          goto L_088EBEA8;
      }
      goto L_088EBEA0;
    }
L_088EBEA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem); return;
      }
      goto L_088EBEA8;
    }
L_088EBEA8:
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBEC8;
      }
      goto L_088EBEB4;
    }
L_088EBEB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    goto L_088EBEB8;
L_088EBEB8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EBEC8;
      }
      goto L_088EBEC0;
    }
L_088EBEC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088EBF2C;
      }
      goto L_088EBEC8;
    }
L_088EBEC8:
    ctx.gpr[4] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 31u);
      if (branch_taken) {
          goto L_088EBEF4;
      }
      goto L_088EBED4;
    }
L_088EBED4:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 29u);
      if (branch_taken) {
          goto L_088EBEF4;
      }
      goto L_088EBEDC;
    }
L_088EBEDC:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 28u);
      if (branch_taken) {
          goto L_088EBEF4;
      }
      goto L_088EBEE4;
    }
L_088EBEE4:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 34u);
      if (branch_taken) {
          goto L_088EBEF4;
      }
      goto L_088EBEEC;
    }
L_088EBEEC:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088EBEFC;
      }
      goto L_088EBEF4;
    }
L_088EBEF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088EBF2C;
      }
      goto L_088EBEFC;
    }
L_088EBEFC:
    ctx.gpr[4] = (0u | 21u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088EBF1C;
      }
      goto L_088EBF08;
    }
L_088EBF08:
    ctx.gpr[31] = (0x088EBF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088EBF10u) goto L_088EBF10;
    return;
L_088EBF10:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
      if (branch_taken) {
          goto L_088EBF2C;
      }
      goto L_088EBF1C;
    }
L_088EBF1C:
    ctx.gpr[31] = (0x088EBF24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088EBF24u) goto L_088EBF24;
    return;
L_088EBF24:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    goto L_088EBF2C;
L_088EBF2C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBFAC;
      }
      goto L_088EBF34;
    }
L_088EBF34:
    ctx.gpr[4] = (0u | 21u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088EBF9C;
      }
      goto L_088EBF40;
    }
L_088EBF40:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EBF68;
      }
      goto L_088EBF4C;
    }
L_088EBF4C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    // nop
      if (branch_taken) {
          goto L_088EBFA0;
      }
      goto L_088EBF54;
    }
L_088EBF54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) > 0;
    // nop
      if (branch_taken) {
          goto L_088EBF84;
      }
      goto L_088EBF5C;
    }
L_088EBF5C:
    ctx.gpr[20] = (0u | 28u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBFA0;
      }
      goto L_088EBF68;
    }
L_088EBF68:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EBF90;
      }
      goto L_088EBF70;
    }
L_088EBF70:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBFA0;
      }
      goto L_088EBF78;
    }
L_088EBF78:
    ctx.gpr[20] = (0u | 31u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBFA0;
      }
      goto L_088EBF84;
    }
L_088EBF84:
    ctx.gpr[20] = (0u | 29u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBFA0;
      }
      goto L_088EBF90;
    }
L_088EBF90:
    ctx.gpr[20] = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBFA0;
      }
      goto L_088EBF9C;
    }
L_088EBF9C:
    ctx.gpr[20] = (0u | 16u);
    goto L_088EBFA0;
L_088EBFA0:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 18u, 0x088EC0E0u>(ctx, &aot_mem); return;
      }
      goto L_088EBFAC;
    }
L_088EBFAC:
    ctx.gpr[4] = (ctx.gpr[30] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 18u, 0x088EC0E0u>(ctx, &aot_mem); return;
      }
      goto L_088EBFB8;
    }
L_088EBFB8:
    ctx.gpr[30] = (ctx.gpr[30] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[30]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16032)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EBFD0:
    ctx.gpr[20] = (0u | 20u);
    ctx.gpr[6] = (ctx.gpr[22] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088EBFE8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 547u, 0x088E3C60u>(ctx, &aot_mem) && ctx.pc == 0x088EBFE8u) goto L_088EBFE8;
    return;
L_088EBFE8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(121), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 18u, 0x088EC0E0u>(ctx, &aot_mem); return;
      }
      goto L_088EBFF8;
    }
L_088EBFF8:
    ctx.gpr[20] = (0u | 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x088EC000u; return;
}

void recomp_unit_0057(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0057_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_57(Runtime &runtime) {
    runtime.register_generated_unit(57u, 0x088E8000u, 16384u, &recomp_unit_0057, &recomp_unit_0057_entry);
    runtime.register_function(0x088E8000u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E800Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E802Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8054u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E807Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8084u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E808Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8094u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E809Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E80A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E80B8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E80C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E80C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E80D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E80F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8108u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8120u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8138u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8144u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E814Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8158u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8180u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8184u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8198u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E81A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E81B8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E81C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E81D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E81E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E81F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8200u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8208u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8210u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8218u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8230u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8238u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8248u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8254u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E825Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8264u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E826Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8274u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E827Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8288u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8294u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E829Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E82B8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E82C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E82D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E82E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E82ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8304u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8328u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8334u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8340u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8350u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8360u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E837Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E839Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E83ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E83B8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E83C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E83CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E83D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E83F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8400u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8418u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8428u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8430u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E843Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8448u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8450u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8458u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8464u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8488u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E84A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E84CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E84D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E84E0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E84ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E84F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8510u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E852Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8534u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8540u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8558u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8570u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8578u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8580u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8590u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8598u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E85A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E85B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E85D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E85ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E860Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8614u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8624u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8640u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E865Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8664u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8684u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E868Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8694u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E86A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E86D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E86F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8700u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E871Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8728u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8730u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8740u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E874Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8758u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8760u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8764u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8770u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8788u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8798u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87B8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8804u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8810u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8818u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8830u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8838u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8840u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8868u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8890u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8894u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E889Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E88ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E88B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E88C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E88CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E88DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E88E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8900u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8918u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8944u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8950u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8958u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8978u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8980u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E898Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8994u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E89A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E89D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A18u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A20u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A28u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A34u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A4Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A54u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A5Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A74u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A80u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A8Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8AACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8AE0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8AECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8AFCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B20u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B28u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B38u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B5Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B68u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B70u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B80u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B90u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8BACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8BB8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8BC0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8BD8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8BE4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C10u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C50u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C5Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C68u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C84u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C8Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C98u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8CA0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8CACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8CB4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8CC4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8CD4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8CE8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D00u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D14u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D24u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D30u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D54u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D6Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D74u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D88u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8DC0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8DC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8DD0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8DE0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8DE8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E0Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E20u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E58u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E64u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E6Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E74u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E7Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E90u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8EA4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8EB4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8EC0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8ED0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8EDCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8EECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8EF0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8EF8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F08u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F24u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F40u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F80u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F88u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F98u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8FB4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8FBCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8FD8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9008u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9014u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9020u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9028u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9030u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9044u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9054u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9060u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9070u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9074u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E907Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E908Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9090u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9098u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E90A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E90ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E90B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E90C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E90D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E90DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E90ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9108u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9110u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E912Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9134u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9148u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9180u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9188u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9190u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E91A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E91C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E91D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E91ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E91F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9210u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9218u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E922Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9264u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E926Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9274u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9284u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E92A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E92A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E92C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E92CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E92E0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9318u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9324u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9330u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9338u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9354u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9360u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9370u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E937Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9384u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E93A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E93A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E93BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E93F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E93FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9424u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9440u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9448u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9464u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E946Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9480u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E94B8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E94C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E94D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E94DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E94ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E94F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9518u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9520u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9540u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9548u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9550u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9558u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E957Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E95BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E95C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E95F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9608u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E962Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9648u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E969Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E96B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E96CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9700u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9714u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9734u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E973Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9744u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9774u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9784u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E97A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E97ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E97BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E97C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E97D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9858u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9874u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9888u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9898u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E98A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E98BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E98CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E98DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9910u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E991Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9928u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9940u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9964u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E996Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9984u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E99A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E99B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E99D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E99F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E99FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A20u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A30u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A40u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A50u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A5Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A6Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A98u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9AA4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9AC0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9ACCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9AECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B08u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B50u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B6Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B90u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B9Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9BA4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9BB0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9BC0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9BD0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9BE0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9BF0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C00u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C10u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C20u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C60u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9CC0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9CCCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9CE4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9CF0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9CF8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D14u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D20u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D38u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D4Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D5Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D7Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D8Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D9Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9DA4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9DACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9DC4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9DDCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9DECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9DFCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9E04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9E0Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9E7Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9E94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9EA0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9EA8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9EB8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9EC4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9EC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9ED8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9EF0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F08u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F14u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F18u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F24u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F54u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F58u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F60u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F6Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F80u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F88u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9FACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA018u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA064u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA08Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA0A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA0CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA0F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA104u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA11Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA12Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA13Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA154u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA1F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA204u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA210u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA220u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA228u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA26Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA278u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA284u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA2C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA2CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA32Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA360u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA378u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA3A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA3B0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA3C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA3C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA3CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA3D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA3E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA3ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA3F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA428u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA498u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA4B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA4D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA500u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA50Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA510u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA518u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA530u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA554u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA55Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA564u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA56Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA578u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA580u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA588u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA590u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA5A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA5C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA5ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA5F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA600u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA608u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA610u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA61Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA628u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA630u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA638u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA650u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA660u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA668u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA66Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA684u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA690u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA6A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA6C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA6D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA718u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA740u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA748u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA750u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA758u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA764u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA77Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA790u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA7B0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA7D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA7E0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA804u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA840u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA858u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA86Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA874u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA898u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA8A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA8C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA8D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA900u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA914u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA934u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA948u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA950u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA95Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA984u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA988u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA10u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA4Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA70u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA7Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAABCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAAD4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAAECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB18u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB28u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB40u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB58u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB60u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB88u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB8Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EABA4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EABC4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EABDCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EABF4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC0Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC60u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC7Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EACACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EACB8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EACD0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EACDCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EACE8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EACF8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD14u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD1Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD28u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD5Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EADA8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EADC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EADD0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EADDCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EADF4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAE18u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAE30u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAE48u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAEA0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAEC0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAF38u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB038u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB074u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB0C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB0D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB0DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB0E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB0ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB0F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB0FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB104u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB11Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB128u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB138u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB144u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB14Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB154u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB17Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB18Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB198u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB1A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB1ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB1B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB1D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB1DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB1E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB1F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB200u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB208u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB210u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB214u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB220u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB230u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB238u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB240u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB248u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB24Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB258u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB264u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB26Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB274u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB27Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB284u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB290u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB2C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB2E0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB2E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB2F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB30Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB324u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB34Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB35Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB368u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB378u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB38Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB39Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB3A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB3C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB3CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB3DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB3E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB3E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB3F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB3F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB400u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB418u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB41Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB428u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB438u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB448u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB450u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB46Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB480u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB498u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB4A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB4B0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB4C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB4F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB514u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB51Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB524u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB52Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB534u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB540u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB574u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB594u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB59Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB5BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB5D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB5D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB5ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB5F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB608u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB60Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB614u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB628u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB630u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB638u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB640u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB64Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB674u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB704u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB714u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB720u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB728u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB730u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB738u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB744u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB758u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB760u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB768u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB770u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB778u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB780u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB794u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB7C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB7D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB7D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB7E0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB7E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB7F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB800u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB808u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB810u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB818u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB834u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB858u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB860u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB868u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB870u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB878u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB880u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB888u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB88Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB8B8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB8C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB8CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB8D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB8DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB8ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB8FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB908u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB910u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB918u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB928u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB940u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB948u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB950u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB958u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB960u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB970u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB978u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB98Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB994u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB99Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB9A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB9ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB9B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB9BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB9C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB9CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB9D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB9DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB9F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB9F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA10u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA18u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA20u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA34u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA3Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA50u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA5Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA64u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA70u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA84u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBAA0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBAB4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBADCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB00u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB1Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB24u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB34u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB3Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB4Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB54u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB5Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB64u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB8Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBBA0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBBB0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBBB8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBBBCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBBCCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBBDCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBBE8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBBF4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC24u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC30u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC3Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC58u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC60u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC64u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC68u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC70u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC7Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBCA8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBCB8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBCC0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBCC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBCDCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBCE4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBCF0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBCFCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD08u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD18u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD20u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD34u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD3Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD48u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD50u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD58u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD60u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD6Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD7Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD84u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD98u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBDA8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBDB0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBDB8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBDCCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBDD4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBDE0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBDECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBDF4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBDF8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE08u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE10u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE1Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE24u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE38u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE40u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE48u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE50u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE5Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE68u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE6Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE74u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE88u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE90u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE98u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBEA0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBEA8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBEB4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBEB8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBEC0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBEC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBED4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBEDCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBEE4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBEECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBEF4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBEFCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF08u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF10u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF1Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF24u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF34u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF40u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF4Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF54u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF5Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF68u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF70u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF84u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF90u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF9Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBFA0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBFACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBFB8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBFD0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBFE8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBFF8u, &recomp_unit_0057, "recomp_unit_0057");
}
} // namespace psprecomp
