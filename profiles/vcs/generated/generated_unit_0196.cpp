#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0196[4093] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 10, 0, 0, 11,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20,
    0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30,
    0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0,
    0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 56, 0,
    0, 0, 0, 0, 57, 0, 58, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 62, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 63, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0,
    0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 75, 76, 0, 0, 0, 77, 78, 79, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 82, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 92, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0,
    0, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0,
    0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0,
    109, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0,
    0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 120, 0, 121, 0, 0, 122, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129,
    0, 130, 0, 0, 131, 0, 0, 132, 133, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 146, 147, 0, 0, 148, 0, 149, 0, 0, 0, 150,
    0, 0, 151, 0, 152, 0, 0, 153, 0, 154, 0, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 0, 162, 0, 0, 163, 164,
    0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 169, 170, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0,
    174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 181, 182, 0, 183,
    0, 0, 184, 0, 185, 0, 0, 186, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 0, 193,
    0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0,
    0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 219, 0, 220, 0, 221, 0, 222, 223, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 232, 0, 233, 0, 0, 234, 0, 235, 236,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 242, 0,
    0, 0, 0, 243, 0, 244, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0,
    0, 0, 250, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 256, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 263,
    0, 0, 0, 264, 265, 0, 266, 0, 267, 0, 0, 0, 0, 0, 268, 269, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 273,
    0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0,
    0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 289, 0,
    0, 290, 0, 0, 291, 0, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 0, 296, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0,
    0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 310,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 315, 0, 0,
    0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    319, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 333,
    0, 334, 0, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    340, 0, 0, 341, 0, 342, 0, 343, 0, 0, 344, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 351, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0,
    0, 0, 357, 0, 358, 0, 0, 0, 359, 0, 0, 360, 0, 361, 0, 362, 0, 363, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 370, 371, 0, 0, 372, 0, 373, 0,
    374, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 380, 0, 381, 0,
    382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 386, 0, 0, 0, 387, 388, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 391,
    0, 392, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 397, 0, 0, 0, 398, 399, 0, 0, 0, 400, 0, 0, 0, 0, 401,
    0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 409, 0,
    0, 410, 0, 411, 0, 412, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417,
    418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 422, 0, 0, 423, 0, 424, 0, 425, 0, 426, 0, 427, 0,
    0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 435, 436, 0, 0, 0, 437, 0, 0, 438, 0, 439, 0, 0, 440, 0, 441, 442, 0, 0, 0,
    0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 446, 0, 0, 0, 447, 0, 448, 0, 0, 0, 449, 0,
    0, 450, 0, 451, 0, 452, 0, 453, 0, 0, 0, 454, 0, 0, 455, 0, 456, 457, 0, 458, 0, 459, 460, 0, 461, 0, 0, 0, 0, 0, 0, 0,
    462, 0, 0, 0, 0, 0, 0, 0, 463, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0,
    468, 0, 0, 0, 469, 0, 0, 470, 0, 471, 0, 472, 0, 0, 473, 0, 474, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 477, 0, 0, 478, 0,
    479, 480, 0, 0, 481, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 485, 0, 0,
    486, 487, 0, 0, 0, 488, 0, 0, 489, 0, 490, 0, 0, 491, 0, 492, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 497, 498, 0, 0, 0, 499, 0, 0, 500, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 503,
    0, 0, 504, 0, 505, 0, 0, 506, 507, 0, 508, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 512, 0, 513, 0, 0, 514, 515, 0,
    0, 516, 0, 517, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 522, 0, 523, 0, 0, 524, 0,
    0, 0, 525, 0, 526, 0, 527, 0, 0, 0, 0, 0, 528, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0,
    532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0, 536, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0,
    539, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 543, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 547, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0,
    551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 553, 0, 554, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 559, 0, 0, 560, 0, 561, 0, 562, 0, 563, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0,
    566, 567, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 570, 0, 0, 0, 0, 571, 0, 572, 0,
    573, 0, 0, 574, 0, 0, 575, 0, 576, 0, 0, 577, 578, 0, 0, 579, 0, 580, 0, 0, 581, 0, 0, 582, 0, 583, 0, 0, 584, 585, 0, 0,
    0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 588, 0, 0, 589, 590, 0, 0, 0, 591, 0, 0, 0,
    0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 594, 0, 0, 595, 596, 0, 0, 597, 0, 0, 598, 0,
    0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 601, 0, 0, 602, 603, 0, 0, 604, 0,
    0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 608, 0, 0, 609, 610,
    0, 0, 611, 0, 612, 0, 613, 0, 614, 0, 615, 0, 0, 0, 0, 0, 616, 0, 617, 0, 618, 0, 619, 0, 620, 0, 0, 0, 0, 0, 621, 0,
    0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 625, 626, 0, 627, 0, 0, 0, 0, 0, 628, 0,
    629, 0, 0, 630, 0, 0, 631, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0,
    635, 0, 0, 0, 636, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 640, 0, 0, 0, 0, 641,
    0, 0, 642, 0, 0, 643, 644, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 0, 648,
    0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 651, 0, 0, 652, 0, 653, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 657, 0, 0, 658, 0, 0, 0, 659, 0, 0, 660, 0, 661, 0, 0, 662, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 667, 0, 668, 0, 0, 669, 0, 670, 0, 0, 671, 0, 0,
    0, 0, 0, 0, 672, 0, 0, 673, 0, 0, 0, 674, 0, 0, 675, 0, 676, 0, 677, 0, 678, 0, 0, 679, 0, 680, 0, 0, 0, 0, 0, 0,
    681, 0, 0, 0, 682, 0, 683, 0, 0, 0, 0, 0, 684, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0,
    0, 688, 0, 689, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 693, 0, 694, 0, 695, 0, 696, 0, 697, 0,
    0, 698, 0, 699, 0, 700, 0, 0, 0, 0, 701, 0, 702, 0, 0, 703, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 706,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 709, 0,
    0, 0, 710, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 715, 0, 0, 0, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0,
    718, 0, 0, 0, 719, 0, 0, 720, 0, 721, 0, 0, 0, 0, 722, 0, 723, 0, 0, 724, 0, 0, 0, 725, 0, 0, 0, 726, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 730, 0, 731, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 733, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 737, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 738, 0, 0, 739, 0, 0, 740, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0,
    0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 745, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0,
    0, 0, 748, 0, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 753,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0, 0, 0, 756, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0,
    758, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 760, 0, 0, 0, 0, 761, 0, 762, 0, 0, 763, 0, 764, 765, 0, 0, 0, 0, 766, 0,
    0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0, 0, 769, 0, 0, 770, 0, 771, 0, 772, 0, 773, 0, 774, 0, 775, 776, 777,
    0, 778, 0, 779, 780, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 783, 0, 0, 0, 0, 784, 0, 0, 785,
    0, 786, 0, 787, 0, 788, 0, 789, 0, 790, 791, 792, 0, 793, 0, 794, 795, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 797,
    0, 0, 0, 798, 0, 0, 0, 0, 799, 0, 0, 800, 0, 801, 0, 802, 0, 803, 0, 804, 0, 805, 806, 807, 0, 808, 0, 809, 810, 0, 0, 0,
    0, 0, 811, 0, 0, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 813, 0, 0, 0, 0, 814, 0, 0, 815, 0, 816, 0, 817, 0, 818, 0, 819,
    0, 820, 821, 822, 0, 823, 0, 824, 825, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 827, 0, 0, 0, 828, 0, 0, 0, 0, 829,
    0, 830, 0, 0, 831, 0, 832, 833, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 835, 0, 0, 0, 836, 0, 0, 0, 0, 837, 0, 838,
    0, 0, 839, 0, 840, 841, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 844, 0, 0, 0, 0, 845, 0, 846, 0, 0,
    847, 0, 848, 849, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0, 0, 0, 851, 0, 852, 0, 853, 0, 0, 854, 0, 0, 0, 0, 0, 855, 0, 0,
    0, 856, 0, 857, 0, 858, 0, 0, 0, 859, 0, 0, 0, 860, 0, 861, 0, 862, 0, 0, 0, 863, 0, 0, 0, 0, 0, 0, 864, 0, 0, 0,
    865, 0, 0, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 0, 867, 0, 868, 0, 0, 869, 0, 0, 0, 0, 870, 0, 0, 871, 0, 0, 872, 0,
    0, 0, 873, 0, 0, 0, 874, 0, 0, 0, 0, 875, 0, 876, 0, 0, 877, 878, 0, 0, 0, 0, 879, 0, 0, 0, 0, 0, 0, 880, 0, 881,
    0, 0, 882, 0, 0, 883, 0, 884, 885, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0, 887, 0, 0, 0, 888, 0, 0, 0, 0,
    889, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 891, 0, 0, 892, 0, 0, 893, 0, 0, 894, 0, 0, 0, 895,
};
void recomp_unit_0196_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B14000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0196[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B14000;
    case 2u: goto L_08B14020;
    case 3u: goto L_08B14028;
    case 4u: goto L_08B1405C;
    case 5u: goto L_08B1411C;
    case 6u: goto L_08B14128;
    case 7u: goto L_08B1414C;
    case 8u: goto L_08B1415C;
    case 9u: goto L_08B14168;
    case 10u: goto L_08B14170;
    case 11u: goto L_08B1417C;
    case 12u: goto L_08B141C0;
    case 13u: goto L_08B141D8;
    case 14u: goto L_08B141E4;
    case 15u: goto L_08B14304;
    case 16u: goto L_08B14310;
    case 17u: goto L_08B1431C;
    case 18u: goto L_08B14328;
    case 19u: goto L_08B14344;
    case 20u: goto L_08B1437C;
    case 21u: goto L_08B1438C;
    case 22u: goto L_08B14394;
    case 23u: goto L_08B143A4;
    case 24u: goto L_08B14404;
    case 25u: goto L_08B14424;
    case 26u: goto L_08B1442C;
    case 27u: goto L_08B14434;
    case 28u: goto L_08B14450;
    case 29u: goto L_08B1445C;
    case 30u: goto L_08B1447C;
    case 31u: goto L_08B14494;
    case 32u: goto L_08B144B0;
    case 33u: goto L_08B144C0;
    case 34u: goto L_08B144CC;
    case 35u: goto L_08B144D4;
    case 36u: goto L_08B144DC;
    case 37u: goto L_08B14504;
    case 38u: goto L_08B14510;
    case 39u: goto L_08B14530;
    case 40u: goto L_08B1453C;
    case 41u: goto L_08B14558;
    case 42u: goto L_08B14564;
    case 43u: goto L_08B14584;
    case 44u: goto L_08B1458C;
    case 45u: goto L_08B145B0;
    case 46u: goto L_08B1460C;
    case 47u: goto L_08B1463C;
    case 48u: goto L_08B14654;
    case 49u: goto L_08B1466C;
    case 50u: goto L_08B14678;
    case 51u: goto L_08B14680;
    case 52u: goto L_08B146B4;
    case 53u: goto L_08B146BC;
    case 54u: goto L_08B146D8;
    case 55u: goto L_08B146F4;
    case 56u: goto L_08B146F8;
    case 57u: goto L_08B14710;
    case 58u: goto L_08B14718;
    case 59u: goto L_08B1471C;
    case 60u: goto L_08B14748;
    case 61u: goto L_08B14758;
    case 62u: goto L_08B1475C;
    case 63u: goto L_08B1478C;
    case 64u: goto L_08B14794;
    case 65u: goto L_08B1479C;
    case 66u: goto L_08B147AC;
    case 67u: goto L_08B147E4;
    case 68u: goto L_08B1484C;
    case 69u: goto L_08B14860;
    case 70u: goto L_08B14874;
    case 71u: goto L_08B14884;
    case 72u: goto L_08B148A0;
    case 73u: goto L_08B148BC;
    case 74u: goto L_08B148C8;
    case 75u: goto L_08B148D0;
    case 76u: goto L_08B148D4;
    case 77u: goto L_08B148E4;
    case 78u: goto L_08B148E8;
    case 79u: goto L_08B148EC;
    case 80u: goto L_08B14914;
    case 81u: goto L_08B14940;
    case 82u: goto L_08B14984;
    case 83u: goto L_08B14988;
    case 84u: goto L_08B149A4;
    case 85u: goto L_08B149AC;
    case 86u: goto L_08B149B4;
    case 87u: goto L_08B149C0;
    case 88u: goto L_08B149CC;
    case 89u: goto L_08B149D8;
    case 90u: goto L_08B149E0;
    case 91u: goto L_08B149E8;
    case 92u: goto L_08B14A14;
    case 93u: goto L_08B14A18;
    case 94u: goto L_08B14A2C;
    case 95u: goto L_08B14A70;
    case 96u: goto L_08B14A78;
    case 97u: goto L_08B14A94;
    case 98u: goto L_08B14A9C;
    case 99u: goto L_08B14AA4;
    case 100u: goto L_08B14AAC;
    case 101u: goto L_08B14ABC;
    case 102u: goto L_08B14AD0;
    case 103u: goto L_08B14AF4;
    case 104u: goto L_08B14B08;
    case 105u: goto L_08B14B4C;
    case 106u: goto L_08B14B54;
    case 107u: goto L_08B14B70;
    case 108u: goto L_08B14B78;
    case 109u: goto L_08B14B80;
    case 110u: goto L_08B14B8C;
    case 111u: goto L_08B14B94;
    case 112u: goto L_08B14BC4;
    case 113u: goto L_08B14BD8;
    case 114u: goto L_08B14C18;
    case 115u: goto L_08B14C38;
    case 116u: goto L_08B14C64;
    case 117u: goto L_08B14C78;
    case 118u: goto L_08B14C8C;
    case 119u: goto L_08B14CA0;
    case 120u: goto L_08B14CAC;
    case 121u: goto L_08B14CB4;
    case 122u: goto L_08B14CC0;
    case 123u: goto L_08B14CC8;
    case 124u: goto L_08B14CD4;
    case 125u: goto L_08B14CDC;
    case 126u: goto L_08B14CE4;
    case 127u: goto L_08B14CEC;
    case 128u: goto L_08B14CF4;
    case 129u: goto L_08B14CFC;
    case 130u: goto L_08B14D04;
    case 131u: goto L_08B14D10;
    case 132u: goto L_08B14D1C;
    case 133u: goto L_08B14D20;
    case 134u: goto L_08B14D28;
    case 135u: goto L_08B14D34;
    case 136u: goto L_08B14D40;
    case 137u: goto L_08B14D50;
    case 138u: goto L_08B14D64;
    case 139u: goto L_08B14D6C;
    case 140u: goto L_08B14D80;
    case 141u: goto L_08B14D98;
    case 142u: goto L_08B14DA0;
    case 143u: goto L_08B14DB0;
    case 144u: goto L_08B14DB8;
    case 145u: goto L_08B14DCC;
    case 146u: goto L_08B14DD4;
    case 147u: goto L_08B14DD8;
    case 148u: goto L_08B14DE4;
    case 149u: goto L_08B14DEC;
    case 150u: goto L_08B14DFC;
    case 151u: goto L_08B14E08;
    case 152u: goto L_08B14E10;
    case 153u: goto L_08B14E1C;
    case 154u: goto L_08B14E24;
    case 155u: goto L_08B14E30;
    case 156u: goto L_08B14E38;
    case 157u: goto L_08B14E40;
    case 158u: goto L_08B14E48;
    case 159u: goto L_08B14E50;
    case 160u: goto L_08B14E58;
    case 161u: goto L_08B14E60;
    case 162u: goto L_08B14E6C;
    case 163u: goto L_08B14E78;
    case 164u: goto L_08B14E7C;
    case 165u: goto L_08B14E84;
    case 166u: goto L_08B14E90;
    case 167u: goto L_08B14E9C;
    case 168u: goto L_08B14EAC;
    case 169u: goto L_08B14EC0;
    case 170u: goto L_08B14EC4;
    case 171u: goto L_08B14ECC;
    case 172u: goto L_08B14EDC;
    case 173u: goto L_08B14EF0;
    case 174u: goto L_08B14F00;
    case 175u: goto L_08B14F10;
    case 176u: goto L_08B14F20;
    case 177u: goto L_08B14F34;
    case 178u: goto L_08B14F3C;
    case 179u: goto L_08B14F4C;
    case 180u: goto L_08B14F60;
    case 181u: goto L_08B14F70;
    case 182u: goto L_08B14F74;
    case 183u: goto L_08B14F7C;
    case 184u: goto L_08B14F88;
    case 185u: goto L_08B14F90;
    case 186u: goto L_08B14F9C;
    case 187u: goto L_08B14FA8;
    case 188u: goto L_08B14FB0;
    case 189u: goto L_08B14FC0;
    case 190u: goto L_08B14FD4;
    case 191u: goto L_08B14FE4;
    case 192u: goto L_08B14FEC;
    case 193u: goto L_08B14FFC;
    case 194u: goto L_08B15010;
    case 195u: goto L_08B15020;
    case 196u: goto L_08B15028;
    case 197u: goto L_08B15038;
    case 198u: goto L_08B1504C;
    case 199u: goto L_08B1505C;
    case 200u: goto L_08B15064;
    case 201u: goto L_08B1506C;
    case 202u: goto L_08B15084;
    case 203u: goto L_08B1508C;
    case 204u: goto L_08B150A0;
    case 205u: goto L_08B150A8;
    case 206u: goto L_08B150B8;
    case 207u: goto L_08B150C8;
    case 208u: goto L_08B150D0;
    case 209u: goto L_08B150DC;
    case 210u: goto L_08B150E8;
    case 211u: goto L_08B15100;
    case 212u: goto L_08B15110;
    case 213u: goto L_08B15120;
    case 214u: goto L_08B1513C;
    case 215u: goto L_08B15190;
    case 216u: goto L_08B151B0;
    case 217u: goto L_08B151B8;
    case 218u: goto L_08B151C0;
    case 219u: goto L_08B151D0;
    case 220u: goto L_08B151D8;
    case 221u: goto L_08B151E0;
    case 222u: goto L_08B151E8;
    case 223u: goto L_08B151EC;
    case 224u: goto L_08B1523C;
    case 225u: goto L_08B15260;
    case 226u: goto L_08B1526C;
    case 227u: goto L_08B1529C;
    case 228u: goto L_08B152B0;
    case 229u: goto L_08B152BC;
    case 230u: goto L_08B152C8;
    case 231u: goto L_08B152D4;
    case 232u: goto L_08B152DC;
    case 233u: goto L_08B152E4;
    case 234u: goto L_08B152F0;
    case 235u: goto L_08B152F8;
    case 236u: goto L_08B152FC;
    case 237u: goto L_08B1532C;
    case 238u: goto L_08B15334;
    case 239u: goto L_08B1533C;
    case 240u: goto L_08B15358;
    case 241u: goto L_08B15370;
    case 242u: goto L_08B15378;
    case 243u: goto L_08B1538C;
    case 244u: goto L_08B15394;
    case 245u: goto L_08B15398;
    case 246u: goto L_08B153C0;
    case 247u: goto L_08B153C8;
    case 248u: goto L_08B153D0;
    case 249u: goto L_08B153EC;
    case 250u: goto L_08B15408;
    case 251u: goto L_08B15410;
    case 252u: goto L_08B15424;
    case 253u: goto L_08B15440;
    case 254u: goto L_08B15458;
    case 255u: goto L_08B15460;
    case 256u: goto L_08B15490;
    case 257u: goto L_08B15494;
    case 258u: goto L_08B154AC;
    case 259u: goto L_08B15504;
    case 260u: goto L_08B15544;
    case 261u: goto L_08B15564;
    case 262u: goto L_08B1556C;
    case 263u: goto L_08B1557C;
    case 264u: goto L_08B1558C;
    case 265u: goto L_08B15590;
    case 266u: goto L_08B15598;
    case 267u: goto L_08B155A0;
    case 268u: goto L_08B155B8;
    case 269u: goto L_08B155BC;
    case 270u: goto L_08B155C0;
    case 271u: goto L_08B155F0;
    case 272u: goto L_08B155F8;
    case 273u: goto L_08B155FC;
    case 274u: goto L_08B15604;
    case 275u: goto L_08B15614;
    case 276u: goto L_08B15624;
    case 277u: goto L_08B15634;
    case 278u: goto L_08B15644;
    case 279u: goto L_08B15650;
    case 280u: goto L_08B15670;
    case 281u: goto L_08B15678;
    case 282u: goto L_08B1568C;
    case 283u: goto L_08B15694;
    case 284u: goto L_08B156A8;
    case 285u: goto L_08B156C8;
    case 286u: goto L_08B156D4;
    case 287u: goto L_08B156E4;
    case 288u: goto L_08B156F0;
    case 289u: goto L_08B156F8;
    case 290u: goto L_08B15704;
    case 291u: goto L_08B15710;
    case 292u: goto L_08B15720;
    case 293u: goto L_08B1572C;
    case 294u: goto L_08B15738;
    case 295u: goto L_08B15748;
    case 296u: goto L_08B15754;
    case 297u: goto L_08B1575C;
    case 298u: goto L_08B15770;
    case 299u: goto L_08B1578C;
    case 300u: goto L_08B15798;
    case 301u: goto L_08B157A8;
    case 302u: goto L_08B157B8;
    case 303u: goto L_08B157C8;
    case 304u: goto L_08B157E0;
    case 305u: goto L_08B15810;
    case 306u: goto L_08B15824;
    case 307u: goto L_08B1584C;
    case 308u: goto L_08B15858;
    case 309u: goto L_08B15860;
    case 310u: goto L_08B1587C;
    case 311u: goto L_08B158AC;
    case 312u: goto L_08B158B8;
    case 313u: goto L_08B158E0;
    case 314u: goto L_08B158EC;
    case 315u: goto L_08B158F4;
    case 316u: goto L_08B15910;
    case 317u: goto L_08B15940;
    case 318u: goto L_08B1594C;
    case 319u: goto L_08B15980;
    case 320u: goto L_08B1598C;
    case 321u: goto L_08B15994;
    case 322u: goto L_08B159B0;
    case 323u: goto L_08B159E0;
    case 324u: goto L_08B159EC;
    case 325u: goto L_08B15A14;
    case 326u: goto L_08B15A20;
    case 327u: goto L_08B15A28;
    case 328u: goto L_08B15A44;
    case 329u: goto L_08B15A90;
    case 330u: goto L_08B15AB0;
    case 331u: goto L_08B15AE4;
    case 332u: goto L_08B15AF0;
    case 333u: goto L_08B15AFC;
    case 334u: goto L_08B15B04;
    case 335u: goto L_08B15B14;
    case 336u: goto L_08B15B20;
    case 337u: goto L_08B15B2C;
    case 338u: goto L_08B15B3C;
    case 339u: goto L_08B15B4C;
    case 340u: goto L_08B15B80;
    case 341u: goto L_08B15B8C;
    case 342u: goto L_08B15B94;
    case 343u: goto L_08B15B9C;
    case 344u: goto L_08B15BA8;
    case 345u: goto L_08B15BAC;
    case 346u: goto L_08B15BDC;
    case 347u: goto L_08B15C1C;
    case 348u: goto L_08B15C3C;
    case 349u: goto L_08B15C5C;
    case 350u: goto L_08B15C60;
    case 351u: goto L_08B15C84;
    case 352u: goto L_08B15C9C;
    case 353u: goto L_08B15CA4;
    case 354u: goto L_08B15CB8;
    case 355u: goto L_08B15CEC;
    case 356u: goto L_08B15CF8;
    case 357u: goto L_08B15D08;
    case 358u: goto L_08B15D10;
    case 359u: goto L_08B15D20;
    case 360u: goto L_08B15D2C;
    case 361u: goto L_08B15D34;
    case 362u: goto L_08B15D3C;
    case 363u: goto L_08B15D44;
    case 364u: goto L_08B15D50;
    case 365u: goto L_08B15D60;
    case 366u: goto L_08B15D70;
    case 367u: goto L_08B15DA0;
    case 368u: goto L_08B15DBC;
    case 369u: goto L_08B15DC4;
    case 370u: goto L_08B15DE0;
    case 371u: goto L_08B15DE4;
    case 372u: goto L_08B15DF0;
    case 373u: goto L_08B15DF8;
    case 374u: goto L_08B15E00;
    case 375u: goto L_08B15E04;
    case 376u: goto L_08B15E34;
    case 377u: goto L_08B15E44;
    case 378u: goto L_08B15E50;
    case 379u: goto L_08B15E64;
    case 380u: goto L_08B15E70;
    case 381u: goto L_08B15E78;
    case 382u: goto L_08B15E80;
    case 383u: goto L_08B15E90;
    case 384u: goto L_08B15EA0;
    case 385u: goto L_08B15EB0;
    case 386u: goto L_08B15EB8;
    case 387u: goto L_08B15EC8;
    case 388u: goto L_08B15ECC;
    case 389u: goto L_08B15EDC;
    case 390u: goto L_08B15EF0;
    case 391u: goto L_08B15EFC;
    case 392u: goto L_08B15F04;
    case 393u: goto L_08B15F0C;
    case 394u: goto L_08B15F1C;
    case 395u: goto L_08B15F2C;
    case 396u: goto L_08B15F3C;
    case 397u: goto L_08B15F44;
    case 398u: goto L_08B15F54;
    case 399u: goto L_08B15F58;
    case 400u: goto L_08B15F68;
    case 401u: goto L_08B15F7C;
    case 402u: goto L_08B15F88;
    case 403u: goto L_08B15F9C;
    case 404u: goto L_08B15FA8;
    case 405u: goto L_08B15FB8;
    case 406u: goto L_08B15FC4;
    case 407u: goto L_08B15FE8;
    case 408u: goto L_08B15FF0;
    case 409u: goto L_08B15FF8;
    case 410u: goto L_08B16004;
    case 411u: goto L_08B1600C;
    case 412u: goto L_08B16014;
    case 413u: goto L_08B1601C;
    case 414u: goto L_08B16024;
    case 415u: goto L_08B16044;
    case 416u: goto L_08B1605C;
    case 417u: goto L_08B1607C;
    case 418u: goto L_08B16080;
    case 419u: goto L_08B16098;
    case 420u: goto L_08B160BC;
    case 421u: goto L_08B160C4;
    case 422u: goto L_08B160CC;
    case 423u: goto L_08B160D8;
    case 424u: goto L_08B160E0;
    case 425u: goto L_08B160E8;
    case 426u: goto L_08B160F0;
    case 427u: goto L_08B160F8;
    case 428u: goto L_08B16110;
    case 429u: goto L_08B16124;
    case 430u: goto L_08B16144;
    case 431u: goto L_08B16148;
    case 432u: goto L_08B16160;
    case 433u: goto L_08B1619C;
    case 434u: goto L_08B161A4;
    case 435u: goto L_08B161B0;
    case 436u: goto L_08B161B4;
    case 437u: goto L_08B161C4;
    case 438u: goto L_08B161D0;
    case 439u: goto L_08B161D8;
    case 440u: goto L_08B161E4;
    case 441u: goto L_08B161EC;
    case 442u: goto L_08B161F0;
    case 443u: goto L_08B1620C;
    case 444u: goto L_08B1623C;
    case 445u: goto L_08B16244;
    case 446u: goto L_08B16250;
    case 447u: goto L_08B16260;
    case 448u: goto L_08B16268;
    case 449u: goto L_08B16278;
    case 450u: goto L_08B16284;
    case 451u: goto L_08B1628C;
    case 452u: goto L_08B16294;
    case 453u: goto L_08B1629C;
    case 454u: goto L_08B162AC;
    case 455u: goto L_08B162B8;
    case 456u: goto L_08B162C0;
    case 457u: goto L_08B162C4;
    case 458u: goto L_08B162CC;
    case 459u: goto L_08B162D4;
    case 460u: goto L_08B162D8;
    case 461u: goto L_08B162E0;
    case 462u: goto L_08B16300;
    case 463u: goto L_08B16320;
    case 464u: goto L_08B16324;
    case 465u: goto L_08B16340;
    case 466u: goto L_08B1636C;
    case 467u: goto L_08B16374;
    case 468u: goto L_08B16380;
    case 469u: goto L_08B16390;
    case 470u: goto L_08B1639C;
    case 471u: goto L_08B163A4;
    case 472u: goto L_08B163AC;
    case 473u: goto L_08B163B8;
    case 474u: goto L_08B163C0;
    case 475u: goto L_08B163D0;
    case 476u: goto L_08B163DC;
    case 477u: goto L_08B163EC;
    case 478u: goto L_08B163F8;
    case 479u: goto L_08B16400;
    case 480u: goto L_08B16404;
    case 481u: goto L_08B16410;
    case 482u: goto L_08B16414;
    case 483u: goto L_08B16430;
    case 484u: goto L_08B1646C;
    case 485u: goto L_08B16474;
    case 486u: goto L_08B16480;
    case 487u: goto L_08B16484;
    case 488u: goto L_08B16494;
    case 489u: goto L_08B164A0;
    case 490u: goto L_08B164A8;
    case 491u: goto L_08B164B4;
    case 492u: goto L_08B164BC;
    case 493u: goto L_08B164C0;
    case 494u: goto L_08B164DC;
    case 495u: goto L_08B1651C;
    case 496u: goto L_08B16524;
    case 497u: goto L_08B16530;
    case 498u: goto L_08B16534;
    case 499u: goto L_08B16544;
    case 500u: goto L_08B16550;
    case 501u: goto L_08B1655C;
    case 502u: goto L_08B1656C;
    case 503u: goto L_08B1657C;
    case 504u: goto L_08B16588;
    case 505u: goto L_08B16590;
    case 506u: goto L_08B1659C;
    case 507u: goto L_08B165A0;
    case 508u: goto L_08B165A8;
    case 509u: goto L_08B165B4;
    case 510u: goto L_08B165C4;
    case 511u: goto L_08B165D8;
    case 512u: goto L_08B165E0;
    case 513u: goto L_08B165E8;
    case 514u: goto L_08B165F4;
    case 515u: goto L_08B165F8;
    case 516u: goto L_08B16604;
    case 517u: goto L_08B1660C;
    case 518u: goto L_08B16610;
    case 519u: goto L_08B16630;
    case 520u: goto L_08B16650;
    case 521u: goto L_08B16658;
    case 522u: goto L_08B16664;
    case 523u: goto L_08B1666C;
    case 524u: goto L_08B16678;
    case 525u: goto L_08B16688;
    case 526u: goto L_08B16690;
    case 527u: goto L_08B16698;
    case 528u: goto L_08B166B0;
    case 529u: goto L_08B166B4;
    case 530u: goto L_08B166C8;
    case 531u: goto L_08B166F4;
    case 532u: goto L_08B16700;
    case 533u: goto L_08B16734;
    case 534u: goto L_08B16740;
    case 535u: goto L_08B1674C;
    case 536u: goto L_08B16754;
    case 537u: goto L_08B16760;
    case 538u: goto L_08B16774;
    case 539u: goto L_08B16780;
    case 540u: goto L_08B167A0;
    case 541u: goto L_08B167CC;
    case 542u: goto L_08B167D8;
    case 543u: goto L_08B16808;
    case 544u: goto L_08B16814;
    case 545u: goto L_08B16820;
    case 546u: goto L_08B1682C;
    case 547u: goto L_08B16834;
    case 548u: goto L_08B16840;
    case 549u: goto L_08B16854;
    case 550u: goto L_08B16860;
    case 551u: goto L_08B16880;
    case 552u: goto L_08B168B0;
    case 553u: goto L_08B168B8;
    case 554u: goto L_08B168C0;
    case 555u: goto L_08B168CC;
    case 556u: goto L_08B168DC;
    case 557u: goto L_08B168F0;
    case 558u: goto L_08B16924;
    case 559u: goto L_08B16930;
    case 560u: goto L_08B1693C;
    case 561u: goto L_08B16944;
    case 562u: goto L_08B1694C;
    case 563u: goto L_08B16954;
    case 564u: goto L_08B16960;
    case 565u: goto L_08B16974;
    case 566u: goto L_08B16980;
    case 567u: goto L_08B16984;
    case 568u: goto L_08B169A8;
    case 569u: goto L_08B169D0;
    case 570u: goto L_08B169DC;
    case 571u: goto L_08B169F0;
    case 572u: goto L_08B169F8;
    case 573u: goto L_08B16A00;
    case 574u: goto L_08B16A0C;
    case 575u: goto L_08B16A18;
    case 576u: goto L_08B16A20;
    case 577u: goto L_08B16A2C;
    case 578u: goto L_08B16A30;
    case 579u: goto L_08B16A3C;
    case 580u: goto L_08B16A44;
    case 581u: goto L_08B16A50;
    case 582u: goto L_08B16A5C;
    case 583u: goto L_08B16A64;
    case 584u: goto L_08B16A70;
    case 585u: goto L_08B16A74;
    case 586u: goto L_08B16A90;
    case 587u: goto L_08B16AC8;
    case 588u: goto L_08B16AD0;
    case 589u: goto L_08B16ADC;
    case 590u: goto L_08B16AE0;
    case 591u: goto L_08B16AF0;
    case 592u: goto L_08B16B0C;
    case 593u: goto L_08B16B48;
    case 594u: goto L_08B16B50;
    case 595u: goto L_08B16B5C;
    case 596u: goto L_08B16B60;
    case 597u: goto L_08B16B6C;
    case 598u: goto L_08B16B78;
    case 599u: goto L_08B16B98;
    case 600u: goto L_08B16BD4;
    case 601u: goto L_08B16BDC;
    case 602u: goto L_08B16BE8;
    case 603u: goto L_08B16BEC;
    case 604u: goto L_08B16BF8;
    case 605u: goto L_08B16C08;
    case 606u: goto L_08B16C28;
    case 607u: goto L_08B16C64;
    case 608u: goto L_08B16C6C;
    case 609u: goto L_08B16C78;
    case 610u: goto L_08B16C7C;
    case 611u: goto L_08B16C88;
    case 612u: goto L_08B16C90;
    case 613u: goto L_08B16C98;
    case 614u: goto L_08B16CA0;
    case 615u: goto L_08B16CA8;
    case 616u: goto L_08B16CC0;
    case 617u: goto L_08B16CC8;
    case 618u: goto L_08B16CD0;
    case 619u: goto L_08B16CD8;
    case 620u: goto L_08B16CE0;
    case 621u: goto L_08B16CF8;
    case 622u: goto L_08B16D18;
    case 623u: goto L_08B16D3C;
    case 624u: goto L_08B16D4C;
    case 625u: goto L_08B16D54;
    case 626u: goto L_08B16D58;
    case 627u: goto L_08B16D60;
    case 628u: goto L_08B16D78;
    case 629u: goto L_08B16D80;
    case 630u: goto L_08B16D8C;
    case 631u: goto L_08B16D98;
    case 632u: goto L_08B16D9C;
    case 633u: goto L_08B16DC4;
    case 634u: goto L_08B16DE0;
    case 635u: goto L_08B16E00;
    case 636u: goto L_08B16E10;
    case 637u: goto L_08B16E1C;
    case 638u: goto L_08B16E34;
    case 639u: goto L_08B16E58;
    case 640u: goto L_08B16E68;
    case 641u: goto L_08B16E7C;
    case 642u: goto L_08B16E88;
    case 643u: goto L_08B16E94;
    case 644u: goto L_08B16E98;
    case 645u: goto L_08B16EB4;
    case 646u: goto L_08B16ED4;
    case 647u: goto L_08B16EEC;
    case 648u: goto L_08B16EFC;
    case 649u: goto L_08B16F18;
    case 650u: goto L_08B16F28;
    case 651u: goto L_08B16F34;
    case 652u: goto L_08B16F40;
    case 653u: goto L_08B16F48;
    case 654u: goto L_08B16F54;
    case 655u: goto L_08B16F6C;
    case 656u: goto L_08B16F9C;
    case 657u: goto L_08B16FAC;
    case 658u: goto L_08B16FB8;
    case 659u: goto L_08B16FC8;
    case 660u: goto L_08B16FD4;
    case 661u: goto L_08B16FDC;
    case 662u: goto L_08B16FE8;
    case 663u: goto L_08B17010;
    case 664u: goto L_08B17020;
    case 665u: goto L_08B17030;
    case 666u: goto L_08B17040;
    case 667u: goto L_08B1704C;
    case 668u: goto L_08B17054;
    case 669u: goto L_08B17060;
    case 670u: goto L_08B17068;
    case 671u: goto L_08B17074;
    case 672u: goto L_08B17090;
    case 673u: goto L_08B1709C;
    case 674u: goto L_08B170AC;
    case 675u: goto L_08B170B8;
    case 676u: goto L_08B170C0;
    case 677u: goto L_08B170C8;
    case 678u: goto L_08B170D0;
    case 679u: goto L_08B170DC;
    case 680u: goto L_08B170E4;
    case 681u: goto L_08B17100;
    case 682u: goto L_08B17110;
    case 683u: goto L_08B17118;
    case 684u: goto L_08B17130;
    case 685u: goto L_08B17138;
    case 686u: goto L_08B17154;
    case 687u: goto L_08B17178;
    case 688u: goto L_08B17184;
    case 689u: goto L_08B1718C;
    case 690u: goto L_08B1719C;
    case 691u: goto L_08B171AC;
    case 692u: goto L_08B171BC;
    case 693u: goto L_08B171D8;
    case 694u: goto L_08B171E0;
    case 695u: goto L_08B171E8;
    case 696u: goto L_08B171F0;
    case 697u: goto L_08B171F8;
    case 698u: goto L_08B17204;
    case 699u: goto L_08B1720C;
    case 700u: goto L_08B17214;
    case 701u: goto L_08B17228;
    case 702u: goto L_08B17230;
    case 703u: goto L_08B1723C;
    case 704u: goto L_08B17248;
    case 705u: goto L_08B17268;
    case 706u: goto L_08B1727C;
    case 707u: goto L_08B172D8;
    case 708u: goto L_08B172E0;
    case 709u: goto L_08B172F8;
    case 710u: goto L_08B17308;
    case 711u: goto L_08B17324;
    case 712u: goto L_08B17344;
    case 713u: goto L_08B17358;
    case 714u: goto L_08B173B4;
    case 715u: goto L_08B173BC;
    case 716u: goto L_08B173D4;
    case 717u: goto L_08B173E4;
    case 718u: goto L_08B17400;
    case 719u: goto L_08B17410;
    case 720u: goto L_08B1741C;
    case 721u: goto L_08B17424;
    case 722u: goto L_08B17438;
    case 723u: goto L_08B17440;
    case 724u: goto L_08B1744C;
    case 725u: goto L_08B1745C;
    case 726u: goto L_08B1746C;
    case 727u: goto L_08B174AC;
    case 728u: goto L_08B174E4;
    case 729u: goto L_08B1752C;
    case 730u: goto L_08B17544;
    case 731u: goto L_08B1754C;
    case 732u: goto L_08B17558;
    case 733u: goto L_08B17578;
    case 734u: goto L_08B175A0;
    case 735u: goto L_08B175C0;
    case 736u: goto L_08B175E0;
    case 737u: goto L_08B175EC;
    case 738u: goto L_08B17614;
    case 739u: goto L_08B17620;
    case 740u: goto L_08B1762C;
    case 741u: goto L_08B17634;
    case 742u: goto L_08B1765C;
    case 743u: goto L_08B17670;
    case 744u: goto L_08B17690;
    case 745u: goto L_08B176AC;
    case 746u: goto L_08B176B8;
    case 747u: goto L_08B17778;
    case 748u: goto L_08B17788;
    case 749u: goto L_08B177A0;
    case 750u: goto L_08B177B0;
    case 751u: goto L_08B177CC;
    case 752u: goto L_08B177EC;
    case 753u: goto L_08B177FC;
    case 754u: goto L_08B1782C;
    case 755u: goto L_08B1783C;
    case 756u: goto L_08B17854;
    case 757u: goto L_08B17864;
    case 758u: goto L_08B17880;
    case 759u: goto L_08B178A0;
    case 760u: goto L_08B178B0;
    case 761u: goto L_08B178C4;
    case 762u: goto L_08B178CC;
    case 763u: goto L_08B178D8;
    case 764u: goto L_08B178E0;
    case 765u: goto L_08B178E4;
    case 766u: goto L_08B178F8;
    case 767u: goto L_08B1791C;
    case 768u: goto L_08B1792C;
    case 769u: goto L_08B17940;
    case 770u: goto L_08B1794C;
    case 771u: goto L_08B17954;
    case 772u: goto L_08B1795C;
    case 773u: goto L_08B17964;
    case 774u: goto L_08B1796C;
    case 775u: goto L_08B17974;
    case 776u: goto L_08B17978;
    case 777u: goto L_08B1797C;
    case 778u: goto L_08B17984;
    case 779u: goto L_08B1798C;
    case 780u: goto L_08B17990;
    case 781u: goto L_08B179A8;
    case 782u: goto L_08B179CC;
    case 783u: goto L_08B179DC;
    case 784u: goto L_08B179F0;
    case 785u: goto L_08B179FC;
    case 786u: goto L_08B17A04;
    case 787u: goto L_08B17A0C;
    case 788u: goto L_08B17A14;
    case 789u: goto L_08B17A1C;
    case 790u: goto L_08B17A24;
    case 791u: goto L_08B17A28;
    case 792u: goto L_08B17A2C;
    case 793u: goto L_08B17A34;
    case 794u: goto L_08B17A3C;
    case 795u: goto L_08B17A40;
    case 796u: goto L_08B17A58;
    case 797u: goto L_08B17A7C;
    case 798u: goto L_08B17A8C;
    case 799u: goto L_08B17AA0;
    case 800u: goto L_08B17AAC;
    case 801u: goto L_08B17AB4;
    case 802u: goto L_08B17ABC;
    case 803u: goto L_08B17AC4;
    case 804u: goto L_08B17ACC;
    case 805u: goto L_08B17AD4;
    case 806u: goto L_08B17AD8;
    case 807u: goto L_08B17ADC;
    case 808u: goto L_08B17AE4;
    case 809u: goto L_08B17AEC;
    case 810u: goto L_08B17AF0;
    case 811u: goto L_08B17B08;
    case 812u: goto L_08B17B2C;
    case 813u: goto L_08B17B3C;
    case 814u: goto L_08B17B50;
    case 815u: goto L_08B17B5C;
    case 816u: goto L_08B17B64;
    case 817u: goto L_08B17B6C;
    case 818u: goto L_08B17B74;
    case 819u: goto L_08B17B7C;
    case 820u: goto L_08B17B84;
    case 821u: goto L_08B17B88;
    case 822u: goto L_08B17B8C;
    case 823u: goto L_08B17B94;
    case 824u: goto L_08B17B9C;
    case 825u: goto L_08B17BA0;
    case 826u: goto L_08B17BB8;
    case 827u: goto L_08B17BD8;
    case 828u: goto L_08B17BE8;
    case 829u: goto L_08B17BFC;
    case 830u: goto L_08B17C04;
    case 831u: goto L_08B17C10;
    case 832u: goto L_08B17C18;
    case 833u: goto L_08B17C1C;
    case 834u: goto L_08B17C30;
    case 835u: goto L_08B17C50;
    case 836u: goto L_08B17C60;
    case 837u: goto L_08B17C74;
    case 838u: goto L_08B17C7C;
    case 839u: goto L_08B17C88;
    case 840u: goto L_08B17C90;
    case 841u: goto L_08B17C94;
    case 842u: goto L_08B17CA8;
    case 843u: goto L_08B17CC8;
    case 844u: goto L_08B17CD8;
    case 845u: goto L_08B17CEC;
    case 846u: goto L_08B17CF4;
    case 847u: goto L_08B17D00;
    case 848u: goto L_08B17D08;
    case 849u: goto L_08B17D0C;
    case 850u: goto L_08B17D20;
    case 851u: goto L_08B17D40;
    case 852u: goto L_08B17D48;
    case 853u: goto L_08B17D50;
    case 854u: goto L_08B17D5C;
    case 855u: goto L_08B17D74;
    case 856u: goto L_08B17D84;
    case 857u: goto L_08B17D8C;
    case 858u: goto L_08B17D94;
    case 859u: goto L_08B17DA4;
    case 860u: goto L_08B17DB4;
    case 861u: goto L_08B17DBC;
    case 862u: goto L_08B17DC4;
    case 863u: goto L_08B17DD4;
    case 864u: goto L_08B17DF0;
    case 865u: goto L_08B17E00;
    case 866u: goto L_08B17E1C;
    case 867u: goto L_08B17E38;
    case 868u: goto L_08B17E40;
    case 869u: goto L_08B17E4C;
    case 870u: goto L_08B17E60;
    case 871u: goto L_08B17E6C;
    case 872u: goto L_08B17E78;
    case 873u: goto L_08B17E88;
    case 874u: goto L_08B17E98;
    case 875u: goto L_08B17EAC;
    case 876u: goto L_08B17EB4;
    case 877u: goto L_08B17EC0;
    case 878u: goto L_08B17EC4;
    case 879u: goto L_08B17ED8;
    case 880u: goto L_08B17EF4;
    case 881u: goto L_08B17EFC;
    case 882u: goto L_08B17F08;
    case 883u: goto L_08B17F14;
    case 884u: goto L_08B17F1C;
    case 885u: goto L_08B17F20;
    case 886u: goto L_08B17F38;
    case 887u: goto L_08B17F5C;
    case 888u: goto L_08B17F6C;
    case 889u: goto L_08B17F80;
    case 890u: goto L_08B17FB4;
    case 891u: goto L_08B17FBC;
    case 892u: goto L_08B17FC8;
    case 893u: goto L_08B17FD4;
    case 894u: goto L_08B17FE0;
    case 895u: goto L_08B17FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B14000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[5] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B14028;
      }
      goto L_08B14020;
    }
L_08B14020:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08B1405C;
      }
      goto L_08B14028;
    }
L_08B14028:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08B1405C;
L_08B1405C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08B14128;
      }
      goto L_08B1411C;
    }
L_08B1411C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08B14128;
L_08B14128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B1414Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B1414Cu) goto L_08B1414C;
    return;
L_08B1414C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08B14170;
      }
      goto L_08B1415C;
    }
L_08B1415C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B14168u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B14168u) goto L_08B14168;
    return;
L_08B14168:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08B14170;
L_08B14170:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08B141C0;
    }
    goto L_08B1417C;
L_08B1417C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08B141C0;
L_08B141C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    goto L_08B141D8;
L_08B141D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B141E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6004), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6012), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6020), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6028), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6036), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6044), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6052), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6060), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6068), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6076), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(14152));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6008), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(14880));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6016), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(14968));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6024), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(15104));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6032), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(15172));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6040), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(15400));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6048), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(15488));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6056), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(15556));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6064), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(15672));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6072), ctx.gpr[6]);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(15704));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B14304u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6080), ctx.gpr[6]);
    goto L_08B14310;
L_08B14304:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B14310:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08B1431C;
L_08B1431C:
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08B14328;
L_08B14328:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(6004)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(6012)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1437C;
      }
      goto L_08B14344;
    }
L_08B14344:
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(6004));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6012));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6012));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08B1437C;
L_08B1437C:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B14328;
      }
      goto L_08B1438C;
    }
L_08B1438C:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1431C;
      }
      goto L_08B14394;
    }
L_08B14394:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B143A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2444)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2440)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B14404u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem) && ctx.pc == 0x08B14404u) goto L_08B14404;
    return;
L_08B14404:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2452)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2448)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2460)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2456)));
    ctx.gpr[5] = (ctx.gpr[3] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B1442C;
      }
      goto L_08B14424;
    }
L_08B14424:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B144D4;
      }
      goto L_08B1442C;
    }
L_08B1442C:
    ctx.gpr[31] = (0x08B14434u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08B14434u) goto L_08B14434;
    return;
L_08B14434:
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B14450u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08B145B0;
L_08B14450:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B144CC;
      }
      goto L_08B1445C;
    }
L_08B1445C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B1447Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B1447Cu) goto L_08B1447C;
    return;
L_08B1447C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17963), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B14494u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 594u, 0x088EB074u>(ctx, &aot_mem) && ctx.pc == 0x08B14494u) goto L_08B14494;
    return;
L_08B14494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B144CC;
      }
      goto L_08B144B0;
    }
L_08B144B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B144CC;
      }
      goto L_08B144C0;
    }
L_08B144C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B144CCu);
    ctx.gpr[5] = (0u | 116u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08B144CCu) goto L_08B144CC;
    return;
L_08B144CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1458C;
      }
      goto L_08B144D4;
    }
L_08B144D4:
    ctx.gpr[31] = (0x08B144DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08B144DCu) goto L_08B144DC;
    return;
L_08B144DC:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16544u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B14504u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08B147E4;
L_08B14504:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1453C;
      }
      goto L_08B14510;
    }
L_08B14510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B14530u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B14530u) goto L_08B14530;
    return;
L_08B14530:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17963), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B1458C;
      }
      goto L_08B1453C;
    }
L_08B1453C:
    ctx.gpr[5] = (16457u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B14558u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08B145B0;
L_08B14558:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1458C;
      }
      goto L_08B14564;
    }
L_08B14564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B14584u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B14584u) goto L_08B14584;
    return;
L_08B14584:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17963), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B1458C;
L_08B1458C:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
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
L_08B145B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9200u);
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 0u);
    goto L_08B1460C;
L_08B1460C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1478C;
      }
      goto L_08B1463C;
    }
L_08B1463C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B14758;
      }
      goto L_08B14654;
    }
L_08B14654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B14758;
      }
      goto L_08B1466C;
    }
L_08B1466C:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B14678u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 571u, 0x089068C8u>(ctx, &aot_mem) && ctx.pc == 0x08B14678u) goto L_08B14678;
    return;
L_08B14678:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08B1475C;
    }
    goto L_08B14680;
L_08B14680:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B146B4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 385u, 0x08949B54u>(ctx, &aot_mem) && ctx.pc == 0x08B146B4u) goto L_08B146B4;
    return;
L_08B146B4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08B1475C;
    }
    goto L_08B146BC;
L_08B146BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
        goto L_08B146F8;
    }
    goto L_08B146D8;
L_08B146D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2208)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6004)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08B1471C;
    }
    goto L_08B146F4;
L_08B146F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    goto L_08B146F8;
L_08B146F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(6008)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08B14710u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B14710u) goto L_08B14710;
    return;
L_08B14710:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08B1475C;
    }
    goto L_08B14718;
L_08B14718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08B1471C;
L_08B1471C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2428)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2432)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B14758;
      }
      goto L_08B14748;
    }
L_08B14748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    goto L_08B14758;
L_08B14758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08B1475C;
L_08B1475C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6000));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B1463C;
      }
      goto L_08B1478C;
    }
L_08B1478C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1479C;
      }
      goto L_08B14794;
    }
L_08B14794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B147AC;
      }
      goto L_08B1479C;
    }
L_08B1479C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B1460C;
      }
      goto L_08B147AC;
    }
L_08B147AC:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B147E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(6000));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[7]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B14914;
      }
      goto L_08B1484C;
    }
L_08B1484C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B148E8;
      }
      goto L_08B14860;
    }
L_08B14860:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08B148EC;
    }
    goto L_08B14874;
L_08B14874:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    goto L_08B14884;
L_08B14884:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B148D4;
      }
      goto L_08B148A0;
    }
L_08B148A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2208)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(6004)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B148D0;
      }
      goto L_08B148BC;
    }
L_08B148BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(6008)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08B148C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B148C8u) goto L_08B148C8;
    return;
L_08B148C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B148D4;
      }
      goto L_08B148D0;
    }
L_08B148D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    goto L_08B148D4;
L_08B148D4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B14884;
      }
      goto L_08B148E4;
    }
L_08B148E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    goto L_08B148E8;
L_08B148E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B148EC;
L_08B148EC:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(6000));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B1484C;
      }
      goto L_08B14914;
    }
L_08B14914:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B14940:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B14A14;
      }
      goto L_08B14984;
    }
L_08B14984:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B14988;
L_08B14988:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08B149E8;
    }
    goto L_08B149A4;
L_08B149A4:
    ctx.gpr[31] = (0x08B149ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 776u, 0x08B13E34u>(ctx, &aot_mem) && ctx.pc == 0x08B149ACu) goto L_08B149AC;
    return;
L_08B149AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B149E0;
      }
      goto L_08B149B4;
    }
L_08B149B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B149E0;
      }
      goto L_08B149C0;
    }
L_08B149C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B149D8;
      }
      goto L_08B149CC;
    }
L_08B149CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3332)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B149E0;
      }
      goto L_08B149D8;
    }
L_08B149D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B14A18;
      }
      goto L_08B149E0;
    }
L_08B149E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B149E8;
L_08B149E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(6000));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B14988;
    }
    goto L_08B14A14;
L_08B14A14:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B14A18;
L_08B14A18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B14A2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B14AF4;
      }
      goto L_08B14A70;
    }
L_08B14A70:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B14A78;
L_08B14A78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B14ABC;
      }
      goto L_08B14A94;
    }
L_08B14A94:
    ctx.gpr[31] = (0x08B14A9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 776u, 0x08B13E34u>(ctx, &aot_mem) && ctx.pc == 0x08B14A9Cu) goto L_08B14A9C;
    return;
L_08B14A9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B14AAC;
      }
      goto L_08B14AA4;
    }
L_08B14AA4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08B14AAC;
L_08B14AAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6000));
      if (branch_taken) {
          goto L_08B14AD0;
      }
      goto L_08B14ABC;
    }
L_08B14ABC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6000));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B14AD0;
L_08B14AD0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B14A78;
    }
    goto L_08B14AF4;
L_08B14AF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B14B08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B14BC4;
      }
      goto L_08B14B4C;
    }
L_08B14B4C:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B14B54;
L_08B14B54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B14B8C;
      }
      goto L_08B14B70;
    }
L_08B14B70:
    ctx.gpr[31] = (0x08B14B78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 776u, 0x08B13E34u>(ctx, &aot_mem) && ctx.pc == 0x08B14B78u) goto L_08B14B78;
    return;
L_08B14B78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B14B94;
      }
      goto L_08B14B80;
    }
L_08B14B80:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[17]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B14B94;
      }
      goto L_08B14B8C;
    }
L_08B14B8C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08B14B94;
L_08B14B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(6000));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B14B54;
    }
    goto L_08B14BC4;
L_08B14BC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B14BD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3292)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B14C18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 721u, 0x08B6BAECu>(ctx, &aot_mem) && ctx.pc == 0x08B14C18u) goto L_08B14C18;
    return;
L_08B14C18:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x08B14C38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08B14C38u) goto L_08B14C38;
    return;
L_08B14C38:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-13362))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B14D6C;
      }
      goto L_08B14C64;
    }
L_08B14C64:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u | 45u);
      if (branch_taken) {
          goto L_08B14D64;
      }
      goto L_08B14C78;
    }
L_08B14C78:
    ctx.gpr[23] = (0u | 48u);
    ctx.gpr[22] = (0u | 46u);
    ctx.gpr[21] = (0u | 6u);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[20] = (512u << 16u);
    goto L_08B14C8C;
L_08B14C8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
      if (branch_taken) {
          goto L_08B14CAC;
      }
      goto L_08B14CA0;
    }
L_08B14CA0:
    ctx.gpr[6] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B14CD4;
      }
      goto L_08B14CAC;
    }
L_08B14CAC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B14CC0;
      }
      goto L_08B14CB4;
    }
L_08B14CB4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B14CD4;
      }
      goto L_08B14CC0;
    }
L_08B14CC0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B14D50;
      }
      goto L_08B14CC8;
    }
L_08B14CC8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3332)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B14D50;
      }
      goto L_08B14CD4;
    }
L_08B14CD4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B14CF4;
      }
      goto L_08B14CDC;
    }
L_08B14CDC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08B14D50;
      }
      goto L_08B14CE4;
    }
L_08B14CE4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08B14D50;
      }
      goto L_08B14CEC;
    }
L_08B14CEC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08B14D50;
      }
      goto L_08B14CF4;
    }
L_08B14CF4:
    ctx.gpr[31] = (0x08B14CFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B14CFCu) goto L_08B14CFC;
    return;
L_08B14CFC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
        goto L_08B14D20;
    }
    goto L_08B14D04;
L_08B14D04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B14D50;
      }
      goto L_08B14D10;
    }
L_08B14D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08B14D50;
      }
      goto L_08B14D1C;
    }
L_08B14D1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    goto L_08B14D20;
L_08B14D20:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
      if (branch_taken) {
          goto L_08B14D34;
      }
      goto L_08B14D28;
    }
L_08B14D28:
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B14D50;
      }
      goto L_08B14D34;
    }
L_08B14D34:
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B14D50;
      }
      goto L_08B14D40;
    }
L_08B14D40:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08B14D50u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 804u, 0x08B13F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B14D50u) goto L_08B14D50;
    return;
L_08B14D50:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B14C8C;
      }
      goto L_08B14D64;
    }
L_08B14D64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
      if (branch_taken) {
          goto L_08B14EC4;
      }
      goto L_08B14D6C;
    }
L_08B14D6C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B14EC0;
      }
      goto L_08B14D80;
    }
L_08B14D80:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[30] = (0u | 46u);
    ctx.gpr[23] = (0u | 6u);
    ctx.gpr[22] = (512u << 16u);
    ctx.gpr[19] = (ctx.lo);
    goto L_08B14D98;
L_08B14D98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B14DB0;
      }
      goto L_08B14DA0;
    }
L_08B14DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_08B14DB8;
    }
    goto L_08B14DB0;
L_08B14DB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B14DD8;
      }
      goto L_08B14DB8;
    }
L_08B14DB8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08B14DD4;
    }
    goto L_08B14DCC;
L_08B14DCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B14DD8;
      }
      goto L_08B14DD4;
    }
L_08B14DD4:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_08B14DD8;
L_08B14DD8:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14DE4;
    }
L_08B14DE4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14DEC;
    }
L_08B14DEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[7] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
      if (branch_taken) {
          goto L_08B14E08;
      }
      goto L_08B14DFC;
    }
L_08B14DFC:
    ctx.gpr[7] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B14E30;
      }
      goto L_08B14E08;
    }
L_08B14E08:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B14E1C;
      }
      goto L_08B14E10;
    }
L_08B14E10:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B14E30;
      }
      goto L_08B14E1C;
    }
L_08B14E1C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14E24;
    }
L_08B14E24:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3332)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14E30;
    }
L_08B14E30:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 45u);
      if (branch_taken) {
          goto L_08B14E50;
      }
      goto L_08B14E38;
    }
L_08B14E38:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 48u);
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14E40;
    }
L_08B14E40:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14E48;
    }
L_08B14E48:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14E50;
    }
L_08B14E50:
    ctx.gpr[31] = (0x08B14E58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B14E58u) goto L_08B14E58;
    return;
L_08B14E58:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
        goto L_08B14E7C;
    }
    goto L_08B14E60;
L_08B14E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14E6C;
    }
L_08B14E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14E78;
    }
L_08B14E78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    goto L_08B14E7C;
L_08B14E7C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
      if (branch_taken) {
          goto L_08B14E90;
      }
      goto L_08B14E84;
    }
L_08B14E84:
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14E90;
    }
L_08B14E90:
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14E9C;
    }
L_08B14E9C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08B14EACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 804u, 0x08B13F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B14EACu) goto L_08B14EAC;
    return;
L_08B14EAC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08B14D98;
      }
      goto L_08B14EC0;
    }
L_08B14EC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    goto L_08B14EC4;
L_08B14EC4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B150C8;
      }
      goto L_08B14ECC;
    }
L_08B14ECC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9624)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9628)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[20] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B150C8;
      }
      goto L_08B14EDC;
    }
L_08B14EDC:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(19));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(21));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28736));
    goto L_08B14EF0;
L_08B14EF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08B14F20;
      }
      goto L_08B14F00;
    }
L_08B14F00:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x08B14F10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B14F10u) goto L_08B14F10;
    return;
L_08B14F10:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B14F20;
L_08B14F20:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 57u);
    if (ctx.gpr[4] == ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
        goto L_08B14F74;
    }
    goto L_08B14F34;
L_08B14F34:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08B14F60;
      }
      goto L_08B14F3C;
    }
L_08B14F3C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B14F4Cu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B14F4Cu) goto L_08B14F4C;
    return;
L_08B14F4C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(180));
    goto L_08B14F60;
L_08B14F60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B14F9C;
      }
      goto L_08B14F70;
    }
L_08B14F70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    goto L_08B14F74;
L_08B14F74:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B14F88;
      }
      goto L_08B14F7C;
    }
L_08B14F7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B14F9C;
      }
      goto L_08B14F88;
    }
L_08B14F88:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B150B8;
      }
      goto L_08B14F90;
    }
L_08B14F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3332)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B150B8;
      }
      goto L_08B14F9C;
    }
L_08B14F9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B1505C;
      }
      goto L_08B14FA8;
    }
L_08B14FA8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08B14FD4;
      }
      goto L_08B14FB0;
    }
L_08B14FB0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B14FC0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B14FC0u) goto L_08B14FC0;
    return;
L_08B14FC0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(180));
    goto L_08B14FD4;
L_08B14FD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B150B8;
      }
      goto L_08B14FE4;
    }
L_08B14FE4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08B15010;
      }
      goto L_08B14FEC;
    }
L_08B14FEC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B14FFCu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B14FFCu) goto L_08B14FFC;
    return;
L_08B14FFC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(180));
    goto L_08B15010;
L_08B15010:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B150B8;
      }
      goto L_08B15020;
    }
L_08B15020:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08B1504C;
      }
      goto L_08B15028;
    }
L_08B15028:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B15038u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B15038u) goto L_08B15038;
    return;
L_08B15038:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(180));
    goto L_08B1504C;
L_08B1504C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B150B8;
      }
      goto L_08B1505C;
    }
L_08B1505C:
    ctx.gpr[31] = (0x08B15064u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 58u, 0x08AD0600u>(ctx, &aot_mem) && ctx.pc == 0x08B15064u) goto L_08B15064;
    return;
L_08B15064:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B150B8;
      }
      goto L_08B1506C;
    }
L_08B1506C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B150A8;
      }
      goto L_08B15084;
    }
L_08B15084:
    ctx.gpr[31] = (0x08B1508Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 597u, 0x089D3458u>(ctx, &aot_mem) && ctx.pc == 0x08B1508Cu) goto L_08B1508C;
    return;
L_08B1508C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08B150A0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem) && ctx.pc == 0x08B150A0u) goto L_08B150A0;
    return;
L_08B150A0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B150B8;
      }
      goto L_08B150A8;
    }
L_08B150A8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08B150B8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 804u, 0x08B13F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B150B8u) goto L_08B150B8;
    return;
L_08B150B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9628)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B14EF0;
      }
      goto L_08B150C8;
    }
L_08B150C8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08B150D0;
L_08B150D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[31] = (0x08B150DCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3176)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem) && ctx.pc == 0x08B150DCu) goto L_08B150DC;
    return;
L_08B150DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B15110;
      }
      goto L_08B150E8;
    }
L_08B150E8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(482))))));
    ctx.gpr[5] = (ctx.gpr[5] & 64u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B15110;
      }
      goto L_08B15100;
    }
L_08B15100:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08B15110u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 804u, 0x08B13F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B15110u) goto L_08B15110;
    return;
L_08B15110:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B150D0;
      }
      goto L_08B15120;
    }
L_08B15120:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08B1513Cu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 500u, 0x08B728A0u>(ctx, &aot_mem) && ctx.pc == 0x08B1513Cu) goto L_08B1513C;
    return;
L_08B1513C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_08B15190:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B151B0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08B14BD8;
L_08B151B0:
    ctx.gpr[31] = (0x08B151B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B14940;
L_08B151B8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
        goto L_08B151EC;
    }
    goto L_08B151C0;
L_08B151C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B151E0;
      }
      goto L_08B151D0;
    }
L_08B151D0:
    ctx.gpr[31] = (0x08B151D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B14A2C;
L_08B151D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
      if (branch_taken) {
          goto L_08B151EC;
      }
      goto L_08B151E0;
    }
L_08B151E0:
    ctx.gpr[31] = (0x08B151E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B14B08;
L_08B151E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    goto L_08B151EC;
L_08B151EC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B15260;
      }
      goto L_08B1523C;
    }
L_08B1523C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B1523C;
      }
      goto L_08B15260;
    }
L_08B15260:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B15490;
      }
      goto L_08B1526C;
    }
L_08B1526C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08B15490;
      }
      goto L_08B1529C;
    }
L_08B1529C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2076)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B152C8;
      }
      goto L_08B152B0;
    }
L_08B152B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08B15460;
    }
    goto L_08B152BC;
L_08B152BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3332)));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08B15460;
    }
    goto L_08B152C8;
L_08B152C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B152E4;
      }
      goto L_08B152D4;
    }
L_08B152D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B15424;
      }
      goto L_08B152DC;
    }
L_08B152DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B152F8;
      }
      goto L_08B152E4;
    }
L_08B152E4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B15394;
      }
      goto L_08B152F0;
    }
L_08B152F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B15424;
      }
      goto L_08B152F8;
    }
L_08B152F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08B152FC;
L_08B152FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6000));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B15358;
      }
      goto L_08B1532C;
    }
L_08B1532C:
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
        goto L_08B1533C;
    }
    goto L_08B15334;
L_08B15334:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B15494;
      }
      goto L_08B1533C;
    }
L_08B1533C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B15358;
L_08B15358:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08B15370u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 579u, 0x089069ACu>(ctx, &aot_mem) && ctx.pc == 0x08B15370u) goto L_08B15370;
    return;
L_08B15370:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08B152FC;
    }
    goto L_08B15378;
L_08B15378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08B152FC;
    }
    goto L_08B1538C;
L_08B1538C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B15424;
      }
      goto L_08B15394;
    }
L_08B15394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    goto L_08B15398;
L_08B15398:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08B153EC;
    }
    goto L_08B153C0;
L_08B153C0:
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
        goto L_08B153D0;
    }
    goto L_08B153C8;
L_08B153C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B15494;
      }
      goto L_08B153D0;
    }
L_08B153D0:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08B153EC;
L_08B153EC:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B15408u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 579u, 0x089069ACu>(ctx, &aot_mem) && ctx.pc == 0x08B15408u) goto L_08B15408;
    return;
L_08B15408:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
        goto L_08B15398;
    }
    goto L_08B15410;
L_08B15410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
        goto L_08B15398;
    }
    goto L_08B15424;
L_08B15424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B15440u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B15440u) goto L_08B15440;
    return;
L_08B15440:
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17963), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B15458u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 594u, 0x088EB074u>(ctx, &aot_mem) && ctx.pc == 0x08B15458u) goto L_08B15458;
    return;
L_08B15458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B15494;
      }
      goto L_08B15460;
    }
L_08B15460:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6000));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B1529C;
      }
      goto L_08B15490;
    }
L_08B15490:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B15494;
L_08B15494:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B154AC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2280u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(20080));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20080), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (2280u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(20112));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B15504:
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
L_08B15544:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B15598;
      }
      goto L_08B15564;
    }
L_08B15564:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08B1556C;
L_08B1556C:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08B1558C;
    }
    goto L_08B1557C;
L_08B1557C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B15590;
      }
      goto L_08B1558C;
    }
L_08B1558C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08B15590;
L_08B15590:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08B1556C;
    }
    goto L_08B15598;
L_08B15598:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08B155BC;
    }
    goto L_08B155A0;
L_08B155A0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
        goto L_08B155C0;
    }
    goto L_08B155B8;
L_08B155B8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B155BC;
L_08B155BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08B155C0;
L_08B155C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B155F8;
      }
      goto L_08B155F0;
    }
L_08B155F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B155FC;
      }
      goto L_08B155F8;
    }
L_08B155F8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_08B155FC;
L_08B155FC:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B15604:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B15614u);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(2876));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem) && ctx.pc == 0x08B15614u) goto L_08B15614;
    return;
L_08B15614:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B15624:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B15634u);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(2876));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem) && ctx.pc == 0x08B15634u) goto L_08B15634;
    return;
L_08B15634:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08B15644;
    }
    goto L_08B15644;
L_08B15644:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B15650:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B15670u);
    // nop
    goto L_08B15624;
L_08B15670:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B15694;
      }
      goto L_08B15678;
    }
L_08B15678:
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32176));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B1568Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem) && ctx.pc == 0x08B1568Cu) goto L_08B1568C;
    return;
L_08B1568C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B15694;
      }
      goto L_08B15694;
    }
L_08B15694:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B156A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B156C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08B156C8u) goto L_08B156C8;
    return;
L_08B156C8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(2876));
    ctx.gpr[31] = (0x08B156D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 249u, 0x0889D344u>(ctx, &aot_mem) && ctx.pc == 0x08B156D4u) goto L_08B156D4;
    return;
L_08B156D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08B156E4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x08B156E4u) goto L_08B156E4;
    return;
L_08B156E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B156F0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x08B156F0u) goto L_08B156F0;
    return;
L_08B156F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B15748;
      }
      goto L_08B156F8;
    }
L_08B156F8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B15704u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08B15704u) goto L_08B15704;
    return;
L_08B15704:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B15710u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 555u, 0x088079D0u>(ctx, &aot_mem) && ctx.pc == 0x08B15710u) goto L_08B15710;
    return;
L_08B15710:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B15720u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08B15720u) goto L_08B15720;
    return;
L_08B15720:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B1572Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 492u, 0x08807510u>(ctx, &aot_mem) && ctx.pc == 0x08B1572Cu) goto L_08B1572C;
    return;
L_08B1572C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B15738u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08B15738u) goto L_08B15738;
    return;
L_08B15738:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[31] = (0x08B15748u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem) && ctx.pc == 0x08B15748u) goto L_08B15748;
    return;
L_08B15748:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B15754u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 310u, 0x088066C0u>(ctx, &aot_mem) && ctx.pc == 0x08B15754u) goto L_08B15754;
    return;
L_08B15754:
    ctx.gpr[31] = (0x08B1575Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08B1575Cu) goto L_08B1575C;
    return;
L_08B1575C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B15770:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B1578Cu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(3120));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x08B1578Cu) goto L_08B1578C;
    return;
L_08B1578C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B15798u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem) && ctx.pc == 0x08B15798u) goto L_08B15798;
    return;
L_08B15798:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B157A8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B157A8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08B157B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B157B8u) goto L_08B157B8;
    return;
L_08B157B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08B157C8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 508u, 0x08807644u>(ctx, &aot_mem) && ctx.pc == 0x08B157C8u) goto L_08B157C8;
    return;
L_08B157C8:
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
L_08B157E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B15810u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08B15810u) goto L_08B15810;
    return;
L_08B15810:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[31] = (0x08B15824u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 155u, 0x08ADC7D8u>(ctx, &aot_mem) && ctx.pc == 0x08B15824u) goto L_08B15824;
    return;
L_08B15824:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08B15858;
      }
      goto L_08B1584C;
    }
L_08B1584C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08B15858;
L_08B15858:
    ctx.gpr[31] = (0x08B15860u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B15860u) goto L_08B15860;
    return;
L_08B15860:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08B1587C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B158ACu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15650;
L_08B158AC:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x08B158B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 167u, 0x08ADC88Cu>(ctx, &aot_mem) && ctx.pc == 0x08B158B8u) goto L_08B158B8;
    return;
L_08B158B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08B158EC;
      }
      goto L_08B158E0;
    }
L_08B158E0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08B158EC;
L_08B158EC:
    ctx.gpr[31] = (0x08B158F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B158F4u) goto L_08B158F4;
    return;
L_08B158F4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08B15910:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B15940u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15650;
L_08B15940:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x08B1594Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 167u, 0x08ADC88Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1594Cu) goto L_08B1594C;
    return;
L_08B1594C:
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
          goto L_08B1598C;
      }
      goto L_08B15980;
    }
L_08B15980:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08B1598C;
L_08B1598C:
    ctx.gpr[31] = (0x08B15994u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B15994u) goto L_08B15994;
    return;
L_08B15994:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08B159B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B159E0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15650;
L_08B159E0:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x08B159ECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 156u, 0x08ADC7F0u>(ctx, &aot_mem) && ctx.pc == 0x08B159ECu) goto L_08B159EC;
    return;
L_08B159EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08B15A20;
      }
      goto L_08B15A14;
    }
L_08B15A14:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08B15A20;
L_08B15A20:
    ctx.gpr[31] = (0x08B15A28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B15A28u) goto L_08B15A28;
    return;
L_08B15A28:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08B15A44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08B15A90u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem) && ctx.pc == 0x08B15A90u) goto L_08B15A90;
    return;
L_08B15A90:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (2237u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_08B15AB0;
L_08B15AB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08B15AE4;
    }
    goto L_08B15AE4;
L_08B15AE4:
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B15B9C;
      }
      goto L_08B15AF0;
    }
L_08B15AF0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B15AFCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem) && ctx.pc == 0x08B15AFCu) goto L_08B15AFC;
    return;
L_08B15AFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B15B94;
      }
      goto L_08B15B04;
    }
L_08B15B04:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B15B14u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B15B14u) goto L_08B15B14;
    return;
L_08B15B14:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B15B94;
      }
      goto L_08B15B20;
    }
L_08B15B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_08B15B4C;
    }
    goto L_08B15B2C;
L_08B15B2C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B15B3Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B15B3Cu) goto L_08B15B3C;
    return;
L_08B15B3C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_08B15B4C;
L_08B15B4C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B15B94;
      }
      goto L_08B15B80;
    }
L_08B15B80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B15B8Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B15B8Cu) goto L_08B15B8C;
    return;
L_08B15B8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B15BAC;
      }
      goto L_08B15B94;
    }
L_08B15B94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B15AB0;
      }
      goto L_08B15B9C;
    }
L_08B15B9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B15BA8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B15BA8u) goto L_08B15BA8;
    return;
L_08B15BA8:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08B15BAC;
L_08B15BAC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B15BDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08B15C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08B15C1Cu) goto L_08B15C1C;
    return;
L_08B15C1C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08B15C3Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem) && ctx.pc == 0x08B15C3Cu) goto L_08B15C3C;
    return;
L_08B15C3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B15C60;
      }
      goto L_08B15C5C;
    }
L_08B15C5C:
    ctx.gpr[23] = (0u | 0u);
    goto L_08B15C60;
L_08B15C60:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[6]);
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B15CA4;
      }
      goto L_08B15C84;
    }
L_08B15C84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08B15C9Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 406u, 0x08932014u>(ctx, &aot_mem) && ctx.pc == 0x08B15C9Cu) goto L_08B15C9C;
    return;
L_08B15C9C:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    goto L_08B15CA4;
L_08B15CA4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_08B15CB8;
L_08B15CB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08B15CEC;
    }
    goto L_08B15CEC;
L_08B15CEC:
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B15E00;
      }
      goto L_08B15CF8;
    }
L_08B15CF8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08B15D08u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 10u, 0x08ADC0D4u>(ctx, &aot_mem) && ctx.pc == 0x08B15D08u) goto L_08B15D08;
    return;
L_08B15D08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B15DF8;
      }
      goto L_08B15D10;
    }
L_08B15D10:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B15D20u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B15D20u) goto L_08B15D20;
    return;
L_08B15D20:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B15DF8;
      }
      goto L_08B15D2C;
    }
L_08B15D2C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B15D44;
      }
      goto L_08B15D34;
    }
L_08B15D34:
    jump_target = ctx.gpr[19];
    ctx.gpr[31] = (0x08B15D3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B15D3Cu) goto L_08B15D3C;
    return;
L_08B15D3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B15DF8;
      }
      goto L_08B15D44;
    }
L_08B15D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08B15D70;
    }
    goto L_08B15D50;
L_08B15D50:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B15D60u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B15D60u) goto L_08B15D60;
    return;
L_08B15D60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08B15D70;
L_08B15D70:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B15DF8;
      }
      goto L_08B15DA0;
    }
L_08B15DA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B15DF8;
      }
      goto L_08B15DBC;
    }
L_08B15DBC:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08B15DE4;
      }
      goto L_08B15DC4;
    }
L_08B15DC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B15DF8;
      }
      goto L_08B15DE0;
    }
L_08B15DE0:
    ctx.gpr[16] = (0u | 1u);
    goto L_08B15DE4;
L_08B15DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (0x08B15DF0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08B156A8;
L_08B15DF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B15E04;
      }
      goto L_08B15DF8;
    }
L_08B15DF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B15CB8;
      }
      goto L_08B15E00;
    }
L_08B15E00:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B15E04;
L_08B15E04:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B15E34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B15E44u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08B15BDC;
L_08B15E44:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B15E50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B15E78;
      }
      goto L_08B15E64;
    }
L_08B15E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B15E80;
      }
      goto L_08B15E70;
    }
L_08B15E70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08B15EA0;
      }
      goto L_08B15E78;
    }
L_08B15E78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B15ECC;
      }
      goto L_08B15E80;
    }
L_08B15E80:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B15E90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B15E90u) goto L_08B15E90;
    return;
L_08B15E90:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08B15EA0;
L_08B15EA0:
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B15EB8;
      }
      goto L_08B15EB0;
    }
L_08B15EB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B15ECC;
      }
      goto L_08B15EB8;
    }
L_08B15EB8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08B15EC8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B15EC8u) goto L_08B15EC8;
    return;
L_08B15EC8:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08B15ECC;
L_08B15ECC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B15EDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B15F04;
      }
      goto L_08B15EF0;
    }
L_08B15EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B15F0C;
      }
      goto L_08B15EFC;
    }
L_08B15EFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08B15F2C;
      }
      goto L_08B15F04;
    }
L_08B15F04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B15F58;
      }
      goto L_08B15F0C;
    }
L_08B15F0C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B15F1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B15F1Cu) goto L_08B15F1C;
    return;
L_08B15F1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08B15F2C;
L_08B15F2C:
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B15F44;
      }
      goto L_08B15F3C;
    }
L_08B15F3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B15F58;
      }
      goto L_08B15F44;
    }
L_08B15F44:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08B15F54u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B15F54u) goto L_08B15F54;
    return;
L_08B15F54:
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08B15F58;
L_08B15F58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B15F68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[31] = (0x08B15F7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24144));
    goto L_08B15BDC;
L_08B15F7C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B15F88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[31] = (0x08B15F9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24284));
    goto L_08B15BDC;
L_08B15F9C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B15FA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B15FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 239u, 0x08B10FA0u>(ctx, &aot_mem) && ctx.pc == 0x08B15FB8u) goto L_08B15FB8;
    return;
L_08B15FB8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B15FC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08B15FE8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B15FE8u) goto L_08B15FE8;
    return;
L_08B15FE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16014;
      }
      goto L_08B15FF0;
    }
L_08B15FF0:
    ctx.gpr[31] = (0x08B15FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B15FF8u) goto L_08B15FF8;
    return;
L_08B15FF8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B16004u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B16004u) goto L_08B16004;
    return;
L_08B16004:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
        goto L_08B1601C;
    }
    goto L_08B1600C;
L_08B1600C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16044;
      }
      goto L_08B16014;
    }
L_08B16014:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B16080;
      }
      goto L_08B1601C;
    }
L_08B1601C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16044;
      }
      goto L_08B16024;
    }
L_08B16024:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
      if (branch_taken) {
          goto L_08B1605C;
      }
      goto L_08B16044;
    }
L_08B16044:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    goto L_08B1605C;
L_08B1605C:
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1607Cu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 313u, 0x08931AD0u>(ctx, &aot_mem) && ctx.pc == 0x08B1607Cu) goto L_08B1607C;
    return;
L_08B1607C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08B16080;
L_08B16080:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B16098:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08B160BCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B160BCu) goto L_08B160BC;
    return;
L_08B160BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B160E8;
      }
      goto L_08B160C4;
    }
L_08B160C4:
    ctx.gpr[31] = (0x08B160CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B160CCu) goto L_08B160CC;
    return;
L_08B160CC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B160D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B160D8u) goto L_08B160D8;
    return;
L_08B160D8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
        goto L_08B160F0;
    }
    goto L_08B160E0;
L_08B160E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16110;
      }
      goto L_08B160E8;
    }
L_08B160E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B16148;
      }
      goto L_08B160F0;
    }
L_08B160F0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16110;
      }
      goto L_08B160F8;
    }
L_08B160F8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
      if (branch_taken) {
          goto L_08B16124;
      }
      goto L_08B16110;
    }
L_08B16110:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    goto L_08B16124;
L_08B16124:
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16144u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 313u, 0x08931AD0u>(ctx, &aot_mem) && ctx.pc == 0x08B16144u) goto L_08B16144;
    return;
L_08B16144:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08B16148;
L_08B16148:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B16160:
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
    ctx.gpr[31] = (0x08B1619Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15604;
L_08B1619C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B161B4;
      }
      goto L_08B161A4;
    }
L_08B161A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B161B0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B161B0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08B161B4;
L_08B161B4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B161C4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B161C4u) goto L_08B161C4;
    return;
L_08B161C4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B161EC;
      }
      goto L_08B161D0;
    }
L_08B161D0:
    ctx.gpr[31] = (0x08B161D8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 30u, 0x088242B0u>(ctx, &aot_mem) && ctx.pc == 0x08B161D8u) goto L_08B161D8;
    return;
L_08B161D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B161E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B161E4u) goto L_08B161E4;
    return;
L_08B161E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B161F0;
      }
      goto L_08B161EC;
    }
L_08B161EC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B161F0;
L_08B161F0:
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
L_08B1620C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08B1623Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15604;
L_08B1623C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B16294;
      }
      goto L_08B16244;
    }
L_08B16244:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16250u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B16250:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16260u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x08B16260u) goto L_08B16260;
    return;
L_08B16260:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08B1628C;
      }
      goto L_08B16268;
    }
L_08B16268:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B16278u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B16278u) goto L_08B16278;
    return;
L_08B16278:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B1629C;
      }
      goto L_08B16284;
    }
L_08B16284:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16320;
      }
      goto L_08B1628C;
    }
L_08B1628C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B16324;
      }
      goto L_08B16294;
    }
L_08B16294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B16324;
      }
      goto L_08B1629C;
    }
L_08B1629C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B16320;
      }
      goto L_08B162AC;
    }
L_08B162AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B162C4;
    }
    goto L_08B162B8;
L_08B162B8:
    ctx.gpr[31] = (0x08B162C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08B162C0u) goto L_08B162C0;
    return;
L_08B162C0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B162C4;
L_08B162C4:
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B162D8;
    }
    goto L_08B162CC;
L_08B162CC:
    ctx.gpr[31] = (0x08B162D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08B162D4u) goto L_08B162D4;
    return;
L_08B162D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B162D8;
L_08B162D8:
    ctx.gpr[31] = (0x08B162E0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 495u, 0x0880E450u>(ctx, &aot_mem) && ctx.pc == 0x08B162E0u) goto L_08B162E0;
    return;
L_08B162E0:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(656));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16300u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08B16300u) goto L_08B16300;
    return;
L_08B16300:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B16320;
L_08B16320:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B16324;
L_08B16324:
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
L_08B16340:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x08B1636Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15604;
L_08B1636C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B163A4;
      }
      goto L_08B16374;
    }
L_08B16374:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B16380u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B16380:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08B16390u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08B16390u) goto L_08B16390;
    return;
L_08B16390:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B163AC;
      }
      goto L_08B1639C;
    }
L_08B1639C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B163C0;
      }
      goto L_08B163A4;
    }
L_08B163A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B16414;
      }
      goto L_08B163AC;
    }
L_08B163AC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B163B8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08B163B8u) goto L_08B163B8;
    return;
L_08B163B8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08B163C0;
L_08B163C0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B163D0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B163D0u) goto L_08B163D0;
    return;
L_08B163D0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16410;
      }
      goto L_08B163DC;
    }
L_08B163DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B16410;
      }
      goto L_08B163EC;
    }
L_08B163EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B16404;
    }
    goto L_08B163F8;
L_08B163F8:
    ctx.gpr[31] = (0x08B16400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08B16400u) goto L_08B16400;
    return;
L_08B16400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B16404;
L_08B16404:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x08B16410u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 466u, 0x0880E240u>(ctx, &aot_mem) && ctx.pc == 0x08B16410u) goto L_08B16410;
    return;
L_08B16410:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B16414;
L_08B16414:
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
L_08B16430:
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
    ctx.gpr[31] = (0x08B1646Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15604;
L_08B1646C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16484;
      }
      goto L_08B16474;
    }
L_08B16474:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16480u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B16480:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08B16484;
L_08B16484:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B16494u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B16494u) goto L_08B16494;
    return;
L_08B16494:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B164BC;
      }
      goto L_08B164A0;
    }
L_08B164A0:
    ctx.gpr[31] = (0x08B164A8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 34u, 0x08824300u>(ctx, &aot_mem) && ctx.pc == 0x08B164A8u) goto L_08B164A8;
    return;
L_08B164A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B164B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B164B4u) goto L_08B164B4;
    return;
L_08B164B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B164C0;
      }
      goto L_08B164BC;
    }
L_08B164BC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B164C0;
L_08B164C0:
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
L_08B164DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1651Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15604;
L_08B1651C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16534;
      }
      goto L_08B16524;
    }
L_08B16524:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16530u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B16530:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08B16534;
L_08B16534:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B16544u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B16544u) goto L_08B16544;
    return;
L_08B16544:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1660C;
      }
      goto L_08B16550;
    }
L_08B16550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 65535u);
      if (branch_taken) {
          goto L_08B1657C;
      }
      goto L_08B1655C;
    }
L_08B1655C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B1656Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B1656Cu) goto L_08B1656C;
    return;
L_08B1656C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_08B1657C;
L_08B1657C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B16590;
      }
      goto L_08B16588;
    }
L_08B16588:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B165A0;
      }
      goto L_08B16590;
    }
L_08B16590:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08B1659Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B1659Cu) goto L_08B1659C;
    return;
L_08B1659C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08B165A0;
L_08B165A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1660C;
      }
      goto L_08B165A8;
    }
L_08B165A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_08B165D8;
    }
    goto L_08B165B4;
L_08B165B4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x08B165C4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B165C4u) goto L_08B165C4;
    return;
L_08B165C4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08B165D8;
L_08B165D8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B165E8;
      }
      goto L_08B165E0;
    }
L_08B165E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B165F8;
      }
      goto L_08B165E8;
    }
L_08B165E8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08B165F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B165F4u) goto L_08B165F4;
    return;
L_08B165F4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08B165F8;
L_08B165F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16604u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 225u, 0x08B10EBCu>(ctx, &aot_mem) && ctx.pc == 0x08B16604u) goto L_08B16604;
    return;
L_08B16604:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08B16610;
      }
      goto L_08B1660C;
    }
L_08B1660C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B16610;
L_08B16610:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B16630:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08B16650u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15604;
L_08B16650:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B16690;
      }
      goto L_08B16658;
    }
L_08B16658:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16664u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x08B16664u) goto L_08B16664;
    return;
L_08B16664:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16698;
      }
      goto L_08B1666C;
    }
L_08B1666C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16678u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08B16678u) goto L_08B16678;
    return;
L_08B16678:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B16688u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B156A8;
L_08B16688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B166B0;
      }
      goto L_08B16690;
    }
L_08B16690:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B166B4;
      }
      goto L_08B16698;
    }
L_08B16698:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08B166B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B156A8;
L_08B166B0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08B166B4;
L_08B166B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B166C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B166F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem) && ctx.pc == 0x08B166F4u) goto L_08B166F4;
    return;
L_08B166F4:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_08B16700;
L_08B16700:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08B16734;
    }
    goto L_08B16734;
L_08B16734:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16780;
      }
      goto L_08B16740;
    }
L_08B16740:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B1674Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem) && ctx.pc == 0x08B1674Cu) goto L_08B1674C;
    return;
L_08B1674C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16774;
      }
      goto L_08B16754;
    }
L_08B16754:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16760u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08B156A8;
L_08B16760:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16774u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem) && ctx.pc == 0x08B16774u) goto L_08B16774;
    return;
L_08B16774:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08B16700;
      }
      goto L_08B16780;
    }
L_08B16780:
    ctx.gpr[2] = (0u | 1u);
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
L_08B167A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B167CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem) && ctx.pc == 0x08B167CCu) goto L_08B167CC;
    return;
L_08B167CC:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_08B167D8;
L_08B167D8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08B16808;
    }
    goto L_08B16808;
L_08B16808:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16860;
      }
      goto L_08B16814;
    }
L_08B16814:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B16854;
      }
      goto L_08B16820;
    }
L_08B16820:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B1682Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem) && ctx.pc == 0x08B1682Cu) goto L_08B1682C;
    return;
L_08B1682C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16854;
      }
      goto L_08B16834;
    }
L_08B16834:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16840u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08B156A8;
L_08B16840:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16854u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem) && ctx.pc == 0x08B16854u) goto L_08B16854;
    return;
L_08B16854:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08B167D8;
      }
      goto L_08B16860;
    }
L_08B16860:
    ctx.gpr[2] = (0u | 1u);
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
L_08B16880:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[31] = (0x08B168B0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x08B168B0u) goto L_08B168B0;
    return;
L_08B168B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B168C0;
      }
      goto L_08B168B8;
    }
L_08B168B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B16984;
      }
      goto L_08B168C0;
    }
L_08B168C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B168CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08B168CCu) goto L_08B168CC;
    return;
L_08B168CC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B168DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem) && ctx.pc == 0x08B168DCu) goto L_08B168DC;
    return;
L_08B168DC:
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_08B168F0;
L_08B168F0:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08B16924;
    }
    goto L_08B16924;
L_08B16924:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16980;
      }
      goto L_08B16930;
    }
L_08B16930:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B1693Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem) && ctx.pc == 0x08B1693Cu) goto L_08B1693C;
    return;
L_08B1693C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B16974;
      }
      goto L_08B16944;
    }
L_08B16944:
    ctx.gpr[31] = (0x08B1694Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem) && ctx.pc == 0x08B1694Cu) goto L_08B1694C;
    return;
L_08B1694C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08B16974;
      }
      goto L_08B16954;
    }
L_08B16954:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16960u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08B156A8;
L_08B16960:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16974u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem) && ctx.pc == 0x08B16974u) goto L_08B16974;
    return;
L_08B16974:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08B168F0;
      }
      goto L_08B16980;
    }
L_08B16980:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    goto L_08B16984;
L_08B16984:
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
L_08B169A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[31] = (0x08B169D0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 344u, 0x08806984u>(ctx, &aot_mem) && ctx.pc == 0x08B169D0u) goto L_08B169D0;
    return;
L_08B169D0:
    ctx.gpr[18] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08B16A00;
      }
      goto L_08B169DC;
    }
L_08B169DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B169F0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15604;
L_08B169F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B16A20;
      }
      goto L_08B169F8;
    }
L_08B169F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16A30;
      }
      goto L_08B16A00;
    }
L_08B16A00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16A0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08B16A0Cu) goto L_08B16A0C;
    return;
L_08B16A0C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B16A18u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 24u, 0x08ADC18Cu>(ctx, &aot_mem) && ctx.pc == 0x08B16A18u) goto L_08B16A18;
    return;
L_08B16A18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B16A74;
      }
      goto L_08B16A20;
    }
L_08B16A20:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16A2Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B16A2C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08B16A30;
L_08B16A30:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B16A3Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 20u, 0x08ADC150u>(ctx, &aot_mem) && ctx.pc == 0x08B16A3Cu) goto L_08B16A3C;
    return;
L_08B16A3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16A64;
      }
      goto L_08B16A44;
    }
L_08B16A44:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B16A50u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 32u, 0x08ADC204u>(ctx, &aot_mem) && ctx.pc == 0x08B16A50u) goto L_08B16A50;
    return;
L_08B16A50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16A5Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x08B16A5Cu) goto L_08B16A5C;
    return;
L_08B16A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16A70;
      }
      goto L_08B16A64;
    }
L_08B16A64:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(3132));
    ctx.gpr[31] = (0x08B16A70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x08B16A70u) goto L_08B16A70;
    return;
L_08B16A70:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08B16A74;
L_08B16A74:
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
L_08B16A90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16AC8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15604;
L_08B16AC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16AE0;
      }
      goto L_08B16AD0;
    }
L_08B16AD0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16ADCu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B16ADC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08B16AE0;
L_08B16AE0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08B16AF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B16AF0u) goto L_08B16AF0;
    return;
L_08B16AF0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08B16B0C:
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
    ctx.gpr[31] = (0x08B16B48u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15604;
L_08B16B48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16B60;
      }
      goto L_08B16B50;
    }
L_08B16B50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16B5Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B16B5C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08B16B60;
L_08B16B60:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B16B6Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 91u, 0x08ADC4C4u>(ctx, &aot_mem) && ctx.pc == 0x08B16B6Cu) goto L_08B16B6C;
    return;
L_08B16B6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16B78u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x08B16B78u) goto L_08B16B78;
    return;
L_08B16B78:
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
L_08B16B98:
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
    ctx.gpr[31] = (0x08B16BD4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15604;
L_08B16BD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16BEC;
      }
      goto L_08B16BDC;
    }
L_08B16BDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16BE8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B16BE8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08B16BEC;
L_08B16BEC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B16BF8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem) && ctx.pc == 0x08B16BF8u) goto L_08B16BF8;
    return;
L_08B16BF8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08B16C08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B16C08u) goto L_08B16C08;
    return;
L_08B16C08:
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
L_08B16C28:
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
    ctx.gpr[31] = (0x08B16C64u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15604;
L_08B16C64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16C7C;
      }
      goto L_08B16C6C;
    }
L_08B16C6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16C78u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B16C78:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08B16C7C;
L_08B16C7C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B16C88u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem) && ctx.pc == 0x08B16C88u) goto L_08B16C88;
    return;
L_08B16C88:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
      if (branch_taken) {
          goto L_08B16CC8;
      }
      goto L_08B16C90;
    }
L_08B16C90:
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
        goto L_08B16CA8;
    }
    goto L_08B16C98;
L_08B16C98:
    ctx.gpr[31] = (0x08B16CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08B16CA0u) goto L_08B16CA0;
    return;
L_08B16CA0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    goto L_08B16CA8;
L_08B16CA8:
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08B16CC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B16CC0u) goto L_08B16CC0;
    return;
L_08B16CC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16CF8;
      }
      goto L_08B16CC8;
    }
L_08B16CC8:
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
        goto L_08B16CE0;
    }
    goto L_08B16CD0;
L_08B16CD0:
    ctx.gpr[31] = (0x08B16CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08B16CD8u) goto L_08B16CD8;
    return;
L_08B16CD8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    goto L_08B16CE0;
L_08B16CE0:
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08B16CF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B16CF8u) goto L_08B16CF8;
    return;
L_08B16CF8:
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
L_08B16D18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08B16D3Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15650;
L_08B16D3C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08B16D58;
    }
    goto L_08B16D4C;
L_08B16D4C:
    ctx.gpr[31] = (0x08B16D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08B16D54u) goto L_08B16D54;
    return;
L_08B16D54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08B16D58;
L_08B16D58:
    ctx.gpr[31] = (0x08B16D60u);
    ctx.gpr[5] = (ctx.gpr[17] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 561u, 0x08A53098u>(ctx, &aot_mem) && ctx.pc == 0x08B16D60u) goto L_08B16D60;
    return;
L_08B16D60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08B16D80;
    }
    goto L_08B16D78;
L_08B16D78:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B16D9C;
      }
      goto L_08B16D80;
    }
L_08B16D80:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08B16D98;
      }
      goto L_08B16D8C;
    }
L_08B16D8C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_08B16D98;
L_08B16D98:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    goto L_08B16D9C;
L_08B16D9C:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08B16DC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B16DC4u) goto L_08B16DC4;
    return;
L_08B16DC4:
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
L_08B16DE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08B16E00u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15650;
L_08B16E00:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x08B16E10u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 20u, 0x08ADC150u>(ctx, &aot_mem) && ctx.pc == 0x08B16E10u) goto L_08B16E10;
    return;
L_08B16E10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16E1Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B16E1Cu) goto L_08B16E1C;
    return;
L_08B16E1C:
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
L_08B16E34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B16E58u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x08B16E58u) goto L_08B16E58;
    return;
L_08B16E58:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16E68u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x08B16E68u) goto L_08B16E68;
    return;
L_08B16E68:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08B16E7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08B16E7Cu) goto L_08B16E7C;
    return;
L_08B16E7C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B16E98;
      }
      goto L_08B16E88;
    }
L_08B16E88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16E94u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x08B16E94u) goto L_08B16E94;
    return;
L_08B16E94:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B16E98;
L_08B16E98:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08B16EB4u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 516u, 0x08ADDF58u>(ctx, &aot_mem) && ctx.pc == 0x08B16EB4u) goto L_08B16EB4;
    return;
L_08B16EB4:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B16ED4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x08B16EECu);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B16EECu) goto L_08B16EEC;
    return;
L_08B16EEC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B16EFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B16F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B16F18u) goto L_08B16F18;
    return;
L_08B16F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B16F34;
      }
      goto L_08B16F28;
    }
L_08B16F28:
    ctx.gpr[5] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B16F48;
      }
      goto L_08B16F34;
    }
L_08B16F34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16F40u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B16F40u) goto L_08B16F40;
    return;
L_08B16F40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B16F54;
      }
      goto L_08B16F48;
    }
L_08B16F48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16F54u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B16F54u) goto L_08B16F54;
    return;
L_08B16F54:
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
L_08B16F6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16F9Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x08B16F9Cu) goto L_08B16F9C;
    return;
L_08B16F9C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B16FACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 16u, 0x08ADC120u>(ctx, &aot_mem) && ctx.pc == 0x08B16FACu) goto L_08B16FAC;
    return;
L_08B16FAC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B16FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B16FB8u) goto L_08B16FB8;
    return;
L_08B16FB8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B16FC8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B16FC8u) goto L_08B16FC8;
    return;
L_08B16FC8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B17054;
      }
      goto L_08B16FD4;
    }
L_08B16FD4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B17030;
      }
      goto L_08B16FDC;
    }
L_08B16FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B17030;
      }
      goto L_08B16FE8;
    }
L_08B16FE8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B17030;
      }
      goto L_08B17010;
    }
L_08B17010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B17030;
      }
      goto L_08B17020;
    }
L_08B17020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B17068;
      }
      goto L_08B17030;
    }
L_08B17030:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x08B17040u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 264u, 0x08ADCEA0u>(ctx, &aot_mem) && ctx.pc == 0x08B17040u) goto L_08B17040;
    return;
L_08B17040:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1704Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B1704Cu) goto L_08B1704C;
    return;
L_08B1704C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B17138;
      }
      goto L_08B17054;
    }
L_08B17054:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B17060u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B17060u) goto L_08B17060;
    return;
L_08B17060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B17138;
      }
      goto L_08B17068;
    }
L_08B17068:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B17074u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 16u, 0x08948114u>(ctx, &aot_mem) && ctx.pc == 0x08B17074u) goto L_08B17074;
    return;
L_08B17074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2116), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08B17090u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08B17090u) goto L_08B17090;
    return;
L_08B17090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08B1709Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 878u, 0x0892BA54u>(ctx, &aot_mem) && ctx.pc == 0x08B1709Cu) goto L_08B1709C;
    return;
L_08B1709C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2116), 0u);
    ctx.gpr[31] = (0x08B170ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08B170ACu) goto L_08B170AC;
    return;
L_08B170AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B170B8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B170B8u) goto L_08B170B8;
    return;
L_08B170B8:
    ctx.gpr[31] = (0x08B170C0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B170C0u) goto L_08B170C0;
    return;
L_08B170C0:
    ctx.gpr[31] = (0x08B170C8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 321u, 0x08809958u>(ctx, &aot_mem) && ctx.pc == 0x08B170C8u) goto L_08B170C8;
    return;
L_08B170C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B170E4;
      }
      goto L_08B170D0;
    }
L_08B170D0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B170DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B170DCu) goto L_08B170DC;
    return;
L_08B170DC:
    ctx.gpr[31] = (0x08B170E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 587u, 0x08AD3578u>(ctx, &aot_mem) && ctx.pc == 0x08B170E4u) goto L_08B170E4;
    return;
L_08B170E4:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B17100u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B17100u) goto L_08B17100;
    return;
L_08B17100:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B17110u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem) && ctx.pc == 0x08B17110u) goto L_08B17110;
    return;
L_08B17110:
    ctx.gpr[31] = (0x08B17118u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 91u, 0x08A1C8D0u>(ctx, &aot_mem) && ctx.pc == 0x08B17118u) goto L_08B17118;
    return;
L_08B17118:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x08B17130u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem) && ctx.pc == 0x08B17130u) goto L_08B17130;
    return;
L_08B17130:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B17138;
      }
      goto L_08B17138;
    }
L_08B17138:
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
L_08B17154:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08B17184;
      }
      goto L_08B17178;
    }
L_08B17178:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08B17184;
L_08B17184:
    ctx.gpr[31] = (0x08B1718Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B1718Cu) goto L_08B1718C;
    return;
L_08B1718C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1719C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B171ACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 571u, 0x08946EA8u>(ctx, &aot_mem) && ctx.pc == 0x08B171ACu) goto L_08B171AC;
    return;
L_08B171AC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B171BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
      if (branch_taken) {
          goto L_08B17204;
      }
      goto L_08B171D8;
    }
L_08B171D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B171F0;
      }
      goto L_08B171E0;
    }
L_08B171E0:
    ctx.gpr[31] = (0x08B171E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B171E8u) goto L_08B171E8;
    return;
L_08B171E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B1723C;
      }
      goto L_08B171F0;
    }
L_08B171F0:
    ctx.gpr[31] = (0x08B171F8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B171F8u) goto L_08B171F8;
    return;
L_08B171F8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B1723C;
      }
      goto L_08B17204;
    }
L_08B17204:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B17228;
      }
      goto L_08B1720C;
    }
L_08B1720C:
    ctx.gpr[31] = (0x08B17214u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B17214u) goto L_08B17214;
    return;
L_08B17214:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B1723C;
      }
      goto L_08B17228;
    }
L_08B17228:
    ctx.gpr[31] = (0x08B17230u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B17230u) goto L_08B17230;
    return;
L_08B17230:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08B1723C;
L_08B1723C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B17248:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B17268u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x08B17268u) goto L_08B17268;
    return;
L_08B17268:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B1727Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08B1727Cu) goto L_08B1727C;
    return;
L_08B1727C:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10548)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B172D8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 8u, 0x08ADC0B8u>(ctx, &aot_mem) && ctx.pc == 0x08B172D8u) goto L_08B172D8;
    return;
L_08B172D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B172F8;
      }
      goto L_08B172E0;
    }
L_08B172E0:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08B172F8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B171BC;
L_08B172F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B17308u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x08B17308u) goto L_08B17308;
    return;
L_08B17308:
    ctx.gpr[2] = (0u | 0u);
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
L_08B17324:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B17344u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x08B17344u) goto L_08B17344;
    return;
L_08B17344:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B17358u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08B17358u) goto L_08B17358;
    return;
L_08B17358:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10548)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B173B4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 8u, 0x08ADC0B8u>(ctx, &aot_mem) && ctx.pc == 0x08B173B4u) goto L_08B173B4;
    return;
L_08B173B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B173D4;
      }
      goto L_08B173BC;
    }
L_08B173BC:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08B173D4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B171BC;
L_08B173D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B173E4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x08B173E4u) goto L_08B173E4;
    return;
L_08B173E4:
    ctx.gpr[2] = (0u | 0u);
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
L_08B17400:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B17410u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08B17410u) goto L_08B17410;
    return;
L_08B17410:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B17438;
      }
      goto L_08B1741C;
    }
L_08B1741C:
    ctx.gpr[31] = (0x08B17424u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B17424u) goto L_08B17424;
    return;
L_08B17424:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B1744C;
      }
      goto L_08B17438;
    }
L_08B17438:
    ctx.gpr[31] = (0x08B17440u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B17440u) goto L_08B17440;
    return;
L_08B17440:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08B1744C;
L_08B1744C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B1745C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B1746Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08B1746Cu) goto L_08B1746C;
    return;
L_08B1746C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2238u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(328), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B174AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B174E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B174E4u) goto L_08B174E4;
    return;
L_08B174E4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.gpr[19] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[19]));
    ctx.gpr[19] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(7));
    ctx.gpr[18] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[18]));
    ctx.gpr[18] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(11));
    ctx.gpr[17] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[17]));
    ctx.gpr[17] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08B1752Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem) && ctx.pc == 0x08B1752Cu) goto L_08B1752C;
    return;
L_08B1752C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B17544u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B17544u) goto L_08B17544;
    return;
L_08B17544:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B17578;
      }
      goto L_08B1754C;
    }
L_08B1754C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B17578;
      }
      goto L_08B17558;
    }
L_08B17558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08B175A0;
      }
      goto L_08B17578;
    }
L_08B17578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B175A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B175A0u) goto L_08B175A0;
    return;
L_08B175A0:
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
L_08B175C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B175E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B175E0u) goto L_08B175E0;
    return;
L_08B175E0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B175ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B175ECu) goto L_08B175EC;
    return;
L_08B175EC:
    ctx.gpr[1] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[1]));
    ctx.gpr[1] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(6), ctx.gpr[1]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[1]);
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B17634;
      }
      goto L_08B17614;
    }
L_08B17614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B17634;
      }
      goto L_08B17620;
    }
L_08B17620:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[31] = (0x08B1762Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x08B1762Cu) goto L_08B1762C;
    return;
L_08B1762C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B1765C;
      }
      goto L_08B17634;
    }
L_08B17634:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[1] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[1]));
    ctx.gpr[1] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(6), ctx.gpr[1]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[1]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[31] = (0x08B1765Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x08B1765Cu) goto L_08B1765C;
    return;
L_08B1765C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B17670:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B17690u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B17690:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B176ACu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem) && ctx.pc == 0x08B176ACu) goto L_08B176AC;
    return;
L_08B176AC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B176B8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08B15504;
L_08B176B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(26))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (0u | 15u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10549)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(51));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(66))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(67))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(68))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(69))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(70))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(71))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(72))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(73))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(74))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(75))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(76))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(77))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08B17788;
      }
      goto L_08B17778;
    }
L_08B17778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B177A0;
      }
      goto L_08B17788;
    }
L_08B17788:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08B177A0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B174AC;
L_08B177A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B177B0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x08B177B0u) goto L_08B177B0;
    return;
L_08B177B0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B177CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B177ECu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B177EC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B177FCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08B177FCu) goto L_08B177FC;
    return;
L_08B177FC:
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10550)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[1] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(19), ctx.gpr[1]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(22), ctx.gpr[1]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08B1783C;
      }
      goto L_08B1782C;
    }
L_08B1782C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B17854;
      }
      goto L_08B1783C;
    }
L_08B1783C:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08B17854u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B175C0;
L_08B17854:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B17864u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x08B17864u) goto L_08B17864;
    return;
L_08B17864:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B17880:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08B178A0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B178A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B178C4;
      }
      goto L_08B178B0;
    }
L_08B178B0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B178E0;
      }
      goto L_08B178C4;
    }
L_08B178C4:
    ctx.gpr[31] = (0x08B178CCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B178CCu) goto L_08B178CC;
    return;
L_08B178CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(34))))));
    ctx.gpr[31] = (0x08B178D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B178D8u) goto L_08B178D8;
    return;
L_08B178D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B178E4;
      }
      goto L_08B178E0;
    }
L_08B178E0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B178E4;
L_08B178E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B178F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08B1791Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B1791C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B17940;
      }
      goto L_08B1792C;
    }
L_08B1792C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B1798C;
      }
      goto L_08B17940;
    }
L_08B17940:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08B1794Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B1794Cu) goto L_08B1794C;
    return;
L_08B1794C:
    ctx.gpr[31] = (0x08B17954u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 980u, 0x0898BC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B17954u) goto L_08B17954;
    return;
L_08B17954:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
        goto L_08B17978;
    }
    goto L_08B1795C;
L_08B1795C:
    ctx.gpr[31] = (0x08B17964u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B17964u) goto L_08B17964;
    return;
L_08B17964:
    ctx.gpr[31] = (0x08B1796Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem) && ctx.pc == 0x08B1796Cu) goto L_08B1796C;
    return;
L_08B1796C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B1797C;
      }
      goto L_08B17974;
    }
L_08B17974:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08B17978;
L_08B17978:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B1797C;
L_08B1797C:
    ctx.gpr[31] = (0x08B17984u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B17984u) goto L_08B17984;
    return;
L_08B17984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B17990;
      }
      goto L_08B1798C;
    }
L_08B1798C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B17990;
L_08B17990:
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
L_08B179A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08B179CCu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B179CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B179F0;
      }
      goto L_08B179DC;
    }
L_08B179DC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B17A3C;
      }
      goto L_08B179F0;
    }
L_08B179F0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08B179FCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B179FCu) goto L_08B179FC;
    return;
L_08B179FC:
    ctx.gpr[31] = (0x08B17A04u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 984u, 0x0898BCACu>(ctx, &aot_mem) && ctx.pc == 0x08B17A04u) goto L_08B17A04;
    return;
L_08B17A04:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
        goto L_08B17A28;
    }
    goto L_08B17A0C;
L_08B17A0C:
    ctx.gpr[31] = (0x08B17A14u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B17A14u) goto L_08B17A14;
    return;
L_08B17A14:
    ctx.gpr[31] = (0x08B17A1Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem) && ctx.pc == 0x08B17A1Cu) goto L_08B17A1C;
    return;
L_08B17A1C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B17A2C;
      }
      goto L_08B17A24;
    }
L_08B17A24:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08B17A28;
L_08B17A28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B17A2C;
L_08B17A2C:
    ctx.gpr[31] = (0x08B17A34u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B17A34u) goto L_08B17A34;
    return;
L_08B17A34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B17A40;
      }
      goto L_08B17A3C;
    }
L_08B17A3C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B17A40;
L_08B17A40:
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
L_08B17A58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08B17A7Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B17A7C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B17AA0;
      }
      goto L_08B17A8C;
    }
L_08B17A8C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B17AEC;
      }
      goto L_08B17AA0;
    }
L_08B17AA0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08B17AACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B17AACu) goto L_08B17AAC;
    return;
L_08B17AAC:
    ctx.gpr[31] = (0x08B17AB4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 972u, 0x0898BC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08B17AB4u) goto L_08B17AB4;
    return;
L_08B17AB4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
        goto L_08B17AD8;
    }
    goto L_08B17ABC;
L_08B17ABC:
    ctx.gpr[31] = (0x08B17AC4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B17AC4u) goto L_08B17AC4;
    return;
L_08B17AC4:
    ctx.gpr[31] = (0x08B17ACCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 134u, 0x0898C604u>(ctx, &aot_mem) && ctx.pc == 0x08B17ACCu) goto L_08B17ACC;
    return;
L_08B17ACC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B17ADC;
      }
      goto L_08B17AD4;
    }
L_08B17AD4:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08B17AD8;
L_08B17AD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B17ADC;
L_08B17ADC:
    ctx.gpr[31] = (0x08B17AE4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B17AE4u) goto L_08B17AE4;
    return;
L_08B17AE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B17AF0;
      }
      goto L_08B17AEC;
    }
L_08B17AEC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B17AF0;
L_08B17AF0:
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
L_08B17B08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08B17B2Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B17B2C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B17B50;
      }
      goto L_08B17B3C;
    }
L_08B17B3C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B17B9C;
      }
      goto L_08B17B50;
    }
L_08B17B50:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08B17B5Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B17B5Cu) goto L_08B17B5C;
    return;
L_08B17B5C:
    ctx.gpr[31] = (0x08B17B64u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 976u, 0x0898BC6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B17B64u) goto L_08B17B64;
    return;
L_08B17B64:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
        goto L_08B17B88;
    }
    goto L_08B17B6C;
L_08B17B6C:
    ctx.gpr[31] = (0x08B17B74u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B17B74u) goto L_08B17B74;
    return;
L_08B17B74:
    ctx.gpr[31] = (0x08B17B7Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 134u, 0x0898C604u>(ctx, &aot_mem) && ctx.pc == 0x08B17B7Cu) goto L_08B17B7C;
    return;
L_08B17B7C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B17B8C;
      }
      goto L_08B17B84;
    }
L_08B17B84:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08B17B88;
L_08B17B88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B17B8C;
L_08B17B8C:
    ctx.gpr[31] = (0x08B17B94u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B17B94u) goto L_08B17B94;
    return;
L_08B17B94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B17BA0;
      }
      goto L_08B17B9C;
    }
L_08B17B9C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B17BA0;
L_08B17BA0:
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
L_08B17BB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08B17BD8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B17BD8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B17BFC;
      }
      goto L_08B17BE8;
    }
L_08B17BE8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B17C18;
      }
      goto L_08B17BFC;
    }
L_08B17BFC:
    ctx.gpr[31] = (0x08B17C04u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B17C04u) goto L_08B17C04;
    return;
L_08B17C04:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[31] = (0x08B17C10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B17C10u) goto L_08B17C10;
    return;
L_08B17C10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B17C1C;
      }
      goto L_08B17C18;
    }
L_08B17C18:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B17C1C;
L_08B17C1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B17C30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08B17C50u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B17C50:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B17C74;
      }
      goto L_08B17C60;
    }
L_08B17C60:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B17C90;
      }
      goto L_08B17C74;
    }
L_08B17C74:
    ctx.gpr[31] = (0x08B17C7Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B17C7Cu) goto L_08B17C7C;
    return;
L_08B17C7C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[31] = (0x08B17C88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B17C88u) goto L_08B17C88;
    return;
L_08B17C88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B17C94;
      }
      goto L_08B17C90;
    }
L_08B17C90:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B17C94;
L_08B17C94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B17CA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08B17CC8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B17CC8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B17CEC;
      }
      goto L_08B17CD8;
    }
L_08B17CD8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B17D08;
      }
      goto L_08B17CEC;
    }
L_08B17CEC:
    ctx.gpr[31] = (0x08B17CF4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B17CF4u) goto L_08B17CF4;
    return;
L_08B17CF4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[31] = (0x08B17D00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B17D00u) goto L_08B17D00;
    return;
L_08B17D00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B17D0C;
      }
      goto L_08B17D08;
    }
L_08B17D08:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B17D0C;
L_08B17D0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B17D20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08B17D40u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B17D40:
    ctx.gpr[31] = (0x08B17D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B17D48u) goto L_08B17D48;
    return;
L_08B17D48:
    ctx.gpr[31] = (0x08B17D50u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 710u, 0x089476E8u>(ctx, &aot_mem) && ctx.pc == 0x08B17D50u) goto L_08B17D50;
    return;
L_08B17D50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B17D5Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B17D5Cu) goto L_08B17D5C;
    return;
L_08B17D5C:
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
L_08B17D74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B17D84u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B17D84:
    ctx.gpr[31] = (0x08B17D8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B17D8Cu) goto L_08B17D8C;
    return;
L_08B17D8C:
    ctx.gpr[31] = (0x08B17D94u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 736u, 0x08947890u>(ctx, &aot_mem) && ctx.pc == 0x08B17D94u) goto L_08B17D94;
    return;
L_08B17D94:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B17DA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B17DB4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B17DB4:
    ctx.gpr[31] = (0x08B17DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B17DBCu) goto L_08B17DBC;
    return;
L_08B17DBC:
    ctx.gpr[31] = (0x08B17DC4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 733u, 0x08947870u>(ctx, &aot_mem) && ctx.pc == 0x08B17DC4u) goto L_08B17DC4;
    return;
L_08B17DC4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B17DD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x08B17DF0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08B17DF0u) goto L_08B17DF0;
    return;
L_08B17DF0:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08B17E00u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B17E00u) goto L_08B17E00;
    return;
L_08B17E00:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B17E1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B17E38u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15604;
L_08B17E38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B17EB4;
      }
      goto L_08B17E40;
    }
L_08B17E40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B17E4Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B17E4C:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B17E60u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B17E60u) goto L_08B17E60;
    return;
L_08B17E60:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B17EB4;
      }
      goto L_08B17E6C;
    }
L_08B17E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08B17E98;
    }
    goto L_08B17E78;
L_08B17E78:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B17E88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B17E88u) goto L_08B17E88;
    return;
L_08B17E88:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08B17E98;
L_08B17E98:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(178)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08B17EACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B17EACu) goto L_08B17EAC;
    return;
L_08B17EAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B17EC4;
      }
      goto L_08B17EB4;
    }
L_08B17EB4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08B17EC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B17EC0u) goto L_08B17EC0;
    return;
L_08B17EC0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08B17EC4;
L_08B17EC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B17ED8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B17EF4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15604;
L_08B17EF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B17F20;
      }
      goto L_08B17EFC;
    }
L_08B17EFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B17F08u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B17F08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B17F14u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08B17F14u) goto L_08B17F14;
    return;
L_08B17F14:
    ctx.gpr[31] = (0x08B17F1Cu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B17F1Cu) goto L_08B17F1C;
    return;
L_08B17F1C:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08B17F20;
L_08B17F20:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B17F38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08B17F5Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B15624;
L_08B17F5C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B17F80;
      }
      goto L_08B17F6C;
    }
L_08B17F6C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B17FBC;
      }
      goto L_08B17F80;
    }
L_08B17F80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08B17FB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B17FB4u) goto L_08B17FB4;
    return;
L_08B17FB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 4u, 0x08B1801Cu>(ctx, &aot_mem); return;
      }
      goto L_08B17FBC;
    }
L_08B17FBC:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B17FC8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B17FC8u) goto L_08B17FC8;
    return;
L_08B17FC8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 3u, 0x08B18018u>(ctx, &aot_mem); return;
      }
      goto L_08B17FD4;
    }
L_08B17FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        (void)rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 1u, 0x08B18000u>(ctx, &aot_mem); return;
    }
    goto L_08B17FE0;
L_08B17FE0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B17FF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B17FF0u) goto L_08B17FF0;
    return;
L_08B17FF0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.pc = 0x08B18000u; return;
}

void recomp_unit_0196(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0196_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_196(Runtime &runtime) {
    runtime.register_generated_unit(196u, 0x08B14000u, 16384u, &recomp_unit_0196, &recomp_unit_0196_entry);
    runtime.register_function(0x08B14000u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14020u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14028u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1405Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1411Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14128u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1414Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1415Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14168u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14170u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1417Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B141C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B141D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B141E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14304u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14310u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1431Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14328u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14344u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1437Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1438Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14394u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B143A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14404u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14424u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1442Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14434u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14450u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1445Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1447Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14494u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B144B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B144C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B144CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B144D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B144DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14504u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14510u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14530u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1453Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14558u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14564u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14584u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1458Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B145B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1460Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1463Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14654u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1466Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14678u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14680u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B146B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B146BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B146D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B146F4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B146F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14710u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14718u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1471Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14748u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14758u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1475Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1478Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14794u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1479Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B147ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B147E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1484Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14860u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14874u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14884u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B148A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B148BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B148C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B148D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B148D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B148E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B148E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B148ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14914u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14940u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14984u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14988u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B149A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B149ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B149B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B149C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B149CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B149D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B149E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B149E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A14u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A2Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A94u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14AA4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14AACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14ABCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14AD0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14AF4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B08u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B4Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B54u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B8Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B94u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14BC4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14BD8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14C18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14C38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14C64u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14C78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14C8Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14CA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14CACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14CB4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14CC0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14CC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14CD4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14CDCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14CE4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14CECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14CF4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14CFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14D04u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14D10u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14D1Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14D20u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14D28u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14D34u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14D40u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14D50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14D64u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14D6Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14D80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14D98u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14DA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14DB0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14DB8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14DCCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14DD4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14DD8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14DE4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14DECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14DFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E08u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E10u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E1Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E24u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E30u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E40u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E48u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E6Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E7Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E84u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14EACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14EC0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14EC4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14ECCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14EDCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14EF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14F00u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14F10u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14F20u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14F34u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14F3Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14F4Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14F60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14F70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14F74u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14F7Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14F88u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14F90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14F9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14FA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14FB0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14FC0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14FD4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14FE4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14FECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14FFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15010u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15020u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15028u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15038u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1504Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1505Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15064u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1506Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15084u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1508Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B150A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B150A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B150B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B150C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B150D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B150DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B150E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15100u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15110u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15120u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1513Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15190u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B151B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B151B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B151C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B151D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B151D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B151E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B151E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B151ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1523Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15260u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1526Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1529Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1532Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15334u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1533Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15358u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15370u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15378u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1538Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15394u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15398u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15408u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15410u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15424u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15440u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15458u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15460u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15490u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15494u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15504u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15544u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15564u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1556Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1557Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1558Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15590u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15598u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15604u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15614u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15624u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15634u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15644u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15650u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15670u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15678u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1568Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15694u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15704u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15710u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15720u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1572Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15738u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15748u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15754u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1575Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15770u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1578Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15798u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15810u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15824u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1584Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15858u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15860u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1587Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158F4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15910u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15940u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1594Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15980u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1598Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15994u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A14u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A20u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A28u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A44u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AB0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AE4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B04u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B14u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B20u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B2Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B3Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B4Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B8Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B94u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BDCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C1Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C3Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C5Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C84u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CA4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CB8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CF8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D08u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D10u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D20u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D2Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D34u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D3Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D44u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DBCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DC4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DE0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DE4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DF8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E00u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E04u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E34u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E44u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E64u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15EA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15EB0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15EB8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15EC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15ECCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15EDCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15EF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15EFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F04u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F0Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F1Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F2Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F3Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F44u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F54u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F68u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F7Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F88u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FB8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FC4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FE8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FF8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16004u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1600Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16014u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1601Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16024u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16044u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1605Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1607Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16080u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16098u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16110u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16124u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16144u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16148u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16160u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1619Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1620Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1623Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16244u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16250u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16260u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16268u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16278u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16284u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1628Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16294u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1629Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16300u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16320u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16324u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16340u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1636Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16374u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16380u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16390u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1639Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B163A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B163ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B163B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B163C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B163D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B163DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B163ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B163F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16400u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16404u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16410u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16414u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16430u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1646Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16474u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16480u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16484u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16494u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1651Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16524u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16530u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16534u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16544u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16550u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1655Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1656Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1657Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16588u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16590u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1659Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165F4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16604u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1660Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16610u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16630u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16650u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16658u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16664u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1666Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16678u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16688u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16690u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16698u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166F4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16700u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16734u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16740u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1674Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16754u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16760u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16774u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16780u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16808u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16814u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16820u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1682Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16834u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16840u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16854u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16860u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16880u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16924u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16930u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1693Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16944u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1694Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16954u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16960u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16974u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16980u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16984u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B169A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B169D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B169DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B169F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B169F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A00u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A0Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A20u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A2Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A30u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A3Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A44u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A5Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A64u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A74u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16AC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16AD0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16ADCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16AE0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16AF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B0Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B48u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B5Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B6Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B98u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16BD4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16BDCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16BE8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16BECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16BF8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C08u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C28u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C64u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C6Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C7Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C88u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C98u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CC0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CD0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CD8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CE0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CF8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D3Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D4Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D54u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D8Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D98u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DC4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DE0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E00u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E10u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E1Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E34u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E68u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E7Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E88u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E94u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E98u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16EB4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16ED4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16EECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16EFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F28u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F34u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F40u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F48u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F54u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F6Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FB8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FD4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FDCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FE8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17010u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17020u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17030u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17040u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1704Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17054u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17060u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17068u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17074u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17090u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1709Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17100u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17110u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17118u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17130u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17138u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17154u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17178u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17184u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1718Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1719Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B171ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B171BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B171D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B171E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B171E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B171F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B171F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17204u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1720Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17214u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17228u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17230u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1723Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17248u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17268u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1727Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B172D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B172E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B172F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17308u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17324u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17344u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17358u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B173B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B173BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B173D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B173E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17400u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17410u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1741Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17424u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17438u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17440u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1744Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1745Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1746Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B174ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B174E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1752Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17544u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1754Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17558u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17578u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17614u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17620u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1762Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17634u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1765Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17670u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17690u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B176ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B176B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17778u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17788u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B177A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B177B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B177CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B177ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B177FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1782Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1783Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17854u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17864u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17880u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B178A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B178B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B178C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B178CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B178D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B178E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B178E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B178F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1791Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1792Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17940u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1794Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17954u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1795Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17964u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1796Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17974u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17978u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1797Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17984u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1798Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17990u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B179A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B179CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B179DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B179F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B179FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17A04u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17A0Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17A14u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17A1Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17A24u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17A28u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17A2Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17A34u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17A3Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17A40u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17A58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17A7Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17A8Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17AA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17AACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17AB4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17ABCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17AC4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17ACCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17AD4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17AD8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17ADCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17AE4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17AECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17AF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17B08u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17B2Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17B3Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17B50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17B5Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17B64u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17B6Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17B74u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17B7Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17B84u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17B88u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17B8Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17B94u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17B9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17BA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17BB8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17BD8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17BE8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17BFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17C04u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17C10u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17C18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17C1Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17C30u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17C50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17C60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17C74u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17C7Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17C88u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17C90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17C94u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17CA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17CC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17CD8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17CECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17CF4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D00u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D08u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D0Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D20u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D40u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D48u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D5Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D74u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D84u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D8Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D94u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17DA4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17DB4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17DBCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17DC4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17DD4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17DF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17E00u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17E1Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17E38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17E40u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17E4Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17E60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17E6Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17E78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17E88u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17E98u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17EACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17EB4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17EC0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17EC4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17ED8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17EF4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17EFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F08u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F14u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F1Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F20u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F5Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F6Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17FB4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17FBCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17FC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17FD4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17FE0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17FF0u, &recomp_unit_0196, "recomp_unit_0196");
}
} // namespace psprecomp
